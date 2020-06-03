#ifndef __UTILS_H__
#define __UTILS_H__
#include "define.h"
#include "ast.h"
#include <string>

#include "../parser/bison_parser.h"
#include "../parser/flex_lexer.h"
//#include "/usr/local/mysql/include/mysql.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <cassert>
#include <cstdio>
#include <cstdlib>

using std::string;

#define get_rand_int(range) rand()%(range)
//#define vector_rand_ele(a) (a[get_rand_int(a.size())])
#define vector_rand_ele(a) (a.size()!=0?a[get_rand_int(a.size())]:gen_id_name())
IR * deep_copy(const IR * root);
void deep_delete(IR * root);

Program * parser(string sql);
string get_string_by_type(IRTYPE);
void print_ir(IR * ir);
void print_v_ir(vector<IR *> &v_ir_collector);
uint64_t fucking_hash ( const void * key, int len );
void trim_string(string &);
vector<string> get_all_files_in_dir( const char * dir_name );
string magic_string_generator(string& s);


#endif
