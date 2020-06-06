#ifndef __PARSER_TYPEDEF_H__
#define __PARSER_TYPEDEF_H__

#include <vector>


#ifndef YYtypeDEF_YY_SCANNER_T
#define YYtypeDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif


#define YYSTYPE FF_STYPE
#define YYLTYPE FF_LTYPE


struct FF_CUST_LTYPE {
  int first_line;
  int first_column;
  int last_line;
  int last_column;

  int total_column;

  // Length of the string in the SQL query string
  int string_length;

  // Parameters.
  // int param_id;
  std::vector<void*> param_list;
};

#define FF_LTYPE FF_CUST_LTYPE
#define FF_LTYPE_IS_DECLARED 1

#define YY_USER_ACTION \
        yylloc->first_line = yylloc->last_line; \
        yylloc->first_column = yylloc->last_column; \
        for(int i = 0; yytext[i] != '\0'; i++) { \
            yylloc->total_column++; \
            yylloc->string_length++; \
                if(yytext[i] == '\n') { \
                        yylloc->last_line++; \
                        yylloc->last_column = 0; \
                } \
                else { \
                        yylloc->last_column++; \
                } \
        }

#endif