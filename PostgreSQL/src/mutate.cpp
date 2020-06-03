#include "../include/mutate.h"
#include "../include/ast.h"
#include "../include/define.h"
#include "../include/utils.h"


#include <assert.h>
#include <fstream>
#include <cstdio>
#include <climits>
#include <cfloat>
#include <algorithm>
#include <deque>
#define _NON_REPLACE_

using namespace std;

//#define GRAPHLOG


IR * Mutator::deep_copy_with_record(const IR * root, const IR * record){
    IR * left = NULL, * right = NULL, * copy_res;

    if(root->left_) left = deep_copy_with_record(root->left_, record); 
    if(root->right_) right = deep_copy_with_record(root->right_, record);

    if(root->op_ != NULL)
        copy_res = new IR(root->type_, OP3(root->op_->prefix_, root->op_->middle_, root->op_->suffix_), 
                    left, right, root->float_val_, root->str_val_, root->name_, root->mutated_times_, root->scope_, root->data_flag_);
    else
        copy_res = new IR(root->type_, NULL, left, right, root->float_val_, root->str_val_, root->name_, root->mutated_times_, root->scope_, root->data_flag_);

 
    copy_res->data_type_ = root->data_type_;

    if(root == record && record != NULL){
        this->record_ = copy_res;
    }
    
    return copy_res;

}



vector<IR *> Mutator::mutate_all(vector<IR *> &v_ir_collector){
    vector<IR *> res;
    IR * root = v_ir_collector[v_ir_collector.size() - 1];

    mutated_root_ = root;

    for(auto ir: v_ir_collector){
        if(not_mutatable_types_.find(ir->type_) != not_mutatable_types_.end()) continue;

        vector<IR *> v_mutated_ir = mutate(ir);

        for(auto i: v_mutated_ir){
            IR * new_ir_tree = deep_copy_with_record(root, ir);
            replace(new_ir_tree, this->record_, i);

            extract_struct(new_ir_tree);
            string tmp = new_ir_tree->to_string();
            unsigned tmp_hash = hash(tmp);
            if(global_hash_.find(tmp_hash) != global_hash_.end()){
                deep_delete(new_ir_tree);
                continue;
            }

            global_hash_.insert(tmp_hash);
            res.push_back(new_ir_tree);
        }
    }

    return res;
}

void Mutator::add_ir_to_library(IR * cur){
    extract_struct(cur);
    cur = deep_copy(cur);
    add_ir_to_library_no_deepcopy(cur);
    return;
}

void Mutator::add_ir_to_library_no_deepcopy(IR * cur){
    if(cur->left_) add_ir_to_library_no_deepcopy(cur->left_);
    if(cur->right_) add_ir_to_library_no_deepcopy(cur->right_);

    auto type = cur->type_;
    auto h = hash(cur);
    if(find(ir_library_hash_[type].begin(), ir_library_hash_[type].end(), h) != ir_library_hash_[type].end())
        return;

    ir_library_hash_[type].insert(h);
    ir_library_[type].push_back(cur);

    return;
}


void Mutator::init_common_string(string filename){
    common_string_library_.push_back("DO_NOT_BE_EMPTY");
    if(filename != ""){
        ifstream input_string(filename);
        string s;

        while(getline(input_string, s)){
            common_string_library_.push_back(s);
        }
    }
}


void Mutator::init_data_library_2d(string filename){
    ifstream input_file(filename);
    string s;

    cout << "[*] init data_library_2d: " << filename << endl;
    while(getline(input_file, s)){
        vector<string> v_strbuf;
        auto prev_pos = -1;
        for(int i=0; i<3; i++){
            auto pos = s.find(" ", prev_pos+1);
            v_strbuf.push_back(s.substr(prev_pos+1, pos-prev_pos-1));
            prev_pos = pos;
        }
        v_strbuf.push_back(s.substr(prev_pos+1, s.size()-prev_pos-1));

        auto data_type1 = get_datatype_by_string(v_strbuf[0]);
        auto data_type2 = get_datatype_by_string(v_strbuf[2]);
        g_data_library_2d_[data_type1][v_strbuf[1]][data_type2].push_back(v_strbuf[3]);
    }

    return;
}

void Mutator::init_data_library(string filename){
    ifstream input_file(filename);
    string s;

    cout << "[*] init data_library: " << filename << endl;
    while(getline(input_file, s)){
        auto pos = s.find(" ");
        if(pos == string::npos) continue;
        auto data_type = get_datatype_by_string(s.substr(0, pos));
        auto v = s.substr(pos+1, s.size()-pos-1);
        g_data_library_[data_type].push_back(v);
    }

    return;
}

void Mutator::init_value_library(){
    vector<unsigned long> value_lib_init = {0, (unsigned long)LONG_MAX, (unsigned long)ULONG_MAX,
    (unsigned long)CHAR_BIT, (unsigned long)SCHAR_MIN, (unsigned long)SCHAR_MAX, (unsigned long)UCHAR_MAX,
    (unsigned long)CHAR_MIN, (unsigned long)CHAR_MAX, (unsigned long)MB_LEN_MAX, (unsigned long)SHRT_MIN,
    (unsigned long)INT_MIN, (unsigned long)INT_MAX, (unsigned long)SCHAR_MIN, (unsigned long)SCHAR_MIN,
    (unsigned long)UINT_MAX, (unsigned long)FLT_MAX, (unsigned long)DBL_MAX, (unsigned long)LDBL_MAX,
    (unsigned long)FLT_MIN, (unsigned long)DBL_MIN, (unsigned long)LDBL_MIN };
    
    value_library_.insert(value_library_.begin(), value_lib_init.begin(), value_lib_init.end());

    return;
}

void Mutator::init_ir_library(string filename){
    ifstream input_file(filename);
    string line;

    cout << "[*] init ir_library: " << filename << endl;
    while(getline(input_file, line)){
        if(line.empty()) continue;
        auto p = parser(line);
        if(p == NULL) continue;
        
        vector<IR *> v_ir;
        auto res = p->translate(v_ir);
        p->deep_delete();
        p = NULL;
        

        add_ir_to_library(res);
        deep_delete(res);      
    }
    return;
}

void Mutator::init_safe_generate_type(string filename){
    ifstream input_file(filename);
    string line;

    cout << "[*] init safe generate type: " << filename << endl;
    while(getline(input_file, line)){
        if(line.empty()) continue;
        auto node_type = get_nodetype_by_string("k" + line);
        safe_generate_type_.insert(node_type); 
    }
}


void Mutator::init(string f_testcase, string f_common_string, string file2d, string file1d, string f_gen_type){
    
    
    
    if(!f_testcase.empty()) init_ir_library(f_testcase);
    

    //init value_library_
    init_value_library();

    //init common_string_library 
    if(!f_common_string.empty()) init_common_string(f_common_string);

    //init data_library_2d
    if(!file2d.empty()) init_data_library_2d(file2d);

    if(!file1d.empty()) init_data_library(file1d);
    if(!f_gen_type.empty()) init_safe_generate_type(f_gen_type);
    
    float_types_.insert({kFloatLiteral});
    int_types_.insert(kIntLiteral);
    string_types_.insert(kStringLiteral);
    
    relationmap_[kDataColumnName][kDataTableName] = kRelationSubtype;
    relationmap_[kDataPragmaValue][kDataPragmaKey] = kRelationSubtype;
    relationmap_[kDataTableName][kDataTableName] = kRelationElement;
    relationmap_[kDataColumnName][kDataColumnName] = kRelationElement;
    
    split_stmt_types_.insert(kStmt);
    split_substmt_types_.insert({kStmt, kSelectClause, kSelectStmt});

//#define MYSQLFUZZ
#ifdef MYSQLFUZZ
    not_mutatable_types_.insert({kProgram, kStmtlist, kStmt, kCreateStmt, kDropStmt, kCreateTableStmt, kCreateIndexStmt, kCreateTriggerStmt, kCreateViewStmt, kDropIndexStmt, kDropTableStmt, kDropTriggerStmt, kDropViewStmt, kSelectStmt, kUpdateStmt, kInsertStmt, kAlterStmt});
#else
    not_mutatable_types_.insert({kProgram, kStmtlist, kStmt, kCreateStmt, kDropStmt, kCreateTableStmt, kCreateIndexStmt, kCreateViewStmt, kDropIndexStmt, kDropTableStmt, kDropViewStmt, kSelectStmt, kUpdateStmt, kInsertStmt, kAlterStmt, kReindexStmt});
#endif

    return;
}

vector<IR *> Mutator::mutate(IR * input){
    vector<IR *> res;
 
    if(!lucky_enough_to_be_mutated(input->mutated_times_)){
        return res; 
    }
    auto tmp = strategy_delete(input);
    if(tmp != NULL){
        res.push_back(tmp);
    }

    tmp = strategy_insert(input);
    if(tmp != NULL){
        res.push_back(tmp);
    }

    tmp = strategy_replace(input);
    if(tmp != NULL){
        res.push_back(tmp);
    }

   
    input->mutated_times_ += res.size();
    for(auto i : res){
        if(i == NULL) continue;
        i->mutated_times_ = input->mutated_times_ ;
    }
    return res;
}

bool Mutator::replace(IR * root , IR* old_ir, IR* new_ir){ 
    auto parent_ir = locate_parent(root, old_ir);
    if(parent_ir == NULL) return false;
    if(parent_ir->left_ == old_ir) {
        deep_delete(old_ir);
        parent_ir->left_ = new_ir;
        return true;
    }
    else if(parent_ir->right_ == old_ir) {
        deep_delete(old_ir);
        parent_ir->right_ = new_ir;
        return true;
    }
    return false;
}

IR * Mutator::locate_parent(IR * root ,IR * old_ir) {

    if(root->left_ == old_ir || root->right_ == old_ir) return root;

    if(root->left_ != NULL) 
        if(auto res = locate_parent(root->left_, old_ir))  return res;
    if(root->right_ != NULL)
        if(auto res = locate_parent(root->right_, old_ir)) return res;
    
    return NULL;
}

IR * Mutator::strategy_delete(IR * cur){
    assert(cur);
    MUTATESTART
    
    DOLEFT
        res = deep_copy(cur);
        if(res->left_ != NULL)
            deep_delete(res->left_);
        res->left_ = NULL; 
    
    DORIGHT
        res = deep_copy(cur);
        if(res->right_ != NULL)
            deep_delete(res->right_);
        res->right_ = NULL;
    
    DOBOTH
        res = deep_copy(cur);
        if(res->left_ != NULL)
            deep_delete(res->left_);
        if(res->right_ != NULL)
            deep_delete(res->right_);
        res->left_ = res->right_ = NULL;

    MUTATEEND 
}

IR * Mutator::strategy_insert(IR * cur){
    assert(cur);
    
    auto res = deep_copy(cur);
    auto parent_type = cur->type_;

    if(res->right_ == NULL && res->left_ != NULL){
        auto left_type = res->left_->type_;
        for(int k=0; k<4; k++){
            auto fetch_ir = get_ir_from_library(parent_type);
            if(fetch_ir->left_ != NULL && fetch_ir->left_->type_ == left_type && fetch_ir->right_ != NULL){
                res->right_ = deep_copy(fetch_ir->right_);
                return res;
            }
        }
    }
    else if(res->right_ != NULL && res->left_ == NULL){
        auto right_type = res->left_->type_;
        for(int k=0; k<4; k++){
            auto fetch_ir = get_ir_from_library(parent_type);
            if(fetch_ir->right_ != NULL && fetch_ir->right_->type_ == right_type && fetch_ir->left_ != NULL){
                res->left_ = deep_copy(fetch_ir->left_);
                return res;
            }
        }
    }
    else if(res->left_ == NULL && res->right_ == NULL){
        for(int k=0; k<4; k++){
            auto fetch_ir = get_ir_from_library(parent_type);
            if(fetch_ir->right_ != NULL && fetch_ir->left_ != NULL){
                res->left_ = deep_copy(fetch_ir->left_);
                res->right_ = deep_copy(fetch_ir->right_);
                return res;
            }
        }        
    }

    return res;
}

IR * Mutator::strategy_replace(IR * cur){
    assert(cur);

    MUTATESTART

    DOLEFT
        if(cur->left_ != NULL){
            res = deep_copy(cur);
        
            auto new_node = get_ir_from_library(res->left_->type_);
            new_node->data_type_ = res->left_->data_type_;
            deep_delete(res->left_);
            res->left_ = deep_copy(new_node);
        }

    DORIGHT
        if(cur->right_ != NULL){
            res = deep_copy(cur);
        
            auto new_node = get_ir_from_library(res->right_->type_);
             new_node->data_type_ = res->right_->data_type_;
            deep_delete(res->right_);
            res->right_ = deep_copy(new_node);
        }

    DOBOTH
        if(cur->left_ != NULL && cur->right_ != NULL){
            res = deep_copy(cur);
       
            auto new_left = get_ir_from_library(res->left_->type_);
            auto new_right = get_ir_from_library(res->right_->type_);
            new_left->data_type_ = res->left_->data_type_;
            new_right->data_type_ = res->right_->data_type_;
            deep_delete(res->right_);
            res->right_ = deep_copy(new_right);

            deep_delete(res->left_);
            res->left_ = deep_copy(new_left);
        }

    MUTATEEND

    return res;
}

bool Mutator::lucky_enough_to_be_mutated(unsigned int mutated_times){
    if(get_rand_int(mutated_times+1) < LUCKY_NUMBER){
        return true;
    }
    return false;
}

pair<string, string> Mutator::get_data_2d_by_type(DATATYPE type1, DATATYPE type2){
    pair<string, string> res("", "");
    auto size = data_library_2d_[type1].size();

    if(size == 0) return res;
    auto rint = get_rand_int(size);
    
    int counter = 0;
    for(auto &i: data_library_2d_[type1]){
        if(counter++ == rint){
            return std::make_pair(i.first, vector_rand_ele(i.second[type2]));
        }
    }
    return res;
}

IR* Mutator::generate_ir_by_type(IRTYPE type){
    auto ast_node = generate_ast_node_by_type(type);
    ast_node->generate();
    vector<IR*> tmp_vector;
    ast_node->translate(tmp_vector);
    assert(tmp_vector.size());

    return tmp_vector[tmp_vector.size() - 1];
}

IR* Mutator::get_ir_from_library(IRTYPE type){
    
    const int generate_prop = 1;
    const int threshold = 0;
    static IR* empty_ir = new IR(kStringLiteral, "");
#ifdef USEGENERATE
    if(ir_library_[type].empty() == true || (get_rand_int(400) == 0 && type != kUnknown)){
        auto ir = generate_ir_by_type(type);
        add_ir_to_library_no_deepcopy(ir);
        return ir;
    }
#endif
    if(ir_library_[type].empty()) return empty_ir;
    return vector_rand_ele(ir_library_[type]);
}

string Mutator::get_a_string() {
    unsigned com_size = common_string_library_.size();
    unsigned lib_size = string_library_.size();
    unsigned double_lib_size = lib_size * 2;

    unsigned rand_int = get_rand_int(double_lib_size + com_size);
    if(rand_int < double_lib_size){
        return string_library_[rand_int >> 1];
    }else{
        rand_int -= double_lib_size;
        return common_string_library_[rand_int];
    }
}

unsigned long Mutator::get_a_val() {
    assert(value_library_.size());

    return vector_rand_ele(value_library_);
}



unsigned long Mutator::hash(string &sql){ 
    return fucking_hash(sql.c_str(), sql.size());
}

unsigned long Mutator::hash(IR * root){
    auto tmp_str = move(root->to_string());
    return this->hash(tmp_str);
}


void Mutator::debug(IR *root){
    for(auto &i: data_library_[kDataFunctionName]){
        cout << i<< endl;
    }
    
}

Mutator::~Mutator(){
    
}

void Mutator::extract_struct(IR * root){
    static int counter = 0;
    auto type = root->type_;
    if(root->left_){
        extract_struct(root->left_);
    }
    if(root->right_){
        extract_struct(root->right_);
    }

    if(root->left_ || root->right_)return;
    
    
    if(root->data_type_ != kDataWhatever){
        
        root->str_val_ = "x"; 
        return ;     
    }
    
    if(string_types_.find(type) != string_types_.end()){
        root->str_val_ = "'x'";
    }else if(int_types_.find(type) != int_types_.end()){
        root->int_val_ = 1;
    }else if(float_types_.find(type) != float_types_.end()){
        root->float_val_ = 1.0;
    }
}


void Mutator::extract_struct2(IR * root){
    static int counter = 0;
    auto type = root->type_;
    if(root->left_){
        extract_struct2(root->left_);
    }
    if(root->right_){
        extract_struct2(root->right_);
    }

    if(root->left_ || root->right_)return;
    
    
    if(root->data_type_ != kDataWhatever){
        
        root->str_val_ = "x" + to_string(counter++); 
        return ;     
    }
    
    if(string_types_.find(type) != string_types_.end()){
        root->str_val_ = "'x'";
    }else if(int_types_.find(type) != int_types_.end()){
        root->int_val_ = 1;
    }else if(float_types_.find(type) != float_types_.end()){
        root->float_val_ = 1.0;
    }
}

void Mutator::reset_data_library(){
    data_library_.clear();
    data_library_2d_.clear();
}


string Mutator::parse_data(string &input) {
    string res;
    if(!input.compare("_int_")){
            res = to_string(get_a_val());
        }
    else if(!input.compare("_empty_")){
        res = "";
    }
    else if(!input.compare("_boolean_")){
        if(get_rand_int(2) == 0)
            res = "false";
        else
            res = "true";
    }
    else if(!input.compare("_string_")){
        res = get_a_string();
    }
    else{
        res = input;
    }

    return res;
}


bool Mutator::validate(IR * &root){
    reset_data_library();
    string sql = root->to_string();
    auto ast = parser(sql);
    if(ast == NULL) return false;
    
    deep_delete(root);
    root = NULL;

    vector<IR*> ir_vector;
    ast->translate(ir_vector);
    ast->deep_delete();

    root = ir_vector[ir_vector.size() - 1];
    reset_id_counter();

    if(fix(root) == false){
        return false;
    }

    return true;
}


unsigned int Mutator::calc_node(IR * root){
    unsigned int res = 0;
    if(root->left_) res += calc_node(root->left_);
    if(root->right_) res += calc_node(root->right_);

    return res + 1;
}


bool Mutator::fix(IR * root){
    map<IR**, IR*> m_save;
    bool res = true;

    auto stmts = split_to_stmt(root, m_save, split_stmt_types_);

    if(stmts.size() > 8) {connect_back(m_save); return false;}

    clear_scope_library(true);
    for(auto &stmt: stmts){
        map<IR**, IR*> m_substmt_save;
        auto substmts = split_to_stmt(stmt, m_substmt_save, split_substmt_types_);

        int stmt_num = substmts.size();
        if(stmt_num > 4) {
            connect_back(m_save);
            connect_back(m_substmt_save);
            return false;
        }
        for(auto &substmt: substmts){
            clear_scope_library(false);
            int tmp_node_num = calc_node(substmt);
            if((stmt_num == 1 && tmp_node_num > 150) || tmp_node_num > 120) {
                connect_back(m_save);
                connect_back(m_substmt_save);
                return false;
            }
            res = fix_one(substmt, scope_library_) && res;

            if(res == false){ 
                connect_back(m_save);
                connect_back(m_substmt_save);
                return false;
            }
        }
        res = connect_back(m_substmt_save) && res;
    }
    res = connect_back(m_save) && res;

    return res;    
}

vector<IR *> Mutator::split_to_stmt(IR * root, map<IR**, IR*> &m_save, set<IRTYPE> &split_set){
    vector<IR *> res;
    deque<IR *> bfs = {root};
    
    while(!bfs.empty()){
        auto node = bfs.front();
        bfs.pop_front();

        if(node && node->left_) bfs.push_back(node->left_);
        if(node && node->right_) bfs.push_back(node->right_);

        if(node->left_ && find(split_set.begin(), split_set.end(), node->left_->type_) != split_set.end()){
            res.push_back(node->left_);
            m_save[&node->left_] = node->left_;
            node->left_ = NULL;
        }
        if(node->right_ && find(split_set.begin(), split_set.end(), node->right_->type_) != split_set.end()){
            res.push_back(node->right_);
            m_save[&node->right_] = node->right_;
            node->right_ = NULL;
        }      
        

       
    }

    if(find(split_set.begin(), split_set.end(), root->type_) != split_set.end())
        res.push_back(root);
    

    return res;
}


bool Mutator::connect_back(map<IR**, IR*> &m_save){
    for(auto &iter: m_save){
        *(iter.first) = iter.second;
    }
    return true;
}

static set<IR*> visited;

bool Mutator::fix_one(IR * stmt_root, map<int, map<DATATYPE, vector<IR*>>> &scope_library){
    visited.clear();
    analyze_scope(stmt_root);
    auto graph = build_graph(stmt_root, scope_library);

#ifdef GRAPHLOG
    for(auto &iter: graph){
        cout << "Node: " << iter.first->to_string() << " connected with:" << endl;
        for(auto &k: iter.second){
            cout << k->to_string() << endl;
        }
        cout << "--------" <<endl;
    }
    cout << "OUTPUT END" << endl;
#endif
    return fill_stmt_graph(graph);
}

void Mutator::analyze_scope(IR * stmt_root){
    if(stmt_root->left_){
        analyze_scope(stmt_root->left_);
    }
    if(stmt_root->right_){
        analyze_scope(stmt_root->right_);
    }

    auto data_type = stmt_root->data_type_;
    if(data_type == kDataWhatever)return;

    scope_library_[stmt_root->scope_][data_type].push_back(stmt_root);
}

map<IR*, vector<IR*>> Mutator::build_graph(IR * stmt_root, map<int, map<DATATYPE, vector<IR*>>> &scope_library){
    map<IR*, vector<IR*>> res;
    deque<IR*> bfs = {stmt_root};

    while(!bfs.empty()){
        auto node = bfs.front();
        bfs.pop_front();

        auto cur_scope = node->scope_;
        auto cur_data_flag = node->data_flag_;
        auto cur_data_type = node->data_type_;

        if(find(int_types_.begin(), int_types_.end(), node->type_) != int_types_.end()){
            if(get_rand_int(100) > 50)
                node->int_val_ = vector_rand_ele(value_library_);
            else
                node->int_val_ = get_rand_int(100);
        }
        else if(find(float_types_.begin(), float_types_.end(), node->type_) != float_types_.end()){
            node->float_val_ = (double)(get_rand_int(100000000));
        }
        
        if(node->left_) bfs.push_back(node->left_);
        if(node->right_) bfs.push_back(node->right_);
        if(cur_data_type == kDataWhatever) continue;
        
        res[node];
        cur_scope--;

        if(relationmap_.find(cur_data_type) != relationmap_.end()){     
            auto &target_data_type_map = relationmap_[cur_data_type];
            for(auto &target: target_data_type_map){
                IR* pick_node = NULL;
                if(isMapToClosestOne(cur_data_flag)){
                    pick_node = find_closest_node(stmt_root, node, target.first);
                    if(pick_node && pick_node->scope_ != cur_scope){
                        pick_node = NULL;
                    }
                }
                else{
                    
                    if(!node->str_val_.empty()){
                    }
                    
                    if(!isDefine(cur_data_flag) || relationmap_[cur_data_type][target.first] != kRelationElement){
                            if(!scope_library[cur_scope][target.first].empty())
                                pick_node = vector_rand_ele(scope_library[cur_scope][target.first]);
                    }
                }
                if(pick_node != NULL)
                    res[pick_node].push_back(node);
            }
        } 
    }
    
    return res;
}

bool Mutator::fill_stmt_graph(map<IR*, vector<IR*>> &graph){
    bool res = true;
    map<IR*, bool> zero_indegrees;
    for(auto &iter: graph){
        if(zero_indegrees.find(iter.first) == zero_indegrees.end()){
            zero_indegrees[iter.first] = true;
        }
        for(auto ir : iter.second){
            zero_indegrees[ir] = false;
        }
    }
    for(auto &iter: graph){
        auto type1 = iter.first->data_type_;
        auto beg = iter.first;
        if(zero_indegrees[beg] == false || visited.find(beg) != visited.end()){
            continue;
        }
        res &= fill_one(iter.first);
        res &= fill_stmt_graph_one(graph, iter.first);
    }

    return res;
}

bool Mutator::fill_stmt_graph_one(map<IR*, vector<IR*>> &graph, IR* ir){
    if(graph.find(ir) == graph.end()) return true;

    bool res = true;
    auto type = ir->data_type_;
    auto &vec = graph[ir];

    if(!vec.empty()){
        for(auto d: vec){
            res = res & fill_one_pair(ir, d);
            res = res & fill_stmt_graph_one(graph, d);
        }
    }
    return res;
}

static bool replace_in_vector(string &old_str, string &new_str, vector<string> & victim){
    for(int i = 0 ; i < victim.size(); i++){
        if(victim[i] == old_str){
            victim[i] = new_str;
            return true;
        }
    }
    return false;
}

static bool remove_in_vector(string &str_to_remove, vector<string> & victim){
    for(auto iter = victim.begin(); iter != victim.end(); iter ++ ){
        if(*iter == str_to_remove){
            victim.erase(iter);
            return true;
        }
    }
    return false;
}

bool Mutator::remove_one_from_datalibrary(DATATYPE datatype, string& key){
    return remove_in_vector(key, data_library_[datatype]);
}

bool Mutator::replace_one_from_datalibrary(DATATYPE datatype, string &old_str, string &new_str){
    return replace_in_vector(old_str, new_str, data_library_[datatype]);
}

bool Mutator::remove_one_pair_from_datalibrary_2d(DATATYPE p_datatype, DATATYPE c_data_type, string &p_key){
    for(auto &value: data_library_2d_[p_datatype][p_key][c_data_type]){
        remove_one_from_datalibrary(c_data_type, value);
    }
    
    data_library_2d_[p_datatype][p_key].erase(c_data_type);
    if(data_library_2d_[p_datatype][p_key].empty()){
        remove_one_from_datalibrary(p_datatype, p_key);
        data_library_2d_[p_datatype].erase(p_key);
    }

    return true;
}

#define has_element(a,b) (find(a.begin(), a.end(), b) != (a).end())
#define has_key(a,b) ((a).find(b) != (a).end())

bool Mutator::replace_one_value_from_datalibray_2d(DATATYPE p_datatype, DATATYPE c_data_type, string &p_key, string &old_c_value, string &new_c_value){
    replace_one_from_datalibrary(c_data_type, old_c_value, new_c_value);
    replace_in_vector(old_c_value, new_c_value, data_library_2d_[p_datatype][p_key][c_data_type]);
    return true;
}

bool Mutator::fill_one(IR* ir){
    auto type = ir->data_type_;
    visited.insert(ir);
    if(isDefine(ir->data_flag_)){
        string new_name = gen_id_name();
        data_library_[type].push_back(new_name);
        ir->str_val_ = new_name;

        for(auto iter: relationmap_){
            for(auto iter2: iter.second){
                if(iter2.first == type && iter2.second == kRelationSubtype){
                    data_library_2d_[type][new_name];
                }
            }
        }
        return true;
    }else if(isAlias(ir->data_flag_)){
        string alias_target;
        if(data_library_[type].size() != 0)
            alias_target = vector_rand_ele(data_library_[type]);
        else{
            alias_target = get_rand_int(2)?"v0": "v1";
        }
            
        string new_name = gen_id_name();
        data_library_[type].push_back(new_name);
        ir->str_val_ = new_name;

        if(has_key(data_library_2d_, type)){
            if(has_key(data_library_2d_[type],alias_target)){
                data_library_2d_[type][new_name] = data_library_2d_[type][alias_target];
            }
        }  
        return true;
    }

    else if(data_library_.find(type) != data_library_.end()){
        if(data_library_[type].empty()){
            ir->str_val_ = "v0";
            return false;
        }
        ir->str_val_ = vector_rand_ele(data_library_[type]);
        if(isUndefine(ir->data_flag_)){
            remove_one_from_datalibrary(ir->data_type_, ir->str_val_);
            if(has_key(data_library_2d_, type) && has_key(data_library_2d_[type], ir->str_val_)){
                for(auto itr=data_library_2d_[type][ir->str_val_].begin(); has_key(data_library_2d_[type], ir->str_val_) && itr!=data_library_2d_[type][ir->str_val_].end(); itr++){
                    auto c_data_type = *itr;
                    remove_one_pair_from_datalibrary_2d(type, c_data_type.first, ir->str_val_);
                    itr--;
                    if(!has_key(data_library_2d_[type], ir->str_val_)) break;
                }   
            }
        }
        return true;
    }else if(g_data_library_.find(type) != g_data_library_.end()){
        if(g_data_library_[type].empty()){
            return false;
        }
        ir->str_val_ = vector_rand_ele(g_data_library_[type]);
        return true;
    }else if(g_data_library_2d_.find(type)!= g_data_library_2d_.end()){
        int choice = get_rand_int(g_data_library_2d_[type].size());
        auto iter = g_data_library_2d_[type].begin();
        while(choice > 0){
            iter ++;
            choice --;
        }
        ir->str_val_ = iter->first;
        return true;
    }
    else{
        return false;
    }
    return true;
}

bool Mutator::fill_one_pair(IR* parent, IR* child){
    visited.insert(child);

    bool is_define = isDefine(child->data_flag_);
    bool is_replace = isReplace(child->data_flag_);
    bool is_undefine = isUndefine(child->data_flag_);
    bool is_alias = isAlias(child->data_flag_);


    string new_name = "";
    if(is_define || is_replace || is_alias){
        new_name = gen_id_name();
    }

    auto p_type = parent->data_type_;
    auto c_type = child->data_type_;
    auto p_str = parent->str_val_;
    
    auto r_type = relationmap_[c_type][p_type];
    switch(r_type){
        case kRelationElement:
            
            if(is_replace){
                child->str_val_ = new_name;
                replace_one_from_datalibrary(c_type, p_str, new_name);

                if(has_key(data_library_2d_, p_type)){
                    if(has_key(data_library_2d_[p_type],p_str)){
                        auto tmp = data_library_2d_[p_type].extract(p_str);
                        tmp.key() = new_name;
                        data_library_2d_[p_type].insert(move(tmp));
                    }
                }
                else{
                    for(auto &i1: data_library_2d_){
                        for(auto &i2: i1.second){
                            for(auto &i3: i2.second){
                                if(i3.first == c_type){
                                    if(has_element(i3.second, p_str)){
                                        replace_in_vector(p_str, new_name, i3.second);
                                        goto END;
                                    }
                                }
                            }
                        }
                    }
                }
            }else if(is_alias){
                child->str_val_ = new_name;

                if(has_key(data_library_2d_, p_type)){
                    if(has_key(data_library_2d_[p_type],p_str)){
                        data_library_2d_[p_type][new_name] = data_library_2d_[p_type][p_str];
                        data_library_[p_type].push_back(new_name);
                    }
                }
            }else{
                child->str_val_ = p_str;
            }
            END:
                break;
        
        case kRelationSubtype:
            if(data_library_2d_.find(p_type)!= data_library_2d_.end()){
                if(data_library_2d_[p_type].find(p_str) != data_library_2d_[p_type].end()){
                    if(is_define){
                        data_library_2d_[p_type][p_str][c_type].push_back(new_name);
                        child->str_val_ = new_name;
                        data_library_[c_type].push_back(new_name);
                        break;
                    }else if(is_undefine){
                        if((data_library_2d_[p_type][p_str][c_type]).empty()){
                            child->str_val_ = "v1";
                            break;
                        }
                        child->str_val_ = vector_rand_ele(data_library_2d_[p_type][p_str][c_type]);
                        remove_in_vector(child->str_val_, data_library_2d_[p_type][p_str][c_type]);
                        remove_in_vector(child->str_val_, data_library_[c_type]);
                        break;
                    }
                    else if(data_library_2d_[p_type][p_str].find(c_type) != data_library_2d_[p_type][p_str].end()){
                        if(data_library_2d_[p_type][p_str][c_type].empty() == false){
                            child->str_val_ = vector_rand_ele(data_library_2d_[p_type][p_str][c_type]);
                        }
                    }else{
                        if(data_library_[c_type].empty()){
                            if(get_rand_int(2) == 1){
                                child->str_val_ = "v0";
                            }else{
                                child->str_val_ = "v1";
                            }
                        }else
                            child->str_val_ = vector_rand_ele(data_library_[c_type]);
                    }
                }else{
                }
            }else if(g_data_library_2d_.find(p_type)!= g_data_library_2d_.end()){
                if(g_data_library_2d_[p_type].find(p_str) != g_data_library_2d_[p_type].end()){
                    if(g_data_library_2d_[p_type][p_str].find(c_type) != g_data_library_2d_[p_type][p_str].end()){
                        if(g_data_library_2d_[p_type][p_str][c_type].empty() == false){
                            child->str_val_ = vector_rand_ele(g_data_library_2d_[p_type][p_str][c_type]);
                        }
                    }
                }
            }else{
                return false;
            }

            break;
        
        default:
            assert(0);
            break;
    }

    return true;
}


void Mutator::clear_scope_library(bool clear_define){
    int level = clear_define?0:1;
    int sz = scope_library_.size();
    scope_library_.clear();

    return;
}

static IR* search_mapped_ir(IR* ir, DATATYPE type){
    vector<IR*> to_search;
    vector<IR*> backup;
    to_search.push_back(ir);
    while(!to_search.empty()){
        for(auto i: to_search){
            if(i->data_type_ == type){
                return i;
            }
            if(i->left_){
                backup.push_back(i->left_);
            }
            if(i->right_){
                backup.push_back(i->right_);
            }
        }
        to_search = move(backup);
        backup.clear();
    }
    return NULL;
}


IR * Mutator::find_closest_node(IR * stmt_root, IR * node, DATATYPE type){
    auto cur = node;
    while(true){
        auto parent = locate_parent(stmt_root, cur);
        if(!parent) break;
        bool flag = false;
        while(parent->left_ == NULL || parent->right_ == NULL){
            cur = parent;
            parent = locate_parent(stmt_root, cur);
            if(!parent){
                flag = true;
                break;
            }
        }
        if(flag) return NULL;

        auto search_root = parent->left_ == cur? parent->right_:parent->left_;
        auto res = search_mapped_ir(search_root, type);
        if(res) return res;

        cur = parent;
    }
    return NULL;
}

int Mutator::try_fix(char* buf, int len, char* &new_buf, int &new_len){
    string sql(buf);
    auto ast = parser(sql);

    new_buf = buf;
    new_len = len;
    if(ast == NULL) return 0;

    vector<IR *> v_ir;
    auto ir_root = ast->translate(v_ir);
    ast->deep_delete();

    if(ir_root == NULL) return 0;
    bool fixed_result = validate(ir_root);
    string fixed;
    if(fixed_result != false){
        fixed = ir_root->to_string();
    }
    deep_delete(ir_root);
    if(fixed.empty()) return 0;

    char * sfixed = (char *)malloc(fixed.size()+1);
    memcpy(sfixed, fixed.c_str(), fixed.size());
    sfixed[fixed.size()] = 0;

    new_buf = sfixed;
    new_len = fixed.size();

    return 1;
}

