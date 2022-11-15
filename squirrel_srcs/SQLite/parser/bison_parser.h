/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 32 "bison_parser.y" /* yacc.c:1921  */

// %code requires block


#include "../include/ast.h"
#include "../include/define.h"
//#include "../include/utils.h"
#include "parser_typedef.h"


// Auto update column and line number
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

#line 83 "bison_parser.h" /* yacc.c:1921  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_STRING = 258,
    SQL_IDENTIFIER = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_INTEGER = 279,
    SQL_NATURAL = 280,
    SQL_PREPARE = 281,
    SQL_PRIMARY = 282,
    SQL_SCHEMAS = 283,
    SQL_SPATIAL = 284,
    SQL_VARCHAR = 285,
    SQL_VIRTUAL = 286,
    SQL_DESCRIBE = 287,
    SQL_BEFORE = 288,
    SQL_COLUMN = 289,
    SQL_CREATE = 290,
    SQL_DELETE = 291,
    SQL_DIRECT = 292,
    SQL_DOUBLE = 293,
    SQL_ESCAPE = 294,
    SQL_EXCEPT = 295,
    SQL_EXISTS = 296,
    SQL_EXTRACT = 297,
    SQL_GLOBAL = 298,
    SQL_HAVING = 299,
    SQL_IMPORT = 300,
    SQL_INSERT = 301,
    SQL_ISNULL = 302,
    SQL_OFFSET = 303,
    SQL_RENAME = 304,
    SQL_SCHEMA = 305,
    SQL_SELECT = 306,
    SQL_SORTED = 307,
    SQL_TABLES = 308,
    SQL_UNIQUE = 309,
    SQL_UNLOAD = 310,
    SQL_UPDATE = 311,
    SQL_VALUES = 312,
    SQL_AFTER = 313,
    SQL_ALTER = 314,
    SQL_CROSS = 315,
    SQL_DELTA = 316,
    SQL_FLOAT = 317,
    SQL_GROUP = 318,
    SQL_INDEX = 319,
    SQL_INNER = 320,
    SQL_LIMIT = 321,
    SQL_LOCAL = 322,
    SQL_MERGE = 323,
    SQL_MINUS = 324,
    SQL_ORDER = 325,
    SQL_OUTER = 326,
    SQL_RIGHT = 327,
    SQL_TABLE = 328,
    SQL_UNION = 329,
    SQL_USING = 330,
    SQL_WHERE = 331,
    SQL_CALL = 332,
    SQL_CASE = 333,
    SQL_CHAR = 334,
    SQL_DATE = 335,
    SQL_DESC = 336,
    SQL_DROP = 337,
    SQL_ELSE = 338,
    SQL_FILE = 339,
    SQL_FROM = 340,
    SQL_FULL = 341,
    SQL_HASH = 342,
    SQL_HINT = 343,
    SQL_INTO = 344,
    SQL_JOIN = 345,
    SQL_LEFT = 346,
    SQL_LIKE = 347,
    SQL_LOAD = 348,
    SQL_LONG = 349,
    SQL_NULL = 350,
    SQL_PLAN = 351,
    SQL_SHOW = 352,
    SQL_TEXT = 353,
    SQL_THEN = 354,
    SQL_TIME = 355,
    SQL_VIEW = 356,
    SQL_WHEN = 357,
    SQL_WITH = 358,
    SQL_ADD = 359,
    SQL_ALL = 360,
    SQL_AND = 361,
    SQL_ASC = 362,
    SQL_CSV = 363,
    SQL_END = 364,
    SQL_FOR = 365,
    SQL_INT = 366,
    SQL_KEY = 367,
    SQL_NOT = 368,
    SQL_OFF = 369,
    SQL_SET = 370,
    SQL_TBL = 371,
    SQL_TOP = 372,
    SQL_AS = 373,
    SQL_BY = 374,
    SQL_IF = 375,
    SQL_IN = 376,
    SQL_IS = 377,
    SQL_OF = 378,
    SQL_ON = 379,
    SQL_OR = 380,
    SQL_TO = 381,
    SQL_ARRAY = 382,
    SQL_CONCAT = 383,
    SQL_ILIKE = 384,
    SQL_SECOND = 385,
    SQL_MINUTE = 386,
    SQL_HOUR = 387,
    SQL_DAY = 388,
    SQL_MONTH = 389,
    SQL_YEAR = 390,
    SQL_TRUE = 391,
    SQL_FALSE = 392,
    SQL_PRAGMA = 393,
    SQL_REINDEX = 394,
    SQL_GENERATED = 395,
    SQL_ALWAYS = 396,
    SQL_CHECK = 397,
    SQL_CONFLICT = 398,
    SQL_IGNORE = 399,
    SQL_REPLACE = 400,
    SQL_ROLLBACK = 401,
    SQL_ABORT = 402,
    SQL_FAIL = 403,
    SQL_AUTOINCR = 404,
    SQL_BEGIN = 405,
    SQL_TRIGGER = 406,
    SQL_TEMP = 407,
    SQL_INSTEAD = 408,
    SQL_EACH = 409,
    SQL_ROW = 410,
    SQL_OVER = 411,
    SQL_FILTER = 412,
    SQL_PARTITION = 413,
    SQL_CURRENT = 414,
    SQL_EXCLUDE = 415,
    SQL_FOLLOWING = 416,
    SQL_GROUPS = 417,
    SQL_NO = 418,
    SQL_OTHERS = 419,
    SQL_PRECEDING = 420,
    SQL_RANGE = 421,
    SQL_ROWS = 422,
    SQL_TIES = 423,
    SQL_UNBOUNDED = 424,
    SQL_WINDOW = 425,
    SQL_ATTACH = 426,
    SQL_DETACH = 427,
    SQL_DATABASE = 428,
    SQL_INDEXED = 429,
    SQL_CAST = 430,
    SQL_SAVEPOINT = 431,
    SQL_RELEASE = 432,
    SQL_VACUUM = 433,
    SQL_TRANSACTION = 434,
    SQL_DEFFERED = 435,
    SQL_EXCLUSIVE = 436,
    SQL_IMEDIATE = 437,
    SQL_COMMIT = 438,
    SQL_GLOB = 439,
    SQL_MATCH = 440,
    SQL_REGEX = 441,
    SQL_NOTHING = 442,
    SQL_NULLS = 443,
    SQL_LAST = 444,
    SQL_FIRST = 445,
    SQL_DO = 446,
    SQL_COLLATE = 447,
    SQL_EQUALS = 448,
    SQL_NOTEQUALS = 449,
    SQL_LESS = 450,
    SQL_GREATER = 451,
    SQL_LESSEQ = 452,
    SQL_GREATEREQ = 453,
    SQL_NOTNULL = 454,
    SQL_UMINUS = 455
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
#line 95 "bison_parser.y" /* yacc.c:1921  */
union HSQL_STYPE
{
#line 95 "bison_parser.y" /* yacc.c:1921  */

    double fval;
    int64_t ival;
    char* sval;
    uintmax_t uval;
    bool bval;

    Program* program_t;
    StatementList* statement_list_t;
    Statement* statement_t;
    PreparableStatement* preparable_statement_t;
    OptionalHints* optional_hints_t;
    HintList* hint_list_t;
    Hint* hint_t;
    PrepareStatement* prepare_statement_t;
    PrepareTargetQuery* prepare_target_query_t;
    ExecuteStatement* execute_statement_t;
    ImportStatement* import_statement_t;
    ImportFileType* import_file_type_t;
    FilePath* file_path_t;
    TableRefCommaList* table_ref_commalist_t;
    ShowStatement* show_statement_t;
    CreateStatement* create_statement_t;
    OptNotExists* opt_not_exists_t;
    ColumnDefCommaList* column_def_comma_list_t;
    ColumnDef* column_def_t;
    ColumnType* column_type_t;
    //OptColumnNullable* opt_column_nullable_t;
    DropStatement* drop_statement_t;
    OptExists* opt_exists_t;
    DeleteStatement* delete_statement_t;
    InsertStatement* insert_statement_t;
    OptColumnList* opt_column_list_t;
    UpdateStatement* update_statement_t;
    UpdateClauseCommalist* update_clause_commalist_t;
    UpdateClause* update_clause_t;
    SelectStatement* select_statement_t;
    SelectWithParen* select_with_paren_t;
    SelectParenOrClause* select_paren_or_clause_t;
    SelectNoParen* select_no_paren_t;
    SetOperator* set_operator_t;
    SetType* set_type_t;
    OptAll* opt_all_t;
    IdentCommaList* ident_commalist_t;
    SelectClause* select_clause_t;
    OptDistinct* opt_distinct_t;
    SelectList* select_list_t;
    OptFromClause* opt_from_clause_t;
    FromClause* from_clause_t;
    OptWhere* opt_where_t;
    OptGroup* opt_group_t;
    OptHaving* opt_having_t;
    OptOrder* opt_order_t;
    OrderList* order_list_t;
    OrderDesc* order_desc_t;
    OptOrderType* opt_order_type_t;
    OptTop* opt_top_t;
    OptLimit* opt_limit_t;
    ExprList* expr_list_t;
    OptLiteralList* opt_literal_list_t;
    LiteralList* literal_list_t;
    ExprAlias* expr_alias_t;
    Expr* expr_t;
    Operand* operand_t;
    ScalarExpr* scalar_expr_t;
    UnaryExpr* unary_expr_t;
    BinaryExpr* binary_expr_t;
    LogicExpr* logic_expr_t;
    InExpr* in_expr_t;
    CompExpr * comp_expr_t;
    CaseExpr* case_expr_t;
    CaseClause* case_clause_t;
    CaseList* case_list_t;
    ExistsExpr* exists_expr_t;
    FunctionExpr* function_expr_t;
    ExtractExpr* extract_expr_t;
    DatetimeField* datetime_field_t;
    ArrayExpr* array_expr_t;
    ArrayIndex* array_index_t;
    BetweenExpr* between_expr_t;
    ColumnName* column_name_t;
    Literal* literal_t;
    StringLiteral* string_literal_t;
    BoolLiteral* bool_literal_t;
    NumLiteral* num_literal_t;
    IntLiteral* int_literal_t;
    NullLiteral* null_literal_t;
    ParamExpr* param_expr_t;
    TableRef* table_ref_t;
    TableRefAtomic* table_ref_atomic_t;
    NonjoinTableRefAtomic* nonjoin_table_ref_atomic_t;
    TableRefName* table_ref_name_t;
    TableRefNameNoAlias* table_ref_name_no_alias_t;
    TableName* table_name_t;
    TableAlias* table_alias_t;
    OptTableAlias* opt_table_alias_t;
    Alias* alias_t;
    OptAlias* opt_alias_t;
    OptWithClause* opt_with_clause_t;
    WithClause* with_clause_t;
    WithDescriptionList* with_description_list_t;
    WithDescription* with_description_t;
    JoinClause* join_clause_t;
    OptJoinType* opt_join_type_t;
    JoinCondition* join_condition_t;
    OptSemicolon* opt_semicolon_t;
    Identifier* identifier_t;
    Cmd * cmd_t;
    CmdAttach * cmd_attach_t;
    CmdDetach * cmd_detach_t;
    CmdReindex * cmd_reindex_t;
    CmdAnalyze * cmd_analyze_t;
    CmdPragma * cmd_pragma_t;
    PragmaKey * pragma_key_t;
    PragmaValue * pragma_value_t;
    PragmaName * pragma_name_t;
    SchemaName * schema_name_t;
    OptColumnArglist*	opt_column_arglist_t;
	ColumnArglist*	column_arglist_t;
	ColumnArg*	column_arg_t;
	OptOnConflict*	opt_on_conflict_t;
	ResolveType*	resolve_type_t;
	OptAutoinc*	opt_autoinc_t;
	OptUnique*	opt_unique_t;
	IndexName*	index_name_t;
	TriggerDeclare*	trigger_declare_t;
	OptTmp*	opt_tmp_t;
	TriggerName*	trigger_name_t;
	OptTriggerTime*	opt_trigger_time_t;
	TriggerEvent*	trigger_event_t;
	OptOfColumnList*	opt_of_column_list_t;
	OptForEach*	opt_for_each_t;
	OptWhen*	opt_when_t;
	TriggerCmdList*	trigger_cmd_list_t;
	TriggerCmd*	trigger_cmd_t;
	ModuleName*	module_name_t;
	OptOverClause*	opt_over_clause_t;
	OptFilterClause*	opt_filter_clause_t;
	WindowClause*	window_clause_t;
	WindowDefnList*	window_defn_list_t;
	WindowDefn*	window_defn_t;
	Window*	window_t;
	OptBaseWindowName*	opt_base_window_name_t;
	OptFrame*	opt_frame_t;
	RangeOrRows*	range_or_rows_t;
	FrameBoundS*	frame_bound_s_t;
	FrameBoundE*	frame_bound_e_t;
	FrameBound*	frame_bound_t;
	OptFrameExclude*	opt_frame_exclude_t;
	FrameExclude*	frame_exclude_t;
    InsertType * insert_type_t;
    SuperList * super_list_t;
    JoinKw* join_kw_t;

    TablePrefix * table_prefix_t;
    JoinOp * join_op_t;
    OptIndex * opt_index_t;
    OptOn * opt_on_t;
    OptUsing * opt_using_t;

    CastExpr * cast_expr_t;
    AlterStatement * alter_statement_t;
    OptColumn * opt_column_t;
    CmdRelease * cmd_release_t;
    SavepointName * savepoint_name_t;
    VacuumStatement * vacuum_statement_t;
    OptSchemaName * opt_schema_name_t;
    RollbackStatement * rollback_statement_t;
    OptTransaction * opt_transaction_t;
    OptToSavepoint * opt_to_savepoint_t;
    BeginStatement * begin_statement_t;
    CommitStatement * commit_statement_t;
    UpsertClause * upsert_clause_t;
    IndexedColumnList * indexed_column_list_t;
    IndexedColumn * indexed_column_t;
    OptCollate * opt_collate_t;
    AssignList * assign_list_t;
    OptNull * opt_null_t;
    AssignClause * assign_clause_t;
    ColumnNameList * column_name_list_t;
    CollationName * collation_name_t;
    OptUpsertClause * opt_upsert_clause_t;

    std::vector<char*>* str_vec;
    std::vector<TableRef*>* table_vec;
    std::vector<ColumnDef*>* column_vec;
    std::vector<UpdateClause*>* update_vec;
    std::vector<Expr*>* expr_vec;
    std::vector<OrderDesc*>* order_vec;
    std::vector<WithDescription*>* with_description_vec;

#line 488 "bison_parser.h" /* yacc.c:1921  */
};
#line 95 "bison_parser.y" /* yacc.c:1921  */
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (Program * result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
