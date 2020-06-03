#ifndef __MUTATOR_H__
#define __MUTATOR_H__


#include "ast.h"
#include "define.h"
#include "utils.h"

#define LUCKY_NUMBER 500

using namespace std;

class Mutator{

public:
    Mutator(){
        srand(time(nullptr));
    }

    IR * deep_copy_with_record(const IR * root, const IR * record);
    unsigned long hash(IR* );
    unsigned long hash(string);

    IR * ir_random_generator(vector<IR *> v_ir_collector);

    vector<IR *> mutate_all(vector<IR*> &v_ir_collector);

    vector<IR*> mutate(IR* input);  
    IR * strategy_delete(IR * cur);
    IR * strategy_insert(IR * cur);
    IR * strategy_replace(IR * cur);

    bool replace(IR * root , IR* old_ir, IR* new_ir);
    IR * locate_parent(IR * root ,IR * old_ir);
    string validate(IR * root); 

    void minimize(vector<IR*> &);
    bool lucky_enough_to_be_mutated(unsigned int mutated_times);

    void add_to_library(IR*);
    void add_to_library_core(IR*);
    IR* get_from_libary_3D(IR*);
    IR* get_from_libary_2D(IR*);

    void init(string f_testcase, string f_common_string = "", string pragma = "");
    string fix(IR * root);
    string extract_struct(IR * root);
    string extract_struct2(IR * root);
    void add_new_table(IR * root, string &table_name);
    void reset_database();

    bool check_node_num(IR * root, unsigned int limit);
    vector<IR *> extract_statement(IR * root);
    unsigned int calc_node(IR * root);

    map<IR*, set<IR*>> build_dependency_graph(IR* root, map<IDTYPE,IDTYPE> &relationmap, map<IDTYPE,IDTYPE> &crssmap, vector<IR*>& ordered_ir);
    vector<IR *> cut_subquery(IR * program, map<IR**, IR*> &m_save);
    bool fix_back(map<IR**, IR*> &m_save);
    void fix_one(map<IR*, set<IR*>> &graph, IR* fixed_key, set<IR*> &visited);
    void fix_graph(map<IR*, set<IR*>> &graph, IR* root, vector<IR*>& ordered_ir);

    string get_a_string(); 
    unsigned long get_a_val();
    static vector<string> common_string_libary;
    static vector<unsigned long> value_libary;
    static map<string, vector<string>> m_tables;
    static vector<string> v_table_names;
    ~Mutator();
    
    void debug(IR * root);
    unsigned long get_library_size();
    int try_fix(char* buf, int len, char* &new_buf, int &new_len);
private:
    IR * record_ = NULL;
    map<NODETYPE, map<NODETYPE, vector<IR*>> > ir_libary_3D_; 
    map<NODETYPE, map<NODETYPE, set<unsigned long>> > ir_libary_3D_hash_;
    map<NODETYPE, set<unsigned long> > ir_libary_2D_hash_;
    map<NODETYPE, vector<IR*> > ir_libary_2D_;
    map<NODETYPE, vector<IR *>> left_lib;
    map<NODETYPE, vector<IR *>> right_lib;
    vector<string> string_libary;
    map<IDTYPE, IDTYPE> relationmap;
    map<IDTYPE, IDTYPE> cross_map;
    set<unsigned long> string_libary_hash_;

    vector<string> cmds_;
    map<string, vector<string>> m_cmd_value_lib_;

    string s_table_name;
    
    map<NODETYPE, int> type_counter_;
};


#endif
