#ifndef __UTILS_H__
#define __UTILS_H__

#include <string>
#include <vector>

#include "../parser/bison_parser.h"
#include "../parser/flex_lexer.h"
using std::string;
using std::vector;

#define get_rand_int(range) rand() % (range)
#define vector_rand_ele_safe(a) \
  (a.size() != 0 ? a[get_rand_int(a.size())] : gen_id_name())
#define vector_rand_ele(a) (a[get_rand_int(a.size())])

void trim_string(string &);

string gen_string();

double gen_float();

long gen_long();

int gen_int();

uint64_t ducking_hash(const void *key, int len);
vector<string> get_all_files_in_dir(const char *dir_name);
Program *parser(string sql);
#endif
