#include "../include/utils.h"




string get_string_by_type(IRTYPE type){
    
#define DECLARE_CASE(classname) \
    if (type == k##classname) return #classname ;
    
    ALLCLASS(DECLARE_CASE);
#undef DECLARE_CASE

    return "";
}

string magic_string_generator(string &s){
    unsigned int i = get_rand_int(100);
    if(i < 80) return s;
    return "**%s**";
}

void print_v_ir(vector<IR *> &v_ir_collector){
    for(auto ir: v_ir_collector){
        if(ir->operand_num_ == 0){
            if(ir->type_ == kconst_int)
                cout << ir->name_ << " = .int." << ir->int_val_ << endl;
            else if(ir->type_ == kconst_float)
                cout << ir->name_ << " = .float." << ir->f_val_ << endl;
            else if(ir->type_ == kBoolLiteral)
                cout << ir->name_ << " = .bool." << ir->b_val_ << endl; 
            else
                cout << ir->name_ << " = .str." << ir->str_val_ << endl;
            
        }
        else if(ir->operand_num_ == 1){      
            string res = "";        
            if(ir->op_ != NULL){
                res += ir->op_->prefix_ + " ";
                res += ir->left_->name_ + " ";
                res += ir->op_->middle_ + " ";
                res += ir->op_->suffix_ + " ";
            } 
            cout << ir->name_ << " = " << res << endl;
        }
        else if(ir->operand_num_ == 2){
            string res = "";
            if(ir->op_ != NULL){
                res += ir->op_->prefix_ + " ";
                res += ir->left_->name_ + " ";
                res += ir->op_->middle_ + " ";
                res += ir->right_->name_ + " ";
                res += ir->op_->suffix_ + " ";
            }
            cout << ir->name_ << " = " << res << endl;
        }
    } 

    return;  
}

void print_ir(IR * ir){
    
    if(ir->left_ != NULL) print_ir(ir->left_);
    if(ir->right_ != NULL) print_ir(ir->right_);
    
    if(ir->operand_num_ == 0){
        if(ir->type_ == kconst_int)
                cout << ir->name_ << " = .int." << ir->int_val_ << endl;
            else if(ir->type_ == kconst_float)
                cout << ir->name_ << " = .float." << ir->f_val_ << endl;
            else if(ir->type_ == kBoolLiteral)
                cout << ir->name_ << " = .bool." << ir->b_val_ << endl; 
            else
                cout << ir->name_ << " = .str." << ir->str_val_ << endl;
    }
    else if(ir->operand_num_ == 1){      
        string res = "";        
        if(ir->op_ != NULL){
            res += ir->op_->prefix_ + " ";
            res += ir->left_->name_ + " ";
            res += ir->op_->middle_ + " ";
            res += ir->op_->suffix_ + " ";
        }
        cout << ir->name_ << " = " << res << endl;
    }
    else if(ir->operand_num_ == 2){
        string res = "";
        if(ir->op_ != NULL){
            res += ir->op_->prefix_ + " ";
            res += ir->left_->name_ + " ";
            res += ir->op_->middle_ + " ";
            res += ir->right_->name_ + " ";
            res += ir->op_->suffix_ + " ";
        }
        cout << ir->name_ << " = " << res << endl;
    }


    return;
}


Program * parser(string sql){

    yyscan_t scanner;
    YY_BUFFER_STATE state;
    Program * p = new Program();

    if (hsql_lex_init(&scanner)) {
        return NULL;
    }
    state = hsql__scan_string(sql.c_str(), scanner);

    int ret = hsql_parse(p, scanner);

    hsql__delete_buffer(state, scanner);
    hsql_lex_destroy(scanner);
    if(ret != 0){
        p->deep_delete();
        return NULL;
    }
    
    return p;
}

typedef unsigned long uint64_t;

uint64_t fucking_hash ( const void * key, int len )
{
	const uint64_t m = 0xc6a4a7935bd1e995;
	const int r = 47;
	uint64_t h = 0xdeadbeefdeadbeef ^ (len * m);

	const uint64_t * data = (const uint64_t *)key;
	const uint64_t * end = data + (len/8);

	while(data != end)
	{
		uint64_t k = *data++;

		k *= m; 
		k ^= k >> r; 
		k *= m; 
		
		h ^= k;
		h *= m; 
	}

	const unsigned char * data2 = (const unsigned char*)data;

	switch(len & 7)
	{
	case 7: h ^= uint64_t(data2[6]) << 48;
	case 6: h ^= uint64_t(data2[5]) << 40;
	case 5: h ^= uint64_t(data2[4]) << 32;
	case 4: h ^= uint64_t(data2[3]) << 24;
	case 3: h ^= uint64_t(data2[2]) << 16;
	case 2: h ^= uint64_t(data2[1]) << 8;
	case 1: h ^= uint64_t(data2[0]);
	        h *= m;
	};
 
	h ^= h >> r;
	h *= m;
	h ^= h >> r;

	return h;
} 

void trim_string(string &res){
    int count = 0;
    int idx = 0;
    bool expect_space = false;
    for(int i = 0, sz = res.size(); i < sz; i++){
        if(res[i] == ' '){
            if(expect_space == false){
                continue;
            }else{
                expect_space = false;
                res[idx++] = res[i];
                count ++;
            }
        }else{
            expect_space = true;
            res[idx++] = res[i];
            count ++;
        }
    }
    res.resize(count);
}


vector<string> get_all_files_in_dir( const char * dir_name )
{
    vector<string> file_list;
	// check the parameter !
	if( NULL == dir_name )
	{
		cout<<" dir_name is null ! "<<endl;
		return file_list;
	}
 
	// check if dir_name is a valid dir
	struct stat s;
	lstat( dir_name , &s );
	if( ! S_ISDIR( s.st_mode ) )
	{
		cout<<"dir_name is not a valid directory !"<<endl;
		return file_list;
	}
	
	struct dirent * filename;    // return value for readdir()
 	DIR * dir;                   // return value for opendir()
	dir = opendir( dir_name );
	if( NULL == dir )
	{
		cout<<"Can not open dir "<<dir_name<<endl;
		return file_list;
	}
	cout<<"Successfully opened the dir !"<<endl;
	
	/* read all the files in the dir ~ */
	while( ( filename = readdir(dir) ) != NULL )
	{
		// get rid of "." and ".."
		if( strcmp( filename->d_name , "." ) == 0 || 
			strcmp( filename->d_name , "..") == 0    )
			continue;
		cout<<filename->d_name <<endl;
        file_list.push_back(string(filename->d_name));
	}
	closedir(dir);
    	return file_list;
} 


IR * deep_copy(const IR * root){
    IR * left = NULL, * right = NULL, * copy_res;

    if(root->left_) left = deep_copy(root->left_); // do you have a second version for deep_copy that accept only one argument?                                                  
    if(root->right_) right = deep_copy(root->right_);//no I forget to update here

    if(root->op_ != NULL)
        copy_res = new IR(root->type_, OP3(root->op_->prefix_, root->op_->middle_, root->op_->suffix_), 
                    left, right, root->f_val_, root->str_val_, root->name_, root->mutated_times_);
    else
        copy_res = new IR(root->type_, NULL, left, right, root->f_val_, root->str_val_, root->name_, root->mutated_times_);
    
    copy_res->id_type_ = root->id_type_;

    return copy_res;

}

void deep_delete(IR * root){
    if(root->left_) deep_delete(root->left_);
    if(root->right_) deep_delete(root->right_);
    
    if(root->op_) delete root->op_;

    delete root;
}
