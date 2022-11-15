/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* First part of user prologue.  */
#line 1 "bison_parser.y" /* yacc.c:337  */

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>


int yyerror(YYLTYPE* llocp, Program * result, yyscan_t scanner, const char *msg) {
    return 0;
}


#line 104 "bison_parser.cpp" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
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
#line 32 "bison_parser.y" /* yacc.c:352  */

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

#line 172 "bison_parser.cpp" /* yacc.c:352  */

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
#line 95 "bison_parser.y" /* yacc.c:352  */
union HSQL_STYPE
{
#line 95 "bison_parser.y" /* yacc.c:352  */

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

#line 577 "bison_parser.cpp" /* yacc.c:352  */
};
#line 95 "bison_parser.y" /* yacc.c:352  */
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



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  149
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1218

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  218
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  163
/* YYNRULES -- Number of rules.  */
#define YYNRULES  416
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  776

#define YYUNDEFTOK  2
#define YYMAXUTOK   455

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   207,     2,     2,
     212,   213,   205,   203,   216,   204,   214,   206,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   215,
     196,   193,   197,   217,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   210,     2,   211,   208,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   194,   195,
     198,   199,   200,   201,   202,   209
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   573,   573,   582,   586,   593,   599,   605,   611,   620,
     621,   622,   623,   624,   625,   626,   627,   628,   629,   633,
     638,   646,   654,   659,   665,   674,   675,   679,   680,   684,
     690,   699,   704,   712,   713,   717,   718,   719,   720,   721,
     722,   726,   732,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   751,   759,   764,   772,   777,   782,   790,
     796,   804,   809,   816,   821,   826,   831,   839,   844,   853,
     854,   857,   861,   867,   873,   885,   889,   896,   905,   910,
     919,   924,   932,   936,   940,   947,   955,   959,   966,   978,
     983,   988,   992,   996,  1002,  1016,  1024,  1033,  1039,  1053,
    1062,  1066,  1080,  1084,  1090,  1105,  1111,  1119,  1129,  1134,
    1148,  1156,  1164,  1172,  1187,  1201,  1209,  1218,  1227,  1228,
    1232,  1236,  1250,  1251,  1255,  1259,  1260,  1261,  1262,  1266,
    1267,  1268,  1272,  1273,  1277,  1278,  1282,  1283,  1287,  1288,
    1292,  1293,  1294,  1295,  1299,  1304,  1305,  1309,  1313,  1320,
    1331,  1332,  1336,  1340,  1347,  1348,  1349,  1356,  1357,  1358,
    1359,  1364,  1365,  1369,  1370,  1371,  1372,  1373,  1377,  1378,
    1383,  1384,  1385,  1386,  1387,  1388,  1392,  1395,  1396,  1406,
    1414,  1422,  1428,  1436,  1445,  1446,  1455,  1465,  1480,  1495,
    1513,  1516,  1523,  1524,  1525,  1529,  1530,  1540,  1549,  1553,
    1559,  1573,  1579,  1585,  1599,  1600,  1604,  1605,  1609,  1616,
    1628,  1636,  1637,  1638,  1642,  1643,  1647,  1658,  1672,  1676,
    1677,  1681,  1685,  1693,  1703,  1704,  1708,  1715,  1723,  1727,
    1728,  1729,  1733,  1734,  1738,  1739,  1743,  1744,  1745,  1749,
    1750,  1754,  1755,  1756,  1757,  1762,  1763,  1767,  1774,  1775,
    1779,  1784,  1785,  1789,  1795,  1799,  1800,  1803,  1804,  1808,
    1809,  1813,  1817,  1818,  1819,  1824,  1829,  1836,  1837,  1838,
    1839,  1840,  1841,  1848,  1852,  1858,  1863,  1869,  1873,  1880,
    1888,  1889,  1890,  1891,  1892,  1893,  1897,  1898,  1899,  1900,
    1901,  1902,  1903,  1904,  1905,  1906,  1910,  1918,  1919,  1923,
    1929,  1935,  1941,  1947,  1956,  1957,  1958,  1959,  1960,  1961,
    1962,  1963,  1964,  1965,  1966,  1967,  1968,  1969,  1973,  1974,
    1978,  1979,  1980,  1981,  1987,  1988,  1989,  1990,  1994,  1995,
    1999,  2000,  2004,  2005,  2006,  2007,  2008,  2009,  2010,  2014,
    2022,  2035,  2036,  2042,  2046,  2047,  2052,  2061,  2062,  2063,
    2064,  2065,  2066,  2070,  2074,  2078,  2082,  2083,  2084,  2085,
    2089,  2090,  2091,  2092,  2093,  2097,  2101,  2102,  2106,  2107,
    2111,  2115,  2119,  2131,  2142,  2153,  2162,  2174,  2180,  2186,
    2187,  2188,  2189,  2195,  2207,  2208,  2209,  2213,  2214,  2218,
    2219,  2224,  2231,  2232,  2243,  2248,  2249,  2257,  2258,  2262,
    2266,  2270,  2277,  2291,  2292,  2293,  2294,  2295,  2296,  2297,
    2298,  2299,  2300,  2315,  2316,  2321,  2322
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "IDENTIFIER", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET",
  "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD",
  "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP",
  "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER",
  "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR",
  "DATE", "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT",
  "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW",
  "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND",
  "ASC", "CSV", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TBL",
  "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY",
  "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR",
  "TRUE", "FALSE", "PRAGMA", "REINDEX", "GENERATED", "ALWAYS", "CHECK",
  "CONFLICT", "IGNORE", "REPLACE", "ROLLBACK", "ABORT", "FAIL", "AUTOINCR",
  "BEGIN", "TRIGGER", "TEMP", "INSTEAD", "EACH", "ROW", "OVER", "FILTER",
  "PARTITION", "CURRENT", "EXCLUDE", "FOLLOWING", "GROUPS", "NO", "OTHERS",
  "PRECEDING", "RANGE", "ROWS", "TIES", "UNBOUNDED", "WINDOW", "ATTACH",
  "DETACH", "DATABASE", "INDEXED", "CAST", "SAVEPOINT", "RELEASE",
  "VACUUM", "TRANSACTION", "DEFFERED", "EXCLUSIVE", "IMEDIATE", "COMMIT",
  "GLOB", "MATCH", "REGEX", "NOTHING", "NULLS", "LAST", "FIRST", "DO",
  "COLLATE", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER",
  "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement", "cmd", "cmd_release",
  "savepoint_name", "cmd_pragma", "cmd_reindex", "cmd_analyze",
  "cmd_attach", "cmd_detach", "pragma_key", "pragma_value", "schema_name",
  "pragma_name", "preparable_statement", "rollback_statement",
  "opt_transaction", "opt_to_savepoint", "vacuum_statement",
  "opt_schema_name", "begin_statement", "commit_statement",
  "opt_upsert_clause", "upsert_clause", "indexed_column_list",
  "indexed_column", "opt_collate", "assign_list", "opt_null",
  "assign_clause", "column_name_list", "collation_name", "opt_hints",
  "hint_list", "hint", "prepare_statement", "prepare_target_query",
  "execute_statement", "import_statement", "import_file_type", "file_path",
  "show_statement", "alter_statement", "opt_column", "create_statement",
  "opt_unique", "index_name", "trigger_declare", "opt_tmp", "trigger_name",
  "opt_trigger_time", "trigger_event", "opt_of_column_list",
  "opt_for_each", "opt_when", "trigger_cmd_list", "trigger_cmd",
  "module_name", "opt_not_exists", "column_def_commalist", "column_def",
  "opt_column_arglist", "column_arglist", "column_arg", "opt_on_conflict",
  "resolve_type", "opt_autoinc", "column_type", "drop_statement",
  "opt_exists", "delete_statement", "truncate_statement",
  "insert_statement", "super_list", "insert_type", "opt_column_list",
  "update_statement", "update_clause_commalist", "update_clause",
  "select_statement", "select_with_paren", "select_paren_or_clause",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "window_clause", "windowdefn_list", "windowdefn",
  "window", "opt_base_window_name", "opt_frame", "range_or_rows",
  "frame_bound_s", "frame_bound_e", "frame_bound", "opt_frame_exclude",
  "frame_exclude", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "cast_expr", "scalar_expr", "unary_expr", "binary_expr",
  "logic_expr", "in_expr", "case_expr", "case_list", "exists_expr",
  "comp_expr", "function_expr", "opt_over_clause", "opt_filter_clause",
  "extract_expr", "datetime_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "param_expr", "table_ref", "table_prefix", "join_op", "opt_index",
  "opt_on", "opt_using", "table_ref_name_no_alias", "table_name", "alias",
  "opt_alias", "opt_with_clause", "with_clause", "with_description_list",
  "with_description", "join_kw", "opt_semicolon", "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,    61,   448,   449,    60,    62,   450,   451,
     452,   453,   454,    43,    45,    42,    47,    37,    94,   455,
      91,    93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -542

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-542)))

#define YYTABLE_NINF -414

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-414)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     907,    36,    83,    83,    95,   118,    83,   230,   -13,    79,
     128,    83,   208,   190,    67,   294,   111,   305,    83,  -542,
     111,   369,   522,    45,    37,   349,   111,   355,   158,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,   283,  -542,  -542,
    -542,  -542,   283,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,   321,  -542,  -542,     9,  -542,   397,   182,  -542,
    -542,   205,   339,  -542,   373,  -542,   334,   334,  -542,   395,
     324,   313,    83,   370,   392,   367,  -542,    83,   372,   372,
     372,    83,  -542,   381,   319,  -542,  -542,  -542,   289,   -64,
     327,  -542,  -542,   362,   111,   111,   111,  -542,  -542,   226,
    -542,  -542,   331,   343,   541,  -542,    22,   350,  -542,  -542,
     669,   357,   374,  -542,   567,  -542,   342,   703,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,   349,  -542,  -542,   549,  -542,  -542,   478,  -542,  -542,
     823,  -542,   488,  -542,  -542,    83,   463,     9,    68,  -542,
     219,  -542,   581,    15,   584,   334,   476,    83,    83,   334,
     204,   334,   519,  -542,   513,  -542,  -542,  -542,  -542,  -542,
    -542,   597,    42,   572,    83,    83,   610,  -542,   403,   294,
     265,   265,   612,    39,  -542,  -542,  -542,  -542,    17,    26,
     569,   399,   669,   312,   225,   409,   374,   938,   669,   388,
     669,   154,   410,   -68,   669,   349,   669,   374,  -542,   374,
      -7,   412,    20,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   616,  -542,  -542,   622,  -542,   414,   419,   616,   620,
     424,   426,  -542,  -542,  -542,     9,   535,   525,     9,   274,
    -542,   434,   432,  -542,  -542,  -542,    83,   609,   -38,   419,
     647,   202,   437,  -542,  -542,  -542,  -542,   649,   669,  -542,
     622,   462,   -45,  -542,    55,   623,  -542,  -542,  -542,   289,
     442,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,   448,  -542,  -542,   549,  -542,  -542,   506,   669,  -542,
    -542,   456,  -542,  -542,  -542,  -542,  -542,  -542,   585,    -9,
     286,   669,   669,  -542,   569,   579,   155,  -542,   391,   349,
     396,  -542,  -542,  -542,  -542,   570,   911,   971,   374,   467,
     567,  -542,   586,   472,   971,   971,   971,   971,   971,   971,
     971,  1008,  1008,  1008,  1008,   154,   154,    27,    27,    27,
     -67,   473,  -542,  -542,   679,   681,   237,  -542,   669,  -542,
    -542,  -542,   617,  -542,  -542,  -542,   669,   617,   669,   624,
    -542,  -542,    15,   611,  -542,   573,   588,   688,   575,  -542,
     574,  -542,   481,  -542,  -542,    23,   141,   618,   669,   597,
    -542,  -542,    83,    28,   688,   649,  -542,  -542,   487,   544,
     270,  -542,   669,   669,   669,  -542,   314,   320,   492,  -542,
     669,   697,  -542,  -542,  -542,   406,   374,   971,   567,   493,
     292,  -542,  -542,   496,   302,  -542,  -542,   306,   500,   589,
     629,   499,   274,   501,  -542,   287,   274,   141,   670,   278,
    -542,   717,   638,  -542,   406,   307,  -542,   588,    83,  -542,
    -542,  -542,   600,   417,    83,   141,  -542,  -542,   511,   602,
    -542,  -542,   654,    11,  -542,   506,   -52,   141,   366,  -542,
     669,  -542,  -542,  -542,  -542,   520,  -542,  -542,   521,  -542,
    -542,  -542,   518,   938,   523,   341,  -542,  -542,    15,  -542,
     679,  -542,   731,    15,   -30,   595,  -542,  -542,  -542,   519,
    -542,  -542,   669,  -542,  -542,   552,  -542,   669,   669,  -542,
     529,   622,   309,  -542,   688,  -542,   531,  -542,  -542,  -542,
     621,   625,  -542,    28,   669,  -542,   744,   544,  -542,  -542,
     141,   746,   748,  -542,  -542,  -542,   345,  -542,  -542,   346,
     543,  -542,    94,    41,    13,   693,  -542,   156,  -542,   141,
     141,   688,  -542,   645,   635,   635,   667,   551,   626,   553,
    -542,   309,  -542,  -542,   681,   681,  -542,    83,  -542,   -51,
    -542,   555,   114,  -542,   556,   557,  -542,  -542,    15,   -20,
     669,  -542,  -542,  -542,  -542,   695,   702,  -542,   704,  -542,
    -542,    44,   569,   -73,   655,   606,  -542,  -542,   361,    14,
     634,  -542,  -542,   635,   669,   660,   669,  -542,   368,   564,
     671,  -542,  -542,   664,   163,  -542,  -542,   377,   672,  -542,
     383,  -542,     1,  -542,  -542,  -542,    47,  -542,   576,    33,
     669,   -44,   669,   781,  -542,  -542,   635,   392,  -542,   -23,
     578,    32,   519,   632,   686,   669,  -542,  -542,  -542,  -542,
     238,  -542,    28,   519,   669,   787,    14,   707,  -542,   674,
     674,   389,   619,   675,   676,     0,   680,   587,  -542,   652,
    -542,  -542,   669,  -542,  -542,   653,   669,  -542,   -47,   272,
     656,   637,   644,  -542,   296,   -41,  -542,   103,  -542,   627,
    -542,  -542,  -542,  -542,  -542,   676,   676,   674,  -542,    28,
     669,   732,   669,  -542,   598,   781,  -542,  -542,    38,  -542,
     141,   163,   706,  -542,  -542,   124,  -542,  -542,  -542,    28,
    -542,   669,    28,   -14,   732,   732,   676,  -542,   141,   601,
    -542,   141,   744,  -542,  -542,  -542,   429,  -542,   659,   651,
    -542,  -542,  -542,   141,  -542,   694,  -542,  -542,  -542,   732,
     681,   604,   658,   644,  -542,  -542,  -542,    28,  -542,   390,
    -542,  -542,  -542,   -41,  -542,  -542
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     398,     0,     0,    27,     0,     0,     0,   119,     0,     0,
     192,     0,     0,     0,     0,     0,    55,     0,    25,   193,
      55,    55,     0,     0,     0,    62,    55,     0,   414,     3,
       8,    14,     9,    10,    11,    12,    13,    90,    15,    16,
      17,    18,    90,    51,    44,     7,    52,    45,    50,    47,
      48,    46,     0,    49,    43,     0,   397,     0,   392,   187,
      28,    97,     0,   104,     0,   118,   146,   146,   122,     0,
       0,     0,     0,     0,     0,     0,   391,     0,   185,   185,
     185,     0,   102,     0,   399,   400,    54,    68,    42,    22,
       0,    33,    26,    58,    55,    55,    55,    63,   365,   356,
     368,   370,     0,     0,     0,   371,     0,     0,   366,   367,
       0,     0,     0,   358,     0,   372,     0,   280,   285,   288,
     289,   290,   282,   284,   291,   283,   304,   292,   293,   294,
     287,   281,   297,   298,   360,   361,   362,   369,   363,   364,
      41,     0,    31,    21,     0,    20,    61,    60,    67,     1,
     398,     2,     0,     6,     5,     0,   266,     0,   201,   202,
     258,   181,     0,   276,     0,   146,     0,     0,     0,   146,
     398,   146,   252,   100,     0,   163,   164,   165,   166,   167,
     194,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,    53,    64,    66,    65,   246,     0,
       0,     0,     0,     0,     0,     0,     0,   300,     0,     0,
       0,   299,     0,     0,     0,     0,     0,     0,   301,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    19,     0,     4,     0,   196,     0,   246,
       0,     0,   212,   213,   211,     0,   215,     0,     0,   272,
     393,     0,   275,   277,    96,    95,     0,     0,     0,   196,
       0,   398,     0,   143,   142,   141,   140,     0,     0,   186,
       0,     0,   252,   198,   109,   109,   184,   179,   180,   124,
       0,   183,   402,   401,    37,    40,    39,    38,    23,    36,
      35,     0,    42,    34,     0,    56,   245,   345,     0,   357,
     359,     0,   347,   348,   349,   350,   351,   352,     0,     0,
       0,     0,     0,   326,     0,     0,     0,   273,   396,     0,
       0,   295,   286,   318,    29,   319,     0,   311,     0,     0,
       0,   302,     0,   314,   313,   315,   316,   317,   332,   333,
     334,   335,   336,   337,   338,   306,   305,   308,   307,   309,
     310,     0,    59,   101,     0,     0,     0,   265,     0,   205,
     204,   206,   258,   207,   214,   210,     0,   258,     0,     0,
     208,    98,     0,     0,   145,     0,   398,     0,     0,   120,
       0,   117,     0,   138,   124,   128,   251,     0,     0,     0,
     197,   108,     0,     0,     0,     0,    24,    57,     0,   343,
       0,   330,     0,     0,     0,   324,     0,     0,     0,   353,
       0,     0,   395,   279,    30,   178,     0,   312,     0,     0,
       0,   303,   354,    93,     0,    91,   415,     0,     0,    70,
     249,   247,   272,   257,   259,   264,   272,   268,   270,   267,
     278,     0,     0,   112,   178,     0,   147,   398,     0,   139,
     125,   126,     0,     0,     0,   200,   199,   105,   356,     0,
     107,   182,     0,     0,   339,   345,     0,   328,     0,   327,
       0,   331,   274,   394,   171,     0,   174,   173,     0,   172,
     177,   170,     0,   355,     0,     0,   322,   320,     0,    89,
       0,   195,     0,     0,    70,     0,   189,    69,   378,   252,
     248,   203,     0,   263,   262,    84,   209,     0,     0,   144,
     115,     0,   151,   111,     0,   113,     0,   127,   129,   130,
     133,     0,    99,     0,     0,   342,   225,   343,   346,   325,
     329,     0,     0,   296,   323,   321,     0,    92,   416,     0,
       0,   188,     0,   250,     0,   254,   260,     0,   261,   271,
     269,     0,   110,     0,   162,   162,     0,     0,     0,     0,
     149,   150,   153,   148,     0,     0,   131,     0,   106,     0,
     224,     0,   258,   340,     0,     0,    94,   190,     0,     0,
       0,   412,   411,   403,   409,   407,   410,   380,   405,   379,
     377,     0,   378,   396,     0,   216,    83,    82,     0,   264,
       0,   157,   154,   162,     0,     0,     0,   152,     0,   132,
     135,   344,   341,     0,   228,   175,   176,     0,     0,    71,
       0,    75,    79,   406,   408,   404,     0,   381,     0,     0,
       0,   386,     0,     0,   217,   116,   162,     0,   155,     0,
       0,     0,   252,     0,   137,     0,   231,   229,   230,   223,
       0,   191,     0,   252,     0,     0,   264,     0,   382,   396,
     396,     0,     0,     0,   388,   256,     0,   218,   219,   169,
     161,   159,     0,   160,   114,     0,     0,   121,   258,     0,
       0,     0,   240,   232,     0,   252,    80,     0,    86,     0,
      76,    88,    78,    77,   383,   388,   388,   396,   385,     0,
       0,   390,     0,   253,     0,     0,   168,   156,     0,   134,
     136,   228,     0,   238,   233,     0,   226,   237,   236,     0,
      72,     0,     0,     0,   390,   390,   388,   384,   387,     0,
     373,   255,   225,   220,   158,   222,     0,   243,     0,     0,
     244,   239,    81,    85,    87,     0,    73,   375,   376,   390,
       0,     0,     0,   240,   234,   242,   241,     0,   374,     0,
     221,   235,   227,   252,   389,    74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -542,  -542,  -542,   677,  -542,  -542,  -125,  -542,  -542,  -542,
    -542,  -542,  -542,   630,    -1,   628,  -542,  -542,   385,  -542,
    -542,  -542,  -542,  -542,   318,  -542,  -542,   162,  -542,    66,
    -542,   105,  -542,  -542,   793,  -542,   337,  -542,  -542,  -542,
    -542,  -542,  -269,  -542,  -542,   558,  -542,  -542,  -542,  -542,
    -542,  -237,  -542,  -542,  -542,  -542,  -542,  -542,   571,  -542,
     -15,   279,  -354,  -542,  -542,   275,  -298,   200,  -542,   394,
    -542,   386,  -124,  -542,  -111,  -542,  -542,   582,   -94,  -542,
     451,  -162,   -16,   594,  -104,   696,  -542,  -542,   352,  -542,
    -542,   138,   112,  -542,   136,  -542,   171,  -542,   115,    99,
    -542,   614,  -542,  -542,  -542,  -280,  -542,  -542,  -365,  -542,
     353,  -538,  -542,   -17,  -303,  -542,  -201,   444,   -22,   -28,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,   663,  -542,  -542,
    -542,   330,   400,  -542,  -542,  -542,  -542,  -542,  -397,  -160,
    -177,  -542,   421,  -130,  -542,  -542,   268,  -542,  -542,  -542,
    -432,  -417,  -542,    -2,  -542,  -349,  -542,  -542,  -542,   682,
    -542,  -542,  -541
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,    31,   145,    32,    33,    34,
      35,    36,    89,   298,    90,    91,    37,    38,    87,   194,
      39,   147,    40,    41,   506,   507,   630,   631,   666,   695,
     558,   696,   697,   702,   153,   434,   435,    42,   265,    43,
      44,   174,   362,    45,    46,   403,    47,    69,   390,    70,
      71,   291,   463,   531,   576,   654,   687,   271,   272,   520,
     167,   455,   456,   570,   571,   572,   611,   180,   717,   492,
      48,   184,    49,    50,    51,   504,    52,   366,    53,   282,
     283,    54,   371,   372,   159,   255,   256,   375,   160,   644,
     677,   678,   581,   582,   659,   660,   692,   763,   693,   726,
     751,   308,   440,   509,   510,   279,   605,   713,   259,   443,
     444,   515,   249,   380,   326,   261,   262,   327,   328,   117,
     118,   119,   120,   121,   122,   123,   124,   204,   125,   126,
     127,   474,   409,   128,   318,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   553,   554,   600,   674,
     711,   740,    75,    59,   422,   423,    55,    56,    84,    85,
     601,   151,   437
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     116,    60,   400,   263,    63,   410,   469,   442,   276,    76,
     212,   397,   446,   299,   299,   535,    92,    58,    98,   243,
     100,   101,   142,   257,   146,    98,    99,   100,   101,   306,
     309,   278,   468,   618,   619,   278,   628,   430,   214,   158,
     395,   143,   755,   143,   712,   421,   273,   385,   636,   140,
     470,   667,   168,   251,   214,   214,   460,   216,   591,   274,
     156,   223,    57,   205,   103,   441,   591,   363,   305,   672,
     172,   646,    72,   216,   216,   182,   275,   252,   207,   187,
     386,   461,   203,   214,   211,   338,    81,    58,   209,   401,
     413,   284,   213,   592,   505,   513,   311,   214,   593,    61,
     104,   592,   216,   363,   594,   595,   593,   214,   253,   276,
     105,   361,   594,   595,   339,   341,   216,   105,   367,   596,
      82,   514,    62,   597,   598,   495,   216,   596,   703,   190,
     673,   597,   598,   342,   637,   206,   578,   668,   214,   640,
     242,   250,   254,   241,   214,   332,   285,   273,   191,   107,
     266,   108,   109,   247,   270,   223,   277,   216,   108,   109,
     274,   538,   621,   216,    73,   268,   269,   629,   471,   420,
     573,   399,   292,   756,   387,   729,   462,   275,   207,   407,
     319,   402,   287,   288,   257,   290,   550,   747,   330,   336,
     681,   337,   333,   665,   335,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   144,   334,   304,   420,   624,   141,   769,
     418,   157,   450,   536,   453,   602,   112,   113,   252,   555,
     307,   310,   115,   113,   114,   240,   429,   241,     8,   115,
       8,    98,    99,   100,   101,   683,   670,   214,    10,   599,
      10,   744,   562,    74,   641,   689,   396,   599,    11,   253,
      11,    64,   439,    78,   383,   698,   216,   612,    98,   294,
     100,   101,   623,   734,   735,    98,    99,   100,   101,   102,
     103,    77,   223,   748,    65,   589,   295,   749,   156,   257,
      86,    79,   750,   254,   438,   525,   731,   546,    83,   416,
     417,   296,   549,    66,   759,    15,   590,    15,   321,    88,
     427,   391,   737,   102,   103,   648,   104,   757,   758,   732,
     705,   706,   378,   721,   494,   656,   518,   322,   424,   657,
     658,    67,   698,   105,   323,   754,   563,   671,   263,   675,
     379,    80,   768,   263,   363,   606,   607,    19,   679,    19,
     104,   106,   688,   140,   445,   149,   447,   449,   736,   237,
     238,   239,   240,   564,   241,   107,   419,   105,   513,   414,
     698,   420,   684,   150,   108,   109,   465,    98,    99,   100,
     101,  -123,    68,   699,   214,   106,   152,   627,   322,   297,
     476,   477,   478,   214,   514,   415,   162,   690,   493,   107,
     467,   161,   214,   216,   565,    93,    97,   691,   108,   109,
     155,   148,   216,   111,   202,   730,   103,   163,   214,   480,
     214,   216,   566,   479,   164,   511,   214,   567,   263,   516,
     484,   690,    98,    99,   100,   101,   485,   216,   198,   216,
     199,   691,   112,   113,   486,   216,   165,   111,   214,   568,
     114,   569,   104,   528,   166,   115,   526,   727,   540,   169,
     215,   728,   532,   529,   171,   185,   186,   216,   487,   105,
     102,   103,   214,   530,   170,   539,   112,   113,   173,   195,
     196,   197,   181,   475,   114,   488,   420,   206,   193,   115,
     445,   216,   183,   775,   214,   559,   560,   214,   638,   188,
     489,   107,   214,   -41,   490,   497,   329,   104,   420,   421,
     108,   109,   579,   216,   425,   499,   216,   491,   500,   501,
     523,   216,   502,   524,   105,    98,    99,   100,   101,   312,
     313,   314,   315,   316,   317,   189,   175,   176,   177,   178,
     179,   192,   106,   200,    98,    99,   100,   101,    86,    94,
      95,    96,   603,   143,   545,   201,   107,   420,   586,   587,
     208,   382,   382,   102,   103,   108,   109,   244,   632,   210,
      98,    99,   100,   101,   645,   620,   246,   524,   112,   113,
     248,   652,   102,   103,   502,   260,   114,   264,   690,   267,
     661,   115,   649,   382,   651,   278,   663,   280,   762,   664,
     104,   281,   707,   774,   111,   420,   502,   373,   102,   103,
     373,   300,   300,   286,   289,   157,   302,   105,   156,   104,
     156,   324,   101,   331,   340,    98,   364,    98,    99,   100,
     101,   365,   306,   112,   113,   106,   105,   369,   694,   370,
     374,   114,   632,   202,   376,   104,   115,   381,   382,   107,
     384,   389,   393,   394,   106,   398,   405,   401,   108,   109,
     718,   406,   105,   408,   720,   102,   103,   694,   107,   411,
     412,   338,    98,    99,   100,   101,   214,   108,   109,   428,
     106,   431,   241,   433,   432,   436,   451,   257,   738,   452,
     741,    15,   454,   457,   107,   110,   459,   111,   458,   472,
     473,   483,   104,   108,   109,   481,   496,   464,   498,   753,
     102,   103,   503,   505,   508,   420,   111,   512,   517,   105,
     217,   519,   521,   527,   694,   199,   112,   113,   533,   448,
     534,   543,   541,   542,   114,   548,   544,   106,   552,   115,
     557,   561,   111,   574,   575,   112,   113,   104,   580,   577,
     218,   107,   584,   114,   585,   588,   604,   609,   115,   610,
     108,   109,   613,   614,   105,   616,   633,   615,   622,   625,
     626,   112,   113,   634,   642,   635,   643,   647,   650,   114,
     502,   653,   106,   655,   115,   676,   685,   662,   686,   669,
     682,   701,   421,   708,   709,   219,   107,   704,   714,   111,
     710,   716,   724,   715,   725,   108,   109,   739,   719,   767,
     742,   723,   746,   760,   765,   766,   220,   770,   733,   771,
     303,   301,   551,  -413,   221,   222,   700,   245,   112,   113,
       1,   223,   224,   773,   752,   154,   114,   547,     2,     3,
     608,   115,   392,   404,   111,     4,   617,   680,   522,     5,
     466,   388,   377,   743,   761,     6,   258,   745,     7,     8,
     722,   764,   772,   368,   482,   556,   320,   583,     9,    10,
     639,   293,     0,   112,   113,   537,     0,     0,     0,    11,
       0,   114,    12,     0,     0,     0,   115,   225,   226,   227,
       0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
     232,     0,     0,   233,   234,    13,   235,   236,   237,   238,
     239,   240,     0,   241,     1,     0,     0,     0,     0,     0,
      14,     0,     2,     3,     0,     0,    15,     0,     0,     4,
       0,     0,    16,     5,     0,     0,     0,     0,     0,     6,
       0,     0,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,     0,     0,     0,     0,   218,     0,
       0,    17,    18,    11,     0,     0,    12,     0,    19,    20,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,     0,     0,    13,
       0,     0,     0,     0,    22,    23,     0,     0,     0,     0,
      24,    25,     0,   219,    14,     0,    26,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    16,   426,   218,     0,
       0,     0,     0,     0,   325,     0,     0,     0,     0,     0,
     219,     0,     0,   222,     0,     0,     0,     0,     0,   223,
     224,     0,     0,     0,     0,    17,    18,     0,     0,     0,
       0,   325,    19,    20,     0,   218,     0,    21,     0,     0,
     222,     0,     0,  -414,     0,     0,   223,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
       0,     0,     0,     0,    24,    25,     0,     0,     0,     0,
      26,     0,     0,   222,     0,   225,   226,   227,     0,   223,
    -414,     0,     0,     0,   228,   229,   230,   231,   232,     0,
       0,   233,   234,     0,   235,   236,   237,   238,   239,   240,
       0,   241,   225,   226,   227,     0,     0,     0,     0,     0,
     222,   228,   229,   230,   231,   232,   223,     0,   233,   234,
       0,   235,   236,   237,   238,   239,   240,     0,   241,     0,
       0,     0,     0,     0,     0,  -414,  -414,  -414,     0,     0,
       0,     0,     0,     0,  -414,  -414,  -414,   231,   232,     0,
       0,   233,   234,     0,   235,   236,   237,   238,   239,   240,
       0,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -414,  -414,     0,     0,  -414,  -414,
       0,   235,   236,   237,   238,   239,   240,     0,   241
};

static const yytype_int16 yycheck[] =
{
      22,     3,   282,   163,     6,   308,   403,   372,   170,    11,
     114,   280,   377,   190,   191,     4,    18,     4,     3,   144,
       5,     6,    23,    70,    25,     3,     4,     5,     6,    12,
       4,    76,     4,   574,   575,    76,    56,   340,   106,    55,
     277,     4,    56,     4,    44,   118,   170,    85,     4,     4,
     404,     4,    67,   157,   106,   106,    33,   125,    25,   170,
      51,   128,    26,    41,    42,   368,    25,   244,   193,   113,
      72,   609,    85,   125,   125,    77,   170,     9,   106,    81,
     118,    58,   104,   106,   112,    92,    19,     4,   110,    34,
      99,    49,   114,    60,   124,    81,   200,   106,    65,     4,
      78,    60,   125,   280,    71,    72,    65,   106,    40,   271,
      95,   241,    71,    72,   121,    95,   125,    95,   248,    86,
      53,   107,     4,    90,    91,   428,   125,    86,   666,   193,
     174,    90,    91,   113,    90,   113,   533,    90,   106,   212,
     141,   157,    74,   210,   106,   213,   104,   271,   212,   127,
     165,   136,   137,   155,   169,   128,   171,   125,   136,   137,
     271,   213,   213,   125,    85,   167,   168,   187,   405,   216,
     524,   216,   188,   187,   212,   216,   153,   271,   206,   304,
     202,   126,   184,   185,    70,   186,   216,    63,   210,   217,
     213,   219,   214,   192,   216,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   176,   215,   176,   216,   582,   173,   760,
     324,   212,   382,   212,   386,   212,   204,   205,     9,   509,
     213,   205,   217,   205,   212,   208,   340,   210,    36,   217,
      36,     3,     4,     5,     6,   213,   213,   106,    46,   216,
      46,   213,   521,   125,   603,    17,   278,   216,    56,    40,
      56,    31,   366,    73,   266,   662,   125,   565,     3,     4,
       5,     6,   158,   705,   706,     3,     4,     5,     6,    41,
      42,    73,   128,   159,    54,   191,    21,   163,    51,    70,
     179,   101,   168,    74,    57,   457,   193,   498,     4,   321,
     322,    36,   503,    73,   736,   103,   212,   103,    83,     4,
     338,   109,   709,    41,    42,   613,    78,   734,   735,   216,
     669,   670,    48,   688,   428,   162,    48,   102,   329,   166,
     167,   101,   729,    95,   109,   732,    27,   640,   498,   642,
      66,   151,   759,   503,   521,   189,   190,   145,   646,   145,
      78,   113,   655,     4,   376,     0,   378,   379,   707,   205,
     206,   207,   208,    54,   210,   127,   211,    95,    81,    83,
     767,   216,   652,   215,   136,   137,   398,     3,     4,     5,
       6,   151,   152,   663,   106,   113,   103,   588,   102,   124,
     412,   413,   414,   106,   107,   109,   214,   159,   426,   127,
     402,     4,   106,   125,    95,    20,    21,   169,   136,   137,
      89,    26,   125,   175,   102,   695,    42,   212,   106,    99,
     106,   125,   113,   109,    85,   442,   106,   118,   588,   446,
      24,   159,     3,     4,     5,     6,    30,   125,   212,   125,
     214,   169,   204,   205,    38,   125,    73,   175,   106,   140,
     212,   142,    78,    36,   120,   217,   458,   161,   480,    64,
     118,   165,   464,    46,   151,    79,    80,   125,    62,    95,
      41,    42,   106,    56,   150,   109,   204,   205,   108,    94,
      95,    96,   115,   213,   212,    79,   216,   113,   126,   217,
     512,   125,   120,   773,   106,   517,   518,   106,   602,   118,
      94,   127,   106,   214,    98,   213,   118,    78,   216,   118,
     136,   137,   534,   125,   118,   213,   125,   111,   216,   213,
     213,   125,   216,   216,    95,     3,     4,     5,     6,   130,
     131,   132,   133,   134,   135,   216,   144,   145,   146,   147,
     148,   214,   113,   212,     3,     4,     5,     6,   179,   180,
     181,   182,   554,     4,   213,   212,   127,   216,   213,   213,
     210,   216,   216,    41,    42,   136,   137,    89,   590,   212,
       3,     4,     5,     6,   213,   577,    88,   216,   204,   205,
     117,   213,    41,    42,   216,     4,   212,     3,   159,   113,
     213,   217,   614,   216,   616,    76,   213,    84,   169,   216,
      78,     4,   213,   213,   175,   216,   216,   255,    41,    42,
     258,   190,   191,    41,     4,   212,     4,    95,    51,    78,
      51,   212,     6,   213,   212,     3,   212,     3,     4,     5,
       6,   212,    12,   204,   205,   113,    95,   213,   660,   213,
     105,   212,   664,   102,   119,    78,   217,   213,   216,   127,
      41,     4,   215,     4,   113,   193,   214,    34,   136,   137,
     682,   213,    95,   157,   686,    41,    42,   689,   127,   213,
      85,    92,     3,     4,     5,     6,   106,   136,   137,   212,
     113,    95,   210,     4,   211,     4,    75,    70,   710,   116,
     712,   103,     4,   118,   127,   173,   215,   175,   124,   212,
     156,     4,    78,   136,   137,   213,   213,    89,   212,   731,
      41,    42,   212,   124,    85,   216,   175,   216,    48,    95,
      17,     4,    84,   123,   746,   214,   204,   205,   126,   105,
      76,   213,   212,   212,   212,     4,   213,   113,   143,   217,
     188,   212,   175,   212,   123,   204,   205,    78,     4,   124,
      47,   127,     6,   212,     6,   212,    63,   112,   217,   124,
     136,   137,    95,   212,    95,   212,    71,   141,   213,   213,
     213,   204,   205,    71,   119,    71,   170,   143,   118,   212,
     216,   110,   113,   119,   217,     4,   154,   115,   102,   213,
     212,     4,   118,   174,   119,    92,   127,    90,   118,   175,
     124,   149,   165,   216,   160,   136,   137,    75,   155,   115,
     212,   155,   106,   212,   155,   164,   113,   213,   191,   161,
     192,   191,   504,     0,   121,   122,   664,   150,   204,   205,
       7,   128,   129,   767,   729,    42,   212,   500,    15,    16,
     561,   217,   271,   285,   175,    22,   571,   647,   454,    26,
     399,   269,   258,   715,   742,    32,   160,   721,    35,    36,
     689,   746,   763,   249,   420,   512,   203,   537,    45,    46,
     602,   189,    -1,   204,   205,   475,    -1,    -1,    -1,    56,
      -1,   212,    59,    -1,    -1,    -1,   217,   184,   185,   186,
      -1,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,   196,
     197,    -1,    -1,   200,   201,    82,   203,   204,   205,   206,
     207,   208,    -1,   210,     7,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    15,    16,    -1,    -1,   103,    -1,    -1,    22,
      -1,    -1,   109,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    47,    -1,
      -1,   138,   139,    56,    -1,    -1,    59,    -1,   145,   146,
      -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,
     177,   178,    -1,    92,    97,    -1,   183,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,   109,   106,    47,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,   128,
     129,    -1,    -1,    -1,    -1,   138,   139,    -1,    -1,    -1,
      -1,   113,   145,   146,    -1,    47,    -1,   150,    -1,    -1,
     122,    -1,    -1,    92,    -1,    -1,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,   172,
      -1,    -1,    -1,    -1,   177,   178,    -1,    -1,    -1,    -1,
     183,    -1,    -1,   122,    -1,   184,   185,   186,    -1,   128,
     129,    -1,    -1,    -1,   193,   194,   195,   196,   197,    -1,
      -1,   200,   201,    -1,   203,   204,   205,   206,   207,   208,
      -1,   210,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,
     122,   193,   194,   195,   196,   197,   128,    -1,   200,   201,
      -1,   203,   204,   205,   206,   207,   208,    -1,   210,    -1,
      -1,    -1,    -1,    -1,    -1,   184,   185,   186,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,    -1,
      -1,   200,   201,    -1,   203,   204,   205,   206,   207,   208,
      -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   197,    -1,    -1,   200,   201,
      -1,   203,   204,   205,   206,   207,   208,    -1,   210
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    16,    22,    26,    32,    35,    36,    45,
      46,    56,    59,    82,    97,   103,   109,   138,   139,   145,
     146,   150,   171,   172,   177,   178,   183,   219,   220,   221,
     222,   223,   225,   226,   227,   228,   229,   234,   235,   238,
     240,   241,   255,   257,   258,   261,   262,   264,   288,   290,
     291,   292,   294,   296,   299,   374,   375,    26,     4,   371,
     371,     4,     4,   371,    31,    54,    73,   101,   152,   265,
     267,   268,    85,    85,   125,   370,   371,    73,    73,   101,
     151,    19,    53,     4,   376,   377,   179,   236,     4,   230,
     232,   233,   371,   236,   180,   181,   182,   236,     3,     4,
       5,     6,    41,    42,    78,    95,   113,   127,   136,   137,
     173,   175,   204,   205,   212,   217,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   346,   347,   348,   351,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
       4,   173,   232,     4,   176,   224,   232,   239,   236,     0,
     215,   379,   103,   252,   252,    89,    51,   212,   300,   302,
     306,     4,   214,   212,    85,    73,   120,   278,   278,    64,
     150,   151,   371,   108,   259,   144,   145,   146,   147,   148,
     285,   115,   371,   120,   289,   289,   289,   371,   118,   216,
     193,   212,   214,   126,   237,   236,   236,   236,   212,   214,
     212,   212,   102,   336,   345,    41,   113,   337,   210,   336,
     212,   337,   302,   336,   106,   118,   125,    17,    47,    92,
     113,   121,   122,   128,   129,   184,   185,   186,   193,   194,
     195,   196,   197,   200,   201,   203,   204,   205,   206,   207,
     208,   210,   232,   224,    89,   221,    88,   371,   117,   330,
     300,   302,     9,    40,    74,   303,   304,    70,   303,   326,
       4,   333,   334,   357,     3,   256,   278,   113,   371,   371,
     278,   275,   276,   290,   292,   296,   299,   278,    76,   323,
      84,     4,   297,   298,    49,   104,    41,   371,   371,     4,
     232,   269,   300,   377,     4,    21,    36,   124,   231,   358,
     360,   231,     4,   233,   176,   224,    12,   213,   319,     4,
     205,   302,   130,   131,   132,   133,   134,   135,   352,   336,
     345,    83,   102,   109,   212,   113,   332,   335,   336,   118,
     336,   213,   213,   336,   232,   336,   337,   337,    92,   121,
     212,    95,   113,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   361,   260,   358,   212,   212,   295,   361,   319,   213,
     213,   300,   301,   306,   105,   305,   119,   301,    48,    66,
     331,   213,   216,   371,    41,    85,   118,   212,   295,     4,
     266,   109,   276,   215,     4,   269,   336,   260,   193,   216,
     323,    34,   126,   263,   263,   214,   213,   224,   157,   350,
     332,   213,    85,    99,    83,   109,   336,   336,   302,   211,
     216,   118,   372,   373,   232,   118,   106,   337,   212,   302,
     332,    95,   211,     4,   253,   254,     4,   380,    57,   302,
     320,   332,   326,   327,   328,   336,   326,   336,   105,   336,
     357,    75,   116,   299,     4,   279,   280,   118,   124,   215,
      33,    58,   153,   270,    89,   336,   298,   371,     4,   356,
     280,   269,   212,   156,   349,   213,   336,   336,   336,   109,
      99,   213,   335,     4,    24,    30,    38,    62,    79,    94,
      98,   111,   287,   337,   302,   332,   213,   213,   212,   213,
     216,   213,   216,   212,   293,   124,   242,   243,    85,   321,
     322,   331,   216,    81,   107,   329,   331,    48,    48,     4,
     277,    84,   287,   213,   216,   299,   371,   123,    36,    46,
      56,   271,   371,   126,    76,     4,   212,   350,   213,   109,
     336,   212,   212,   213,   213,   213,   334,   254,     4,   334,
     216,   242,   143,   364,   365,   323,   328,   188,   248,   336,
     336,   212,   260,    27,    54,    95,   113,   118,   140,   142,
     281,   282,   283,   280,   212,   123,   272,   124,   356,   336,
       4,   310,   311,   349,     6,     6,   213,   213,   212,   191,
     212,    25,    60,    65,    71,    72,    86,    90,    91,   216,
     366,   378,   212,   371,    63,   324,   189,   190,   279,   112,
     124,   284,   284,    95,   212,   141,   212,   283,   380,   380,
     371,   213,   213,   158,   326,   213,   213,   334,    56,   187,
     244,   245,   336,    71,    71,    71,     4,    90,   302,   364,
     212,   373,   119,   170,   307,   213,   329,   143,   284,   336,
     118,   336,   213,   110,   273,   119,   162,   166,   167,   312,
     313,   213,   115,   213,   216,   192,   246,     4,    90,   213,
     213,   332,   113,   174,   367,   332,     4,   308,   309,   284,
     285,   213,   212,   213,   323,   154,   102,   274,   332,    17,
     159,   169,   314,   316,   336,   247,   249,   250,   356,   323,
     245,     4,   251,   329,    90,   373,   373,   213,   174,   119,
     124,   368,    44,   325,   118,   216,   149,   286,   336,   155,
     336,   326,   314,   155,   165,   160,   317,   161,   165,   216,
     323,   193,   216,   191,   368,   368,   373,   356,   336,    75,
     369,   336,   212,   309,   213,   312,   106,    63,   159,   163,
     168,   318,   249,   336,   356,    56,   187,   369,   369,   368,
     212,   310,   169,   315,   316,   155,   164,   115,   369,   380,
     213,   161,   317,   247,   213,   323
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   218,   219,   220,   220,   221,   221,   221,   221,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   223,
     223,   224,   225,   225,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   230,   230,   231,   231,   231,   231,   231,
     231,   232,   233,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   235,   236,   236,   237,   237,   237,   238,
     238,   239,   239,   240,   240,   240,   240,   241,   241,   242,
     242,   243,   243,   243,   243,   244,   244,   245,   246,   246,
     247,   247,   248,   248,   248,   249,   250,   250,   251,   252,
     252,   253,   253,   254,   254,   255,   256,   257,   257,   258,
     259,   260,   261,   261,   261,   262,   262,   262,   263,   263,
     264,   264,   264,   264,   264,   264,   264,   264,   265,   265,
     266,   267,   268,   268,   269,   270,   270,   270,   270,   271,
     271,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     276,   276,   276,   276,   277,   278,   278,   279,   279,   280,
     281,   281,   282,   282,   283,   283,   283,   283,   283,   283,
     283,   284,   284,   285,   285,   285,   285,   285,   286,   286,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   288,
     288,   288,   288,   288,   289,   289,   290,   291,   292,   292,
     293,   293,   294,   294,   294,   295,   295,   296,   297,   297,
     298,   299,   299,   299,   300,   300,   301,   301,   302,   302,
     303,   304,   304,   304,   305,   305,   306,   306,   307,   308,
     308,   309,   310,   310,   311,   311,   312,   312,   312,   313,
     313,   313,   314,   314,   315,   315,   316,   316,   316,   317,
     317,   318,   318,   318,   318,   319,   319,   320,   321,   321,
     322,   323,   323,   324,   324,   325,   325,   326,   326,   327,
     327,   328,   329,   329,   329,   330,   330,   331,   331,   331,
     331,   331,   331,   332,   332,   333,   333,   334,   334,   335,
     336,   336,   336,   336,   336,   336,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   338,   339,   339,   340,
     340,   340,   340,   340,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   342,   342,
     343,   343,   343,   343,   344,   344,   344,   344,   345,   345,
     346,   346,   347,   347,   347,   347,   347,   347,   347,   348,
     348,   349,   349,   349,   350,   350,   351,   352,   352,   352,
     352,   352,   352,   353,   354,   355,   356,   356,   356,   356,
     357,   357,   357,   357,   357,   358,   359,   359,   360,   360,
     361,   362,   363,   364,   364,   364,   364,   365,   365,   366,
     366,   366,   366,   366,   367,   367,   367,   368,   368,   369,
     369,   370,   371,   371,   372,   373,   373,   374,   374,   375,
     376,   376,   377,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   379,   379,   380,   380
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     2,     4,     5,     1,     2,     1,     2,     4,
       5,     2,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     0,     2,     3,     0,     4,
       2,     1,     0,     2,     3,     3,     3,     2,     2,     1,
       0,     4,     7,     8,    11,     1,     3,     3,     2,     0,
       1,     3,     2,     2,     0,     3,     1,     3,     1,     5,
       0,     1,     3,     1,     4,     4,     1,     2,     5,     7,
       1,     1,     2,     3,     2,     6,     8,     6,     1,     0,
       8,     7,     6,     7,    11,     7,    10,     5,     1,     0,
       1,    10,     1,     0,     1,     1,     1,     2,     0,     1,
       1,     2,     2,     0,     3,     0,     2,     0,     2,     3,
       1,     1,     1,     1,     1,     3,     0,     1,     3,     3,
       1,     0,     2,     1,     2,     3,     5,     2,     6,     4,
       4,     3,     0,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     4,     4,     1,     0,     4,
       4,     3,     6,     4,     2,     0,     4,     2,     7,     6,
       3,     5,     1,     1,     3,     3,     0,     5,     1,     3,
       3,     2,     2,     6,     3,     3,     1,     1,     3,     5,
       2,     1,     1,     1,     1,     0,     7,     8,     2,     1,
       3,     5,     6,     3,     1,     0,     3,     6,     0,     1,
       1,     1,     1,     2,     1,     2,     2,     2,     2,     2,
       0,     2,     2,     1,     1,     1,     0,     1,     1,     0,
       2,     2,     0,     4,     0,     2,     0,     3,     0,     1,
       3,     3,     1,     1,     0,     2,     0,     2,     2,     4,
       2,     4,     0,     1,     3,     1,     0,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     6,     1,     1,     2,
       2,     2,     3,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     3,     3,     3,
       5,     6,     5,     6,     4,     6,     3,     5,     4,     5,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     5,
       7,     4,     2,     0,     5,     0,     6,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     8,     7,     7,     2,     0,     1,
       1,     2,     3,     4,     3,     2,     0,     2,     0,     4,
       0,     1,     1,     3,     2,     1,     0,     1,     0,     2,
       1,     3,     3,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program * result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program * result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Program * result, yyscan_t scanner)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Program * result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* STRING  */
#line 497 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2224 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* IDENTIFIER  */
#line 497 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2230 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 496 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2236 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 496 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2242 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* input  */
#line 496 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2248 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* statement_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).statement_list_t)!=NULL)((*yyvaluep).statement_list_t)->deep_delete(); }
#line 2254 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).statement_t)!=NULL)((*yyvaluep).statement_t)->deep_delete(); }
#line 2260 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* cmd  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cmd_t)!=NULL)((*yyvaluep).cmd_t)->deep_delete(); }
#line 2266 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* cmd_release  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cmd_release_t)!=NULL)((*yyvaluep).cmd_release_t)->deep_delete(); }
#line 2272 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* savepoint_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).savepoint_name_t)!=NULL)((*yyvaluep).savepoint_name_t)->deep_delete(); }
#line 2278 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* cmd_pragma  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cmd_pragma_t)!=NULL)((*yyvaluep).cmd_pragma_t)->deep_delete(); }
#line 2284 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* cmd_reindex  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cmd_reindex_t)!=NULL)((*yyvaluep).cmd_reindex_t)->deep_delete(); }
#line 2290 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* cmd_analyze  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cmd_analyze_t)!=NULL)((*yyvaluep).cmd_analyze_t)->deep_delete(); }
#line 2296 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* cmd_attach  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cmd_attach_t)!=NULL)((*yyvaluep).cmd_attach_t)->deep_delete(); }
#line 2302 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* cmd_detach  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cmd_detach_t)!=NULL)((*yyvaluep).cmd_detach_t)->deep_delete(); }
#line 2308 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* pragma_key  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).pragma_key_t)!=NULL)((*yyvaluep).pragma_key_t)->deep_delete(); }
#line 2314 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* pragma_value  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).pragma_value_t)!=NULL)((*yyvaluep).pragma_value_t)->deep_delete(); }
#line 2320 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* schema_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).schema_name_t)!=NULL)((*yyvaluep).schema_name_t)->deep_delete(); }
#line 2326 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* pragma_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).pragma_name_t)!=NULL)((*yyvaluep).pragma_name_t)->deep_delete(); }
#line 2332 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* preparable_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).preparable_statement_t)!=NULL)((*yyvaluep).preparable_statement_t)->deep_delete(); }
#line 2338 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* rollback_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).rollback_statement_t)!=NULL)((*yyvaluep).rollback_statement_t)->deep_delete(); }
#line 2344 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* opt_transaction  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_transaction_t)!=NULL)((*yyvaluep).opt_transaction_t)->deep_delete(); }
#line 2350 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* opt_to_savepoint  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_to_savepoint_t)!=NULL)((*yyvaluep).opt_to_savepoint_t)->deep_delete(); }
#line 2356 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* vacuum_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).vacuum_statement_t)!=NULL)((*yyvaluep).vacuum_statement_t)->deep_delete(); }
#line 2362 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* opt_schema_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_schema_name_t)!=NULL)((*yyvaluep).opt_schema_name_t)->deep_delete(); }
#line 2368 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* begin_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).begin_statement_t)!=NULL)((*yyvaluep).begin_statement_t)->deep_delete(); }
#line 2374 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* commit_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).commit_statement_t)!=NULL)((*yyvaluep).commit_statement_t)->deep_delete(); }
#line 2380 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* opt_upsert_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_upsert_clause_t)!=NULL)((*yyvaluep).opt_upsert_clause_t)->deep_delete(); }
#line 2386 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* upsert_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).upsert_clause_t)!=NULL)((*yyvaluep).upsert_clause_t)->deep_delete(); }
#line 2392 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* indexed_column_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).indexed_column_list_t)!=NULL)((*yyvaluep).indexed_column_list_t)->deep_delete(); }
#line 2398 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* indexed_column  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).indexed_column_t)!=NULL)((*yyvaluep).indexed_column_t)->deep_delete(); }
#line 2404 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* opt_collate  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_collate_t)!=NULL)((*yyvaluep).opt_collate_t)->deep_delete(); }
#line 2410 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* assign_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).assign_list_t)!=NULL)((*yyvaluep).assign_list_t)->deep_delete(); }
#line 2416 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* opt_null  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_null_t)!=NULL)((*yyvaluep).opt_null_t)->deep_delete(); }
#line 2422 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* assign_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).assign_clause_t)!=NULL)((*yyvaluep).assign_clause_t)->deep_delete(); }
#line 2428 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* column_name_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_list_t)!=NULL)((*yyvaluep).column_name_list_t)->deep_delete(); }
#line 2434 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* collation_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).collation_name_t)!=NULL)((*yyvaluep).collation_name_t)->deep_delete(); }
#line 2440 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* opt_hints  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).optional_hints_t)!=NULL)((*yyvaluep).optional_hints_t)->deep_delete(); }
#line 2446 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* hint_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).hint_list_t)!=NULL)((*yyvaluep).hint_list_t)->deep_delete(); }
#line 2452 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* hint  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).hint_t)!=NULL)((*yyvaluep).hint_t)->deep_delete(); }
#line 2458 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* prepare_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).prepare_statement_t)!=NULL)((*yyvaluep).prepare_statement_t)->deep_delete(); }
#line 2464 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* prepare_target_query  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).prepare_target_query_t)!=NULL)((*yyvaluep).prepare_target_query_t)->deep_delete(); }
#line 2470 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* execute_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).execute_statement_t)!=NULL)((*yyvaluep).execute_statement_t)->deep_delete(); }
#line 2476 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* import_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).import_statement_t)!=NULL)((*yyvaluep).import_statement_t)->deep_delete(); }
#line 2482 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* import_file_type  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).import_file_type_t)!=NULL)((*yyvaluep).import_file_type_t)->deep_delete(); }
#line 2488 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* file_path  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).file_path_t)!=NULL)((*yyvaluep).file_path_t)->deep_delete(); }
#line 2494 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* show_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).show_statement_t)!=NULL)((*yyvaluep).show_statement_t)->deep_delete(); }
#line 2500 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* alter_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_statement_t)!=NULL)((*yyvaluep).alter_statement_t)->deep_delete(); }
#line 2506 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* opt_column  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_t)!=NULL)((*yyvaluep).opt_column_t)->deep_delete(); }
#line 2512 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* create_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_statement_t)!=NULL)((*yyvaluep).create_statement_t)->deep_delete(); }
#line 2518 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* opt_unique  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_unique_t)!=NULL)((*yyvaluep).opt_unique_t)->deep_delete(); }
#line 2524 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* index_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).index_name_t)!=NULL)((*yyvaluep).index_name_t)->deep_delete(); }
#line 2530 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* trigger_declare  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_declare_t)!=NULL)((*yyvaluep).trigger_declare_t)->deep_delete(); }
#line 2536 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* opt_tmp  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_tmp_t)!=NULL)((*yyvaluep).opt_tmp_t)->deep_delete(); }
#line 2542 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* trigger_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_name_t)!=NULL)((*yyvaluep).trigger_name_t)->deep_delete(); }
#line 2548 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* opt_trigger_time  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_trigger_time_t)!=NULL)((*yyvaluep).opt_trigger_time_t)->deep_delete(); }
#line 2554 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* trigger_event  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_event_t)!=NULL)((*yyvaluep).trigger_event_t)->deep_delete(); }
#line 2560 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* opt_of_column_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_of_column_list_t)!=NULL)((*yyvaluep).opt_of_column_list_t)->deep_delete(); }
#line 2566 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* opt_for_each  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_for_each_t)!=NULL)((*yyvaluep).opt_for_each_t)->deep_delete(); }
#line 2572 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 274: /* opt_when  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_when_t)!=NULL)((*yyvaluep).opt_when_t)->deep_delete(); }
#line 2578 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 275: /* trigger_cmd_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_cmd_list_t)!=NULL)((*yyvaluep).trigger_cmd_list_t)->deep_delete(); }
#line 2584 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 276: /* trigger_cmd  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_cmd_t)!=NULL)((*yyvaluep).trigger_cmd_t)->deep_delete(); }
#line 2590 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 277: /* module_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).module_name_t)!=NULL)((*yyvaluep).module_name_t)->deep_delete(); }
#line 2596 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 278: /* opt_not_exists  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_not_exists_t)!=NULL)((*yyvaluep).opt_not_exists_t)->deep_delete(); }
#line 2602 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 279: /* column_def_commalist  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_comma_list_t)!=NULL)((*yyvaluep).column_def_comma_list_t)->deep_delete(); }
#line 2608 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 280: /* column_def  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_t)!=NULL)((*yyvaluep).column_def_t)->deep_delete(); }
#line 2614 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 281: /* opt_column_arglist  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_arglist_t)!=NULL)((*yyvaluep).opt_column_arglist_t)->deep_delete(); }
#line 2620 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 282: /* column_arglist  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_arglist_t)!=NULL)((*yyvaluep).column_arglist_t)->deep_delete(); }
#line 2626 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 283: /* column_arg  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_arg_t)!=NULL)((*yyvaluep).column_arg_t)->deep_delete(); }
#line 2632 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 284: /* opt_on_conflict  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_conflict_t)!=NULL)((*yyvaluep).opt_on_conflict_t)->deep_delete(); }
#line 2638 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 285: /* resolve_type  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).resolve_type_t)!=NULL)((*yyvaluep).resolve_type_t)->deep_delete(); }
#line 2644 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 286: /* opt_autoinc  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_autoinc_t)!=NULL)((*yyvaluep).opt_autoinc_t)->deep_delete(); }
#line 2650 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 287: /* column_type  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_type_t)!=NULL)((*yyvaluep).column_type_t)->deep_delete(); }
#line 2656 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 288: /* drop_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_statement_t)!=NULL)((*yyvaluep).drop_statement_t)->deep_delete(); }
#line 2662 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 289: /* opt_exists  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_exists_t)!=NULL)((*yyvaluep).opt_exists_t)->deep_delete(); }
#line 2668 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 290: /* delete_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).delete_statement_t)!=NULL)((*yyvaluep).delete_statement_t)->deep_delete(); }
#line 2674 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 291: /* truncate_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).delete_statement_t)!=NULL)((*yyvaluep).delete_statement_t)->deep_delete(); }
#line 2680 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 292: /* insert_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_statement_t)!=NULL)((*yyvaluep).insert_statement_t)->deep_delete(); }
#line 2686 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 293: /* super_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).super_list_t)!=NULL)((*yyvaluep).super_list_t)->deep_delete(); }
#line 2692 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 294: /* insert_type  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_type_t)!=NULL)((*yyvaluep).insert_type_t)->deep_delete(); }
#line 2698 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 295: /* opt_column_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_list_t)!=NULL)((*yyvaluep).opt_column_list_t)->deep_delete(); }
#line 2704 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 296: /* update_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).update_statement_t)!=NULL)((*yyvaluep).update_statement_t)->deep_delete(); }
#line 2710 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 297: /* update_clause_commalist  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).update_clause_commalist_t)!=NULL)((*yyvaluep).update_clause_commalist_t)->deep_delete(); }
#line 2716 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 298: /* update_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).update_clause_t)!=NULL)((*yyvaluep).update_clause_t)->deep_delete(); }
#line 2722 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 299: /* select_statement  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_statement_t)!=NULL)((*yyvaluep).select_statement_t)->deep_delete(); }
#line 2728 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 300: /* select_with_paren  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_with_paren_t)!=NULL)((*yyvaluep).select_with_paren_t)->deep_delete(); }
#line 2734 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 301: /* select_paren_or_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_paren_or_clause_t)!=NULL)((*yyvaluep).select_paren_or_clause_t)->deep_delete(); }
#line 2740 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 302: /* select_no_paren  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_no_paren_t)!=NULL)((*yyvaluep).select_no_paren_t)->deep_delete(); }
#line 2746 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 303: /* set_operator  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).set_operator_t)!=NULL)((*yyvaluep).set_operator_t)->deep_delete(); }
#line 2752 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 304: /* set_type  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).set_type_t)!=NULL)((*yyvaluep).set_type_t)->deep_delete(); }
#line 2758 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 305: /* opt_all  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_all_t)!=NULL)((*yyvaluep).opt_all_t)->deep_delete(); }
#line 2764 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 306: /* select_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_clause_t)!=NULL)((*yyvaluep).select_clause_t)->deep_delete(); }
#line 2770 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 307: /* window_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_clause_t)!=NULL)((*yyvaluep).window_clause_t)->deep_delete(); }
#line 2776 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 308: /* windowdefn_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_defn_list_t)!=NULL)((*yyvaluep).window_defn_list_t)->deep_delete(); }
#line 2782 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 309: /* windowdefn  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_defn_t)!=NULL)((*yyvaluep).window_defn_t)->deep_delete(); }
#line 2788 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 310: /* window  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_t)!=NULL)((*yyvaluep).window_t)->deep_delete(); }
#line 2794 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 311: /* opt_base_window_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_base_window_name_t)!=NULL)((*yyvaluep).opt_base_window_name_t)->deep_delete(); }
#line 2800 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 312: /* opt_frame  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_frame_t)!=NULL)((*yyvaluep).opt_frame_t)->deep_delete(); }
#line 2806 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 313: /* range_or_rows  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).range_or_rows_t)!=NULL)((*yyvaluep).range_or_rows_t)->deep_delete(); }
#line 2812 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 314: /* frame_bound_s  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_s_t)!=NULL)((*yyvaluep).frame_bound_s_t)->deep_delete(); }
#line 2818 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 315: /* frame_bound_e  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_e_t)!=NULL)((*yyvaluep).frame_bound_e_t)->deep_delete(); }
#line 2824 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 316: /* frame_bound  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_t)!=NULL)((*yyvaluep).frame_bound_t)->deep_delete(); }
#line 2830 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 317: /* opt_frame_exclude  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_frame_exclude_t)!=NULL)((*yyvaluep).opt_frame_exclude_t)->deep_delete(); }
#line 2836 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 318: /* frame_exclude  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_exclude_t)!=NULL)((*yyvaluep).frame_exclude_t)->deep_delete(); }
#line 2842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 319: /* opt_distinct  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_distinct_t)!=NULL)((*yyvaluep).opt_distinct_t)->deep_delete(); }
#line 2848 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 320: /* select_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_list_t)!=NULL)((*yyvaluep).select_list_t)->deep_delete(); }
#line 2854 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 321: /* opt_from_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_from_clause_t)!=NULL)((*yyvaluep).opt_from_clause_t)->deep_delete(); }
#line 2860 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 322: /* from_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).from_clause_t)!=NULL)((*yyvaluep).from_clause_t)->deep_delete(); }
#line 2866 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 323: /* opt_where  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_where_t)!=NULL)((*yyvaluep).opt_where_t)->deep_delete(); }
#line 2872 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 324: /* opt_group  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_group_t)!=NULL)((*yyvaluep).opt_group_t)->deep_delete(); }
#line 2878 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 325: /* opt_having  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_having_t)!=NULL)((*yyvaluep).opt_having_t)->deep_delete(); }
#line 2884 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 326: /* opt_order  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_t)!=NULL)((*yyvaluep).opt_order_t)->deep_delete(); }
#line 2890 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 327: /* order_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_list_t)!=NULL)((*yyvaluep).order_list_t)->deep_delete(); }
#line 2896 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 328: /* order_desc  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_desc_t)!=NULL)((*yyvaluep).order_desc_t)->deep_delete(); }
#line 2902 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 329: /* opt_order_type  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_type_t)!=NULL)((*yyvaluep).opt_order_type_t)->deep_delete(); }
#line 2908 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 330: /* opt_top  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_top_t)!=NULL)((*yyvaluep).opt_top_t)->deep_delete(); }
#line 2914 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 331: /* opt_limit  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_limit_t)!=NULL)((*yyvaluep).opt_limit_t)->deep_delete(); }
#line 2920 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 332: /* expr_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_list_t)!=NULL)((*yyvaluep).expr_list_t)->deep_delete(); }
#line 2926 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 333: /* opt_literal_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_literal_list_t)!=NULL)((*yyvaluep).opt_literal_list_t)->deep_delete(); }
#line 2932 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 334: /* literal_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).literal_list_t)!=NULL)((*yyvaluep).literal_list_t)->deep_delete(); }
#line 2938 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 335: /* expr_alias  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_alias_t)!=NULL)((*yyvaluep).expr_alias_t)->deep_delete(); }
#line 2944 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 336: /* expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_t)!=NULL)((*yyvaluep).expr_t)->deep_delete(); }
#line 2950 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 337: /* operand  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).operand_t)!=NULL)((*yyvaluep).operand_t)->deep_delete(); }
#line 2956 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 338: /* cast_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cast_expr_t)!=NULL)((*yyvaluep).cast_expr_t)->deep_delete(); }
#line 2962 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 339: /* scalar_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).scalar_expr_t)!=NULL)((*yyvaluep).scalar_expr_t)->deep_delete(); }
#line 2968 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 340: /* unary_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).unary_expr_t)!=NULL)((*yyvaluep).unary_expr_t)->deep_delete(); }
#line 2974 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 341: /* binary_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).binary_expr_t)!=NULL)((*yyvaluep).binary_expr_t)->deep_delete(); }
#line 2980 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 342: /* logic_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).logic_expr_t)!=NULL)((*yyvaluep).logic_expr_t)->deep_delete(); }
#line 2986 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 343: /* in_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).in_expr_t)!=NULL)((*yyvaluep).in_expr_t)->deep_delete(); }
#line 2992 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 344: /* case_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_expr_t)!=NULL)((*yyvaluep).case_expr_t)->deep_delete(); }
#line 2998 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 345: /* case_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_list_t)!=NULL)((*yyvaluep).case_list_t)->deep_delete(); }
#line 3004 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 346: /* exists_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).exists_expr_t)!=NULL)((*yyvaluep).exists_expr_t)->deep_delete(); }
#line 3010 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 347: /* comp_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).comp_expr_t)!=NULL)((*yyvaluep).comp_expr_t)->deep_delete(); }
#line 3016 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 348: /* function_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).function_expr_t)!=NULL)((*yyvaluep).function_expr_t)->deep_delete(); }
#line 3022 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 349: /* opt_over_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_over_clause_t)!=NULL)((*yyvaluep).opt_over_clause_t)->deep_delete(); }
#line 3028 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 350: /* opt_filter_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_filter_clause_t)!=NULL)((*yyvaluep).opt_filter_clause_t)->deep_delete(); }
#line 3034 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 351: /* extract_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).extract_expr_t)!=NULL)((*yyvaluep).extract_expr_t)->deep_delete(); }
#line 3040 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 352: /* datetime_field  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).datetime_field_t)!=NULL)((*yyvaluep).datetime_field_t)->deep_delete(); }
#line 3046 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 353: /* array_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).array_expr_t)!=NULL)((*yyvaluep).array_expr_t)->deep_delete(); }
#line 3052 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 354: /* array_index  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).array_index_t)!=NULL)((*yyvaluep).array_index_t)->deep_delete(); }
#line 3058 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 355: /* between_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).between_expr_t)!=NULL)((*yyvaluep).between_expr_t)->deep_delete(); }
#line 3064 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 356: /* column_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_t)!=NULL)((*yyvaluep).column_name_t)->deep_delete(); }
#line 3070 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 357: /* literal  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).literal_t)!=NULL)((*yyvaluep).literal_t)->deep_delete(); }
#line 3076 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 358: /* string_literal  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).string_literal_t)!=NULL)((*yyvaluep).string_literal_t)->deep_delete(); }
#line 3082 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 359: /* bool_literal  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).bool_literal_t)!=NULL)((*yyvaluep).bool_literal_t)->deep_delete(); }
#line 3088 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 360: /* num_literal  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).num_literal_t)!=NULL)((*yyvaluep).num_literal_t)->deep_delete(); }
#line 3094 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 361: /* int_literal  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).int_literal_t)!=NULL)((*yyvaluep).int_literal_t)->deep_delete(); }
#line 3100 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 362: /* null_literal  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).null_literal_t)!=NULL)((*yyvaluep).null_literal_t)->deep_delete(); }
#line 3106 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 363: /* param_expr  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).param_expr_t)!=NULL)((*yyvaluep).param_expr_t)->deep_delete(); }
#line 3112 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 364: /* table_ref  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_ref_t)!=NULL)((*yyvaluep).table_ref_t)->deep_delete(); }
#line 3118 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 365: /* table_prefix  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_prefix_t)!=NULL)((*yyvaluep).table_prefix_t)->deep_delete(); }
#line 3124 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 366: /* join_op  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).join_op_t)!=NULL)((*yyvaluep).join_op_t)->deep_delete(); }
#line 3130 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 367: /* opt_index  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_t)!=NULL)((*yyvaluep).opt_index_t)->deep_delete(); }
#line 3136 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 368: /* opt_on  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_t)!=NULL)((*yyvaluep).opt_on_t)->deep_delete(); }
#line 3142 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 369: /* opt_using  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_using_t)!=NULL)((*yyvaluep).opt_using_t)->deep_delete(); }
#line 3148 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 370: /* table_ref_name_no_alias  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_ref_name_no_alias_t)!=NULL)((*yyvaluep).table_ref_name_no_alias_t)->deep_delete(); }
#line 3154 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 371: /* table_name  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_name_t)!=NULL)((*yyvaluep).table_name_t)->deep_delete(); }
#line 3160 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 372: /* alias  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alias_t)!=NULL)((*yyvaluep).alias_t)->deep_delete(); }
#line 3166 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 373: /* opt_alias  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_alias_t)!=NULL)((*yyvaluep).opt_alias_t)->deep_delete(); }
#line 3172 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 374: /* opt_with_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_with_clause_t)!=NULL)((*yyvaluep).opt_with_clause_t)->deep_delete(); }
#line 3178 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 375: /* with_clause  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).with_clause_t)!=NULL)((*yyvaluep).with_clause_t)->deep_delete(); }
#line 3184 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 376: /* with_description_list  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).with_description_list_t)!=NULL)((*yyvaluep).with_description_list_t)->deep_delete(); }
#line 3190 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 377: /* with_description  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).with_description_t)!=NULL)((*yyvaluep).with_description_t)->deep_delete(); }
#line 3196 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 378: /* join_kw  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).join_kw_t)!=NULL)((*yyvaluep).join_kw_t)->deep_delete(); }
#line 3202 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 379: /* opt_semicolon  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_semicolon_t)!=NULL)((*yyvaluep).opt_semicolon_t)->deep_delete(); }
#line 3208 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 380: /* ident_commalist  */
#line 536 "bison_parser.y" /* yacc.c:1257  */
      { if(((*yyvaluep).ident_commalist_t)!=NULL)((*yyvaluep).ident_commalist_t)->deep_delete(); }
#line 3214 "bison_parser.cpp" /* yacc.c:1257  */
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (Program * result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y" /* yacc.c:1431  */
{
    // Initialize
    yylloc.first_column = 0;
    yylloc.last_column = 0;
    yylloc.first_line = 0;
    yylloc.last_line = 0;
    yylloc.total_column = 0;
    yylloc.string_length = 0;
}

#line 3332 "bison_parser.cpp" /* yacc.c:1431  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 573 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.program_t) = NULL;
            result->statement_list_ = (yyvsp[-1].statement_list_t);
            result->opt_semicolon_ = (yyvsp[0].opt_semicolon_t);
        }
#line 3530 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 3:
#line 582 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.statement_list_t) = new StatementList();
            (yyval.statement_list_t)->v_statement_list_.push_back((yyvsp[0].statement_t));
        }
#line 3539 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 4:
#line 586 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyvsp[-2].statement_list_t)->v_statement_list_.push_back((yyvsp[0].statement_t));
            (yyval.statement_list_t) = (yyvsp[-2].statement_list_t);
        }
#line 3548 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 593 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.statement_t) = new Statement();
            (yyval.statement_t)->sub_type_ = CASE1;
            (yyval.statement_t)->prepare_statement_ = (yyvsp[-1].prepare_statement_t);
            (yyval.statement_t)->optional_hints_ = (yyvsp[0].optional_hints_t);
        }
#line 3559 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 599 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.statement_t) = new Statement();
            (yyval.statement_t)->sub_type_ = CASE0;
            (yyval.statement_t)->preparable_statement_ = (yyvsp[-1].preparable_statement_t);
            (yyval.statement_t)->optional_hints_ = (yyvsp[0].optional_hints_t);
        }
#line 3570 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 7:
#line 605 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.statement_t) = new Statement();
            (yyval.statement_t)->sub_type_ = CASE2;
            (yyval.statement_t)->show_statement_ = (yyvsp[0].show_statement_t);
        }
#line 3580 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 8:
#line 611 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.statement_t) = new Statement();
            (yyval.statement_t)->sub_type_ = CASE3;
            (yyval.statement_t)->cmd_ = (yyvsp[0].cmd_t);
    }
#line 3590 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 9:
#line 620 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].cmd_pragma_t);}
#line 3596 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 621 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].cmd_reindex_t);}
#line 3602 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 622 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].cmd_analyze_t);}
#line 3608 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 623 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].cmd_attach_t);}
#line 3614 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 624 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].cmd_detach_t);}
#line 3620 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 14:
#line 625 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].cmd_release_t);}
#line 3626 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 15:
#line 626 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].rollback_statement_t);}
#line 3632 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 627 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].vacuum_statement_t);}
#line 3638 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 628 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].begin_statement_t);}
#line 3644 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 18:
#line 629 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_t) = (yyvsp[0].commit_statement_t);}
#line 3650 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 19:
#line 633 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.cmd_release_t) = new CmdRelease();
            (yyval.cmd_release_t)->sub_type_ = CASE0;
            (yyval.cmd_release_t)->savepoint_name_ = (yyvsp[0].savepoint_name_t);
        }
#line 3660 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 20:
#line 638 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.cmd_release_t) = new CmdRelease();
            (yyval.cmd_release_t)->sub_type_ = CASE1;
            (yyval.cmd_release_t)->savepoint_name_ = (yyvsp[0].savepoint_name_t);
        }
#line 3670 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 21:
#line 646 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.savepoint_name_t) = new SavepointName();
            (yyval.savepoint_name_t)->id_ = new Identifier((yyvsp[0].sval), id_savepoint_name);
            free((yyvsp[0].sval));
        }
#line 3680 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 654 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.cmd_pragma_t) = new CmdPragma();
            (yyval.cmd_pragma_t)->sub_type_ = CASE0;
            (yyval.cmd_pragma_t)->pragma_key_ = (yyvsp[0].pragma_key_t);
        }
#line 3690 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 659 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.cmd_pragma_t) = new CmdPragma();
            (yyval.cmd_pragma_t)->sub_type_ = CASE1;
            (yyval.cmd_pragma_t)->pragma_key_ = (yyvsp[-2].pragma_key_t);
            (yyval.cmd_pragma_t)->pragma_value_ = (yyvsp[0].pragma_value_t);
    }
#line 3701 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 24:
#line 665 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.cmd_pragma_t) = new CmdPragma();
            (yyval.cmd_pragma_t)->sub_type_ = CASE2;
            (yyval.cmd_pragma_t)->pragma_key_ = (yyvsp[-3].pragma_key_t);
            (yyval.cmd_pragma_t)->pragma_value_ = (yyvsp[-1].pragma_value_t);
    }
#line 3712 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 674 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_reindex_t) = new CmdReindex(); (yyval.cmd_reindex_t)->sub_type_ = CASE0;}
#line 3718 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 26:
#line 675 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_reindex_t) = new CmdReindex(); (yyval.cmd_reindex_t)->sub_type_ = CASE1; (yyval.cmd_reindex_t)->table_name_ = (yyvsp[0].table_name_t); (yyval.cmd_reindex_t)->table_name_->table_name_->id_type_ = id_top_table_name;}
#line 3724 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 27:
#line 679 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_analyze_t) = new CmdAnalyze(); (yyval.cmd_analyze_t)->sub_type_ = CASE0;}
#line 3730 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 680 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.cmd_analyze_t) = new CmdAnalyze(); (yyval.cmd_analyze_t)->sub_type_ = CASE1; (yyval.cmd_analyze_t)->table_name_ = (yyvsp[0].table_name_t); (yyval.cmd_analyze_t)->table_name_->table_name_->id_type_ = id_top_table_name;}
#line 3736 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 29:
#line 684 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.cmd_attach_t) = new CmdAttach();
            (yyval.cmd_attach_t)->sub_type_ = CASE0;
            (yyval.cmd_attach_t)->expr_ = (yyvsp[-2].expr_t);
            (yyval.cmd_attach_t)->schema_name_ = (yyvsp[0].schema_name_t);
        }
#line 3747 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 30:
#line 690 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.cmd_attach_t) = new CmdAttach();
            (yyval.cmd_attach_t)->sub_type_ = CASE1;
            (yyval.cmd_attach_t)->expr_ = (yyvsp[-2].expr_t);
            (yyval.cmd_attach_t)->schema_name_ = (yyvsp[0].schema_name_t);
        }
#line 3758 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 699 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.cmd_detach_t) = new CmdDetach();
            (yyval.cmd_detach_t)->sub_type_ = CASE0;
            (yyval.cmd_detach_t)->schema_name_ = (yyvsp[0].schema_name_t);
        }
#line 3768 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 32:
#line 704 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.cmd_detach_t) = new CmdDetach();
            (yyval.cmd_detach_t)->sub_type_ = CASE1;
            (yyval.cmd_detach_t)->schema_name_ = (yyvsp[0].schema_name_t);
    }
#line 3778 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 33:
#line 712 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.pragma_key_t) = new PragmaKey(); (yyval.pragma_key_t)->sub_type_ = CASE0; (yyval.pragma_key_t)->pragma_name_ = (yyvsp[0].pragma_name_t);}
#line 3784 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 34:
#line 713 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.pragma_key_t) = new PragmaKey(); (yyval.pragma_key_t)->sub_type_ = CASE1; (yyval.pragma_key_t)->schema_name_ = (yyvsp[-2].schema_name_t); (yyval.pragma_key_t)->pragma_name_ = (yyvsp[0].pragma_name_t);}
#line 3790 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 35:
#line 717 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE0; (yyval.pragma_value_t)->num_literal_ = (yyvsp[0].num_literal_t);}
#line 3796 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 718 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE1; (yyval.pragma_value_t)->string_literal_ = (yyvsp[0].string_literal_t);}
#line 3802 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 719 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE2; (yyval.pragma_value_t)->id_ = new Identifier((yyvsp[0].sval), id_pragma_value); free((yyvsp[0].sval));}
#line 3808 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 720 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE2; (yyval.pragma_value_t)->id_ = new Identifier("ON", id_pragma_value); }
#line 3814 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 721 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE2; (yyval.pragma_value_t)->id_ = new Identifier("DELETE", id_pragma_value); }
#line 3820 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 722 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE2; (yyval.pragma_value_t)->id_ = new Identifier("DEFAULT", id_pragma_value); }
#line 3826 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 41:
#line 726 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.schema_name_t) = new SchemaName(); (yyval.schema_name_t)->id_ = new Identifier((yyvsp[0].sval), id_schema_name); free((yyvsp[0].sval));
            }
#line 3834 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 732 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.pragma_name_t) = new PragmaName(); (yyval.pragma_name_t)->id_ = new Identifier((yyvsp[0].sval), id_pragma_name); free((yyvsp[0].sval));}
#line 3840 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 738 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.preparable_statement_t) = (yyvsp[0].select_statement_t); }
#line 3846 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 739 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.preparable_statement_t) = (yyvsp[0].import_statement_t); }
#line 3852 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 45:
#line 740 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.preparable_statement_t) = (yyvsp[0].create_statement_t); }
#line 3858 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 741 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.preparable_statement_t) = (yyvsp[0].insert_statement_t); }
#line 3864 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 742 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.preparable_statement_t) = (yyvsp[0].delete_statement_t); }
#line 3870 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 743 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.preparable_statement_t) = (yyvsp[0].delete_statement_t); }
#line 3876 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 744 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.preparable_statement_t) = (yyvsp[0].update_statement_t); }
#line 3882 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 745 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.preparable_statement_t) = (yyvsp[0].drop_statement_t); }
#line 3888 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 746 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.preparable_statement_t) = (yyvsp[0].execute_statement_t); }
#line 3894 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 747 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.preparable_statement_t) = (yyvsp[0].alter_statement_t);}
#line 3900 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 751 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.rollback_statement_t) = new RollbackStatement();
            (yyval.rollback_statement_t)->opt_transaction_ = (yyvsp[-1].opt_transaction_t);
            (yyval.rollback_statement_t)->opt_to_savepoint_ = (yyvsp[0].opt_to_savepoint_t);
        }
#line 3910 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 759 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_transaction_t) = new OptTransaction();
            (yyval.opt_transaction_t)->sub_type_ = CASE0;
            (yyval.opt_transaction_t)->str_val_ = string("TRANSACTION");
        }
#line 3920 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 764 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_transaction_t) = new OptTransaction();
            (yyval.opt_transaction_t)->sub_type_ = CASE1;
            (yyval.opt_transaction_t)->str_val_ = string("");
        }
#line 3930 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 772 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_to_savepoint_t) = new OptToSavepoint();
            (yyval.opt_to_savepoint_t)->sub_type_ = CASE0;
            (yyval.opt_to_savepoint_t)->savepoint_name_ = (yyvsp[0].savepoint_name_t);
        }
#line 3940 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 777 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_to_savepoint_t) = new OptToSavepoint();
            (yyval.opt_to_savepoint_t)->sub_type_ = CASE1;
            (yyval.opt_to_savepoint_t)->savepoint_name_ = (yyvsp[0].savepoint_name_t);
        }
#line 3950 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 782 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_to_savepoint_t) = new OptToSavepoint();
            (yyval.opt_to_savepoint_t)->sub_type_ = CASE2;
        }
#line 3959 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 790 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.vacuum_statement_t) = new VacuumStatement();
            (yyval.vacuum_statement_t)->sub_type_ = CASE0;
            (yyval.vacuum_statement_t)->opt_schema_name_ = (yyvsp[-2].opt_schema_name_t);
            (yyval.vacuum_statement_t)->file_path_ = (yyvsp[0].file_path_t);
        }
#line 3970 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 60:
#line 796 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.vacuum_statement_t) = new VacuumStatement();
            (yyval.vacuum_statement_t)->sub_type_ = CASE1;
            (yyval.vacuum_statement_t)->opt_schema_name_ = (yyvsp[0].opt_schema_name_t);
        }
#line 3980 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 61:
#line 804 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_schema_name_t) = new OptSchemaName();
            (yyval.opt_schema_name_t)->sub_type_ = CASE0;
            (yyval.opt_schema_name_t)->schema_name_ = (yyvsp[0].schema_name_t);
        }
#line 3990 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 62:
#line 809 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_schema_name_t) = new OptSchemaName();
            (yyval.opt_schema_name_t)->sub_type_ = CASE1;
        }
#line 3999 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 63:
#line 816 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.begin_statement_t) = new BeginStatement();
            (yyval.begin_statement_t)->sub_type_ = CASE0;
            (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4009 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 64:
#line 821 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.begin_statement_t) = new BeginStatement();
            (yyval.begin_statement_t)->sub_type_ = CASE1;
            (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4019 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 65:
#line 826 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.begin_statement_t) = new BeginStatement();
            (yyval.begin_statement_t)->sub_type_ = CASE2;
            (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4029 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 66:
#line 831 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.begin_statement_t) = new BeginStatement();
            (yyval.begin_statement_t)->sub_type_ = CASE3;
            (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4039 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 67:
#line 839 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.commit_statement_t) = new CommitStatement();
            (yyval.commit_statement_t)->sub_type_ = CASE0;
            (yyval.commit_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4049 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 68:
#line 844 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.commit_statement_t) = new CommitStatement();
            (yyval.commit_statement_t)->sub_type_ = CASE1;
            (yyval.commit_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4059 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 69:
#line 853 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_upsert_clause_t) = new OptUpsertClause(); (yyval.opt_upsert_clause_t)->sub_type_ = CASE0; (yyval.opt_upsert_clause_t)->upsert_clause_ = (yyvsp[0].upsert_clause_t);}
#line 4065 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 70:
#line 854 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_upsert_clause_t) = new OptUpsertClause(); (yyval.opt_upsert_clause_t)->sub_type_ = CASE1;}
#line 4071 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 71:
#line 857 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.upsert_clause_t) = new UpsertClause();
            (yyval.upsert_clause_t)->sub_type_ = CASE0;
        }
#line 4080 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 72:
#line 861 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.upsert_clause_t) = new UpsertClause();
            (yyval.upsert_clause_t)->sub_type_ = CASE1;
            (yyval.upsert_clause_t)->assign_list_ = (yyvsp[-1].assign_list_t);
            (yyval.upsert_clause_t)->opt_where1_ = (yyvsp[0].opt_where_t);
        }
#line 4091 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 73:
#line 867 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.upsert_clause_t) = new UpsertClause();
            (yyval.upsert_clause_t)->sub_type_ = CASE2;
            (yyval.upsert_clause_t)->indexed_column_list_ = (yyvsp[-4].indexed_column_list_t);
            (yyval.upsert_clause_t)->opt_where1_ = (yyvsp[-2].opt_where_t);
        }
#line 4102 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 74:
#line 873 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.upsert_clause_t) = new UpsertClause();
            (yyval.upsert_clause_t)->sub_type_ = CASE3;
            (yyval.upsert_clause_t)->indexed_column_list_ = (yyvsp[-7].indexed_column_list_t);
            (yyval.upsert_clause_t)->opt_where1_ = (yyvsp[-5].opt_where_t);
            (yyval.upsert_clause_t)->assign_list_ = (yyvsp[-1].assign_list_t);
            (yyval.upsert_clause_t)->opt_where2_ = (yyvsp[0].opt_where_t);
        }
#line 4115 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 75:
#line 885 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.indexed_column_list_t) = new IndexedColumnList();
            (yyval.indexed_column_list_t)->v_indexed_column_list_.push_back((yyvsp[0].indexed_column_t));
        }
#line 4124 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 76:
#line 889 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyvsp[-2].indexed_column_list_t)->v_indexed_column_list_.push_back((yyvsp[0].indexed_column_t));
            (yyval.indexed_column_list_t) = (yyvsp[-2].indexed_column_list_t);
        }
#line 4133 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 77:
#line 896 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.indexed_column_t) = new IndexedColumn();
            (yyval.indexed_column_t)->expr_ = (yyvsp[-2].expr_t);
            (yyval.indexed_column_t)->opt_collate_ = (yyvsp[-1].opt_collate_t);
            (yyval.indexed_column_t)->opt_order_type_ = (yyvsp[0].opt_order_type_t);
        }
#line 4144 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 78:
#line 905 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_collate_t) = new OptCollate();
            (yyval.opt_collate_t)->sub_type_ = CASE0;
            (yyval.opt_collate_t)->collation_name_ = (yyvsp[0].collation_name_t);
        }
#line 4154 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 79:
#line 910 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_collate_t) = new OptCollate();
            (yyval.opt_collate_t)->sub_type_ = CASE1;
            (yyval.opt_collate_t)->str_val_ = string("");
        }
#line 4164 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 80:
#line 919 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.assign_list_t) = new AssignList();
            (yyval.assign_list_t)->v_assign_list_.push_back((yyvsp[0].assign_clause_t));

        }
#line 4174 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 81:
#line 924 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyvsp[-2].assign_list_t)->v_assign_list_.push_back((yyvsp[0].assign_clause_t));
            (yyval.assign_list_t) = (yyvsp[-2].assign_list_t);
        }
#line 4183 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 82:
#line 932 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_null_t) = new OptNull();
            (yyval.opt_null_t)->str_val_ = string("NULLS FIRST");
        }
#line 4192 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 83:
#line 936 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_null_t) = new OptNull();
            (yyval.opt_null_t)->str_val_ = string("NULLS LAST");
        }
#line 4201 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 84:
#line 940 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_null_t) = new OptNull();
            (yyval.opt_null_t)->str_val_ = string("");
        }
#line 4210 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 85:
#line 947 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.assign_clause_t) = new AssignClause();
            (yyval.assign_clause_t)->column_name_list_ = (yyvsp[-2].column_name_list_t);
            (yyval.assign_clause_t)->expr_ = (yyvsp[0].expr_t);
        }
#line 4220 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 86:
#line 955 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.column_name_list_t) = new ColumnNameList();
            (yyval.column_name_list_t)->v_column_name_list_.push_back((yyvsp[0].column_name_t));
        }
#line 4229 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 87:
#line 959 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyvsp[-2].column_name_list_t)->v_column_name_list_.push_back((yyvsp[0].column_name_t));
            (yyval.column_name_list_t) = (yyvsp[-2].column_name_list_t);
        }
#line 4238 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 88:
#line 966 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.collation_name_t) = new CollationName(); 
            (yyval.collation_name_t)->id_ = new Identifier((yyvsp[0].sval), id_collation_name); 
            free((yyvsp[0].sval));
        }
#line 4248 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 89:
#line 978 "bison_parser.y" /* yacc.c:1652  */
    { 
        (yyval.optional_hints_t) = new OptionalHints();
        (yyval.optional_hints_t)->sub_type_ = CASE0;
        (yyval.optional_hints_t)->hint_list_ = (yyvsp[-1].hint_list_t); 
        }
#line 4258 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 90:
#line 983 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.optional_hints_t) = new OptionalHints(); (yyval.optional_hints_t)->sub_type_ = CASE1;}
#line 4264 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 91:
#line 988 "bison_parser.y" /* yacc.c:1652  */
    { 
          (yyval.hint_list_t) = new HintList();
          (yyval.hint_list_t)->v_hint_list_.push_back((yyvsp[0].hint_t)); 
          }
#line 4273 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 92:
#line 992 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].hint_list_t)->v_hint_list_.push_back((yyvsp[0].hint_t)); (yyval.hint_list_t) = (yyvsp[-2].hint_list_t); }
#line 4279 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 93:
#line 996 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.hint_t) = new Hint();
            (yyval.hint_t)->sub_type_ = CASE1;
            (yyval.hint_t)->id_ = new Identifier((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 4290 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 94:
#line 1002 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.hint_t) = new Hint();
            (yyval.hint_t)->sub_type_ = CASE0;
            (yyval.hint_t)->id_ = new Identifier((yyvsp[-3].sval));
            (yyval.hint_t)->literal_list_ = (yyvsp[-1].literal_list_t);
            free((yyvsp[-3].sval));
        }
#line 4302 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 95:
#line 1016 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.prepare_statement_t) = new PrepareStatement();
            (yyval.prepare_statement_t)->id_ = new Identifier((yyvsp[-2].sval));
            (yyval.prepare_statement_t)->prep_target_que_ = (yyvsp[0].prepare_target_query_t);
            free((yyvsp[-2].sval));
        }
#line 4313 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 96:
#line 1025 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.prepare_target_query_t) = new PrepareTargetQuery();
            (yyval.prepare_target_query_t)->prep_target_que_ = "'" + string((yyvsp[0].sval)) + "'";
            free((yyvsp[0].sval));
        }
#line 4323 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 97:
#line 1033 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.execute_statement_t) = new ExecuteStatement();
            (yyval.execute_statement_t)->sub_type_ = CASE0;
            (yyval.execute_statement_t)->id_ = new Identifier((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 4334 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 98:
#line 1039 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.execute_statement_t) = new ExecuteStatement();
            (yyval.execute_statement_t)->sub_type_ = CASE1;
            (yyval.execute_statement_t)->id_ = new Identifier((yyvsp[-3].sval));
            (yyval.execute_statement_t)->opt_literal_list_ = (yyvsp[-1].opt_literal_list_t);
            free((yyvsp[-3].sval));
        }
#line 4346 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 99:
#line 1053 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.import_statement_t) = new ImportStatement();
            (yyval.import_statement_t)->import_file_type_ = (yyvsp[-4].import_file_type_t);
            (yyval.import_statement_t)->file_path_ = (yyvsp[-2].file_path_t);
            (yyval.import_statement_t)->table_name_ = (yyvsp[0].table_name_t);
        }
#line 4357 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 100:
#line 1062 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.import_file_type_t) = new ImportFileType(); (yyval.import_file_type_t)->str_val_ = "CSV"; }
#line 4363 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 101:
#line 1066 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.file_path_t) = new FilePath();
            (yyval.file_path_t)->str_val_ = (yyvsp[0].string_literal_t)->str_val_;
            delete((yyvsp[0].string_literal_t));
         }
#line 4373 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 102:
#line 1080 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.show_statement_t) = new ShowStatement();
            (yyval.show_statement_t)->sub_type_ = CASE0;
        }
#line 4382 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 103:
#line 1084 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.show_statement_t) = new ShowStatement();
            (yyval.show_statement_t)->sub_type_ = CASE1;
            (yyval.show_statement_t)->table_name_ = (yyvsp[0].table_name_t);
            (yyval.show_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
        }
#line 4393 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 104:
#line 1090 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.show_statement_t) = new ShowStatement();
            (yyval.show_statement_t)->sub_type_ = CASE2;
            (yyval.show_statement_t)->table_name_ = (yyvsp[0].table_name_t);
            (yyval.show_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
        }
#line 4404 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 105:
#line 1105 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.alter_statement_t) = new AlterStatement();
		(yyval.alter_statement_t)->sub_type_ = CASE0;
        (yyval.alter_statement_t)->table_name1_ = (yyvsp[-3].table_name_t);
        (yyval.alter_statement_t)->table_name2_ = (yyvsp[0].table_name_t);
	}
#line 4415 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 106:
#line 1111 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.alter_statement_t) = new AlterStatement();
		(yyval.alter_statement_t)->sub_type_ = CASE1;
        (yyval.alter_statement_t)->table_name1_ = (yyvsp[-5].table_name_t);
        (yyval.alter_statement_t)->opt_column_ = (yyvsp[-3].opt_column_t);
        (yyval.alter_statement_t)->column_name1_ = (yyvsp[-2].column_name_t);
        (yyval.alter_statement_t)->column_name2_ = (yyvsp[0].column_name_t);
	}
#line 4428 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 107:
#line 1119 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.alter_statement_t) = new AlterStatement();
		(yyval.alter_statement_t)->sub_type_ = CASE2;
        (yyval.alter_statement_t)->table_name1_ = (yyvsp[-3].table_name_t);
        (yyval.alter_statement_t)->opt_column_ = (yyvsp[-1].opt_column_t);
        (yyval.alter_statement_t)->column_def_ = (yyvsp[0].column_def_t);
	}
#line 4440 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 108:
#line 1129 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->sub_type_ = CASE0;
        (yyval.opt_column_t)->str_val_ = string("COLUMN");
	}
#line 4450 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 109:
#line 1134 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->sub_type_ = CASE1;
        (yyval.opt_column_t)->str_val_ = string("");
	}
#line 4460 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 110:
#line 1148 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.create_statement_t) = new CreateStatement();
            (yyval.create_statement_t)->sub_type_ = CASE0;
            (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-5].opt_not_exists_t);
            (yyval.create_statement_t)->table_name_ = (yyvsp[-4].table_name_t);
            (yyval.create_statement_t)->file_path_ = (yyvsp[0].file_path_t);
            (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
        }
#line 4473 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 111:
#line 1156 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.create_statement_t) = new CreateStatement();
            (yyval.create_statement_t)->sub_type_ = CASE1;
            (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-4].opt_not_exists_t);
            (yyval.create_statement_t)->table_name_ = (yyvsp[-3].table_name_t);
            (yyval.create_statement_t)->column_def_comma_list_ = (yyvsp[-1].column_def_comma_list_t);
            (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
        }
#line 4486 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 112:
#line 1164 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.create_statement_t) = new CreateStatement();
            (yyval.create_statement_t)->sub_type_ = CASE2;
            (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-3].opt_not_exists_t);
            (yyval.create_statement_t)->table_name_ = (yyvsp[-2].table_name_t);
            (yyval.create_statement_t)->select_statement_ = (yyvsp[0].select_statement_t);
            (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
        }
#line 4499 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 113:
#line 1172 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.create_statement_t) = new CreateStatement();
            (yyval.create_statement_t)->sub_type_ = CASE3;
            (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-4].opt_not_exists_t);
            (yyval.create_statement_t)->table_name_ = (yyvsp[-3].table_name_t);
            (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
            (yyval.create_statement_t)->opt_column_list_ = (yyvsp[-2].opt_column_list_t);
            if((yyval.create_statement_t)->opt_column_list_->sub_type_ == CASE0)
                for(auto &i: (yyval.create_statement_t)->opt_column_list_->ident_comma_list_->v_iden_comma_list_){
                    i->id_type_ = id_create_column_name;
                }
            (yyval.create_statement_t)->select_statement_ = (yyvsp[0].select_statement_t);
            (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
        }
#line 4518 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 114:
#line 1187 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.create_statement_t) = new CreateStatement();
            (yyval.create_statement_t)->sub_type_ = CASE4;
            (yyval.create_statement_t)->opt_unique_ = (yyvsp[-9].opt_unique_t);
            (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-7].opt_not_exists_t);
            (yyval.create_statement_t)->index_name_ = (yyvsp[-6].index_name_t);   
            (yyval.create_statement_t)->table_name_ = (yyvsp[-4].table_name_t);
            (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
            (yyval.create_statement_t)->ident_commalist_ = (yyvsp[-2].ident_commalist_t);
            for(auto &i: (yyval.create_statement_t)->ident_commalist_->v_iden_comma_list_){
                i->id_type_ = id_column_name;
            }
            (yyval.create_statement_t)->opt_where_ = (yyvsp[0].opt_where_t);
        }
#line 4537 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 115:
#line 1201 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.create_statement_t) = new CreateStatement();
            (yyval.create_statement_t)->sub_type_ = CASE5;
            (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-3].opt_not_exists_t);
            (yyval.create_statement_t)->table_name_ = (yyvsp[-2].table_name_t);
            (yyval.create_statement_t)->module_name_ = (yyvsp[0].module_name_t);
            (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
        }
#line 4550 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 116:
#line 1209 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.create_statement_t) = new CreateStatement();
            (yyval.create_statement_t)->sub_type_ = CASE6;
            (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-6].opt_not_exists_t);
            (yyval.create_statement_t)->table_name_ = (yyvsp[-5].table_name_t);
            (yyval.create_statement_t)->module_name_ = (yyvsp[-3].module_name_t);
            (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
            (yyval.create_statement_t)->column_def_comma_list_ = (yyvsp[-1].column_def_comma_list_t);
        }
#line 4564 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 117:
#line 1218 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.create_statement_t) = new CreateStatement();
            (yyval.create_statement_t)->sub_type_ = CASE7;
            (yyval.create_statement_t)->trigger_declare_ = (yyvsp[-3].trigger_declare_t);
            (yyval.create_statement_t)->trigger_cmd_list_ = (yyvsp[-1].trigger_cmd_list_t);
        }
#line 4575 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 118:
#line 1227 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_unique_t) = new OptUnique(); (yyval.opt_unique_t)->str_val_ = string("UNIQUE");}
#line 4581 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 119:
#line 1228 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_unique_t) = new OptUnique(); (yyval.opt_unique_t)->str_val_ = string("");}
#line 4587 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 120:
#line 1232 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.index_name_t) = new IndexName(); (yyval.index_name_t)->id_ = new Identifier((yyvsp[0].sval), id_index_name); free((yyvsp[0].sval));}
#line 4593 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 121:
#line 1236 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.trigger_declare_t) = new TriggerDeclare();
            (yyval.trigger_declare_t)->opt_tmp_ = (yyvsp[-9].opt_tmp_t);
            (yyval.trigger_declare_t)->opt_not_exists_ = (yyvsp[-7].opt_not_exists_t);
            (yyval.trigger_declare_t)->trigger_name_ = (yyvsp[-6].trigger_name_t);
            (yyval.trigger_declare_t)->opt_trigger_time_ = (yyvsp[-5].opt_trigger_time_t);
            (yyval.trigger_declare_t)->trigger_event_ = (yyvsp[-4].trigger_event_t);
            (yyval.trigger_declare_t)->table_name_ = (yyvsp[-2].table_name_t);
            (yyval.trigger_declare_t)->opt_for_each_ = (yyvsp[-1].opt_for_each_t);
            (yyval.trigger_declare_t)->opt_when_ = (yyvsp[0].opt_when_t);
        }
#line 4609 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 122:
#line 1250 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_tmp_t) = new OptTmp(); (yyval.opt_tmp_t)->str_val_ = string("TEMP");}
#line 4615 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 123:
#line 1251 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_tmp_t) = new OptTmp(); (yyval.opt_tmp_t)->str_val_ = string("");}
#line 4621 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 124:
#line 1255 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.trigger_name_t) = new TriggerName(); (yyval.trigger_name_t)->id_ = new Identifier((yyvsp[0].sval), id_trigger_name); free((yyvsp[0].sval));}
#line 4627 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 125:
#line 1259 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_trigger_time_t) = new OptTriggerTime(); (yyval.opt_trigger_time_t)->str_val_ = string("BEFORE");}
#line 4633 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 126:
#line 1260 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_trigger_time_t) = new OptTriggerTime(); (yyval.opt_trigger_time_t)->str_val_ = string("AFTER");}
#line 4639 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 127:
#line 1261 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_trigger_time_t) = new OptTriggerTime(); (yyval.opt_trigger_time_t)->str_val_ = string("INSTEAD OF");}
#line 4645 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 128:
#line 1262 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_trigger_time_t) = new OptTriggerTime(); (yyval.opt_trigger_time_t)->str_val_ = string("");}
#line 4651 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 129:
#line 1266 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.trigger_event_t) = new TriggerEvent(); (yyval.trigger_event_t)->sub_type_ = CASE0;}
#line 4657 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 130:
#line 1267 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.trigger_event_t) = new TriggerEvent(); (yyval.trigger_event_t)->sub_type_ = CASE1;}
#line 4663 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 131:
#line 1268 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.trigger_event_t) = new TriggerEvent(); (yyval.trigger_event_t)->sub_type_ = CASE2; (yyval.trigger_event_t)->opt_of_column_list_ = (yyvsp[0].opt_of_column_list_t);}
#line 4669 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 132:
#line 1272 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_of_column_list_t) = new OptOfColumnList(); (yyval.opt_of_column_list_t)->sub_type_ = CASE0; (yyval.opt_of_column_list_t)->ident_commalist_ = (yyvsp[0].ident_commalist_t);}
#line 4675 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 133:
#line 1273 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_of_column_list_t) = new OptOfColumnList(); (yyval.opt_of_column_list_t)->sub_type_ = CASE1;}
#line 4681 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 134:
#line 1277 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_for_each_t) = new OptForEach(); (yyval.opt_for_each_t)->str_val_ = string("FOR EACH ROW");}
#line 4687 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 135:
#line 1278 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_for_each_t) = new OptForEach(); (yyval.opt_for_each_t)->str_val_ = string("");}
#line 4693 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 136:
#line 1282 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_when_t) = new OptWhen(); (yyval.opt_when_t)->sub_type_ = CASE0; (yyval.opt_when_t)->expr_ = (yyvsp[0].expr_t);}
#line 4699 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 137:
#line 1283 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_when_t) = new OptWhen(); (yyval.opt_when_t)->sub_type_ = CASE1;}
#line 4705 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 138:
#line 1287 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.trigger_cmd_list_t) = new TriggerCmdList(); (yyval.trigger_cmd_list_t)->v_trigger_cmd_list_.push_back((yyvsp[-1].trigger_cmd_t));}
#line 4711 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 139:
#line 1288 "bison_parser.y" /* yacc.c:1652  */
    {(yyvsp[-2].trigger_cmd_list_t)->v_trigger_cmd_list_.push_back((yyvsp[-1].trigger_cmd_t)); (yyval.trigger_cmd_list_t) = (yyvsp[-2].trigger_cmd_list_t);}
#line 4717 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 140:
#line 1292 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.trigger_cmd_t) = new TriggerCmd(); (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].select_statement_t);}
#line 4723 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 141:
#line 1293 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.trigger_cmd_t) = new TriggerCmd(); (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].update_statement_t);}
#line 4729 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 142:
#line 1294 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.trigger_cmd_t) = new TriggerCmd(); (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].insert_statement_t);}
#line 4735 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 143:
#line 1295 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.trigger_cmd_t) = new TriggerCmd(); (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].delete_statement_t);}
#line 4741 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 144:
#line 1299 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.module_name_t) = new ModuleName(); (yyval.module_name_t)->id_ = new Identifier((yyvsp[0].sval)); free((yyvsp[0].sval));}
#line 4747 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 145:
#line 1304 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_not_exists_t) = new OptNotExists(); (yyval.opt_not_exists_t)->sub_type_ = CASE0; }
#line 4753 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 146:
#line 1305 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_not_exists_t) = new OptNotExists(); (yyval.opt_not_exists_t)->sub_type_ = CASE1; }
#line 4759 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 147:
#line 1309 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.column_def_comma_list_t) = new ColumnDefCommaList(); 
            (yyval.column_def_comma_list_t)->v_column_def_comma_list_.push_back((yyvsp[0].column_def_t)); 
            }
#line 4768 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 148:
#line 1313 "bison_parser.y" /* yacc.c:1652  */
    { 
        (yyvsp[-2].column_def_comma_list_t)->v_column_def_comma_list_.push_back((yyvsp[0].column_def_t)); 
        (yyval.column_def_comma_list_t) = (yyvsp[-2].column_def_comma_list_t); 
        }
#line 4777 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 149:
#line 1320 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.column_def_t) = new ColumnDef();
			(yyval.column_def_t)->id_ = new Identifier((yyvsp[-2].sval), id_create_column_name);
            (yyval.column_def_t)->column_type_ = (yyvsp[-1].column_type_t);
            (yyval.column_def_t)->opt_column_arglist_ = (yyvsp[0].opt_column_arglist_t);
            free((yyvsp[-2].sval)); 
        }
#line 4789 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 150:
#line 1331 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_column_arglist_t) = new OptColumnArglist(); (yyval.opt_column_arglist_t)->sub_type_ = CASE0; (yyval.opt_column_arglist_t)->column_arglist_ = (yyvsp[0].column_arglist_t);}
#line 4795 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 151:
#line 1332 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_column_arglist_t) = new OptColumnArglist(); (yyval.opt_column_arglist_t)->sub_type_ = CASE1;}
#line 4801 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 152:
#line 1336 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyvsp[-1].column_arglist_t)->v_column_arg_.push_back((yyvsp[0].column_arg_t)); 
            (yyval.column_arglist_t) = (yyvsp[-1].column_arglist_t);
            }
#line 4810 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 153:
#line 1340 "bison_parser.y" /* yacc.c:1652  */
    {
        (yyval.column_arglist_t) = new ColumnArglist(); 
        (yyval.column_arglist_t)->v_column_arg_.push_back((yyvsp[0].column_arg_t));
        }
#line 4819 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 154:
#line 1347 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.column_arg_t) = new ColumnArg(); (yyval.column_arg_t)->sub_type_ = CASE0; (yyval.column_arg_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);}
#line 4825 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 155:
#line 1348 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.column_arg_t) = new ColumnArg(); (yyval.column_arg_t)->sub_type_ = CASE1; (yyval.column_arg_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);}
#line 4831 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 156:
#line 1349 "bison_parser.y" /* yacc.c:1652  */
    {
                (yyval.column_arg_t) = new ColumnArg(); 
                (yyval.column_arg_t)->sub_type_ = CASE2; 
                (yyval.column_arg_t)->opt_order_type_ = (yyvsp[-2].opt_order_type_t);
                (yyval.column_arg_t)->opt_on_conflict_ = (yyvsp[-1].opt_on_conflict_t);
                (yyval.column_arg_t)->opt_autoinc_ = (yyvsp[0].opt_autoinc_t);
        }
#line 4843 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 157:
#line 1356 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.column_arg_t) = new ColumnArg(); (yyval.column_arg_t)->sub_type_ = CASE3; (yyval.column_arg_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);}
#line 4849 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 158:
#line 1357 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.column_arg_t) = new ColumnArg(); (yyval.column_arg_t)->sub_type_ = CASE4; (yyval.column_arg_t)->expr_ = (yyvsp[-1].expr_t);}
#line 4855 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 159:
#line 1358 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.column_arg_t) = new ColumnArg(); (yyval.column_arg_t)->sub_type_ = CASE5; (yyval.column_arg_t)->expr_ = (yyvsp[-1].expr_t);}
#line 4861 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 160:
#line 1359 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.column_arg_t) = new ColumnArg(); (yyval.column_arg_t)->sub_type_ = CASE6; (yyval.column_arg_t)->expr_ = (yyvsp[-1].expr_t);}
#line 4867 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 161:
#line 1364 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_on_conflict_t) = new OptOnConflict(); (yyval.opt_on_conflict_t)->sub_type_ = CASE0; (yyval.opt_on_conflict_t)->resolve_type_ = (yyvsp[0].resolve_type_t);}
#line 4873 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 162:
#line 1365 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_on_conflict_t) = new OptOnConflict(); (yyval.opt_on_conflict_t)->sub_type_ = CASE1;}
#line 4879 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 163:
#line 1369 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = string("IGNORE");}
#line 4885 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 164:
#line 1370 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = string("REPLACE");}
#line 4891 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 165:
#line 1371 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = string("ROLLBACK");}
#line 4897 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 166:
#line 1372 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = string("ABORT");}
#line 4903 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 167:
#line 1373 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = string("FAIL");}
#line 4909 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 168:
#line 1377 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_autoinc_t) = new OptAutoinc(); (yyval.opt_autoinc_t)->str_val_ = string("AUTOINCR");}
#line 4915 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 169:
#line 1378 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_autoinc_t) = new OptAutoinc(); (yyval.opt_autoinc_t)->str_val_ = string("");}
#line 4921 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 170:
#line 1383 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("INT"); }
#line 4927 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 171:
#line 1384 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("INTEGER"); }
#line 4933 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 172:
#line 1385 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("LONG"); }
#line 4939 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 173:
#line 1386 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("FLOAT"); }
#line 4945 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 174:
#line 1387 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("DOUBLE"); }
#line 4951 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 175:
#line 1388 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.column_type_t) = new ColumnType();
            (yyval.column_type_t)->str_val_ = string("VARCHAR(") + to_string((yyvsp[-1].ival)) + ")"; 
            }
#line 4960 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 176:
#line 1392 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = new ColumnType(); 
            (yyval.column_type_t)->str_val_ = string("CHAR(") + to_string((yyvsp[-1].ival)) + ")"; 
            }
#line 4968 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 177:
#line 1395 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("TEXT"); }
#line 4974 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 178:
#line 1396 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string(""); }
#line 4980 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 179:
#line 1406 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.drop_statement_t) = new DropStatement();
            (yyval.drop_statement_t)->sub_type_ = CASE0;
            (yyval.drop_statement_t)->opt_exists_ = (yyvsp[-1].opt_exists_t);
            (yyval.drop_statement_t)->table_name_ = (yyvsp[0].table_name_t);
            (yyval.drop_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
            (yyval.drop_statement_t)->id_ = NULL;
        }
#line 4993 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 180:
#line 1414 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.drop_statement_t) = new DropStatement();
            (yyval.drop_statement_t)->sub_type_ = CASE1;
            (yyval.drop_statement_t)->opt_exists_ = (yyvsp[-1].opt_exists_t);
            (yyval.drop_statement_t)->table_name_ = (yyvsp[0].table_name_t);
            (yyval.drop_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
            (yyval.drop_statement_t)->id_ = NULL;
        }
#line 5006 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 181:
#line 1422 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.drop_statement_t) = new DropStatement();
            (yyval.drop_statement_t)->sub_type_ = CASE2;
            (yyval.drop_statement_t)->id_ = new Identifier((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 5017 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 182:
#line 1428 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.drop_statement_t) = new DropStatement();
            (yyval.drop_statement_t)->sub_type_ = CASE3;
            (yyval.drop_statement_t)->opt_exists_ = (yyvsp[-3].opt_exists_t);
            (yyval.drop_statement_t)->schema_name_ = (yyvsp[-2].schema_name_t);
            (yyval.drop_statement_t)->trigger_name_ = (yyvsp[0].trigger_name_t);
    }
#line 5029 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 183:
#line 1436 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.drop_statement_t) = new DropStatement();
            (yyval.drop_statement_t)->sub_type_ = CASE4;
            (yyval.drop_statement_t)->opt_exists_ = (yyvsp[-1].opt_exists_t);
            (yyval.drop_statement_t)->trigger_name_ = (yyvsp[0].trigger_name_t);
    }
#line 5040 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 184:
#line 1445 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_exists_t) = new OptExists(); (yyval.opt_exists_t)->str_val_=string("IF EXISTS"); }
#line 5046 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 185:
#line 1446 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_exists_t) = new OptExists(); (yyval.opt_exists_t)->str_val_=string(""); }
#line 5052 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 186:
#line 1455 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.delete_statement_t) = new DeleteStatement();
            (yyval.delete_statement_t)->sub_type_ = CASE0;
            (yyval.delete_statement_t)->table_name_ = (yyvsp[-1].table_name_t);
            (yyval.delete_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
            (yyval.delete_statement_t)->opt_where_ = (yyvsp[0].opt_where_t);
        }
#line 5064 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 187:
#line 1465 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.delete_statement_t) = new DeleteStatement();
            (yyval.delete_statement_t)->sub_type_ = CASE1;
            (yyval.delete_statement_t)->table_name_ = (yyvsp[0].table_name_t);
            (yyval.delete_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;

        }
#line 5076 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 188:
#line 1480 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.insert_statement_t) = new InsertStatement();
            (yyval.insert_statement_t)->sub_type_ = CASE0;
            (yyval.insert_statement_t)->insert_type_ = (yyvsp[-6].insert_type_t);
            (yyval.insert_statement_t)->table_name_ = (yyvsp[-4].table_name_t);
            (yyval.insert_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
            (yyval.insert_statement_t)->opt_column_list_ = (yyvsp[-3].opt_column_list_t);
            (yyval.insert_statement_t)->super_list_ = (yyvsp[-1].super_list_t);
            (yyval.insert_statement_t)->opt_upsert_clause_ = (yyvsp[0].opt_upsert_clause_t);
            if((yyval.insert_statement_t)->opt_column_list_->sub_type_ == CASE0){
                for(auto &cname: (yyval.insert_statement_t)->opt_column_list_->ident_comma_list_->v_iden_comma_list_){
                    cname->id_type_ = id_column_name;
                }    
            }
        }
#line 5096 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 189:
#line 1495 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.insert_statement_t) = new InsertStatement();
            (yyval.insert_statement_t)->sub_type_ = CASE1;
            (yyval.insert_statement_t)->insert_type_ = (yyvsp[-5].insert_type_t);
            (yyval.insert_statement_t)->table_name_ = (yyvsp[-3].table_name_t);
            (yyval.insert_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
            (yyval.insert_statement_t)->opt_column_list_ = (yyvsp[-2].opt_column_list_t);
            (yyval.insert_statement_t)->select_no_paren_ = (yyvsp[-1].select_no_paren_t);
            (yyval.insert_statement_t)->opt_upsert_clause_ = (yyvsp[0].opt_upsert_clause_t);
            if((yyval.insert_statement_t)->opt_column_list_->sub_type_ == CASE0){
                for(auto &cname: (yyval.insert_statement_t)->opt_column_list_->ident_comma_list_->v_iden_comma_list_){
                    cname->id_type_ = id_column_name;
                }    
            }
        }
#line 5116 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 190:
#line 1513 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.super_list_t) = new SuperList(); (yyval.super_list_t)->v_super_list_.push_back((yyvsp[-1].literal_list_t));
        }
#line 5124 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 191:
#line 1516 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyvsp[-4].super_list_t)->v_super_list_.push_back((yyvsp[-1].literal_list_t));
            (yyval.super_list_t) = (yyvsp[-4].super_list_t);
        }
#line 5133 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 192:
#line 1523 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.insert_type_t) = new InsertType(); (yyval.insert_type_t)->sub_type_ = CASE0; (yyval.insert_type_t)->str_val_ = string("INSERT"); }
#line 5139 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 193:
#line 1524 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.insert_type_t) = new InsertType(); (yyval.insert_type_t)->sub_type_ = CASE1; (yyval.insert_type_t)->str_val_  = string("REPLACE");}
#line 5145 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 194:
#line 1525 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.insert_type_t) = new InsertType(); (yyval.insert_type_t)->sub_type_ = CASE2; (yyval.insert_type_t)->resolve_type_ = (yyvsp[0].resolve_type_t);}
#line 5151 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 195:
#line 1529 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_column_list_t) = new OptColumnList(); (yyval.opt_column_list_t)->sub_type_ = CASE0; (yyval.opt_column_list_t)->ident_comma_list_ = (yyvsp[-1].ident_commalist_t); }
#line 5157 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 196:
#line 1530 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_column_list_t) = new OptColumnList(); (yyval.opt_column_list_t)->sub_type_ = CASE1; }
#line 5163 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 197:
#line 1540 "bison_parser.y" /* yacc.c:1652  */
    {
        (yyval.update_statement_t) = new UpdateStatement();
        (yyval.update_statement_t)->table_ref_name_no_alias_ = (yyvsp[-3].table_ref_name_no_alias_t); //had set id_top_table_name in table_ref_name_no_alias
        (yyval.update_statement_t)->update_clause_comma_list_ = (yyvsp[-1].update_clause_commalist_t);
        (yyval.update_statement_t)->opt_where_ = (yyvsp[0].opt_where_t);
    }
#line 5174 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 198:
#line 1549 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.update_clause_commalist_t) = new UpdateClauseCommalist(); 
            (yyval.update_clause_commalist_t)->v_update_clause_list_.push_back((yyvsp[0].update_clause_t)); 
            }
#line 5183 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 199:
#line 1553 "bison_parser.y" /* yacc.c:1652  */
    { 
        (yyvsp[-2].update_clause_commalist_t)->v_update_clause_list_.push_back((yyvsp[0].update_clause_t)); 
        (yyval.update_clause_commalist_t) = (yyvsp[-2].update_clause_commalist_t); }
#line 5191 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 200:
#line 1559 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.update_clause_t) = new UpdateClause();
            (yyval.update_clause_t)->id_ = new Identifier((yyvsp[-2].sval), id_column_name);
            (yyval.update_clause_t)->expr_ = (yyvsp[0].expr_t);
            free((yyvsp[-2].sval));
        }
#line 5202 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 201:
#line 1573 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.select_statement_t) = new SelectStatement();
            (yyval.select_statement_t)->sub_type_ = CASE0;
            (yyval.select_statement_t)->opt_with_clause_ = (yyvsp[-1].opt_with_clause_t);
            (yyval.select_statement_t)->select_with_paren_ = (yyvsp[0].select_with_paren_t);
        }
#line 5213 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 202:
#line 1579 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.select_statement_t) = new SelectStatement();
            (yyval.select_statement_t)->sub_type_ = CASE1;
            (yyval.select_statement_t)->opt_with_clause_ = (yyvsp[-1].opt_with_clause_t);
            (yyval.select_statement_t)->select_no_paren_ = (yyvsp[0].select_no_paren_t);
        }
#line 5224 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 203:
#line 1585 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.select_statement_t) = new SelectStatement();
            (yyval.select_statement_t)->sub_type_ = CASE2;
            (yyval.select_statement_t)->opt_with_clause_ = (yyvsp[-5].opt_with_clause_t);
            (yyval.select_statement_t)->select_with_paren_ = (yyvsp[-4].select_with_paren_t);
            (yyval.select_statement_t)->set_operator_ = (yyvsp[-3].set_operator_t);
            (yyval.select_statement_t)->select_paren_or_clause_ = (yyvsp[-2].select_paren_or_clause_t);
            (yyval.select_statement_t)->opt_order_ = (yyvsp[-1].opt_order_t);
            (yyval.select_statement_t)->opt_limit_ = (yyvsp[0].opt_limit_t);
            
        }
#line 5240 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 204:
#line 1599 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_with_paren_t) = new SelectWithParen(); (yyval.select_with_paren_t)->sub_type_ = CASE0; (yyval.select_with_paren_t)->select_no_paren_=(yyvsp[-1].select_no_paren_t);}
#line 5246 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 205:
#line 1600 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_with_paren_t) = new SelectWithParen(); (yyval.select_with_paren_t)->sub_type_ = CASE1; (yyval.select_with_paren_t)->select_with_paren_=(yyvsp[-1].select_with_paren_t);}
#line 5252 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 206:
#line 1604 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.select_paren_or_clause_t) = new SelectParenOrClause(); (yyval.select_paren_or_clause_t)->sub_type_=CASE0; (yyval.select_paren_or_clause_t)->select_with_paren_=(yyvsp[0].select_with_paren_t);}
#line 5258 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 207:
#line 1605 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.select_paren_or_clause_t)=new SelectParenOrClause(); (yyval.select_paren_or_clause_t)->sub_type_=CASE1; (yyval.select_paren_or_clause_t)->select_clause_=(yyvsp[0].select_clause_t);}
#line 5264 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 208:
#line 1609 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.select_no_paren_t) = new SelectNoParen();
            (yyval.select_no_paren_t)->sub_type_ = CASE0;
            (yyval.select_no_paren_t)->select_clause_ = (yyvsp[-2].select_clause_t);
            (yyval.select_no_paren_t)->opt_order_ = (yyvsp[-1].opt_order_t);
            (yyval.select_no_paren_t)->opt_limit_ = (yyvsp[0].opt_limit_t);
        }
#line 5276 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 209:
#line 1616 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.select_no_paren_t) = new SelectNoParen();
            (yyval.select_no_paren_t)->sub_type_ = CASE1;
            (yyval.select_no_paren_t)->select_clause_ = (yyvsp[-4].select_clause_t);
            (yyval.select_no_paren_t)->set_operator_ = (yyvsp[-3].set_operator_t);
            (yyval.select_no_paren_t)->select_paren_or_clause_ = (yyvsp[-2].select_paren_or_clause_t);
            (yyval.select_no_paren_t)->opt_order_ = (yyvsp[-1].opt_order_t);
            (yyval.select_no_paren_t)->opt_limit_ = (yyvsp[0].opt_limit_t);    
        }
#line 5290 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 210:
#line 1628 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.set_operator_t) = new SetOperator();
            (yyval.set_operator_t)->set_type_ = (yyvsp[-1].set_type_t);
            (yyval.set_operator_t)->opt_all_ = (yyvsp[0].opt_all_t);
            }
#line 5300 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 211:
#line 1636 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.set_type_t) = new SetType(); (yyval.set_type_t)->str_val_ = string("UNION");}
#line 5306 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 212:
#line 1637 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.set_type_t) = new SetType(); (yyval.set_type_t)->str_val_ = string("INTERSECT");}
#line 5312 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 213:
#line 1638 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.set_type_t) = new SetType(); (yyval.set_type_t)->str_val_ = string("EXCEPT");}
#line 5318 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 214:
#line 1642 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_all_t) = new OptAll(); (yyval.opt_all_t)->str_val_ = string("ALL");}
#line 5324 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 215:
#line 1643 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_all_t) = new OptAll(); (yyval.opt_all_t)->str_val_ = string("");}
#line 5330 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 216:
#line 1647 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.select_clause_t) = new SelectClause();
            (yyval.select_clause_t)->sub_type_ = CASE0;
            (yyval.select_clause_t)->opt_top_ = (yyvsp[-5].opt_top_t);
            (yyval.select_clause_t)->opt_distinct_ = (yyvsp[-4].opt_distinct_t);
            (yyval.select_clause_t)->select_list_ = (yyvsp[-3].select_list_t);
            (yyval.select_clause_t)->opt_from_clause_ = (yyvsp[-2].opt_from_clause_t);
            (yyval.select_clause_t)->opt_where_ = (yyvsp[-1].opt_where_t);
            (yyval.select_clause_t)->opt_group_ = (yyvsp[0].opt_group_t);
        }
#line 5345 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 217:
#line 1658 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.select_clause_t) = new SelectClause();
            (yyval.select_clause_t)->sub_type_ = CASE1;
            (yyval.select_clause_t)->opt_top_ = (yyvsp[-6].opt_top_t);
            (yyval.select_clause_t)->opt_distinct_ = (yyvsp[-5].opt_distinct_t);
            (yyval.select_clause_t)->select_list_ = (yyvsp[-4].select_list_t);
            (yyval.select_clause_t)->opt_from_clause_ = (yyvsp[-3].opt_from_clause_t);
            (yyval.select_clause_t)->opt_where_ = (yyvsp[-2].opt_where_t);
            (yyval.select_clause_t)->opt_group_ = (yyvsp[-1].opt_group_t);
            (yyval.select_clause_t)->window_clause_ = (yyvsp[0].window_clause_t);
        }
#line 5361 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 218:
#line 1672 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.window_clause_t) = new WindowClause(); (yyval.window_clause_t)->windowdefn_list_ = (yyvsp[0].window_defn_list_t);}
#line 5367 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 219:
#line 1676 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.window_defn_list_t) = new WindowDefnList(); (yyval.window_defn_list_t)->v_windowdefn_list_.push_back((yyvsp[0].window_defn_t));}
#line 5373 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 220:
#line 1677 "bison_parser.y" /* yacc.c:1652  */
    {(yyvsp[-2].window_defn_list_t)->v_windowdefn_list_.push_back((yyvsp[0].window_defn_t)); (yyval.window_defn_list_t) = (yyvsp[-2].window_defn_list_t);}
#line 5379 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 221:
#line 1681 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.window_defn_t) = new WindowDefn(); (yyval.window_defn_t)->id_ = new Identifier((yyvsp[-4].sval)); (yyval.window_defn_t)->window_ = (yyvsp[-1].window_t); free((yyvsp[-4].sval));}
#line 5385 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 222:
#line 1685 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.window_t) = new Window();
            (yyval.window_t)->sub_type_ = CASE0;
            (yyval.window_t)->opt_base_window_name_ = (yyvsp[-5].opt_base_window_name_t);
            (yyval.window_t)->expr_list_ = (yyvsp[-2].expr_list_t);
            (yyval.window_t)->opt_order_ = (yyvsp[-1].opt_order_t);
            (yyval.window_t)->opt_frame_ = (yyvsp[0].opt_frame_t);
        }
#line 5398 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 223:
#line 1693 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.window_t) = new Window();
            (yyval.window_t)->sub_type_ = CASE1;
            (yyval.window_t)->opt_base_window_name_ = (yyvsp[-2].opt_base_window_name_t);
            (yyval.window_t)->opt_order_ = (yyvsp[-1].opt_order_t);
            (yyval.window_t)->opt_frame_ = (yyvsp[0].opt_frame_t);
        }
#line 5410 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 224:
#line 1703 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_base_window_name_t) = new OptBaseWindowName(); (yyval.opt_base_window_name_t)->sub_type_ = CASE0; (yyval.opt_base_window_name_t)->id_ = new Identifier((yyvsp[0].sval)); free((yyvsp[0].sval));}
#line 5416 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 225:
#line 1704 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_base_window_name_t) = new OptBaseWindowName(); (yyval.opt_base_window_name_t)->sub_type_ = CASE1;}
#line 5422 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 226:
#line 1708 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_frame_t) = new OptFrame(); 
            (yyval.opt_frame_t)->sub_type_ = CASE0; 
            (yyval.opt_frame_t)->range_or_rows_ = (yyvsp[-2].range_or_rows_t);
            (yyval.opt_frame_t)->frame_bound_s_ = (yyvsp[-1].frame_bound_s_t);
            (yyval.opt_frame_t)->opt_frame_exclude_ = (yyvsp[0].opt_frame_exclude_t);
        }
#line 5434 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 227:
#line 1715 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_frame_t) = new OptFrame();
            (yyval.opt_frame_t)->sub_type_ = CASE1;
            (yyval.opt_frame_t)->range_or_rows_ = (yyvsp[-5].range_or_rows_t);
            (yyval.opt_frame_t)->frame_bound_s_ = (yyvsp[-3].frame_bound_s_t);
            (yyval.opt_frame_t)->frame_bound_e_ = (yyvsp[-1].frame_bound_e_t);
            (yyval.opt_frame_t)->opt_frame_exclude_ = (yyvsp[0].opt_frame_exclude_t);
        }
#line 5447 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 228:
#line 1723 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_frame_t) = new OptFrame(); (yyval.opt_frame_t)->sub_type_ = CASE2;}
#line 5453 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 229:
#line 1727 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.range_or_rows_t) = new RangeOrRows(); (yyval.range_or_rows_t)->str_val_ = string("RANGE");}
#line 5459 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 230:
#line 1728 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.range_or_rows_t) = new RangeOrRows(); (yyval.range_or_rows_t)->str_val_ = string("ROWS");}
#line 5465 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 231:
#line 1729 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.range_or_rows_t) = new RangeOrRows(); (yyval.range_or_rows_t)->str_val_ = string("GROUPS");}
#line 5471 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 232:
#line 1733 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_bound_s_t) = new FrameBoundS(); (yyval.frame_bound_s_t)->sub_type_ = CASE0; (yyval.frame_bound_s_t)->frame_bound_ = (yyvsp[0].frame_bound_t);}
#line 5477 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 233:
#line 1734 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_bound_s_t) = new FrameBoundS(); (yyval.frame_bound_s_t)->sub_type_ = CASE1;}
#line 5483 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 234:
#line 1738 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_bound_e_t) = new FrameBoundE(); (yyval.frame_bound_e_t)->sub_type_ = CASE0; (yyval.frame_bound_e_t)->frame_bound_ = (yyvsp[0].frame_bound_t);}
#line 5489 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 235:
#line 1739 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_bound_e_t) = new FrameBoundE(); (yyval.frame_bound_e_t)->sub_type_ = CASE1;}
#line 5495 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 236:
#line 1743 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_bound_t) = new FrameBound(); (yyval.frame_bound_t)->sub_type_ = CASE0; (yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);}
#line 5501 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 237:
#line 1744 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_bound_t) = new FrameBound(); (yyval.frame_bound_t)->sub_type_ = CASE1; (yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);}
#line 5507 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 238:
#line 1745 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_bound_t) = new FrameBound(); (yyval.frame_bound_t)->sub_type_ = CASE2;}
#line 5513 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 239:
#line 1749 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_frame_exclude_t) = new OptFrameExclude(); (yyval.opt_frame_exclude_t)->sub_type_ = CASE0; (yyval.opt_frame_exclude_t)->frame_exclude_ = (yyvsp[0].frame_exclude_t);}
#line 5519 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 240:
#line 1750 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_frame_exclude_t) = new OptFrameExclude(); (yyval.opt_frame_exclude_t)->sub_type_ = CASE1; }
#line 5525 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 241:
#line 1754 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_exclude_t) = new FrameExclude(); (yyval.frame_exclude_t)->str_val_ = string("NO OTHERS");}
#line 5531 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 242:
#line 1755 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_exclude_t) = new FrameExclude(); (yyval.frame_exclude_t)->str_val_ = string("CURRENT ROW");}
#line 5537 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 243:
#line 1756 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_exclude_t) = new FrameExclude(); (yyval.frame_exclude_t)->str_val_ = string("GROUP");}
#line 5543 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 244:
#line 1757 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.frame_exclude_t) = new FrameExclude(); (yyval.frame_exclude_t)->str_val_ = string("TIES");}
#line 5549 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 245:
#line 1762 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_distinct_t) = new OptDistinct();  (yyval.opt_distinct_t)->str_val_ = string("DISTINCT");}
#line 5555 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 246:
#line 1763 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_distinct_t) = new OptDistinct();  (yyval.opt_distinct_t)->str_val_ = string("");}
#line 5561 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 247:
#line 1767 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.select_list_t) = new SelectList();
            (yyval.select_list_t)->expr_list_ = (yyvsp[0].expr_list_t);
        }
#line 5570 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 248:
#line 1774 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_from_clause_t) = new OptFromClause(); (yyval.opt_from_clause_t)->sub_type_ = CASE0; (yyval.opt_from_clause_t)->from_clause_ = (yyvsp[0].from_clause_t);}
#line 5576 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 249:
#line 1775 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_from_clause_t) = new OptFromClause(); (yyval.opt_from_clause_t)->sub_type_ = CASE1;}
#line 5582 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 250:
#line 1779 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.from_clause_t) = new FromClause(); (yyval.from_clause_t)->table_ref_ = (yyvsp[0].table_ref_t);}
#line 5588 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 251:
#line 1784 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_where_t) = new OptWhere(); (yyval.opt_where_t)->sub_type_ = CASE0; (yyval.opt_where_t)->expr_ = (yyvsp[0].expr_t); }
#line 5594 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 252:
#line 1785 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_where_t) = new OptWhere(); (yyval.opt_where_t)->sub_type_ = CASE1;}
#line 5600 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 253:
#line 1789 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.opt_group_t) = new OptGroup();
            (yyval.opt_group_t)->sub_type_ = CASE0;
            (yyval.opt_group_t)->expr_list_ = (yyvsp[-1].expr_list_t);
            (yyval.opt_group_t)->opt_having_ = (yyvsp[0].opt_having_t);
        }
#line 5611 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 254:
#line 1795 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_group_t) = new OptGroup(); (yyval.opt_group_t)->sub_type_ = CASE1;}
#line 5617 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 255:
#line 1799 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_having_t) = new OptHaving(); (yyval.opt_having_t)->sub_type_ = CASE0; (yyval.opt_having_t)->expr_ = (yyvsp[0].expr_t); }
#line 5623 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 256:
#line 1800 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_having_t) = new OptHaving(); (yyval.opt_having_t)->sub_type_ = CASE1;}
#line 5629 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 257:
#line 1803 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_order_t) = new OptOrder(); (yyval.opt_order_t)->sub_type_ = CASE0; (yyval.opt_order_t)->order_list_ = (yyvsp[0].order_list_t); }
#line 5635 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 258:
#line 1804 "bison_parser.y" /* yacc.c:1652  */
    {  (yyval.opt_order_t) = new OptOrder(); (yyval.opt_order_t)->sub_type_ = CASE1;}
#line 5641 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 259:
#line 1808 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_list_t) = new OrderList(); (yyval.order_list_t)->v_order_desc_.push_back((yyvsp[0].order_desc_t)); }
#line 5647 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 260:
#line 1809 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].order_list_t)->v_order_desc_.push_back((yyvsp[0].order_desc_t)); (yyval.order_list_t) = (yyvsp[-2].order_list_t); }
#line 5653 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 261:
#line 1813 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_desc_t) = new OrderDesc(); (yyval.order_desc_t)->expr_ = (yyvsp[-2].expr_t); (yyval.order_desc_t)->opt_order_type_ = (yyvsp[-1].opt_order_type_t); (yyval.order_desc_t)->opt_null_ = (yyvsp[0].opt_null_t);}
#line 5659 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 262:
#line 1817 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_order_type_t) = new OptOrderType(); (yyval.opt_order_type_t)->str_val_ = string("ASC"); }
#line 5665 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 263:
#line 1818 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_order_type_t) = new OptOrderType(); (yyval.opt_order_type_t)->str_val_ = string("DESC"); }
#line 5671 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 264:
#line 1819 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_order_type_t) = new OptOrderType(); (yyval.opt_order_type_t)->str_val_ = string(""); }
#line 5677 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 265:
#line 1824 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.opt_top_t) = new OptTop(); 
            (yyval.opt_top_t)->sub_type_ = CASE0;
            (yyval.opt_top_t)->int_literal_ = (yyvsp[0].int_literal_t);
            }
#line 5687 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 266:
#line 1829 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.opt_top_t) = new OptTop(); 
            (yyval.opt_top_t)->sub_type_ = CASE1;
            }
#line 5696 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 267:
#line 1836 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_limit_t) = new OptLimit(); (yyval.opt_limit_t)->sub_type_ = CASE0; (yyval.opt_limit_t)->expr1_ = (yyvsp[0].expr_t);}
#line 5702 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 268:
#line 1837 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_limit_t) = new OptLimit(); (yyval.opt_limit_t)->sub_type_ = CASE1; (yyval.opt_limit_t)->expr1_ = (yyvsp[0].expr_t);}
#line 5708 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 269:
#line 1838 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_limit_t) = new OptLimit(); (yyval.opt_limit_t)->sub_type_ = CASE2; (yyval.opt_limit_t)->expr1_ = (yyvsp[-2].expr_t); (yyval.opt_limit_t)->expr2_ = (yyvsp[0].expr_t);}
#line 5714 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 270:
#line 1839 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_limit_t) = new OptLimit(); (yyval.opt_limit_t)->sub_type_ = CASE3;}
#line 5720 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 271:
#line 1840 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_limit_t) = new OptLimit(); (yyval.opt_limit_t)->sub_type_ = CASE4; (yyval.opt_limit_t)->expr1_ = (yyvsp[0].expr_t);}
#line 5726 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 272:
#line 1841 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_limit_t) = nullptr; }
#line 5732 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 273:
#line 1848 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.expr_list_t) = new ExprList(); 
            (yyval.expr_list_t)->v_expr_list_.push_back((yyvsp[0].expr_alias_t)); 
            }
#line 5741 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 274:
#line 1852 "bison_parser.y" /* yacc.c:1652  */
    { 
        (yyvsp[-2].expr_list_t)->v_expr_list_.push_back((yyvsp[0].expr_alias_t)); 
        (yyval.expr_list_t) = (yyvsp[-2].expr_list_t); }
#line 5749 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 275:
#line 1858 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.opt_literal_list_t) = new OptLiteralList();
            (yyval.opt_literal_list_t)->sub_type_ = CASE0;
            (yyval.opt_literal_list_t)->literal_list_ = (yyvsp[0].literal_list_t);
            }
#line 5759 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 276:
#line 1863 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.opt_literal_list_t) = new OptLiteralList();
            (yyval.opt_literal_list_t)->sub_type_ = CASE1; }
#line 5767 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 277:
#line 1869 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.literal_list_t) = new LiteralList(); 
            (yyval.literal_list_t)->v_literal_list_.push_back((yyvsp[0].literal_t)); 
            }
#line 5776 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 278:
#line 1873 "bison_parser.y" /* yacc.c:1652  */
    { 
        (yyvsp[-2].literal_list_t)->v_literal_list_.push_back((yyvsp[0].literal_t)); 
        (yyval.literal_list_t) = (yyvsp[-2].literal_list_t); 
        }
#line 5785 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 279:
#line 1880 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.expr_alias_t) = new ExprAlias();
            (yyval.expr_alias_t)->expr_ = (yyvsp[-1].expr_t);
            (yyval.expr_alias_t)->opt_alias_ = (yyvsp[0].opt_alias_t);
        }
#line 5795 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 280:
#line 1888 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.expr_t) = (yyvsp[0].operand_t);}
#line 5801 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 281:
#line 1889 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.expr_t) = (yyvsp[0].between_expr_t);}
#line 5807 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 282:
#line 1890 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.expr_t) = (yyvsp[0].logic_expr_t);}
#line 5813 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 283:
#line 1891 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.expr_t) = (yyvsp[0].exists_expr_t);}
#line 5819 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 284:
#line 1892 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.expr_t) = (yyvsp[0].in_expr_t);}
#line 5825 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 285:
#line 1893 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.expr_t) = (yyvsp[0].cast_expr_t);}
#line 5831 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 286:
#line 1897 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE0; (yyval.operand_t)->expr_ = (yyvsp[-1].expr_t); }
#line 5837 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 287:
#line 1898 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE1; (yyval.operand_t)->expr_ = (yyvsp[0].array_index_t); }
#line 5843 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 288:
#line 1899 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE1; (yyval.operand_t)->expr_ = (yyvsp[0].scalar_expr_t); }
#line 5849 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 289:
#line 1900 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE1; (yyval.operand_t)->expr_ = (yyvsp[0].unary_expr_t); }
#line 5855 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 290:
#line 1901 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE1; (yyval.operand_t)->expr_ = (yyvsp[0].binary_expr_t); }
#line 5861 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 291:
#line 1902 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE1; (yyval.operand_t)->expr_ = (yyvsp[0].case_expr_t); }
#line 5867 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 292:
#line 1903 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE1; (yyval.operand_t)->expr_ = (yyvsp[0].function_expr_t); }
#line 5873 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 293:
#line 1904 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE1; (yyval.operand_t)->expr_ = (yyvsp[0].extract_expr_t); }
#line 5879 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 294:
#line 1905 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE1; (yyval.operand_t)->expr_ = (yyvsp[0].array_expr_t); }
#line 5885 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 295:
#line 1906 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.operand_t) = new Operand(); (yyval.operand_t)->sub_type_ = CASE2; (yyval.operand_t)->select_no_paren_ = (yyvsp[-1].select_no_paren_t); }
#line 5891 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 296:
#line 1910 "bison_parser.y" /* yacc.c:1652  */
    {
		    (yyval.cast_expr_t) = new CastExpr();
		    (yyval.cast_expr_t)->expr_ = (yyvsp[-3].expr_t);
            (yyval.cast_expr_t)->column_type_ = (yyvsp[-1].column_type_t);
	    }
#line 5901 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 297:
#line 1918 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.scalar_expr_t) = new ScalarExpr(); (yyval.scalar_expr_t)->sub_type_=CASE0; (yyval.scalar_expr_t)->column_name_ = (yyvsp[0].column_name_t);}
#line 5907 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 298:
#line 1919 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.scalar_expr_t) = new ScalarExpr(); (yyval.scalar_expr_t)->sub_type_=CASE1; (yyval.scalar_expr_t)->literal_ = (yyvsp[0].literal_t);}
#line 5913 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 299:
#line 1923 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.unary_expr_t) =new UnaryExpr(); 
            (yyval.unary_expr_t)->sub_type_ = CASE0;
            (yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
            (yyval.unary_expr_t)->operator_ = string("-");
            }
#line 5924 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 300:
#line 1929 "bison_parser.y" /* yacc.c:1652  */
    { 
        (yyval.unary_expr_t) =new UnaryExpr(); 
            (yyval.unary_expr_t)->sub_type_ = CASE1;
            (yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
            (yyval.unary_expr_t)->operator_ = string("NOT");
        }
#line 5935 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 301:
#line 1935 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.unary_expr_t) =new UnaryExpr(); 
            (yyval.unary_expr_t)->sub_type_ = CASE2;
            (yyval.unary_expr_t)->operand_ = (yyvsp[-1].operand_t);
            (yyval.unary_expr_t)->operator_ = string("ISNULL");
        }
#line 5946 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 302:
#line 1941 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.unary_expr_t) =new UnaryExpr(); 
            (yyval.unary_expr_t)->sub_type_ = CASE3;
            (yyval.unary_expr_t)->operand_ = (yyvsp[-2].operand_t);
            (yyval.unary_expr_t)->operator_ = string("IS NULL");
        }
#line 5957 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 303:
#line 1947 "bison_parser.y" /* yacc.c:1652  */
    { 
            (yyval.unary_expr_t) =new UnaryExpr(); 
            (yyval.unary_expr_t)->sub_type_ = CASE4;
            (yyval.unary_expr_t)->operand_ = (yyvsp[-3].operand_t);
            (yyval.unary_expr_t)->operator_ = string("IS NOT NULL");
        }
#line 5968 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 304:
#line 1956 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE0; (yyval.binary_expr_t)->comp_expr_ = (yyvsp[0].comp_expr_t);}
#line 5974 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 305:
#line 1957 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("-");}
#line 5980 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 306:
#line 1958 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("+");}
#line 5986 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 307:
#line 1959 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("/");}
#line 5992 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 308:
#line 1960 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("*");}
#line 5998 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 309:
#line 1961 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("%");}
#line 6004 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 310:
#line 1962 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("^");}
#line 6010 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 311:
#line 1963 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("LIKE");}
#line 6016 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 312:
#line 1964 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-3].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("NOT LIKE");}
#line 6022 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 313:
#line 1965 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("ILIKE");}
#line 6028 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 314:
#line 1966 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("CONCAT");}
#line 6034 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 315:
#line 1967 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("GLOB");}
#line 6040 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 316:
#line 1968 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("MATCH");}
#line 6046 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 317:
#line 1969 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.binary_expr_t) = new BinaryExpr(); (yyval.binary_expr_t)->sub_type_ = CASE1; (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.binary_expr_t)->operator_ = string("REGEX");}
#line 6052 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 318:
#line 1973 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.logic_expr_t) = new LogicExpr(); (yyval.logic_expr_t)->expr1_=(yyvsp[-2].expr_t); (yyval.logic_expr_t)->expr2_=(yyvsp[0].expr_t); (yyval.logic_expr_t)->operator_=string("AND"); }
#line 6058 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 319:
#line 1974 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.logic_expr_t) = new LogicExpr(); (yyval.logic_expr_t)->expr1_=(yyvsp[-2].expr_t); (yyval.logic_expr_t)->expr2_=(yyvsp[0].expr_t); (yyval.logic_expr_t)->operator_=string("OR"); }
#line 6064 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 320:
#line 1978 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.in_expr_t) = new InExpr(); (yyval.in_expr_t)->sub_type_=CASE0; (yyval.in_expr_t)->operand_=(yyvsp[-4].operand_t); (yyval.in_expr_t)->expr_list_=(yyvsp[-1].expr_list_t);}
#line 6070 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 321:
#line 1979 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.in_expr_t) = new InExpr(); (yyval.in_expr_t)->sub_type_=CASE1; (yyval.in_expr_t)->operand_=(yyvsp[-5].operand_t); (yyval.in_expr_t)->expr_list_=(yyvsp[-1].expr_list_t);}
#line 6076 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 322:
#line 1980 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.in_expr_t) = new InExpr(); (yyval.in_expr_t)->sub_type_=CASE2; (yyval.in_expr_t)->operand_=(yyvsp[-4].operand_t); (yyval.in_expr_t)->select_no_paren_=(yyvsp[-1].select_no_paren_t);}
#line 6082 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 323:
#line 1981 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.in_expr_t) = new InExpr(); (yyval.in_expr_t)->sub_type_=CASE3; (yyval.in_expr_t)->operand_=(yyvsp[-5].operand_t); (yyval.in_expr_t)->select_no_paren_=(yyvsp[-1].select_no_paren_t);}
#line 6088 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 324:
#line 1987 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.case_expr_t) = new CaseExpr(); (yyval.case_expr_t)->sub_type_=CASE0; (yyval.case_expr_t)->case_expr_=(yyvsp[-2].expr_t); (yyval.case_expr_t)->case_list_=(yyvsp[-1].case_list_t); }
#line 6094 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 325:
#line 1988 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.case_expr_t) = new CaseExpr(); (yyval.case_expr_t)->sub_type_=CASE1; (yyval.case_expr_t)->case_expr_=(yyvsp[-4].expr_t); (yyval.case_expr_t)->case_list_=(yyvsp[-3].case_list_t); (yyval.case_expr_t)->else_expr_=(yyvsp[-1].expr_t);}
#line 6100 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 326:
#line 1989 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.case_expr_t) = new CaseExpr(); (yyval.case_expr_t)->sub_type_=CASE2; (yyval.case_expr_t)->case_list_=(yyvsp[-1].case_list_t); }
#line 6106 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 327:
#line 1990 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.case_expr_t) = new CaseExpr(); (yyval.case_expr_t)->sub_type_=CASE3; (yyval.case_expr_t)->else_expr_=(yyvsp[-1].expr_t); (yyval.case_expr_t)->case_list_=(yyvsp[-3].case_list_t); }
#line 6112 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 328:
#line 1994 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.case_list_t) = new CaseList(); (yyval.case_list_t)->v_case_list_.push_back(new CaseClause((yyvsp[-2].expr_t),(yyvsp[0].expr_t))); }
#line 6118 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 329:
#line 1995 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.case_list_t)->v_case_list_.push_back(new CaseClause((yyvsp[-2].expr_t), (yyvsp[0].expr_t))); (yyval.case_list_t) = (yyvsp[-4].case_list_t); }
#line 6124 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 330:
#line 1999 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.exists_expr_t) = new ExistsExpr(); (yyval.exists_expr_t)->sub_type_=CASE0; (yyval.exists_expr_t)->select_no_paren_=(yyvsp[-1].select_no_paren_t);}
#line 6130 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 331:
#line 2000 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.exists_expr_t) = new ExistsExpr(); (yyval.exists_expr_t)->sub_type_=CASE1; (yyval.exists_expr_t)->select_no_paren_=(yyvsp[-1].select_no_paren_t);}
#line 6136 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 332:
#line 2004 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.comp_expr_t) = new CompExpr(); (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.comp_expr_t)->operator_ = string("="); }
#line 6142 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 333:
#line 2005 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.comp_expr_t) = new CompExpr(); (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.comp_expr_t)->operator_ = string("=="); }
#line 6148 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 334:
#line 2006 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.comp_expr_t) = new CompExpr(); (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.comp_expr_t)->operator_ = string("!="); }
#line 6154 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 335:
#line 2007 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.comp_expr_t) = new CompExpr(); (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.comp_expr_t)->operator_ = string("<"); }
#line 6160 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 336:
#line 2008 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.comp_expr_t) = new CompExpr(); (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.comp_expr_t)->operator_ = string(">"); }
#line 6166 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 337:
#line 2009 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.comp_expr_t) = new CompExpr(); (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.comp_expr_t)->operator_ = string("<="); }
#line 6172 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 338:
#line 2010 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.comp_expr_t) = new CompExpr(); (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t); (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t); (yyval.comp_expr_t)->operator_ = string(">="); }
#line 6178 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 339:
#line 2014 "bison_parser.y" /* yacc.c:1652  */
    { 
                   (yyval.function_expr_t) = new FunctionExpr(); 
                   (yyval.function_expr_t)->sub_type_ = CASE0; 
                   (yyval.function_expr_t)->id_ = new Identifier((yyvsp[-4].sval)); 
                   (yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
                   (yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
                   free((yyvsp[-4].sval));
                   }
#line 6191 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 340:
#line 2022 "bison_parser.y" /* yacc.c:1652  */
    { 
                   (yyval.function_expr_t) = new FunctionExpr(); 
                   (yyval.function_expr_t)->sub_type_ = CASE1; 
                   (yyval.function_expr_t)->id_ = new Identifier((yyvsp[-6].sval)); 
                   (yyval.function_expr_t)->opt_distinct_ = (yyvsp[-4].opt_distinct_t);
                   (yyval.function_expr_t)->expr_list_ = (yyvsp[-3].expr_list_t);
                   (yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
                   (yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
                   free((yyvsp[-6].sval));
                   }
#line 6206 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 341:
#line 2035 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_over_clause_t) = new OptOverClause(); (yyval.opt_over_clause_t)->sub_type_ = CASE0; (yyval.opt_over_clause_t)->window_ = (yyvsp[-1].window_t);}
#line 6212 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 342:
#line 2036 "bison_parser.y" /* yacc.c:1652  */
    {
        (yyval.opt_over_clause_t) = new OptOverClause(); 
        (yyval.opt_over_clause_t)->sub_type_ = CASE1; 
        (yyval.opt_over_clause_t)->id_ = new Identifier((yyvsp[0].sval), id_window_name);
        free((yyvsp[0].sval));
    }
#line 6223 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 343:
#line 2042 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_over_clause_t) = new OptOverClause(); (yyval.opt_over_clause_t)->sub_type_ = CASE2;}
#line 6229 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 344:
#line 2046 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_filter_clause_t) = new OptFilterClause(); (yyval.opt_filter_clause_t)->sub_type_ = CASE0; (yyval.opt_filter_clause_t)->expr_ = (yyvsp[-1].expr_t);}
#line 6235 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 345:
#line 2047 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_filter_clause_t) = new OptFilterClause(); (yyval.opt_filter_clause_t)->sub_type_ = CASE1;}
#line 6241 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 346:
#line 2052 "bison_parser.y" /* yacc.c:1652  */
    { 
             (yyval.extract_expr_t) = new ExtractExpr();
             (yyval.extract_expr_t)->datetime_field_ = (yyvsp[-3].datetime_field_t);
             (yyval.extract_expr_t)->expr_ = (yyvsp[-1].expr_t); 
             (yyval.extract_expr_t)->sub_type_ = CASE0;
             }
#line 6252 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 347:
#line 2061 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field_t) = new DatetimeField(); (yyval.datetime_field_t)->str_val_ = string("SECOND"); }
#line 6258 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 348:
#line 2062 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field_t) = new DatetimeField(); (yyval.datetime_field_t)->str_val_ = string("MINUTE"); }
#line 6264 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 349:
#line 2063 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field_t) = new DatetimeField(); (yyval.datetime_field_t)->str_val_ = string("HOUR"); }
#line 6270 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 350:
#line 2064 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field_t) = new DatetimeField(); (yyval.datetime_field_t)->str_val_ = string("DAY"); }
#line 6276 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 351:
#line 2065 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field_t) = new DatetimeField(); (yyval.datetime_field_t)->str_val_ = string("MONTH"); }
#line 6282 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 352:
#line 2066 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field_t) = new DatetimeField(); (yyval.datetime_field_t)->str_val_ = string("YEAR"); }
#line 6288 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 353:
#line 2070 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.array_expr_t) = new ArrayExpr(); (yyval.array_expr_t)->expr_list_=(yyvsp[-1].expr_list_t); }
#line 6294 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 354:
#line 2074 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.array_index_t) = new ArrayIndex(); (yyval.array_index_t)->operand_ = (yyvsp[-3].operand_t); (yyval.array_index_t)->int_literal_ = (yyvsp[-1].int_literal_t);}
#line 6300 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 355:
#line 2078 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.between_expr_t) = new BetweenExpr(); (yyval.between_expr_t)->operand1_=(yyvsp[-4].operand_t); (yyval.between_expr_t)->operand2_=(yyvsp[-2].operand_t); (yyval.between_expr_t)->operand3_=(yyvsp[0].operand_t);}
#line 6306 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 356:
#line 2082 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_name_t) = new ColumnName(); (yyval.column_name_t)->sub_type_=CASE0; (yyval.column_name_t)->identifier1_=new Identifier((yyvsp[0].sval), id_column_name); free((yyvsp[0].sval));}
#line 6312 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 357:
#line 2083 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_name_t) = new ColumnName(); (yyval.column_name_t)->sub_type_=CASE1; (yyval.column_name_t)->identifier1_=new Identifier((yyvsp[-2].sval), id_table_name); (yyval.column_name_t)->identifier2_=new Identifier((yyvsp[0].sval), id_column_name); free((yyvsp[-2].sval)); free((yyvsp[0].sval));}
#line 6318 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 358:
#line 2084 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_name_t) = new ColumnName(); (yyval.column_name_t)->sub_type_=CASE2; }
#line 6324 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 359:
#line 2085 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_name_t) = new ColumnName(); (yyval.column_name_t)->sub_type_=CASE3; (yyval.column_name_t)->identifier1_=new Identifier((yyvsp[-2].sval), id_table_name); free((yyvsp[-2].sval));}
#line 6330 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 360:
#line 2089 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.literal_t)=(yyvsp[0].string_literal_t);}
#line 6336 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 361:
#line 2090 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.literal_t)=(yyvsp[0].bool_literal_t);}
#line 6342 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 362:
#line 2091 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.literal_t)=(yyvsp[0].num_literal_t);}
#line 6348 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 363:
#line 2092 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.literal_t)=(yyvsp[0].null_literal_t);}
#line 6354 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 364:
#line 2093 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.literal_t)=(yyvsp[0].param_expr_t);}
#line 6360 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 365:
#line 2097 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.string_literal_t) = new StringLiteral(); (yyval.string_literal_t)->str_val_ = (yyvsp[0].sval); free((yyvsp[0].sval));}
#line 6366 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 366:
#line 2101 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bool_literal_t) = new BoolLiteral(); (yyval.bool_literal_t)->b_val_=true; }
#line 6372 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 367:
#line 2102 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bool_literal_t) = new BoolLiteral(); (yyval.bool_literal_t)->b_val_=false; }
#line 6378 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 368:
#line 2106 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.num_literal_t) = new NumLiteral(); (yyval.num_literal_t)->sub_type_=CASE0; (yyval.num_literal_t)->f_val_ = (yyvsp[0].fval); }
#line 6384 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 369:
#line 2107 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.num_literal_t) = new NumLiteral(); (yyval.num_literal_t)->sub_type_=CASE1; (yyval.num_literal_t)->int_literal_ = (yyvsp[0].int_literal_t);}
#line 6390 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 370:
#line 2111 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.int_literal_t) = new IntLiteral(); (yyval.int_literal_t)->int_val_=(yyvsp[0].ival); }
#line 6396 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 371:
#line 2115 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.null_literal_t) = new NullLiteral(); }
#line 6402 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 372:
#line 2119 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.param_expr_t) = new ParamExpr();
        }
#line 6410 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 373:
#line 2131 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.table_ref_t) = new TableRef();
            (yyval.table_ref_t)->sub_type_ = CASE0;
            (yyval.table_ref_t)->table_prefix_ = (yyvsp[-5].table_prefix_t);
            (yyval.table_ref_t)->table_name_ = (yyvsp[-4].table_name_t);
            (yyval.table_ref_t)->opt_alias_ = (yyvsp[-3].opt_alias_t);
            (yyval.table_ref_t)->opt_index_ = (yyvsp[-2].opt_index_t);
            (yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
            (yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
            (yyval.table_ref_t)->table_name_->table_name_->id_type_ = id_top_table_name;
        }
#line 6426 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 374:
#line 2142 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.table_ref_t) = new TableRef();
            (yyval.table_ref_t)->sub_type_ = CASE1;
            (yyval.table_ref_t)->table_prefix_ = (yyvsp[-7].table_prefix_t);
            (yyval.table_ref_t)->table_name_ = (yyvsp[-6].table_name_t);
            (yyval.table_ref_t)->expr_list_ = (yyvsp[-4].expr_list_t);
            (yyval.table_ref_t)->opt_alias_  = (yyvsp[-2].opt_alias_t);
            (yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
            (yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
            (yyval.table_ref_t)->table_name_->table_name_->id_type_ = id_top_table_name;
    }
#line 6442 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 375:
#line 2153 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.table_ref_t) = new TableRef();
            (yyval.table_ref_t)->sub_type_ = CASE2;
            (yyval.table_ref_t)->table_prefix_ = (yyvsp[-6].table_prefix_t);
            (yyval.table_ref_t)->select_no_paren_ = (yyvsp[-4].select_no_paren_t);
            (yyval.table_ref_t)->opt_alias_ = (yyvsp[-2].opt_alias_t);
            (yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
            (yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
    }
#line 6456 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 376:
#line 2162 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.table_ref_t) = new TableRef();
            (yyval.table_ref_t)->sub_type_ = CASE3;
            (yyval.table_ref_t)->table_prefix_ = (yyvsp[-6].table_prefix_t);
            (yyval.table_ref_t)->table_ref_ = (yyvsp[-4].table_ref_t);
            (yyval.table_ref_t)->opt_alias_ = (yyvsp[-2].opt_alias_t);
            (yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
            (yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
    }
#line 6470 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 377:
#line 2174 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.table_prefix_t) = new TablePrefix();
            (yyval.table_prefix_t)->sub_type_ = CASE0;
            (yyval.table_prefix_t)->table_ref_ = (yyvsp[-1].table_ref_t);
            (yyval.table_prefix_t)->join_op_ = (yyvsp[0].join_op_t);
        }
#line 6481 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 378:
#line 2180 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.table_prefix_t) = new TablePrefix();
            (yyval.table_prefix_t)->sub_type_ = CASE1;
        }
#line 6490 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 379:
#line 2186 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->sub_type_ = CASE0; }
#line 6496 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 380:
#line 2187 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->sub_type_ = CASE1; }
#line 6502 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 381:
#line 2188 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->sub_type_ = CASE2; (yyval.join_op_t)->join_kw_ = (yyvsp[-1].join_kw_t);}
#line 6508 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 382:
#line 2189 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.join_op_t) = new JoinOp(); 
            (yyval.join_op_t)->sub_type_ = CASE3; 
            (yyval.join_op_t)->id1_ = new Identifier((yyvsp[-1].sval), id_top_table_name); 
            (yyval.join_op_t)->join_kw_ = (yyvsp[-2].join_kw_t); 
            free((yyvsp[-1].sval));}
#line 6519 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 383:
#line 2195 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.join_op_t) = new JoinOp(); 
            (yyval.join_op_t)->sub_type_ = CASE4; 
            (yyval.join_op_t)->id1_ = new Identifier((yyvsp[-2].sval));
            (yyval.join_op_t)->id2_ = new Identifier((yyvsp[-1].sval));
            (yyval.join_op_t)->join_kw_ = (yyvsp[-3].join_kw_t);
            free((yyvsp[-2].sval));
            free((yyvsp[-1].sval));
        }
#line 6533 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 384:
#line 2207 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_index_t) = new OptIndex(); (yyval.opt_index_t)->sub_type_ = CASE0; (yyval.opt_index_t)->column_name_ = (yyvsp[0].column_name_t); }
#line 6539 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 385:
#line 2208 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_index_t) = new OptIndex(); (yyval.opt_index_t)->sub_type_ = CASE1; }
#line 6545 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 386:
#line 2209 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_index_t) = new OptIndex(); (yyval.opt_index_t)->sub_type_ = CASE2; }
#line 6551 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 387:
#line 2213 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_on_t) = new OptOn(); (yyval.opt_on_t)->sub_type_ = CASE0; (yyval.opt_on_t)->expr_ = (yyvsp[0].expr_t); }
#line 6557 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 388:
#line 2214 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_on_t) = new OptOn(); (yyval.opt_on_t)->sub_type_ = CASE1; }
#line 6563 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 389:
#line 2218 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_using_t) = new OptUsing(); (yyval.opt_using_t)->sub_type_ = CASE0; (yyval.opt_using_t)->ident_commalist_ = (yyvsp[-1].ident_commalist_t); }
#line 6569 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 390:
#line 2219 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_using_t) = new OptUsing(); (yyval.opt_using_t)->sub_type_ = CASE1; }
#line 6575 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 391:
#line 2224 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.table_ref_name_no_alias_t) = new TableRefNameNoAlias();
            (yyval.table_ref_name_no_alias_t)->table_name_ = (yyvsp[0].table_name_t);
            (yyval.table_ref_name_no_alias_t)->table_name_->table_name_->id_type_ = id_top_table_name;
        }
#line 6585 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 392:
#line 2231 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name_t) = new TableName(); (yyval.table_name_t)->sub_type_ = CASE0; (yyval.table_name_t)->table_name_ = new Identifier((yyvsp[0].sval), id_table_name); (yyval.table_name_t)->database_name_ = NULL; free((yyvsp[0].sval));}
#line 6591 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 393:
#line 2232 "bison_parser.y" /* yacc.c:1652  */
    { 
			(yyval.table_name_t) = new TableName(); 
			(yyval.table_name_t)->sub_type_ = CASE1; 
			(yyval.table_name_t)->database_name_ = new Identifier((yyvsp[-2].sval),id_database_name); 
			(yyval.table_name_t)->table_name_ = new Identifier((yyvsp[0].sval), id_table_name);
            free((yyvsp[-2].sval));
            free((yyvsp[0].sval));
		}
#line 6604 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 394:
#line 2243 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias(); (yyval.alias_t)->sub_type_ = CASE0; (yyval.alias_t)->id_ = new Identifier((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 6610 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 395:
#line 2248 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_alias_t) = new OptAlias(); (yyval.opt_alias_t)->sub_type_ = CASE0; (yyval.opt_alias_t)->alias_=(yyvsp[0].alias_t);}
#line 6616 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 396:
#line 2249 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_alias_t) = new OptAlias(); (yyval.opt_alias_t)->sub_type_ = CASE1; }
#line 6622 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 397:
#line 2257 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_with_clause_t) = new OptWithClause(); (yyval.opt_with_clause_t)->sub_type_ = CASE0; (yyval.opt_with_clause_t)->with_clause_=(yyvsp[0].with_clause_t);}
#line 6628 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 398:
#line 2258 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.opt_with_clause_t) = new OptWithClause(); (yyval.opt_with_clause_t)->sub_type_ = CASE1; }
#line 6634 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 399:
#line 2262 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_clause_t) = new WithClause(); (yyval.with_clause_t)->with_description_list_ = (yyvsp[0].with_description_list_t); }
#line 6640 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 400:
#line 2266 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.with_description_list_t) = new WithDescriptionList();
            (yyval.with_description_list_t)->v_with_description_list_.push_back((yyvsp[0].with_description_t));
        }
#line 6649 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 401:
#line 2270 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyvsp[-2].with_description_list_t)->v_with_description_list_.push_back((yyvsp[0].with_description_t));
            (yyval.with_description_list_t) = (yyvsp[-2].with_description_list_t);
        }
#line 6658 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 402:
#line 2277 "bison_parser.y" /* yacc.c:1652  */
    {
            (yyval.with_description_t) = new WithDescription();
            (yyval.with_description_t)->id_ = new Identifier((yyvsp[-2].sval));
            (yyval.with_description_t)->select_with_paren_ = (yyvsp[0].select_with_paren_t);
            free((yyvsp[-2].sval));
        }
#line 6669 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 403:
#line 2291 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("INNER"); }
#line 6675 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 404:
#line 2292 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("LEFT OUTER"); }
#line 6681 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 405:
#line 2293 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("LEFT"); }
#line 6687 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 406:
#line 2294 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("RIGHT OUTER"); }
#line 6693 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 407:
#line 2295 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("RIGHT"); }
#line 6699 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 408:
#line 2296 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("FULL OUTER"); }
#line 6705 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 409:
#line 2297 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("OUTER"); }
#line 6711 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 410:
#line 2298 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("FULL"); }
#line 6717 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 411:
#line 2299 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("CROSS"); }
#line 6723 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 412:
#line 2300 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.join_kw_t) = new JoinKw(); (yyval.join_kw_t)->str_val_ = string("NATURAL");}
#line 6729 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 413:
#line 2315 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_semicolon_t) = new OptSemicolon(); (yyval.opt_semicolon_t)->str_val_ = string(";");}
#line 6735 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 414:
#line 2316 "bison_parser.y" /* yacc.c:1652  */
    {(yyval.opt_semicolon_t) = new OptSemicolon(); (yyval.opt_semicolon_t)->str_val_ = string("");}
#line 6741 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 415:
#line 2321 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.ident_commalist_t) = new IdentCommaList(); (yyval.ident_commalist_t)->v_iden_comma_list_.push_back(new Identifier((yyvsp[0].sval))); free((yyvsp[0].sval));}
#line 6747 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 416:
#line 2322 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].ident_commalist_t)->v_iden_comma_list_.push_back(new Identifier((yyvsp[0].sval))); (yyval.ident_commalist_t) = (yyvsp[-2].ident_commalist_t); free((yyvsp[0].sval));}
#line 6753 "bison_parser.cpp" /* yacc.c:1652  */
    break;


#line 6757 "bison_parser.cpp" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2325 "bison_parser.y" /* yacc.c:1918  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
