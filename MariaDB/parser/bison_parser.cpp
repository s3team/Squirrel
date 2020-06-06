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
#define YYSTYPE         FF_STYPE
#define YYLTYPE         FF_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         ff_parse
#define yylex           ff_lex
#define yyerror         ff_error
#define yydebug         ff_debug
#define yynerrs         ff_nerrs


/* First part of user prologue.  */
#line 1 "bison.y" /* yacc.c:337  */

#include "bison_parser.h"
#include "flex_lexer.h"
#include <stdio.h>
#include <string.h>
int yyerror(YYLTYPE* llocp, Program * result, yyscan_t scanner, const char *msg) { return 0; }

#line 86 "bison_parser.cpp" /* yacc.c:337  */
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
#ifndef YY_FF_BISON_PARSER_H_INCLUDED
# define YY_FF_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef FF_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define FF_DEBUG 1
#  else
#   define FF_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define FF_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined FF_DEBUG */
#if FF_DEBUG
extern int ff_debug;
#endif
/* "%code requires" blocks.  */
#line 8 "bison.y" /* yacc.c:352  */

#include "../include/ast.h"
#include "parser_typedef.h"

#line 132 "bison_parser.cpp" /* yacc.c:352  */

/* Token type.  */
#ifndef FF_TOKENTYPE
# define FF_TOKENTYPE
  enum ff_tokentype
  {
    SQL_OP_NOTEQUAL = 258,
    SQL_ENABLE = 259,
    SQL_SIMPLE = 260,
    SQL_TEXT = 261,
    SQL_OVER = 262,
    SQL_YEAR = 263,
    SQL_INSERT_METHOD = 264,
    SQL_OP_SEMI = 265,
    SQL_BIGINT = 266,
    SQL_LIMIT = 267,
    SQL_OP_GREATERTHAN = 268,
    SQL_WITH = 269,
    SQL_ORDER = 270,
    SQL_OPTION = 271,
    SQL_LAST = 272,
    SQL_UNBOUNDED = 273,
    SQL_PRECEDING = 274,
    SQL_EXCEPT = 275,
    SQL_NUMERIC = 276,
    SQL_OP_LESSTHAN = 277,
    SQL_ACTION = 278,
    SQL_BEFORE = 279,
    SQL_OP_GREATEREQ = 280,
    SQL_CHECK = 281,
    SQL_COMPACT = 282,
    SQL_FULL = 283,
    SQL_NATURAL = 284,
    SQL_BINARY = 285,
    SQL_NATIONAL = 286,
    SQL_ENUM = 287,
    SQL_REDUNDANT = 288,
    SQL_OP_ADD = 289,
    SQL_CURRENT = 290,
    SQL_MERGE = 291,
    SQL_TRIGGER = 292,
    SQL_COMPRESSED = 293,
    SQL_OP_SUB = 294,
    SQL_FALSE = 295,
    SQL_UNIQUE = 296,
    SQL_WHERE = 297,
    SQL_MINUTE = 298,
    SQL_FIRST = 299,
    SQL_ON = 300,
    SQL_PARTIAL = 301,
    SQL_DOUBLE = 302,
    SQL_AFTER = 303,
    SQL_PRIMARY = 304,
    SQL_MONTH = 305,
    SQL_DEFERRED = 306,
    SQL_VALUES = 307,
    SQL_LONGTEXT = 308,
    SQL_SQL = 309,
    SQL_SHARED = 310,
    SQL_VALIDATION = 311,
    SQL_OR = 312,
    SQL_VIEW = 313,
    SQL_INDEX = 314,
    SQL_GROUP = 315,
    SQL_OP_MUL = 316,
    SQL_INPLACE = 317,
    SQL_FOREIGN = 318,
    SQL_RESTRICT = 319,
    SQL_SPATIAL = 320,
    SQL_FOLLOWING = 321,
    SQL_DEC = 322,
    SQL_SELECT = 323,
    SQL_NONE = 324,
    SQL_DISTINCT = 325,
    SQL_TRUE = 326,
    SQL_DYNAMIC = 327,
    SQL_BY = 328,
    SQL_OP_MOD = 329,
    SQL_INTEGER = 330,
    SQL_SECURITY = 331,
    SQL_IS = 332,
    SQL_DEFINER = 333,
    SQL_ROW = 334,
    SQL_ENFORCED = 335,
    SQL_END = 336,
    SQL_RECURSIVE = 337,
    SQL_FOR = 338,
    SQL_TEMPTABLE = 339,
    SQL_UNION = 340,
    SQL_NULLS = 341,
    SQL_UPDATE = 342,
    SQL_ELSE = 343,
    SQL_RANGE = 344,
    SQL_SET = 345,
    SQL_INVOKER = 346,
    SQL_OFFSET = 347,
    SQL_INDEXED = 348,
    SQL_FORCE = 349,
    SQL_NCHAR = 350,
    SQL_AND = 351,
    SQL_INITIALLY = 352,
    SQL_PRECISION = 353,
    SQL_FILTER = 354,
    SQL_WITHOUT = 355,
    SQL_NOT = 356,
    SQL_DELETE = 357,
    SQL_DEFFERRABLE = 358,
    SQL_REAL = 359,
    SQL_THEN = 360,
    SQL_UNDEFINED = 361,
    SQL_DEFAULT = 362,
    SQL_CROSS = 363,
    SQL_CHAR = 364,
    SQL_REFERENCES = 365,
    SQL_OP_XOR = 366,
    SQL_CASE = 367,
    SQL_FIXED = 368,
    SQL_HOUR = 369,
    SQL_NO = 370,
    SQL_COLUMN = 371,
    SQL_LOCAL = 372,
    SQL_DROP = 373,
    SQL_REPLACE = 374,
    SQL_ASC = 375,
    SQL_OP_COMMA = 376,
    SQL_DISABLE = 377,
    SQL_TABLE = 378,
    SQL_ARRAY = 379,
    SQL_IF = 380,
    SQL_EXTRACT = 381,
    SQL_LEFT = 382,
    SQL_FULLTEXT = 383,
    SQL_HASH = 384,
    SQL_ALGORITHM = 385,
    SQL_LOCK = 386,
    SQL_DECIMAL = 387,
    SQL_PARTITION = 388,
    SQL_CASCADE = 389,
    SQL_ADD = 390,
    SQL_BETWEEN = 391,
    SQL_OP_LESSEQ = 392,
    SQL_MATCH = 393,
    SQL_ALL = 394,
    SQL_ROWS = 395,
    SQL_JOIN = 396,
    SQL_LIKE = 397,
    SQL_OP_RP = 398,
    SQL_IGNORE = 399,
    SQL_INT = 400,
    SQL_MEDIUMTEXT = 401,
    SQL_BOOLEAN = 402,
    SQL_KEY = 403,
    SQL_EACH = 404,
    SQL_USING = 405,
    SQL_RENAME = 406,
    SQL_DO = 407,
    SQL_OP_LP = 408,
    SQL_CHARACTER = 409,
    SQL_UMINUS = 410,
    SQL_CAST = 411,
    SQL_GROUPS = 412,
    SQL_OUTER = 413,
    SQL_NULL = 414,
    SQL_SMALLINT = 415,
    SQL_EXCLUSIVE = 416,
    SQL_TEMPORARY = 417,
    SQL_CONSTRAINT = 418,
    SQL_CREATE = 419,
    SQL_OP_LBRACKET = 420,
    SQL_WHEN = 421,
    SQL_IMMEDIATE = 422,
    SQL_TO = 423,
    SQL_BTREE = 424,
    SQL_DAY = 425,
    SQL_CONFLICT = 426,
    SQL_ROW_FORMAT = 427,
    SQL_OP_RBRACKET = 428,
    SQL_EXISTS = 429,
    SQL_INSERT = 430,
    SQL_KEYS = 431,
    SQL_INTO = 432,
    SQL_OP_DIVIDE = 433,
    SQL_CASCADED = 434,
    SQL_ISNULL = 435,
    SQL_AS = 436,
    SQL_INNER = 437,
    SQL_INTERSECT = 438,
    SQL_IN = 439,
    SQL_OP_EQUAL = 440,
    SQL_VARCHAR = 441,
    SQL_COPY = 442,
    SQL_ALTER = 443,
    SQL_DESC = 444,
    SQL_FROM = 445,
    SQL_TINYTEXT = 446,
    SQL_FLOAT = 447,
    SQL_SECOND = 448,
    SQL_WINDOW = 449,
    SQL_NOTHING = 450,
    SQL_HAVING = 451,
    SQL_INTLITERAL = 452,
    SQL_FLOATLITERAL = 453,
    SQL_IDENTIFIER = 454,
    SQL_STRINGLITERAL = 455
  };
#endif

/* Value type.  */
#if ! defined FF_STYPE && ! defined FF_STYPE_IS_DECLARED
#line 30 "bison.y" /* yacc.c:352  */
union FF_STYPE
{
#line 30 "bison.y" /* yacc.c:352  */

	long	ival;
	char*	sval;
	double	fval;
	Program *	program_t;
	Stmtlist *	stmtlist_t;
	Stmt *	stmt_t;
	CreateStmt *	create_stmt_t;
	DropStmt *	drop_stmt_t;
	AlterStmt *	alter_stmt_t;
	SelectStmt *	select_stmt_t;
	SelectWithParens *	select_with_parens_t;
	SelectNoParens *	select_no_parens_t;
	SelectClauseList *	select_clause_list_t;
	SelectClause *	select_clause_t;
	CombineClause *	combine_clause_t;
	OptFromClause *	opt_from_clause_t;
	SelectTarget *	select_target_t;
	OptWindowClause *	opt_window_clause_t;
	WindowClause *	window_clause_t;
	WindowDefList *	window_def_list_t;
	WindowDef *	window_def_t;
	WindowName *	window_name_t;
	Window *	window_t;
	OptPartition *	opt_partition_t;
	OptFrameClause *	opt_frame_clause_t;
	RangeOrRows *	range_or_rows_t;
	FrameBoundStart *	frame_bound_start_t;
	FrameBoundEnd *	frame_bound_end_t;
	FrameBound *	frame_bound_t;
	OptExistWindowName *	opt_exist_window_name_t;
	OptGroupClause *	opt_group_clause_t;
	OptHavingClause *	opt_having_clause_t;
	OptWhereClause *	opt_where_clause_t;
	WhereClause *	where_clause_t;
	FromClause *	from_clause_t;
	TableRef *	table_ref_t;
	OptIndex *	opt_index_t;
	OptOn *	opt_on_t;
	OptUsing *	opt_using_t;
	ColumnNameList *	column_name_list_t;
	OptTablePrefix *	opt_table_prefix_t;
	JoinOp *	join_op_t;
	OptJoinType *	opt_join_type_t;
	ExprList *	expr_list_t;
	OptLimitClause *	opt_limit_clause_t;
	LimitClause *	limit_clause_t;
	OptLimitRowCount *	opt_limit_row_count_t;
	OptOrderClause *	opt_order_clause_t;
	OptOrderNulls *	opt_order_nulls_t;
	OrderItemList *	order_item_list_t;
	OrderItem *	order_item_t;
	OptOrderBehavior *	opt_order_behavior_t;
	OptWithClause *	opt_with_clause_t;
	CteTableList *	cte_table_list_t;
	CteTable *	cte_table_t;
	CteTableName *	cte_table_name_t;
	OptAllOrDistinct *	opt_all_or_distinct_t;
	CreateTableStmt *	create_table_stmt_t;
	CreateIndexStmt *	create_index_stmt_t;
	CreateTriggerStmt *	create_trigger_stmt_t;
	CreateViewStmt *	create_view_stmt_t;
	OptTableOptionList *	opt_table_option_list_t;
	TableOptionList *	table_option_list_t;
	TableOption *	table_option_t;
	OptOpComma *	opt_op_comma_t;
	OptIgnoreOrReplace *	opt_ignore_or_replace_t;
	OptViewAlgorithm *	opt_view_algorithm_t;
	OptSqlSecurity *	opt_sql_security_t;
	OptIndexOption *	opt_index_option_t;
	OptExtraOption *	opt_extra_option_t;
	IndexAlgorithmOption *	index_algorithm_option_t;
	LockOption *	lock_option_t;
	OptOpEqual *	opt_op_equal_t;
	TriggerEvents *	trigger_events_t;
	TriggerName *	trigger_name_t;
	TriggerActionTime *	trigger_action_time_t;
	DropIndexStmt *	drop_index_stmt_t;
	DropTableStmt *	drop_table_stmt_t;
	OptRestrictOrCascade *	opt_restrict_or_cascade_t;
	DropTriggerStmt *	drop_trigger_stmt_t;
	DropViewStmt *	drop_view_stmt_t;
	InsertStmt *	insert_stmt_t;
	InsertRest *	insert_rest_t;
	SuperValuesList *	super_values_list_t;
	ValuesList *	values_list_t;
	OptOnConflict *	opt_on_conflict_t;
	OptConflictExpr *	opt_conflict_expr_t;
	IndexedColumnList *	indexed_column_list_t;
	IndexedColumn *	indexed_column_t;
	UpdateStmt *	update_stmt_t;
	AlterAction *	alter_action_t;
	AlterConstantAction *	alter_constant_action_t;
	ColumnDefList *	column_def_list_t;
	ColumnDef *	column_def_t;
	OptColumnConstraintList *	opt_column_constraint_list_t;
	ColumnConstraintList *	column_constraint_list_t;
	ColumnConstraint *	column_constraint_t;
	OptReferenceClause *	opt_reference_clause_t;
	OptCheck *	opt_check_t;
	ConstraintType *	constraint_type_t;
	ReferenceClause *	reference_clause_t;
	OptForeignKey *	opt_foreign_key_t;
	OptForeignKeyActions *	opt_foreign_key_actions_t;
	ForeignKeyActions *	foreign_key_actions_t;
	KeyActions *	key_actions_t;
	OptConstraintAttributeSpec *	opt_constraint_attribute_spec_t;
	OptInitialTime *	opt_initial_time_t;
	ConstraintName *	constraint_name_t;
	OptTemp *	opt_temp_t;
	OptCheckOption *	opt_check_option_t;
	OptColumnNameListP *	opt_column_name_list_p_t;
	SetClauseList *	set_clause_list_t;
	SetClause *	set_clause_t;
	OptAsAlias *	opt_as_alias_t;
	Expr *	expr_t;
	Operand *	operand_t;
	CastExpr *	cast_expr_t;
	ScalarExpr *	scalar_expr_t;
	UnaryExpr *	unary_expr_t;
	BinaryExpr *	binary_expr_t;
	LogicExpr *	logic_expr_t;
	InExpr *	in_expr_t;
	CaseExpr *	case_expr_t;
	BetweenExpr *	between_expr_t;
	ExistsExpr *	exists_expr_t;
	FunctionExpr *	function_expr_t;
	OptDistinct *	opt_distinct_t;
	OptFilterClause *	opt_filter_clause_t;
	OptOverClause *	opt_over_clause_t;
	CaseList *	case_list_t;
	CaseClause *	case_clause_t;
	CompExpr *	comp_expr_t;
	ExtractExpr *	extract_expr_t;
	DatetimeField *	datetime_field_t;
	ArrayExpr *	array_expr_t;
	ArrayIndex *	array_index_t;
	Literal *	literal_t;
	StringLiteral *	string_literal_t;
	BoolLiteral *	bool_literal_t;
	NumLiteral *	num_literal_t;
	IntLiteral *	int_literal_t;
	FloatLiteral *	float_literal_t;
	OptColumn *	opt_column_t;
	TriggerBody *	trigger_body_t;
	OptIfNotExist *	opt_if_not_exist_t;
	OptIfExist *	opt_if_exist_t;
	Identifier *	identifier_t;
	AsAlias *	as_alias_t;
	TableName *	table_name_t;
	ColumnName *	column_name_t;
	OptIndexKeyword *	opt_index_keyword_t;
	ViewName *	view_name_t;
	FunctionName *	function_name_t;
	BinaryOp *	binary_op_t;
	OptNot *	opt_not_t;
	Name *	name_t;
	TypeName *	type_name_t;
	CharacterType *	character_type_t;
	CharacterWithLength *	character_with_length_t;
	CharacterWithoutLength *	character_without_length_t;
	CharacterConflicta *	character_conflicta_t;
	NumericType *	numeric_type_t;
	OptTableConstraintList *	opt_table_constraint_list_t;
	TableConstraintList *	table_constraint_list_t;
	TableConstraint *	table_constraint_t;
	OptEnforced *	opt_enforced_t;

#line 514 "bison_parser.cpp" /* yacc.c:352  */
};
#line 30 "bison.y" /* yacc.c:352  */
typedef union FF_STYPE FF_STYPE;
# define FF_STYPE_IS_TRIVIAL 1
# define FF_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined FF_LTYPE && ! defined FF_LTYPE_IS_DECLARED
typedef struct FF_LTYPE FF_LTYPE;
struct FF_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define FF_LTYPE_IS_DECLARED 1
# define FF_LTYPE_IS_TRIVIAL 1
#endif



int ff_parse (Program* result, yyscan_t scanner);

#endif /* !YY_FF_BISON_PARSER_H_INCLUDED  */



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
         || (defined FF_LTYPE_IS_TRIVIAL && FF_LTYPE_IS_TRIVIAL \
             && defined FF_STYPE_IS_TRIVIAL && FF_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1047

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  201
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  164
/* YYNRULES -- Number of rules.  */
#define YYNRULES  409
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  721

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
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200
};

#if FF_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   425,   425,   435,   442,   451,   457,   463,   469,   475,
     481,   490,   496,   502,   508,   517,   523,   529,   535,   544,
     554,   560,   569,   575,   584,   596,   602,   613,   627,   632,
     637,   645,   651,   659,   668,   674,   682,   691,   697,   707,
     729,   738,   750,   756,   764,   771,   779,   787,   792,   797,
     805,   811,   819,   825,   833,   839,   845,   853,   868,   876,
     883,   891,   897,   905,   911,   919,   928,   937,   948,   959,
     969,   982,   988,   993,  1001,  1007,  1015,  1021,  1029,  1035,
    1045,  1052,  1060,  1065,  1070,  1079,  1084,  1089,  1094,  1099,
    1107,  1115,  1125,  1131,  1139,  1145,  1152,  1162,  1168,  1176,
    1182,  1190,  1195,  1200,  1208,  1214,  1224,  1235,  1240,  1245,
    1253,  1259,  1265,  1273,  1279,  1289,  1299,  1309,  1314,  1319,
    1327,  1350,  1392,  1430,  1467,  1509,  1554,  1560,  1568,  1574,
    1585,  1591,  1597,  1603,  1609,  1615,  1621,  1627,  1633,  1642,
    1647,  1655,  1660,  1665,  1673,  1678,  1683,  1688,  1696,  1701,
    1706,  1714,  1719,  1724,  1732,  1738,  1744,  1752,  1758,  1764,
    1773,  1779,  1785,  1791,  1800,  1805,  1813,  1818,  1823,  1831,
    1840,  1845,  1853,  1875,  1899,  1904,  1909,  1917,  1939,  1962,
    1975,  1982,  1988,  1998,  2004,  2014,  2023,  2029,  2037,  2045,
    2052,  2060,  2066,  2076,  2086,  2097,  2111,  2129,  2161,  2180,
    2199,  2208,  2213,  2218,  2223,  2228,  2234,  2239,  2247,  2253,
    2263,  2283,  2291,  2299,  2305,  2315,  2324,  2331,  2339,  2346,
    2354,  2359,  2364,  2372,  2415,  2420,  2428,  2434,  2442,  2447,
    2452,  2457,  2463,  2472,  2477,  2482,  2487,  2492,  2500,  2506,
    2512,  2520,  2525,  2530,  2538,  2547,  2552,  2560,  2565,  2570,
    2575,  2583,  2589,  2597,  2603,  2613,  2620,  2630,  2636,  2644,
    2650,  2656,  2662,  2668,  2674,  2683,  2689,  2695,  2701,  2707,
    2713,  2719,  2725,  2731,  2737,  2746,  2756,  2762,  2771,  2777,
    2783,  2789,  2795,  2801,  2806,  2814,  2820,  2828,  2835,  2845,
    2852,  2862,  2870,  2878,  2889,  2896,  2902,  2910,  2920,  2928,
    2939,  2949,  2957,  2970,  2975,  2983,  2989,  2997,  3003,  3009,
    3017,  3023,  3033,  3043,  3050,  3057,  3064,  3071,  3078,  3088,
    3098,  3103,  3108,  3113,  3118,  3123,  3131,  3140,  3150,  3156,
    3162,  3171,  3180,  3185,  3193,  3199,  3208,  3216,  3224,  3229,
    3237,  3243,  3249,  3255,  3264,  3269,  3277,  3282,  3290,  3299,
    3317,  3335,  3353,  3358,  3363,  3368,  3376,  3385,  3403,  3408,
    3413,  3418,  3423,  3428,  3436,  3441,  3449,  3458,  3464,  3473,
    3479,  3488,  3498,  3504,  3509,  3514,  3522,  3527,  3532,  3537,
    3542,  3547,  3552,  3557,  3562,  3567,  3575,  3580,  3585,  3590,
    3595,  3600,  3605,  3610,  3615,  3620,  3625,  3630,  3635,  3643,
    3649,  3657,  3663,  3673,  3680,  3687,  3695,  3722,  3727,  3732
};
#endif

#if FF_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP_NOTEQUAL", "ENABLE", "SIMPLE",
  "TEXT", "OVER", "YEAR", "INSERT_METHOD", "OP_SEMI", "BIGINT", "LIMIT",
  "OP_GREATERTHAN", "WITH", "ORDER", "OPTION", "LAST", "UNBOUNDED",
  "PRECEDING", "EXCEPT", "NUMERIC", "OP_LESSTHAN", "ACTION", "BEFORE",
  "OP_GREATEREQ", "CHECK", "COMPACT", "FULL", "NATURAL", "BINARY",
  "NATIONAL", "ENUM", "REDUNDANT", "OP_ADD", "CURRENT", "MERGE", "TRIGGER",
  "COMPRESSED", "OP_SUB", "FALSE", "UNIQUE", "WHERE", "MINUTE", "FIRST",
  "ON", "PARTIAL", "DOUBLE", "AFTER", "PRIMARY", "MONTH", "DEFERRED",
  "VALUES", "LONGTEXT", "SQL", "SHARED", "VALIDATION", "OR", "VIEW",
  "INDEX", "GROUP", "OP_MUL", "INPLACE", "FOREIGN", "RESTRICT", "SPATIAL",
  "FOLLOWING", "DEC", "SELECT", "NONE", "DISTINCT", "TRUE", "DYNAMIC",
  "BY", "OP_MOD", "INTEGER", "SECURITY", "IS", "DEFINER", "ROW",
  "ENFORCED", "END", "RECURSIVE", "FOR", "TEMPTABLE", "UNION", "NULLS",
  "UPDATE", "ELSE", "RANGE", "SET", "INVOKER", "OFFSET", "INDEXED",
  "FORCE", "NCHAR", "AND", "INITIALLY", "PRECISION", "FILTER", "WITHOUT",
  "NOT", "DELETE", "DEFFERRABLE", "REAL", "THEN", "UNDEFINED", "DEFAULT",
  "CROSS", "CHAR", "REFERENCES", "OP_XOR", "CASE", "FIXED", "HOUR", "NO",
  "COLUMN", "LOCAL", "DROP", "REPLACE", "ASC", "OP_COMMA", "DISABLE",
  "TABLE", "ARRAY", "IF", "EXTRACT", "LEFT", "FULLTEXT", "HASH",
  "ALGORITHM", "LOCK", "DECIMAL", "PARTITION", "CASCADE", "ADD", "BETWEEN",
  "OP_LESSEQ", "MATCH", "ALL", "ROWS", "JOIN", "LIKE", "OP_RP", "IGNORE",
  "INT", "MEDIUMTEXT", "BOOLEAN", "KEY", "EACH", "USING", "RENAME", "DO",
  "OP_LP", "CHARACTER", "UMINUS", "CAST", "GROUPS", "OUTER", "NULL",
  "SMALLINT", "EXCLUSIVE", "TEMPORARY", "CONSTRAINT", "CREATE",
  "OP_LBRACKET", "WHEN", "IMMEDIATE", "TO", "BTREE", "DAY", "CONFLICT",
  "ROW_FORMAT", "OP_RBRACKET", "EXISTS", "INSERT", "KEYS", "INTO",
  "OP_DIVIDE", "CASCADED", "ISNULL", "AS", "INNER", "INTERSECT", "IN",
  "OP_EQUAL", "VARCHAR", "COPY", "ALTER", "DESC", "FROM", "TINYTEXT",
  "FLOAT", "SECOND", "WINDOW", "NOTHING", "HAVING", "INTLITERAL",
  "FLOATLITERAL", "IDENTIFIER", "STRINGLITERAL", "$accept", "program",
  "stmtlist", "stmt", "create_stmt", "drop_stmt", "alter_stmt",
  "select_stmt", "select_with_parens", "select_no_parens",
  "select_clause_list", "select_clause", "combine_clause",
  "opt_from_clause", "select_target", "opt_window_clause", "window_clause",
  "window_def_list", "window_def", "window_name", "window",
  "opt_partition", "opt_frame_clause", "range_or_rows",
  "frame_bound_start", "frame_bound_end", "frame_bound",
  "opt_exist_window_name", "opt_group_clause", "opt_having_clause",
  "opt_where_clause", "where_clause", "from_clause", "table_ref",
  "opt_index", "opt_on", "opt_using", "column_name_list",
  "opt_table_prefix", "join_op", "opt_join_type", "expr_list",
  "opt_limit_clause", "limit_clause", "opt_limit_row_count",
  "opt_order_clause", "opt_order_nulls", "order_item_list", "order_item",
  "opt_order_behavior", "opt_with_clause", "cte_table_list", "cte_table",
  "cte_table_name", "opt_all_or_distinct", "create_table_stmt",
  "create_index_stmt", "create_trigger_stmt", "create_view_stmt",
  "opt_table_option_list", "table_option_list", "table_option",
  "opt_op_comma", "opt_ignore_or_replace", "opt_view_algorithm",
  "opt_sql_security", "opt_index_option", "opt_extra_option",
  "index_algorithm_option", "lock_option", "opt_op_equal",
  "trigger_events", "trigger_name", "trigger_action_time",
  "drop_index_stmt", "drop_table_stmt", "opt_restrict_or_cascade",
  "drop_trigger_stmt", "drop_view_stmt", "insert_stmt", "insert_rest",
  "super_values_list", "values_list", "opt_on_conflict",
  "opt_conflict_expr", "indexed_column_list", "indexed_column",
  "update_stmt", "alter_action", "alter_constant_action",
  "column_def_list", "column_def", "opt_column_constraint_list",
  "column_constraint_list", "column_constraint", "opt_reference_clause",
  "opt_check", "constraint_type", "reference_clause", "opt_foreign_key",
  "opt_foreign_key_actions", "foreign_key_actions", "key_actions",
  "opt_constraint_attribute_spec", "opt_initial_time", "constraint_name",
  "opt_temp", "opt_check_option", "opt_column_name_list_p",
  "set_clause_list", "set_clause", "opt_as_alias", "expr", "operand",
  "cast_expr", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "between_expr", "exists_expr", "function_expr",
  "opt_distinct", "opt_filter_clause", "opt_over_clause", "case_list",
  "case_clause", "comp_expr", "extract_expr", "datetime_field",
  "array_expr", "array_index", "literal", "string_literal", "bool_literal",
  "num_literal", "int_literal", "float_literal", "opt_column",
  "trigger_body", "opt_if_not_exist", "opt_if_exist", "identifier",
  "as_alias", "table_name", "column_name", "opt_index_keyword",
  "view_name", "function_name", "binary_op", "opt_not", "name",
  "type_name", "character_type", "character_with_length",
  "character_without_length", "character_conflicta", "numeric_type",
  "opt_table_constraint_list", "table_constraint_list", "table_constraint",
  "opt_enforced", YY_NULLPTR
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
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455
};
# endif

#define YYPACT_NINF -338

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-338)))

#define YYTABLE_NINF -366

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-366)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -54,   -89,    27,    17,   114,   -70,    67,  -338,   195,
    -338,  -338,  -338,  -338,  -338,  -338,    -7,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,    66,  -338,  -338,
     160,   129,  -338,   169,    66,   146,   207,   207,    66,  -338,
     221,   268,   272,   344,    66,  -338,   301,  -338,  -338,   231,
     363,   296,   362,    66,  -338,    16,   -30,   245,   410,    -2,
    -338,    66,   273,    66,  -338,   146,    66,   341,  -338,   259,
      66,    66,   274,   207,  -338,  -338,   297,  -338,   302,   217,
     359,   379,   314,    66,   128,  -338,  -338,  -338,   838,    66,
     365,   428,  -338,  -338,  -338,   344,  -338,    17,   303,  -338,
     320,   353,  -338,  -121,  -338,  -338,  -338,    40,   260,   260,
    -338,  -338,  -338,    66,  -338,  -338,   -29,   363,  -338,  -338,
    -338,   298,    66,   343,    66,   402,   278,   393,  -338,   394,
      62,   280,   336,    96,  -338,  -338,  -338,   847,  -338,  -338,
    -338,   847,   804,   292,   306,   461,   308,  -338,  -338,  -338,
    -338,   275,  -338,   -21,   459,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,   310,  -338,   317,   293,   146,
     838,   838,  -338,  -338,  -338,   328,  -338,    66,  -121,    66,
     434,   356,   295,  -338,  -338,  -338,  -338,    15,   185,    40,
    -338,  -338,  -338,   433,   421,  -338,  -338,   169,   309,    11,
      66,  -338,  -338,  -338,   337,  -338,    66,  -338,    66,    66,
      66,   847,   178,   718,   838,    44,   313,   323,   838,     6,
     349,   351,   838,  -338,   434,  -338,   838,   838,   369,   847,
     847,   847,   847,  -338,  -338,  -338,  -338,   -51,   271,  -338,
     847,   847,   847,   305,  -338,  -338,   847,   847,   319,   -24,
     352,   169,  -338,   376,   -33,   177,  -338,  -338,   434,   364,
     838,   410,  -338,  -121,   838,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,    66,    66,   325,  -338,   260,    66,   260,
     220,  -338,    12,   355,  -338,  -338,  -338,   282,  -338,   342,
     367,   204,   318,  -338,   838,  -338,   339,  -338,  -338,  -338,
    -338,  -338,  -338,   321,  -338,  -338,   -16,   130,  -106,   454,
     419,  -338,   838,   742,   286,   286,   286,   360,  -338,   847,
     847,   568,   286,   742,   345,   742,   178,  -102,  -338,   422,
     838,   509,   479,    65,   838,  -338,  -338,   439,   838,   838,
     410,   346,    19,   515,  -338,    19,   445,   169,    17,    28,
     366,   409,   258,  -338,  -338,   354,  -338,    10,   838,  -338,
    -338,  -338,  -338,    89,  -338,   440,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,    25,  -338,  -338,  -338,   384,  -338,    66,
     838,  -338,   838,   294,  -338,   838,   282,    98,  -338,  -338,
    -338,   180,   310,   146,   386,   467,   348,  -338,  -338,   643,
     742,   847,  -338,   461,  -338,   390,   537,   403,   404,   374,
    -338,   395,   497,  -338,  -338,   338,  -338,    19,    19,   515,
     838,   838,  -338,   401,   370,   538,  -338,  -338,  -338,    66,
     347,   411,  -338,   432,    66,  -338,  -338,  -338,  -338,  -338,
    -338,    17,  -338,   412,   437,   -33,  -338,  -338,  -338,  -338,
     413,   400,  -338,   539,    25,  -338,   305,  -338,    19,   304,
    -338,   159,   420,  -338,   406,  -338,   426,   425,   115,   -12,
     838,   838,    66,  -338,  -338,   847,   689,   429,   431,   527,
     163,  -338,   422,  -338,   423,   838,  -338,   456,  -338,  -338,
    -338,  -338,    19,    19,   496,    17,    -4,  -338,  -338,  -338,
     430,   435,   438,   441,    10,   366,  -338,  -338,   444,   838,
    -338,  -338,  -338,   447,   227,  -338,   436,  -338,  -338,  -338,
    -338,  -338,   146,   146,   505,   489,   552,   455,   407,  -338,
     483,   424,  -338,   689,  -338,  -338,   838,    66,  -338,   537,
     838,   457,   463,   395,     9,   538,   592,   585,   586,   838,
     838,   460,   465,  -338,  -338,    78,   274,  -338,   838,   468,
    -338,   512,  -338,   552,   552,    66,  -338,   838,   469,   146,
     838,  -338,    66,   472,   164,   484,   493,  -338,  -338,   485,
      18,  -338,  -338,  -338,  -338,   458,  -338,  -338,  -338,  -338,
    -338,   614,   615,   172,   491,   838,    66,  -338,  -338,  -338,
     181,  -338,    66,  -338,   469,   469,  -338,    19,   487,  -338,
     552,    19,  -338,    66,  -338,  -338,   574,   410,   434,  -121,
    -338,  -338,  -338,   161,  -338,   498,   506,   161,   169,  -338,
    -338,    66,   469,   508,   838,   -41,  -338,   434,  -338,   572,
    -338,  -338,   512,  -338,    -3,   511,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,   635,  -338,  -338,  -338,   300,   203,   277,
    -338,  -338,   629,   576,   648,  -338,  -338,   238,   269,   269,
    -338,  -338,  -338,   554,   565,  -338,  -338,  -338,   567,  -338,
    -338,  -338,   138,   644,  -338,  -338,  -338,   565,   -26,  -338,
     738,  -338,  -338,  -338,  -338,  -338,  -338,   605,  -338,  -338,
    -338
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     112,     0,     0,   246,   112,   147,     0,     0,     2,     0,
       5,     6,    10,     7,    21,    20,     0,    11,    12,    13,
      14,    15,    16,    17,    18,     9,     8,     0,   348,   110,
     113,     0,   350,   252,     0,   258,   347,   347,     0,   245,
       0,     0,     0,     0,     0,   352,     0,   354,   353,     0,
     150,     0,     0,     0,     1,   112,   119,     0,   100,    25,
     111,     0,     0,     0,   116,   258,     0,     0,   257,     0,
       0,     0,   156,   347,    23,    22,     0,   169,   147,     0,
       0,     0,   345,     0,     0,     3,   118,   117,   365,     0,
       0,    93,    30,    28,    29,     0,   114,   112,     0,   351,
      78,     0,   349,     0,   346,   177,   356,   176,   165,   165,
     172,   154,   155,     0,   170,   171,     0,   150,   145,   146,
     144,     0,     0,     0,     0,     0,     0,     0,   202,     0,
     339,     0,   339,   339,   205,    19,   200,     0,   333,   284,
     332,   364,   365,     0,     0,   112,     0,   283,   336,   337,
     331,    32,    33,   258,   259,   263,   267,   268,   269,   264,
     262,   270,   260,   261,   273,   285,   271,   272,   266,   277,
     328,   329,   330,   334,   335,   351,   276,     0,     0,   258,
     365,   365,    24,    92,    26,     0,   251,     0,     0,     0,
      64,   253,     0,   174,   175,   178,   164,     0,     0,   176,
     168,   166,   167,     0,     0,   148,   149,   252,     0,   127,
       0,   204,   206,   207,     0,   338,     0,   203,     0,     0,
       0,     0,   278,   279,   365,     0,     0,   310,   365,     0,
       0,     0,   365,    81,    64,    31,   365,   365,    91,     0,
       0,     0,     0,   358,   359,   362,   361,     0,   364,   363,
       0,     0,     0,     0,   360,   280,     0,     0,     0,   304,
       0,   252,    99,   104,   109,    94,   115,    79,    64,     0,
     365,   100,    63,     0,   365,   158,   157,   159,   162,   161,
     160,   163,   173,     0,     0,     0,   344,   165,     0,   165,
     143,   126,   128,     0,   201,   199,   198,     0,   196,     0,
       0,     0,     0,   295,   365,   311,     0,   325,   321,   324,
     322,   323,   320,     0,   274,   265,     0,    66,     0,    60,
     290,   289,   365,   314,   315,   316,   318,     0,   281,     0,
       0,     0,   317,   287,     0,   313,   286,     0,   303,   306,
     365,   112,   188,   112,   365,   107,   108,   103,   365,   365,
     100,     0,    65,    98,   254,   255,     0,   252,   112,     0,
     400,   208,     0,   142,   141,     0,   139,     0,   365,   379,
     389,   397,   375,     0,   374,   393,   382,   396,   387,   373,
     385,   390,   377,   392,   395,   386,   381,   398,   376,   388,
     378,   380,   391,   212,   368,   369,   370,   372,   367,     0,
     365,   294,   365,     0,   326,   365,     0,    89,    82,    83,
      80,    81,   350,   258,     0,     0,    35,    90,   282,     0,
     288,     0,   327,   112,   293,     0,   309,     0,     0,     0,
     179,     0,     0,   180,   105,     0,   106,    95,    96,    98,
     365,   365,   195,     0,     0,   250,   132,   131,   130,     0,
       0,     0,   399,   401,     0,   138,   137,   136,   134,   133,
     135,   112,   129,     0,   191,   109,   384,   383,   394,   222,
       0,     0,   210,   219,   213,   215,     0,   197,   312,     0,
     297,     0,     0,    88,    85,    87,     0,     0,     0,    73,
     365,   365,     0,    27,    34,     0,   298,     0,     0,     0,
       0,   301,   306,   300,   190,   365,   182,   183,   181,   102,
     101,   194,   256,    97,     0,   112,     0,   124,   366,   244,
       0,     0,     0,     0,   127,     0,   209,   120,   153,   365,
     193,   220,   221,     0,   217,   214,     0,   296,   319,   275,
      86,    84,   258,   258,     0,     0,    75,     0,    62,    36,
      37,     0,    40,   299,   291,   292,   365,    58,   308,   309,
     365,     0,     0,     0,   112,   250,     0,     0,     0,   365,
     365,     0,     0,   121,   402,     0,   156,   192,   365,     0,
     211,     0,   371,    75,    75,     0,    72,   365,    77,   258,
     365,    59,     0,     0,     0,     0,    43,    57,   302,     0,
       0,   185,   184,   340,   343,     0,   342,   341,   123,   125,
     247,     0,     0,     0,     0,   365,     0,   152,   151,   122,
       0,   224,     0,   216,    77,    77,    71,    74,     0,    67,
      75,    61,    38,    58,   305,   307,     0,   100,     0,     0,
     186,   249,   248,   409,   404,     0,     0,   409,   252,    69,
      70,     0,    77,     0,   365,    46,   189,     0,   407,     0,
     405,   403,     0,   218,   227,     0,    68,    39,    42,    47,
      48,    49,    41,   365,   187,   408,   406,     0,     0,   240,
     226,    76,     0,     0,   365,    44,    50,     0,     0,     0,
     230,   228,   229,     0,   243,   223,    51,    56,     0,    54,
      55,   236,     0,     0,   235,   231,   232,   243,     0,   238,
     365,   234,   233,   237,   239,   241,   242,     0,    45,    52,
      53
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -338,  -338,   617,  -338,  -338,   109,   112,   -91,   674,     7,
     589,  -338,  -338,  -338,  -338,  -338,  -338,    88,  -338,   186,
      48,  -338,  -338,  -338,     5,  -338,   -25,  -338,  -338,  -338,
     -44,  -264,  -338,   279,  -338,  -278,  -283,  -182,  -338,  -338,
    -338,  -137,  -338,  -338,   252,  -258,  -338,   350,  -338,   228,
       2,   205,  -338,  -338,  -338,  -338,  -338,  -338,  -338,   171,
     330,  -338,  -338,  -338,   620,   582,  -338,   124,  -338,   619,
     -94,  -338,   631,  -338,  -338,  -338,   513,  -338,  -338,   143,
    -338,   145,  -338,  -338,  -338,  -337,  -338,   149,  -338,  -338,
     261,   500,  -338,   242,  -338,  -338,  -338,  -338,    60,  -338,
    -338,  -338,    35,  -338,    20,  -338,   720,   165,  -190,  -179,
    -338,   -55,   -74,  -103,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,   224,   170,   156,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -241,  -338,
     276,  -338,  -338,    22,    -1,  -338,     1,   -59,  -338,   -93,
     414,  -338,   580,  -338,   329,  -338,  -338,  -338,  -338,  -338,
    -338,   212,  -338,    91
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      58,    59,    95,   234,   151,   493,   494,   549,   550,   551,
     595,   637,   672,   673,   685,   718,   686,   596,   416,   591,
     271,   272,   235,   317,   546,   588,   629,    98,   318,   410,
     486,   152,   182,   183,   442,    91,   436,   262,   263,   347,
      43,    29,    30,    31,    88,    17,    18,    19,    20,   290,
     291,   292,   367,   365,    50,    81,   576,   110,   111,   112,
     197,   203,    76,   116,    21,    22,   195,    23,    24,    25,
     342,   506,   507,   430,   561,   463,   464,    26,   135,   136,
     360,   361,   472,   473,   474,   580,   534,   475,   623,   581,
     679,   680,   705,   695,   709,   450,    40,   517,    64,   190,
     191,    67,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   340,   426,   501,   226,   227,   165,
     166,   313,   167,   168,   169,   170,   171,   172,   173,   174,
     216,   608,   124,    70,   175,    68,    33,   176,    52,   107,
     177,   257,   178,   519,   393,   394,   395,   396,   397,   398,
     451,   452,   453,   660
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    32,    16,    35,   100,   267,   185,   269,   231,   268,
     101,    42,   334,   353,   307,   198,    -4,   285,    92,   287,
     287,  -140,   566,     1,   236,   715,    32,     1,    27,   207,
       1,     1,   189,    32,   222,    65,   236,    32,   223,    72,
      86,   236,   677,    77,   192,   446,   338,   411,   669,   308,
     327,   423,    32,    53,    84,    34,   309,    16,   200,    71,
      32,    56,    99,   237,    36,   102,   469,    54,   225,    77,
     106,   343,   447,   201,   470,   237,   236,   275,    28,     1,
     237,   544,    32,    93,   125,    37,    38,   345,    32,   545,
     179,   306,   439,    28,   354,   113,     2,    28,   238,   670,
       2,   236,    99,     2,   193,   639,   264,   265,   328,    87,
      28,   214,    32,   567,   199,   237,   671,   431,   223,   339,
     310,   106,   276,    32,   261,   209,   471,     3,   100,   192,
     100,     3,   126,   366,     3,   678,   323,   324,   325,   326,
     237,   716,   127,   448,   407,    28,   202,   331,   332,   333,
     301,    44,   230,   335,   336,    45,   346,   295,   316,   407,
      66,   299,   320,   321,   288,   406,     4,   444,    57,     4,
       4,    46,   432,  -355,   194,   568,   311,     5,   215,    47,
       5,    94,   289,   289,  -140,   417,    99,    99,    99,    39,
     319,   357,   577,   359,     1,   362,   352,     6,   466,   312,
     355,     6,   277,   427,     6,    55,   483,   617,   690,    32,
     224,   293,   215,   640,   192,    99,   236,   297,    32,    99,
     298,   236,   128,   599,   350,   484,   419,   420,   129,   236,
     403,   691,    60,   614,   236,   536,   408,  -246,   236,   245,
     278,   658,    48,   467,    49,   711,   130,   618,  -112,   692,
     131,   408,   246,   118,   279,   237,   409,   699,   543,   109,
     237,   236,   659,   132,   219,    28,    96,   445,   237,   348,
     264,   409,    99,   237,   437,   438,    39,   237,   645,   133,
     485,    61,    32,   106,   356,   455,   498,   297,   369,   249,
     579,   456,   280,   370,   465,   236,   457,   712,   349,  -366,
     237,   119,   538,   371,   700,   624,   625,   634,  -366,   400,
      62,  -366,   372,   373,   374,   643,   557,   412,   496,   413,
     243,   114,    63,   120,   647,   244,   478,    66,   479,   375,
     458,   481,    69,   701,   237,   376,    32,  -225,   424,   363,
     477,   649,   650,   253,    73,   115,   281,   245,   428,   377,
     433,   236,   652,   547,   548,   509,   254,   378,   489,   702,
     246,   236,    28,   247,   364,   459,   512,   513,   562,   666,
     527,   460,   379,   520,   656,   480,   205,   380,   693,   655,
     694,   302,   510,   305,   703,   537,   381,   688,   521,   206,
     237,   382,   553,   674,   303,   383,   522,   249,    99,   401,
     237,   304,   689,   704,   108,   109,   402,   329,   218,   220,
     523,    74,    56,   330,   384,    75,    79,    80,   487,    82,
      78,    83,    89,  -366,   565,    90,    97,   385,   386,   387,
     497,   103,    49,   104,   646,   121,   388,   122,   180,   123,
     181,   187,   389,   188,   208,   196,   186,   210,   518,   212,
     213,   253,   215,   297,   211,   465,   217,   228,   664,   229,
     657,   232,   239,  -357,   254,   233,   255,   260,   390,   665,
     259,   266,   240,   391,   392,     1,   270,   273,   283,   284,
     274,   241,   594,   286,   242,   294,   465,   583,   584,   224,
     322,   552,   314,   243,   315,   613,   465,   344,   244,   552,
     137,   138,   148,   337,   620,   341,   358,   351,   368,   330,
     399,   405,   404,   627,   415,   237,   631,   668,   422,   418,
     245,   425,   139,     1,   429,   435,   626,   441,   443,   449,
     454,   440,   140,   246,   630,   461,   247,   476,   468,   490,
     491,   465,   492,   499,   500,   504,   502,   503,   505,   508,
     514,   515,   516,   525,   524,   528,   597,   100,   529,   532,
     248,   531,   141,   539,   540,   533,   605,   541,   542,   556,
     249,   239,   554,   142,   555,   564,   560,   563,   585,   582,
     192,   240,   586,   569,    99,   143,   571,   144,   570,   572,
     241,   552,   100,   242,   575,   250,   251,   587,   589,   687,
     578,   252,   243,   590,   592,   593,   601,   244,   610,   600,
     687,   611,   612,   615,   145,    99,   621,   146,   616,   628,
     147,    32,   622,   648,   253,   633,   636,   635,   638,   245,
     641,   642,   597,    57,   644,  -365,   687,   254,    99,   255,
     651,   661,   246,  -365,   256,   247,   239,   654,   696,   662,
      99,   667,   675,   682,   681,   697,   240,   707,   148,   149,
      28,   150,   708,   710,   421,   241,   682,   713,   242,   300,
     683,   720,    85,   603,   137,   138,   604,   243,    41,   249,
     632,   653,   244,   683,   184,   719,   558,   137,   138,   698,
     488,   511,   239,   530,   434,   573,   139,   462,   117,   204,
     619,   105,   240,   134,   245,   251,   140,   606,   602,   139,
     252,   241,   282,   607,   242,   526,   535,   246,   296,   140,
     247,   239,   676,   243,   706,    51,   559,   714,   244,   598,
     609,   240,   414,   253,   258,   482,   141,   574,   663,   495,
     241,     0,     0,   242,   300,  -366,   254,   142,   255,   141,
     245,     0,   243,   256,   249,   240,   717,   244,     0,   143,
     142,   144,     0,   246,   241,     0,   247,   242,     0,     0,
       0,   684,   143,   683,   144,     0,   243,   137,   138,   245,
     251,   244,     0,     0,     0,   252,     0,     0,   145,     0,
     300,   146,   246,     0,   147,   247,     0,     0,     0,   139,
     249,   145,     0,   245,   146,     0,     0,   147,   253,   140,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
       0,   254,     0,   255,     0,     0,   251,     0,   256,   249,
       0,   252,   148,   149,    28,   150,     0,     0,     0,   141,
       0,     0,     0,   137,   138,   148,   149,    28,   150,     0,
     142,     0,     0,   249,   253,   251,     0,     0,     0,     0,
     252,     0,   143,     0,   144,   139,     0,   254,     0,   255,
       0,     0,     0,     0,   256,   140,     0,   137,   138,   251,
       0,     0,     0,   253,  -366,     0,   137,   138,     0,     0,
       0,   145,     0,     0,   146,     0,   254,   147,   255,   139,
       0,     0,     0,   256,     0,   141,     0,   253,   139,   140,
       0,     0,     0,     0,     0,     0,   142,     0,   140,     0,
     254,     0,   255,     0,     0,     0,     0,  -366,   143,     0,
     144,     0,     0,     0,     0,   148,   149,    28,   150,   141,
       0,     0,     0,     0,     0,     0,     0,     0,   221,     0,
     142,     0,     0,     0,     0,     0,     0,   145,     0,   142,
     146,     0,   143,   147,   144,     0,     0,     0,     0,     0,
     224,   143,     0,   144,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   145,     0,     0,   146,     0,     0,   147,     0,     0,
     145,   148,   149,    28,   150,     0,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,   149,    28,   150,     0,
       0,     0,     0,     0,   148,   149,    28,   150
};

static const yytype_int16 yycheck[] =
{
       1,     2,     0,     2,    63,   187,    97,   189,   145,   188,
      65,     4,   253,   271,     8,   109,     0,   207,    20,     9,
       9,     9,    26,    14,    57,    51,    27,    14,    82,   122,
      14,    14,   153,    34,   137,    34,    57,    38,   141,    38,
      70,    57,    45,    44,   103,    17,    70,   153,    89,    43,
     101,   153,    53,   123,    53,   144,    50,    55,    87,    37,
      61,    68,    63,    96,    37,    66,    41,     0,   142,    70,
      71,   261,    44,   102,    49,    96,    57,    62,   199,    14,
      96,    93,    83,    85,    83,    58,    59,   120,    89,   101,
      89,   228,   350,   199,   273,    73,    87,   199,   153,   140,
      87,    57,   103,    87,    64,    87,   180,   181,   159,   139,
     199,    49,   113,   117,   113,    96,   157,    52,   221,   143,
     114,   122,   107,   124,   179,   124,   101,   118,   187,   188,
     189,   118,     4,   121,   118,   138,   239,   240,   241,   242,
      96,   167,    14,   115,    29,   199,   175,   250,   251,   252,
     224,    37,   145,   256,   257,    41,   189,   216,   232,    29,
     181,   220,   236,   237,   153,   181,   153,   357,   175,   153,
     153,    57,   107,    59,   134,   179,   170,   164,   116,    65,
     164,   183,   172,   172,   172,   322,   187,   188,   189,   162,
     234,   284,   529,   287,    14,   289,   270,   188,   109,   193,
     274,   188,   187,   340,   188,    10,   108,   129,     5,   210,
     166,   210,   116,   195,   273,   216,    57,   218,   219,   220,
     219,    57,    94,   560,   268,   127,   329,   330,   100,    57,
     304,    28,    27,   570,    57,   476,   121,   123,    57,    61,
      55,    80,   128,   154,   130,   107,   118,   169,    68,    46,
     122,   121,    74,    36,    69,    96,   141,    19,   143,   131,
      96,    57,   101,   135,   168,   199,    61,   358,    96,    92,
     344,   141,   273,    96,   348,   349,   162,    96,   615,   151,
     182,   121,   283,   284,   283,    27,   423,   288,     6,   111,
      63,    33,   107,    11,   368,    57,    38,   159,   121,    13,
      96,    84,   143,    21,    66,   583,   584,   143,    22,   105,
     181,    25,    30,    31,    32,   143,   153,   318,   421,   318,
      34,    24,   153,   106,   143,    39,   400,   181,   402,    47,
      72,   405,   125,    64,    96,    53,   337,   110,   337,   119,
     399,   624,   625,   165,   123,    48,   161,    61,   341,    67,
     343,    57,   630,   490,   491,    17,   178,    75,   413,    90,
      74,    57,   199,    77,   144,   107,   440,   441,   505,   652,
     461,   113,    90,    26,   638,    81,    78,    95,   101,   637,
     103,   225,    44,   227,   115,    81,   104,    87,    41,    91,
      96,   109,   495,   657,    81,   113,    49,   111,   399,    81,
      96,    88,   102,   134,   130,   131,    88,   136,   132,   133,
      63,   143,    68,   142,   132,   143,   185,    54,   411,   123,
     119,    59,   177,   137,   515,    15,   153,   145,   146,   147,
     423,    90,   130,   174,   616,    76,   154,    58,    73,   125,
      12,   121,   160,    90,   101,   185,   143,    45,   449,    56,
      56,   165,   116,   454,   176,   529,   176,   165,   648,   153,
     639,   153,     3,   153,   178,   190,   180,   174,   186,   651,
     153,   143,    13,   191,   192,    14,    42,   121,    45,    58,
     185,    22,   556,   174,    25,   148,   560,   542,   543,   166,
     121,   492,   143,    34,   143,   569,   570,   121,    39,   500,
      39,    40,   197,   184,   578,   153,   181,   143,   153,   142,
     168,   190,   173,   587,    60,    96,   590,   654,   173,   159,
      61,    99,    61,    14,    45,    86,   585,    12,    83,   163,
     121,   185,    71,    74,   589,   181,    77,   153,    98,   153,
      73,   615,   194,   153,     7,   171,   143,   143,   153,    52,
     149,   181,    14,   121,   143,   143,   557,   616,   121,   159,
     101,   148,   101,   143,   158,    26,   564,   141,   143,    42,
     111,     3,   143,   112,   143,    79,   153,   121,    73,   143,
     639,    13,    93,   153,   585,   124,   148,   126,   153,   148,
      22,   592,   651,    25,   150,   136,   137,    45,   143,   673,
     153,   142,    34,   196,   121,   181,   143,    39,    16,   152,
     684,    26,    26,   153,   153,   616,   148,   156,   153,   150,
     159,   622,   110,   622,   165,   153,   133,   143,   143,    61,
      16,    16,   633,   175,   143,   174,   710,   178,   639,   180,
     153,   143,    74,   184,   185,    77,     3,    73,    19,   143,
     651,   143,    80,    18,   143,    79,    13,   103,   197,   198,
     199,   200,    97,    96,    96,    22,    18,    23,    25,   101,
      35,    66,    55,   564,    39,    40,   564,    34,     4,   111,
     592,   633,    39,    35,    95,   710,   500,    39,    40,   684,
     411,   439,     3,   465,   344,   524,    61,   367,    78,   117,
     576,    70,    13,    84,    61,   137,    71,   564,   563,    61,
     142,    22,   199,   564,    25,   454,   474,    74,   218,    71,
      77,     3,   662,    34,   689,     5,   502,   707,    39,   559,
     565,    13,   318,   165,   154,   406,   101,   525,   647,    96,
      22,    -1,    -1,    25,   101,     3,   178,   112,   180,   101,
      61,    -1,    34,   185,   111,    13,    18,    39,    -1,   124,
     112,   126,    -1,    74,    22,    -1,    77,    25,    -1,    -1,
      -1,   136,   124,    35,   126,    -1,    34,    39,    40,    61,
     137,    39,    -1,    -1,    -1,   142,    -1,    -1,   153,    -1,
     101,   156,    74,    -1,   159,    77,    -1,    -1,    -1,    61,
     111,   153,    -1,    61,   156,    -1,    -1,   159,   165,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,
      -1,   178,    -1,   180,    -1,    -1,   137,    -1,   185,   111,
      -1,   142,   197,   198,   199,   200,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    39,    40,   197,   198,   199,   200,    -1,
     112,    -1,    -1,   111,   165,   137,    -1,    -1,    -1,    -1,
     142,    -1,   124,    -1,   126,    61,    -1,   178,    -1,   180,
      -1,    -1,    -1,    -1,   185,    71,    -1,    39,    40,   137,
      -1,    -1,    -1,   165,   142,    -1,    39,    40,    -1,    -1,
      -1,   153,    -1,    -1,   156,    -1,   178,   159,   180,    61,
      -1,    -1,    -1,   185,    -1,   101,    -1,   165,    61,    71,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    71,    -1,
     178,    -1,   180,    -1,    -1,    -1,    -1,   185,   124,    -1,
     126,    -1,    -1,    -1,    -1,   197,   198,   199,   200,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,   112,
     156,    -1,   124,   159,   126,    -1,    -1,    -1,    -1,    -1,
     166,   124,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
     153,   197,   198,   199,   200,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   198,   199,   200,    -1,
      -1,    -1,    -1,    -1,   197,   198,   199,   200
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    14,    87,   118,   153,   164,   188,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   251,   256,   257,   258,
     259,   275,   276,   278,   279,   280,   288,    82,   199,   252,
     253,   254,   345,   347,   144,   347,    37,    58,    59,   162,
     307,   209,   210,   251,    37,    41,    57,    65,   128,   130,
     265,   307,   349,   123,     0,    10,    68,   175,   211,   212,
     252,   121,   181,   153,   309,   347,   181,   312,   346,   125,
     344,   344,   347,   123,   143,   143,   273,   345,   119,   185,
      54,   266,   123,    59,   347,   203,    70,   139,   255,   177,
      15,   246,    20,    85,   183,   213,   252,   153,   238,   345,
     348,   312,   345,    90,   174,   273,   345,   350,   130,   131,
     268,   269,   270,   344,    24,    48,   274,   265,    36,    84,
     106,    76,    58,   125,   343,   347,     4,    14,    94,   100,
     118,   122,   135,   151,   270,   289,   290,    39,    40,    61,
      71,   101,   112,   124,   126,   153,   156,   159,   197,   198,
     200,   215,   242,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   330,   331,   333,   334,   335,
     336,   337,   338,   339,   340,   345,   348,   351,   353,   347,
      73,    12,   243,   244,   211,   208,   143,   121,    90,   153,
     310,   311,   348,    64,   134,   277,   185,   271,   271,   347,
      87,   102,   175,   272,   266,    78,    91,   350,   101,   347,
      45,   176,    56,    56,    49,   116,   341,   176,   341,   168,
     341,   101,   314,   314,   166,   313,   328,   329,   165,   153,
     210,   242,   153,   190,   214,   233,    57,    96,   312,     3,
      13,    22,    25,    34,    39,    61,    74,    77,   101,   111,
     136,   137,   142,   165,   178,   180,   185,   352,   353,   153,
     174,   312,   248,   249,   313,   313,   143,   238,   310,   238,
      42,   231,   232,   121,   185,    62,   107,   187,    55,    69,
     107,   161,   277,    45,    58,   309,   174,     9,   153,   172,
     260,   261,   262,   347,   148,   348,   292,   345,   347,   348,
     101,   313,   328,    81,    88,   328,   242,     8,    43,    50,
     114,   170,   193,   332,   143,   143,   313,   234,   239,   231,
     313,   313,   121,   314,   314,   314,   314,   101,   159,   136,
     142,   314,   314,   314,   339,   314,   314,   184,    70,   143,
     325,   153,   281,   309,   121,   120,   189,   250,    92,   121,
     231,   143,   313,   246,   310,   313,   347,   350,   181,   271,
     291,   292,   271,   119,   144,   264,   121,   263,   153,     6,
      11,    21,    30,    31,    32,    47,    53,    67,    75,    90,
      95,   104,   109,   113,   132,   145,   146,   147,   154,   160,
     186,   191,   192,   355,   356,   357,   358,   359,   360,   168,
     105,    81,    88,   313,   173,   190,   181,    29,   121,   141,
     240,   153,   345,   347,   351,    60,   229,   242,   159,   314,
     314,    96,   173,   153,   347,    99,   326,   242,   210,    45,
     284,    52,   107,   210,   248,    86,   247,   313,   313,   246,
     185,    12,   245,    83,   309,   208,    17,    44,   115,   163,
     306,   361,   362,   363,   121,    27,    33,    38,    72,   107,
     113,   181,   261,   286,   287,   313,   109,   154,    98,    41,
      49,   101,   293,   294,   295,   298,   153,   348,   313,   313,
      81,   313,   355,   108,   127,   182,   241,   210,   234,   312,
     153,    73,   194,   216,   217,    96,   314,   210,   242,   153,
       7,   327,   143,   143,   171,   153,   282,   283,    52,    17,
      44,   245,   313,   313,   149,   181,    14,   308,   345,   354,
      26,    41,    49,    63,   143,   121,   291,   208,   143,   121,
     250,   148,   159,    26,   297,   294,   339,    81,   143,   143,
     158,   141,   143,   143,    93,   101,   235,   242,   242,   218,
     219,   220,   345,   314,   143,   143,    42,   153,   220,   326,
     153,   285,   242,   121,    79,   208,    26,   117,   179,   153,
     153,   148,   148,   260,   362,   150,   267,   286,   153,    63,
     296,   300,   143,   312,   312,    73,    93,    45,   236,   143,
     196,   230,   121,   181,   313,   221,   228,   345,   327,   286,
     152,   143,   282,   206,   207,   251,   280,   288,   342,   308,
      16,    26,    26,   313,   286,   153,   153,   129,   169,   268,
     313,   148,   110,   299,   236,   236,   348,   313,   150,   237,
     312,   313,   218,   153,   143,   143,   133,   222,   143,    87,
     195,    16,    16,   143,   143,   286,   238,   143,   347,   237,
     237,   153,   236,   221,    73,   246,   232,   310,    80,   101,
     364,   143,   143,   364,   309,   238,   237,   143,   242,    89,
     140,   157,   223,   224,   232,    80,   299,    45,   138,   301,
     302,   143,    18,    35,   136,   225,   227,   313,    87,   102,
       5,    28,    46,   101,   103,   304,    19,    79,   225,    19,
      66,    64,    90,   115,   134,   303,   303,   103,    97,   305,
      96,   107,   159,    23,   305,    51,   167,    18,   226,   227,
      66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   201,   202,   203,   203,   204,   204,   204,   204,   204,
     204,   205,   205,   205,   205,   206,   206,   206,   206,   207,
     208,   208,   209,   209,   210,   211,   211,   212,   213,   213,
     213,   214,   214,   215,   216,   216,   217,   218,   218,   219,
     220,   221,   222,   222,   223,   223,   223,   224,   224,   224,
     225,   225,   226,   226,   227,   227,   227,   228,   228,   229,
     229,   230,   230,   231,   231,   232,   233,   234,   234,   234,
     234,   235,   235,   235,   236,   236,   237,   237,   238,   238,
     239,   239,   240,   240,   240,   241,   241,   241,   241,   241,
     242,   242,   243,   243,   244,   244,   244,   245,   245,   246,
     246,   247,   247,   247,   248,   248,   249,   250,   250,   250,
     251,   251,   251,   252,   252,   253,   254,   255,   255,   255,
     256,   256,   257,   258,   259,   259,   260,   260,   261,   261,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   263,
     263,   264,   264,   264,   265,   265,   265,   265,   266,   266,
     266,   267,   267,   267,   268,   268,   268,   269,   269,   269,
     270,   270,   270,   270,   271,   271,   272,   272,   272,   273,
     274,   274,   275,   276,   277,   277,   277,   278,   279,   280,
     281,   281,   281,   282,   282,   283,   284,   284,   284,   285,
     285,   286,   286,   287,   288,   288,   289,   289,   289,   289,
     289,   290,   290,   290,   290,   290,   290,   290,   291,   291,
     292,   293,   293,   294,   294,   295,   296,   296,   297,   297,
     298,   298,   298,   299,   300,   300,   301,   301,   302,   302,
     302,   302,   302,   303,   303,   303,   303,   303,   304,   304,
     304,   305,   305,   305,   306,   307,   307,   308,   308,   308,
     308,   309,   309,   310,   310,   311,   311,   312,   312,   313,
     313,   313,   313,   313,   313,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   315,   316,   316,   317,   317,
     317,   317,   317,   317,   317,   318,   318,   318,   318,   319,
     319,   320,   320,   320,   321,   321,   321,   321,   322,   322,
     323,   324,   324,   325,   325,   326,   326,   327,   327,   327,
     328,   328,   329,   330,   330,   330,   330,   330,   330,   331,
     332,   332,   332,   332,   332,   332,   333,   334,   335,   335,
     335,   336,   337,   337,   338,   338,   339,   340,   341,   341,
     342,   342,   342,   342,   343,   343,   344,   344,   345,   346,
     347,   348,   349,   349,   349,   349,   350,   351,   352,   352,
     352,   352,   352,   352,   353,   353,   354,   355,   355,   356,
     356,   357,   358,   358,   358,   358,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   361,
     361,   362,   362,   363,   363,   363,   363,   364,   364,   364
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     3,     3,     4,     1,     3,     7,     1,     1,
       1,     1,     0,     1,     1,     0,     2,     1,     3,     5,
       1,     4,     3,     0,     2,     5,     0,     1,     1,     1,
       1,     2,     1,     2,     2,     2,     2,     1,     0,     4,
       0,     2,     0,     1,     0,     2,     2,     6,     8,     7,
       7,     3,     2,     0,     2,     0,     4,     0,     1,     3,
       2,     0,     1,     1,     3,     1,     2,     1,     1,     0,
       4,     2,     1,     0,     2,     4,     4,     2,     0,     3,
       0,     2,     2,     0,     1,     3,     3,     1,     1,     0,
       2,     3,     0,     1,     3,     5,     2,     1,     1,     0,
       9,    10,    11,    11,     9,    11,     1,     0,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       0,     1,     1,     0,     3,     3,     3,     0,     3,     3,
       0,     2,     2,     0,     1,     1,     0,     3,     3,     3,
       3,     3,     3,     3,     1,     0,     1,     1,     1,     1,
       1,     1,     4,     6,     1,     1,     0,     4,     5,     7,
       2,     3,     3,     1,     3,     3,     5,     7,     0,     4,
       0,     1,     3,     2,     9,     8,     3,     5,     3,     3,
       1,     3,     1,     2,     2,     1,     2,     2,     1,     3,
       3,     3,     0,     1,     2,     1,     2,     0,     5,     0,
       2,     2,     1,     5,     2,     0,     1,     0,     2,     2,
       2,     3,     3,     2,     2,     1,     1,     2,     2,     3,
       0,     2,     2,     0,     2,     1,     0,     3,     4,     4,
       0,     3,     0,     1,     3,     3,     5,     1,     0,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     6,     1,     1,     2,     2,
       2,     3,     4,     1,     1,     1,     3,     3,     4,     3,
       3,     6,     6,     4,     4,     3,     6,     5,     5,     6,
       5,     5,     7,     1,     0,     5,     0,     4,     2,     0,
       1,     2,     4,     3,     3,     3,     3,     3,     3,     6,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     3,     0,     2,     0,     1,     2,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       0,     1,     3,     6,     5,     6,     7,     1,     2,     0
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
#if FF_DEBUG

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
# if defined FF_LTYPE_IS_TRIVIAL && FF_LTYPE_IS_TRIVIAL

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
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program* result, yyscan_t scanner)
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program* result, yyscan_t scanner)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Program* result, yyscan_t scanner)
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
#else /* !FF_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !FF_DEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Program* result, yyscan_t scanner)
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
    case 197: /* INTLITERAL  */
#line 417 "bison.y" /* yacc.c:1257  */
      {
	 
}
#line 2117 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* FLOATLITERAL  */
#line 417 "bison.y" /* yacc.c:1257  */
      {
	 
}
#line 2125 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* IDENTIFIER  */
#line 413 "bison.y" /* yacc.c:1257  */
      {
	free( (((*yyvaluep).sval)) );
}
#line 2133 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* STRINGLITERAL  */
#line 413 "bison.y" /* yacc.c:1257  */
      {
	free( (((*yyvaluep).sval)) );
}
#line 2141 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* program  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).program_t)!=NULL)((*yyvaluep).program_t)->deep_delete(); }
#line 2147 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* stmtlist  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).stmtlist_t)!=NULL)((*yyvaluep).stmtlist_t)->deep_delete(); }
#line 2153 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).stmt_t)!=NULL)((*yyvaluep).stmt_t)->deep_delete(); }
#line 2159 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* create_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_stmt_t)!=NULL)((*yyvaluep).create_stmt_t)->deep_delete(); }
#line 2165 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* drop_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_stmt_t)!=NULL)((*yyvaluep).drop_stmt_t)->deep_delete(); }
#line 2171 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* alter_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_stmt_t)!=NULL)((*yyvaluep).alter_stmt_t)->deep_delete(); }
#line 2177 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* select_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_stmt_t)!=NULL)((*yyvaluep).select_stmt_t)->deep_delete(); }
#line 2183 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* select_with_parens  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_with_parens_t)!=NULL)((*yyvaluep).select_with_parens_t)->deep_delete(); }
#line 2189 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* select_no_parens  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_no_parens_t)!=NULL)((*yyvaluep).select_no_parens_t)->deep_delete(); }
#line 2195 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* select_clause_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_clause_list_t)!=NULL)((*yyvaluep).select_clause_list_t)->deep_delete(); }
#line 2201 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* select_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_clause_t)!=NULL)((*yyvaluep).select_clause_t)->deep_delete(); }
#line 2207 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* combine_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).combine_clause_t)!=NULL)((*yyvaluep).combine_clause_t)->deep_delete(); }
#line 2213 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_from_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_from_clause_t)!=NULL)((*yyvaluep).opt_from_clause_t)->deep_delete(); }
#line 2219 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* select_target  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_target_t)!=NULL)((*yyvaluep).select_target_t)->deep_delete(); }
#line 2225 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_window_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_window_clause_t)!=NULL)((*yyvaluep).opt_window_clause_t)->deep_delete(); }
#line 2231 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* window_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_clause_t)!=NULL)((*yyvaluep).window_clause_t)->deep_delete(); }
#line 2237 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* window_def_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_def_list_t)!=NULL)((*yyvaluep).window_def_list_t)->deep_delete(); }
#line 2243 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* window_def  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_def_t)!=NULL)((*yyvaluep).window_def_t)->deep_delete(); }
#line 2249 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* window_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_name_t)!=NULL)((*yyvaluep).window_name_t)->deep_delete(); }
#line 2255 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* window  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_t)!=NULL)((*yyvaluep).window_t)->deep_delete(); }
#line 2261 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* opt_partition  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_partition_t)!=NULL)((*yyvaluep).opt_partition_t)->deep_delete(); }
#line 2267 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* opt_frame_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_frame_clause_t)!=NULL)((*yyvaluep).opt_frame_clause_t)->deep_delete(); }
#line 2273 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* range_or_rows  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).range_or_rows_t)!=NULL)((*yyvaluep).range_or_rows_t)->deep_delete(); }
#line 2279 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* frame_bound_start  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_start_t)!=NULL)((*yyvaluep).frame_bound_start_t)->deep_delete(); }
#line 2285 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* frame_bound_end  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_end_t)!=NULL)((*yyvaluep).frame_bound_end_t)->deep_delete(); }
#line 2291 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* frame_bound  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_t)!=NULL)((*yyvaluep).frame_bound_t)->deep_delete(); }
#line 2297 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* opt_exist_window_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_exist_window_name_t)!=NULL)((*yyvaluep).opt_exist_window_name_t)->deep_delete(); }
#line 2303 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* opt_group_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_group_clause_t)!=NULL)((*yyvaluep).opt_group_clause_t)->deep_delete(); }
#line 2309 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* opt_having_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_having_clause_t)!=NULL)((*yyvaluep).opt_having_clause_t)->deep_delete(); }
#line 2315 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* opt_where_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_where_clause_t)!=NULL)((*yyvaluep).opt_where_clause_t)->deep_delete(); }
#line 2321 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* where_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).where_clause_t)!=NULL)((*yyvaluep).where_clause_t)->deep_delete(); }
#line 2327 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* from_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).from_clause_t)!=NULL)((*yyvaluep).from_clause_t)->deep_delete(); }
#line 2333 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* table_ref  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_ref_t)!=NULL)((*yyvaluep).table_ref_t)->deep_delete(); }
#line 2339 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* opt_index  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_t)!=NULL)((*yyvaluep).opt_index_t)->deep_delete(); }
#line 2345 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* opt_on  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_t)!=NULL)((*yyvaluep).opt_on_t)->deep_delete(); }
#line 2351 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* opt_using  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_using_t)!=NULL)((*yyvaluep).opt_using_t)->deep_delete(); }
#line 2357 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* column_name_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_list_t)!=NULL)((*yyvaluep).column_name_list_t)->deep_delete(); }
#line 2363 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* opt_table_prefix  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_prefix_t)!=NULL)((*yyvaluep).opt_table_prefix_t)->deep_delete(); }
#line 2369 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* join_op  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).join_op_t)!=NULL)((*yyvaluep).join_op_t)->deep_delete(); }
#line 2375 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* opt_join_type  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_join_type_t)!=NULL)((*yyvaluep).opt_join_type_t)->deep_delete(); }
#line 2381 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* expr_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_list_t)!=NULL)((*yyvaluep).expr_list_t)->deep_delete(); }
#line 2387 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* opt_limit_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_limit_clause_t)!=NULL)((*yyvaluep).opt_limit_clause_t)->deep_delete(); }
#line 2393 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* limit_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).limit_clause_t)!=NULL)((*yyvaluep).limit_clause_t)->deep_delete(); }
#line 2399 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* opt_limit_row_count  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_limit_row_count_t)!=NULL)((*yyvaluep).opt_limit_row_count_t)->deep_delete(); }
#line 2405 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* opt_order_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_clause_t)!=NULL)((*yyvaluep).opt_order_clause_t)->deep_delete(); }
#line 2411 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* opt_order_nulls  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_nulls_t)!=NULL)((*yyvaluep).opt_order_nulls_t)->deep_delete(); }
#line 2417 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* order_item_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_item_list_t)!=NULL)((*yyvaluep).order_item_list_t)->deep_delete(); }
#line 2423 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* order_item  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_item_t)!=NULL)((*yyvaluep).order_item_t)->deep_delete(); }
#line 2429 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* opt_order_behavior  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_behavior_t)!=NULL)((*yyvaluep).opt_order_behavior_t)->deep_delete(); }
#line 2435 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* opt_with_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_with_clause_t)!=NULL)((*yyvaluep).opt_with_clause_t)->deep_delete(); }
#line 2441 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* cte_table_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_list_t)!=NULL)((*yyvaluep).cte_table_list_t)->deep_delete(); }
#line 2447 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* cte_table  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_t)!=NULL)((*yyvaluep).cte_table_t)->deep_delete(); }
#line 2453 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* cte_table_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_name_t)!=NULL)((*yyvaluep).cte_table_name_t)->deep_delete(); }
#line 2459 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* opt_all_or_distinct  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_all_or_distinct_t)!=NULL)((*yyvaluep).opt_all_or_distinct_t)->deep_delete(); }
#line 2465 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* create_table_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_table_stmt_t)!=NULL)((*yyvaluep).create_table_stmt_t)->deep_delete(); }
#line 2471 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* create_index_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_index_stmt_t)!=NULL)((*yyvaluep).create_index_stmt_t)->deep_delete(); }
#line 2477 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* create_trigger_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_trigger_stmt_t)!=NULL)((*yyvaluep).create_trigger_stmt_t)->deep_delete(); }
#line 2483 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* create_view_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_view_stmt_t)!=NULL)((*yyvaluep).create_view_stmt_t)->deep_delete(); }
#line 2489 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_table_option_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_option_list_t)!=NULL)((*yyvaluep).opt_table_option_list_t)->deep_delete(); }
#line 2495 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* table_option_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_option_list_t)!=NULL)((*yyvaluep).table_option_list_t)->deep_delete(); }
#line 2501 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* table_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_option_t)!=NULL)((*yyvaluep).table_option_t)->deep_delete(); }
#line 2507 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* opt_op_comma  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_op_comma_t)!=NULL)((*yyvaluep).opt_op_comma_t)->deep_delete(); }
#line 2513 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* opt_ignore_or_replace  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_ignore_or_replace_t)!=NULL)((*yyvaluep).opt_ignore_or_replace_t)->deep_delete(); }
#line 2519 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* opt_view_algorithm  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_view_algorithm_t)!=NULL)((*yyvaluep).opt_view_algorithm_t)->deep_delete(); }
#line 2525 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* opt_sql_security  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_sql_security_t)!=NULL)((*yyvaluep).opt_sql_security_t)->deep_delete(); }
#line 2531 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* opt_index_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_option_t)!=NULL)((*yyvaluep).opt_index_option_t)->deep_delete(); }
#line 2537 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* opt_extra_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_extra_option_t)!=NULL)((*yyvaluep).opt_extra_option_t)->deep_delete(); }
#line 2543 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* index_algorithm_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).index_algorithm_option_t)!=NULL)((*yyvaluep).index_algorithm_option_t)->deep_delete(); }
#line 2549 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* lock_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).lock_option_t)!=NULL)((*yyvaluep).lock_option_t)->deep_delete(); }
#line 2555 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* opt_op_equal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_op_equal_t)!=NULL)((*yyvaluep).opt_op_equal_t)->deep_delete(); }
#line 2561 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* trigger_events  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_events_t)!=NULL)((*yyvaluep).trigger_events_t)->deep_delete(); }
#line 2567 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* trigger_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_name_t)!=NULL)((*yyvaluep).trigger_name_t)->deep_delete(); }
#line 2573 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 274: /* trigger_action_time  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_action_time_t)!=NULL)((*yyvaluep).trigger_action_time_t)->deep_delete(); }
#line 2579 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 275: /* drop_index_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_index_stmt_t)!=NULL)((*yyvaluep).drop_index_stmt_t)->deep_delete(); }
#line 2585 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 276: /* drop_table_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_table_stmt_t)!=NULL)((*yyvaluep).drop_table_stmt_t)->deep_delete(); }
#line 2591 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 277: /* opt_restrict_or_cascade  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_restrict_or_cascade_t)!=NULL)((*yyvaluep).opt_restrict_or_cascade_t)->deep_delete(); }
#line 2597 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 278: /* drop_trigger_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_trigger_stmt_t)!=NULL)((*yyvaluep).drop_trigger_stmt_t)->deep_delete(); }
#line 2603 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 279: /* drop_view_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_view_stmt_t)!=NULL)((*yyvaluep).drop_view_stmt_t)->deep_delete(); }
#line 2609 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 280: /* insert_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_stmt_t)!=NULL)((*yyvaluep).insert_stmt_t)->deep_delete(); }
#line 2615 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 281: /* insert_rest  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_rest_t)!=NULL)((*yyvaluep).insert_rest_t)->deep_delete(); }
#line 2621 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 282: /* super_values_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).super_values_list_t)!=NULL)((*yyvaluep).super_values_list_t)->deep_delete(); }
#line 2627 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 283: /* values_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).values_list_t)!=NULL)((*yyvaluep).values_list_t)->deep_delete(); }
#line 2633 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 284: /* opt_on_conflict  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_conflict_t)!=NULL)((*yyvaluep).opt_on_conflict_t)->deep_delete(); }
#line 2639 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 285: /* opt_conflict_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_conflict_expr_t)!=NULL)((*yyvaluep).opt_conflict_expr_t)->deep_delete(); }
#line 2645 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 286: /* indexed_column_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).indexed_column_list_t)!=NULL)((*yyvaluep).indexed_column_list_t)->deep_delete(); }
#line 2651 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 287: /* indexed_column  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).indexed_column_t)!=NULL)((*yyvaluep).indexed_column_t)->deep_delete(); }
#line 2657 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 288: /* update_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).update_stmt_t)!=NULL)((*yyvaluep).update_stmt_t)->deep_delete(); }
#line 2663 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 289: /* alter_action  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_action_t)!=NULL)((*yyvaluep).alter_action_t)->deep_delete(); }
#line 2669 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 290: /* alter_constant_action  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_constant_action_t)!=NULL)((*yyvaluep).alter_constant_action_t)->deep_delete(); }
#line 2675 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 291: /* column_def_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_list_t)!=NULL)((*yyvaluep).column_def_list_t)->deep_delete(); }
#line 2681 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 292: /* column_def  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_t)!=NULL)((*yyvaluep).column_def_t)->deep_delete(); }
#line 2687 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 293: /* opt_column_constraint_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_constraint_list_t)!=NULL)((*yyvaluep).opt_column_constraint_list_t)->deep_delete(); }
#line 2693 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 294: /* column_constraint_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_constraint_list_t)!=NULL)((*yyvaluep).column_constraint_list_t)->deep_delete(); }
#line 2699 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 295: /* column_constraint  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_constraint_t)!=NULL)((*yyvaluep).column_constraint_t)->deep_delete(); }
#line 2705 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 296: /* opt_reference_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_reference_clause_t)!=NULL)((*yyvaluep).opt_reference_clause_t)->deep_delete(); }
#line 2711 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 297: /* opt_check  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_check_t)!=NULL)((*yyvaluep).opt_check_t)->deep_delete(); }
#line 2717 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 298: /* constraint_type  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).constraint_type_t)!=NULL)((*yyvaluep).constraint_type_t)->deep_delete(); }
#line 2723 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 299: /* reference_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).reference_clause_t)!=NULL)((*yyvaluep).reference_clause_t)->deep_delete(); }
#line 2729 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 300: /* opt_foreign_key  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_foreign_key_t)!=NULL)((*yyvaluep).opt_foreign_key_t)->deep_delete(); }
#line 2735 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 301: /* opt_foreign_key_actions  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_foreign_key_actions_t)!=NULL)((*yyvaluep).opt_foreign_key_actions_t)->deep_delete(); }
#line 2741 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 302: /* foreign_key_actions  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).foreign_key_actions_t)!=NULL)((*yyvaluep).foreign_key_actions_t)->deep_delete(); }
#line 2747 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 303: /* key_actions  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).key_actions_t)!=NULL)((*yyvaluep).key_actions_t)->deep_delete(); }
#line 2753 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 304: /* opt_constraint_attribute_spec  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_constraint_attribute_spec_t)!=NULL)((*yyvaluep).opt_constraint_attribute_spec_t)->deep_delete(); }
#line 2759 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 305: /* opt_initial_time  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_initial_time_t)!=NULL)((*yyvaluep).opt_initial_time_t)->deep_delete(); }
#line 2765 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 306: /* constraint_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).constraint_name_t)!=NULL)((*yyvaluep).constraint_name_t)->deep_delete(); }
#line 2771 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 307: /* opt_temp  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_temp_t)!=NULL)((*yyvaluep).opt_temp_t)->deep_delete(); }
#line 2777 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 308: /* opt_check_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_check_option_t)!=NULL)((*yyvaluep).opt_check_option_t)->deep_delete(); }
#line 2783 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 309: /* opt_column_name_list_p  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_name_list_p_t)!=NULL)((*yyvaluep).opt_column_name_list_p_t)->deep_delete(); }
#line 2789 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 310: /* set_clause_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).set_clause_list_t)!=NULL)((*yyvaluep).set_clause_list_t)->deep_delete(); }
#line 2795 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 311: /* set_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).set_clause_t)!=NULL)((*yyvaluep).set_clause_t)->deep_delete(); }
#line 2801 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 312: /* opt_as_alias  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_as_alias_t)!=NULL)((*yyvaluep).opt_as_alias_t)->deep_delete(); }
#line 2807 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 313: /* expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_t)!=NULL)((*yyvaluep).expr_t)->deep_delete(); }
#line 2813 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 314: /* operand  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).operand_t)!=NULL)((*yyvaluep).operand_t)->deep_delete(); }
#line 2819 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 315: /* cast_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cast_expr_t)!=NULL)((*yyvaluep).cast_expr_t)->deep_delete(); }
#line 2825 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 316: /* scalar_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).scalar_expr_t)!=NULL)((*yyvaluep).scalar_expr_t)->deep_delete(); }
#line 2831 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 317: /* unary_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).unary_expr_t)!=NULL)((*yyvaluep).unary_expr_t)->deep_delete(); }
#line 2837 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 318: /* binary_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).binary_expr_t)!=NULL)((*yyvaluep).binary_expr_t)->deep_delete(); }
#line 2843 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 319: /* logic_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).logic_expr_t)!=NULL)((*yyvaluep).logic_expr_t)->deep_delete(); }
#line 2849 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 320: /* in_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).in_expr_t)!=NULL)((*yyvaluep).in_expr_t)->deep_delete(); }
#line 2855 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 321: /* case_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_expr_t)!=NULL)((*yyvaluep).case_expr_t)->deep_delete(); }
#line 2861 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 322: /* between_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).between_expr_t)!=NULL)((*yyvaluep).between_expr_t)->deep_delete(); }
#line 2867 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 323: /* exists_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).exists_expr_t)!=NULL)((*yyvaluep).exists_expr_t)->deep_delete(); }
#line 2873 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 324: /* function_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).function_expr_t)!=NULL)((*yyvaluep).function_expr_t)->deep_delete(); }
#line 2879 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 325: /* opt_distinct  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_distinct_t)!=NULL)((*yyvaluep).opt_distinct_t)->deep_delete(); }
#line 2885 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 326: /* opt_filter_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_filter_clause_t)!=NULL)((*yyvaluep).opt_filter_clause_t)->deep_delete(); }
#line 2891 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 327: /* opt_over_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_over_clause_t)!=NULL)((*yyvaluep).opt_over_clause_t)->deep_delete(); }
#line 2897 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 328: /* case_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_list_t)!=NULL)((*yyvaluep).case_list_t)->deep_delete(); }
#line 2903 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 329: /* case_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_clause_t)!=NULL)((*yyvaluep).case_clause_t)->deep_delete(); }
#line 2909 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 330: /* comp_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).comp_expr_t)!=NULL)((*yyvaluep).comp_expr_t)->deep_delete(); }
#line 2915 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 331: /* extract_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).extract_expr_t)!=NULL)((*yyvaluep).extract_expr_t)->deep_delete(); }
#line 2921 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 332: /* datetime_field  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).datetime_field_t)!=NULL)((*yyvaluep).datetime_field_t)->deep_delete(); }
#line 2927 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 333: /* array_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).array_expr_t)!=NULL)((*yyvaluep).array_expr_t)->deep_delete(); }
#line 2933 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 334: /* array_index  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).array_index_t)!=NULL)((*yyvaluep).array_index_t)->deep_delete(); }
#line 2939 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 335: /* literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).literal_t)!=NULL)((*yyvaluep).literal_t)->deep_delete(); }
#line 2945 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 336: /* string_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).string_literal_t)!=NULL)((*yyvaluep).string_literal_t)->deep_delete(); }
#line 2951 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 337: /* bool_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).bool_literal_t)!=NULL)((*yyvaluep).bool_literal_t)->deep_delete(); }
#line 2957 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 338: /* num_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).num_literal_t)!=NULL)((*yyvaluep).num_literal_t)->deep_delete(); }
#line 2963 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 339: /* int_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).int_literal_t)!=NULL)((*yyvaluep).int_literal_t)->deep_delete(); }
#line 2969 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 340: /* float_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).float_literal_t)!=NULL)((*yyvaluep).float_literal_t)->deep_delete(); }
#line 2975 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 341: /* opt_column  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_t)!=NULL)((*yyvaluep).opt_column_t)->deep_delete(); }
#line 2981 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 342: /* trigger_body  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_body_t)!=NULL)((*yyvaluep).trigger_body_t)->deep_delete(); }
#line 2987 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 343: /* opt_if_not_exist  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_if_not_exist_t)!=NULL)((*yyvaluep).opt_if_not_exist_t)->deep_delete(); }
#line 2993 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 344: /* opt_if_exist  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_if_exist_t)!=NULL)((*yyvaluep).opt_if_exist_t)->deep_delete(); }
#line 2999 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 345: /* identifier  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).identifier_t)!=NULL)((*yyvaluep).identifier_t)->deep_delete(); }
#line 3005 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 346: /* as_alias  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).as_alias_t)!=NULL)((*yyvaluep).as_alias_t)->deep_delete(); }
#line 3011 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 347: /* table_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_name_t)!=NULL)((*yyvaluep).table_name_t)->deep_delete(); }
#line 3017 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 348: /* column_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_t)!=NULL)((*yyvaluep).column_name_t)->deep_delete(); }
#line 3023 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 349: /* opt_index_keyword  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_keyword_t)!=NULL)((*yyvaluep).opt_index_keyword_t)->deep_delete(); }
#line 3029 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 350: /* view_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).view_name_t)!=NULL)((*yyvaluep).view_name_t)->deep_delete(); }
#line 3035 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 351: /* function_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).function_name_t)!=NULL)((*yyvaluep).function_name_t)->deep_delete(); }
#line 3041 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 352: /* binary_op  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).binary_op_t)!=NULL)((*yyvaluep).binary_op_t)->deep_delete(); }
#line 3047 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 353: /* opt_not  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_not_t)!=NULL)((*yyvaluep).opt_not_t)->deep_delete(); }
#line 3053 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 354: /* name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).name_t)!=NULL)((*yyvaluep).name_t)->deep_delete(); }
#line 3059 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 355: /* type_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).type_name_t)!=NULL)((*yyvaluep).type_name_t)->deep_delete(); }
#line 3065 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 356: /* character_type  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_type_t)!=NULL)((*yyvaluep).character_type_t)->deep_delete(); }
#line 3071 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 357: /* character_with_length  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_with_length_t)!=NULL)((*yyvaluep).character_with_length_t)->deep_delete(); }
#line 3077 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 358: /* character_without_length  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_without_length_t)!=NULL)((*yyvaluep).character_without_length_t)->deep_delete(); }
#line 3083 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 359: /* character_conflicta  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_conflicta_t)!=NULL)((*yyvaluep).character_conflicta_t)->deep_delete(); }
#line 3089 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 360: /* numeric_type  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).numeric_type_t)!=NULL)((*yyvaluep).numeric_type_t)->deep_delete(); }
#line 3095 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 361: /* opt_table_constraint_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_constraint_list_t)!=NULL)((*yyvaluep).opt_table_constraint_list_t)->deep_delete(); }
#line 3101 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 362: /* table_constraint_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_constraint_list_t)!=NULL)((*yyvaluep).table_constraint_list_t)->deep_delete(); }
#line 3107 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 363: /* table_constraint  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_constraint_t)!=NULL)((*yyvaluep).table_constraint_t)->deep_delete(); }
#line 3113 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 364: /* opt_enforced  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_enforced_t)!=NULL)((*yyvaluep).opt_enforced_t)->deep_delete(); }
#line 3119 "bison_parser.cpp" /* yacc.c:1257  */
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
yyparse (Program* result, yyscan_t scanner)
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
# if defined FF_LTYPE_IS_TRIVIAL && FF_LTYPE_IS_TRIVIAL
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
#line 18 "bison.y" /* yacc.c:1431  */
{
    // Initialize
    yylloc.first_column = 0;
    yylloc.last_column = 0;
    yylloc.first_line = 0;
    yylloc.last_line = 0;
    yylloc.total_column = 0;
    yylloc.string_length = 0;
}

#line 3237 "bison_parser.cpp" /* yacc.c:1431  */
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
#line 425 "bison.y" /* yacc.c:1652  */
    {
		(yyval.program_t) = result;
		(yyval.program_t)->case_idx_ = CASE0;
		(yyval.program_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
				(yyval.program_t) = NULL;

	}
#line 3437 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 3:
#line 435 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE0;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-2].stmt_t);
		(yyval.stmtlist_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
		
	}
#line 3449 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 4:
#line 442 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE1;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-1].stmt_t);
		
	}
#line 3460 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 451 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE0;
		(yyval.stmt_t)->create_stmt_ = (yyvsp[0].create_stmt_t);
		
	}
#line 3471 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 457 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE1;
		(yyval.stmt_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
		
	}
#line 3482 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 7:
#line 463 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE2;
		(yyval.stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
		
	}
#line 3493 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 8:
#line 469 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE3;
		(yyval.stmt_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
		
	}
#line 3504 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 9:
#line 475 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE4;
		(yyval.stmt_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
		
	}
#line 3515 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 481 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE5;
		(yyval.stmt_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
		
	}
#line 3526 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 490 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE0;
		(yyval.create_stmt_t)->create_table_stmt_ = (yyvsp[0].create_table_stmt_t);
		
	}
#line 3537 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 496 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE1;
		(yyval.create_stmt_t)->create_index_stmt_ = (yyvsp[0].create_index_stmt_t);
		
	}
#line 3548 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 502 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE2;
		(yyval.create_stmt_t)->create_trigger_stmt_ = (yyvsp[0].create_trigger_stmt_t);
		
	}
#line 3559 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 14:
#line 508 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE3;
		(yyval.create_stmt_t)->create_view_stmt_ = (yyvsp[0].create_view_stmt_t);
		
	}
#line 3570 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 15:
#line 517 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_stmt_t)->drop_index_stmt_ = (yyvsp[0].drop_index_stmt_t);
		
	}
#line 3581 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 523 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE1;
		(yyval.drop_stmt_t)->drop_table_stmt_ = (yyvsp[0].drop_table_stmt_t);
		
	}
#line 3592 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 529 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE2;
		(yyval.drop_stmt_t)->drop_trigger_stmt_ = (yyvsp[0].drop_trigger_stmt_t);
		
	}
#line 3603 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 18:
#line 535 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE3;
		(yyval.drop_stmt_t)->drop_view_stmt_ = (yyvsp[0].drop_view_stmt_t);
		
	}
#line 3614 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 19:
#line 544 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_stmt_t) = new AlterStmt();
		(yyval.alter_stmt_t)->case_idx_ = CASE0;
		(yyval.alter_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.alter_stmt_t)->alter_action_ = (yyvsp[0].alter_action_t);
		
	}
#line 3626 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 20:
#line 554 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE0;
		(yyval.select_stmt_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 3637 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 21:
#line 560 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE1;
		(yyval.select_stmt_t)->select_with_parens_ = (yyvsp[0].select_with_parens_t);
		
	}
#line 3648 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 569 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE0;
		(yyval.select_with_parens_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 3659 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 575 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE1;
		(yyval.select_with_parens_t)->select_with_parens_ = (yyvsp[-1].select_with_parens_t);
		
	}
#line 3670 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 24:
#line 584 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_no_parens_t) = new SelectNoParens();
		(yyval.select_no_parens_t)->case_idx_ = CASE0;
		(yyval.select_no_parens_t)->opt_with_clause_ = (yyvsp[-3].opt_with_clause_t);
		(yyval.select_no_parens_t)->select_clause_list_ = (yyvsp[-2].select_clause_list_t);
		(yyval.select_no_parens_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.select_no_parens_t)->opt_limit_clause_ = (yyvsp[0].opt_limit_clause_t);
		
	}
#line 3684 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 596 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE0;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[0].select_clause_t);
		
	}
#line 3695 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 26:
#line 602 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE1;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[-2].select_clause_t);
		(yyval.select_clause_list_t)->combine_clause_ = (yyvsp[-1].combine_clause_t);
		(yyval.select_clause_list_t)->select_clause_list_ = (yyvsp[0].select_clause_list_t);
		
	}
#line 3708 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 27:
#line 613 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_clause_t) = new SelectClause();
		(yyval.select_clause_t)->case_idx_ = CASE0;
		(yyval.select_clause_t)->opt_all_or_distinct_ = (yyvsp[-5].opt_all_or_distinct_t);
		(yyval.select_clause_t)->select_target_ = (yyvsp[-4].select_target_t);
		(yyval.select_clause_t)->opt_from_clause_ = (yyvsp[-3].opt_from_clause_t);
		(yyval.select_clause_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.select_clause_t)->opt_group_clause_ = (yyvsp[-1].opt_group_clause_t);
		(yyval.select_clause_t)->opt_window_clause_ = (yyvsp[0].opt_window_clause_t);
		
	}
#line 3724 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 627 "bison.y" /* yacc.c:1652  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE0;
		
	}
#line 3734 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 29:
#line 632 "bison.y" /* yacc.c:1652  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE1;
		
	}
#line 3744 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 30:
#line 637 "bison.y" /* yacc.c:1652  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE2;
		
	}
#line 3754 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 645 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE0;
		(yyval.opt_from_clause_t)->from_clause_ = (yyvsp[0].from_clause_t);
		
	}
#line 3765 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 32:
#line 651 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE1;
		
	}
#line 3775 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 33:
#line 659 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_target_t) = new SelectTarget();
		(yyval.select_target_t)->case_idx_ = CASE0;
		(yyval.select_target_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 3786 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 34:
#line 668 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE0;
		(yyval.opt_window_clause_t)->window_clause_ = (yyvsp[0].window_clause_t);
		
	}
#line 3797 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 35:
#line 674 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE1;
		
	}
#line 3807 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 682 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_clause_t) = new WindowClause();
		(yyval.window_clause_t)->case_idx_ = CASE0;
		(yyval.window_clause_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 3818 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 691 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE0;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[0].window_def_t);
		
	}
#line 3829 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 697 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE1;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[-2].window_def_t);
		(yyval.window_def_list_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 3841 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 707 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_def_t) = new WindowDef();
		(yyval.window_def_t)->case_idx_ = CASE0;
		(yyval.window_def_t)->window_name_ = (yyvsp[-4].window_name_t);
		(yyval.window_def_t)->window_ = (yyvsp[-1].window_t);
		if((yyval.window_def_t)){
			auto tmp1 = (yyval.window_def_t)->window_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataWindowName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}


	}
#line 3865 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 729 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_name_t) = new WindowName();
		(yyval.window_name_t)->case_idx_ = CASE0;
		(yyval.window_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 3876 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 41:
#line 738 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_t) = new Window();
		(yyval.window_t)->case_idx_ = CASE0;
		(yyval.window_t)->opt_exist_window_name_ = (yyvsp[-3].opt_exist_window_name_t);
		(yyval.window_t)->opt_partition_ = (yyvsp[-2].opt_partition_t);
		(yyval.window_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.window_t)->opt_frame_clause_ = (yyvsp[0].opt_frame_clause_t);
		
	}
#line 3890 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 750 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE0;
		(yyval.opt_partition_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 3901 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 756 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE1;
		
	}
#line 3911 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 764 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE0;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-1].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[0].frame_bound_start_t);
		
	}
#line 3923 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 45:
#line 771 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE1;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-4].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[-2].frame_bound_start_t);
		(yyval.opt_frame_clause_t)->frame_bound_end_ = (yyvsp[0].frame_bound_end_t);
		
	}
#line 3936 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 779 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE2;
		
	}
#line 3946 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 787 "bison.y" /* yacc.c:1652  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE0;
		
	}
#line 3956 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 792 "bison.y" /* yacc.c:1652  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE1;
		
	}
#line 3966 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 797 "bison.y" /* yacc.c:1652  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE2;
		
	}
#line 3976 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 805 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE0;
		(yyval.frame_bound_start_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 3987 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 811 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE1;
		
	}
#line 3997 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 819 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE0;
		(yyval.frame_bound_end_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 4008 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 825 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE1;
		
	}
#line 4018 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 833 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE0;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 4029 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 839 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE1;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 4040 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 845 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE2;
		
	}
#line 4050 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 853 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE0;
		(yyval.opt_exist_window_name_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.opt_exist_window_name_t)){
			auto tmp1 = (yyval.opt_exist_window_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataWindowName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}


	}
#line 4070 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 868 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE1;
		
	}
#line 4080 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 876 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE0;
		(yyval.opt_group_clause_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		(yyval.opt_group_clause_t)->opt_having_clause_ = (yyvsp[0].opt_having_clause_t);
		
	}
#line 4092 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 60:
#line 883 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE1;
		
	}
#line 4102 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 61:
#line 891 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE0;
		(yyval.opt_having_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4113 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 62:
#line 897 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE1;
		
	}
#line 4123 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 63:
#line 905 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE0;
		(yyval.opt_where_clause_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 4134 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 64:
#line 911 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE1;
		
	}
#line 4144 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 65:
#line 919 "bison.y" /* yacc.c:1652  */
    {
		(yyval.where_clause_t) = new WhereClause();
		(yyval.where_clause_t)->case_idx_ = CASE0;
		(yyval.where_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4155 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 66:
#line 928 "bison.y" /* yacc.c:1652  */
    {
		(yyval.from_clause_t) = new FromClause();
		(yyval.from_clause_t)->case_idx_ = CASE0;
		(yyval.from_clause_t)->table_ref_ = (yyvsp[0].table_ref_t);
		
	}
#line 4166 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 67:
#line 937 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE0;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-5].opt_table_prefix_t);
		(yyval.table_ref_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-3].opt_as_alias_t);
		(yyval.table_ref_t)->opt_index_ = (yyvsp[-2].opt_index_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 4182 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 68:
#line 948 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE1;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-7].opt_table_prefix_t);
		(yyval.table_ref_t)->function_name_ = (yyvsp[-6].function_name_t);
		(yyval.table_ref_t)->expr_list_ = (yyvsp[-4].expr_list_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 4198 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 69:
#line 959 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE2;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->select_no_parens_ = (yyvsp[-4].select_no_parens_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 4213 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 70:
#line 969 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE3;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->table_ref_ = (yyvsp[-4].table_ref_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 4228 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 71:
#line 982 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE0;
		(yyval.opt_index_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 4239 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 72:
#line 988 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE1;
		
	}
#line 4249 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 73:
#line 993 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE2;
		
	}
#line 4259 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 74:
#line 1001 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE0;
		(yyval.opt_on_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4270 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 75:
#line 1007 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE1;
		
	}
#line 4280 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 76:
#line 1015 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE0;
		(yyval.opt_using_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 4291 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 77:
#line 1021 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE1;
		
	}
#line 4301 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 78:
#line 1029 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE0;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 4312 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 79:
#line 1035 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE1;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.column_name_list_t)->column_name_list_ = (yyvsp[0].column_name_list_t);
		
	}
#line 4324 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 80:
#line 1045 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE0;
		(yyval.opt_table_prefix_t)->table_ref_ = (yyvsp[-1].table_ref_t);
		(yyval.opt_table_prefix_t)->join_op_ = (yyvsp[0].join_op_t);
		
	}
#line 4336 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 81:
#line 1052 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE1;
		
	}
#line 4346 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 82:
#line 1060 "bison.y" /* yacc.c:1652  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE0;
		
	}
#line 4356 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 83:
#line 1065 "bison.y" /* yacc.c:1652  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE1;
		
	}
#line 4366 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 84:
#line 1070 "bison.y" /* yacc.c:1652  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE2;
		(yyval.join_op_t)->opt_join_type_ = (yyvsp[-1].opt_join_type_t);
		
	}
#line 4377 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 85:
#line 1079 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE0;
		
	}
#line 4387 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 86:
#line 1084 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE1;
		
	}
#line 4397 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 87:
#line 1089 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE2;
		
	}
#line 4407 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 88:
#line 1094 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE3;
		
	}
#line 4417 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 89:
#line 1099 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE4;
		
	}
#line 4427 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 90:
#line 1107 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE0;
		(yyval.expr_list_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.expr_list_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 4440 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 91:
#line 1115 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE1;
		(yyval.expr_list_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[0].opt_as_alias_t);
		
	}
#line 4452 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 92:
#line 1125 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE0;
		(yyval.opt_limit_clause_t)->limit_clause_ = (yyvsp[0].limit_clause_t);
		
	}
#line 4463 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 93:
#line 1131 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE1;
		
	}
#line 4473 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 94:
#line 1139 "bison.y" /* yacc.c:1652  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE0;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[0].expr_t);
		
	}
#line 4484 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 95:
#line 1145 "bison.y" /* yacc.c:1652  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE1;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 4496 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 96:
#line 1152 "bison.y" /* yacc.c:1652  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE2;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 4508 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 97:
#line 1162 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE0;
		(yyval.opt_limit_row_count_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4519 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 98:
#line 1168 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE1;
		
	}
#line 4529 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 99:
#line 1176 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE0;
		(yyval.opt_order_clause_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 4540 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 100:
#line 1182 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE1;
		
	}
#line 4550 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 101:
#line 1190 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE0;
		
	}
#line 4560 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 102:
#line 1195 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE1;
		
	}
#line 4570 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 103:
#line 1200 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE2;
		
	}
#line 4580 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 104:
#line 1208 "bison.y" /* yacc.c:1652  */
    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE0;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[0].order_item_t);
		
	}
#line 4591 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 105:
#line 1214 "bison.y" /* yacc.c:1652  */
    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE1;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[-2].order_item_t);
		(yyval.order_item_list_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 4603 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 106:
#line 1224 "bison.y" /* yacc.c:1652  */
    {
		(yyval.order_item_t) = new OrderItem();
		(yyval.order_item_t)->case_idx_ = CASE0;
		(yyval.order_item_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.order_item_t)->opt_order_behavior_ = (yyvsp[-1].opt_order_behavior_t);
		(yyval.order_item_t)->opt_order_nulls_ = (yyvsp[0].opt_order_nulls_t);
		
	}
#line 4616 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 107:
#line 1235 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE0;
		
	}
#line 4626 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 108:
#line 1240 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE1;
		
	}
#line 4636 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 109:
#line 1245 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE2;
		
	}
#line 4646 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 110:
#line 1253 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE0;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 4657 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 111:
#line 1259 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE1;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 4668 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 112:
#line 1265 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE2;
		
	}
#line 4678 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 113:
#line 1273 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE0;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[0].cte_table_t);
		
	}
#line 4689 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 114:
#line 1279 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE1;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[-2].cte_table_t);
		(yyval.cte_table_list_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 4701 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 115:
#line 1289 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cte_table_t) = new CteTable();
		(yyval.cte_table_t)->case_idx_ = CASE0;
		(yyval.cte_table_t)->cte_table_name_ = (yyvsp[-4].cte_table_name_t);
		(yyval.cte_table_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		
	}
#line 4713 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 116:
#line 1299 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cte_table_name_t) = new CteTableName();
		(yyval.cte_table_name_t)->case_idx_ = CASE0;
		(yyval.cte_table_name_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.cte_table_name_t)->opt_column_name_list_p_ = (yyvsp[0].opt_column_name_list_p_t);
		
	}
#line 4725 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 117:
#line 1309 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE0;
		
	}
#line 4735 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 118:
#line 1314 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE1;
		
	}
#line 4745 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 119:
#line 1319 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE2;
		
	}
#line 4755 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 120:
#line 1327 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE0;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-7].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-5].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.create_table_stmt_t)->opt_table_option_list_ = (yyvsp[-3].opt_table_option_list_t);
		(yyval.create_table_stmt_t)->opt_ignore_or_replace_ = (yyvsp[-2].opt_ignore_or_replace_t);
		(yyval.create_table_stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
		if((yyval.create_table_stmt_t)){
			auto tmp1 = (yyval.create_table_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)128; 
				}
			}
		}


	}
#line 4783 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 121:
#line 1350 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE1;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-8].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-6].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-5].table_name_t);
		(yyval.create_table_stmt_t)->column_def_list_ = (yyvsp[-3].column_def_list_t);
		(yyval.create_table_stmt_t)->opt_table_constraint_list_ = (yyvsp[-2].opt_table_constraint_list_t);
		(yyval.create_table_stmt_t)->opt_table_option_list_ = (yyvsp[0].opt_table_option_list_t);
		if((yyval.create_table_stmt_t)){
			auto tmp1 = (yyval.create_table_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if((yyval.create_table_stmt_t)){
			auto tmp1 = (yyval.create_table_stmt_t)->column_def_list_; 
			while(tmp1){
				auto tmp2 = tmp1->column_def_; 
				if(tmp2){
					auto tmp3 = tmp2->identifier_; 
					if(tmp3){
						tmp3->data_type_ = kDataColumnName; 
						tmp3->scope_ = 2; 
						tmp3->data_flag_ =(DATAFLAG)1; 
					}
				}
				tmp1 = tmp1->column_def_list_;
			}
		}


	}
#line 4827 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 122:
#line 1392 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_index_stmt_t) = new CreateIndexStmt();
		(yyval.create_index_stmt_t)->case_idx_ = CASE0;
		(yyval.create_index_stmt_t)->opt_index_keyword_ = (yyvsp[-9].opt_index_keyword_t);
		(yyval.create_index_stmt_t)->table_name_1_ = (yyvsp[-7].table_name_t);
		(yyval.create_index_stmt_t)->table_name_2_ = (yyvsp[-5].table_name_t);
		(yyval.create_index_stmt_t)->indexed_column_list_ = (yyvsp[-3].indexed_column_list_t);
		(yyval.create_index_stmt_t)->opt_index_option_ = (yyvsp[-1].opt_index_option_t);
		(yyval.create_index_stmt_t)->opt_extra_option_ = (yyvsp[0].opt_extra_option_t);
		if((yyval.create_index_stmt_t)){
			auto tmp1 = (yyval.create_index_stmt_t)->table_name_1_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)128; 
				}
			}
		}

		if((yyval.create_index_stmt_t)){
			auto tmp1 = (yyval.create_index_stmt_t)->table_name_2_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}


	}
#line 4867 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 123:
#line 1430 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_trigger_stmt_t) = new CreateTriggerStmt();
		(yyval.create_trigger_stmt_t)->case_idx_ = CASE0;
		(yyval.create_trigger_stmt_t)->trigger_name_ = (yyvsp[-8].trigger_name_t);
		(yyval.create_trigger_stmt_t)->trigger_action_time_ = (yyvsp[-7].trigger_action_time_t);
		(yyval.create_trigger_stmt_t)->trigger_events_ = (yyvsp[-6].trigger_events_t);
		(yyval.create_trigger_stmt_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.create_trigger_stmt_t)->trigger_body_ = (yyvsp[0].trigger_body_t);
		if((yyval.create_trigger_stmt_t)){
			auto tmp1 = (yyval.create_trigger_stmt_t)->trigger_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTriggerName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if((yyval.create_trigger_stmt_t)){
			auto tmp1 = (yyval.create_trigger_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}


	}
#line 4906 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 124:
#line 1467 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE0;
		(yyval.create_view_stmt_t)->opt_view_algorithm_ = (yyvsp[-7].opt_view_algorithm_t);
		(yyval.create_view_stmt_t)->opt_sql_security_ = (yyvsp[-6].opt_sql_security_t);
		(yyval.create_view_stmt_t)->view_name_ = (yyvsp[-4].view_name_t);
		(yyval.create_view_stmt_t)->opt_column_name_list_p_ = (yyvsp[-3].opt_column_name_list_p_t);
		(yyval.create_view_stmt_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		(yyval.create_view_stmt_t)->opt_check_option_ = (yyvsp[0].opt_check_option_t);
		if((yyval.create_view_stmt_t)){
			auto tmp1 = (yyval.create_view_stmt_t)->view_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 10; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if((yyval.create_view_stmt_t)){
			auto tmp1 = (yyval.create_view_stmt_t)->opt_column_name_list_p_; 
			if(tmp1){
				auto tmp2 = tmp1->column_name_list_; 
				while(tmp2){
					auto tmp3 = tmp2->column_name_; 
					if(tmp3){
						auto tmp4 = tmp3->identifier_; 
						if(tmp4){
							tmp4->data_type_ = kDataColumnName; 
							tmp4->scope_ = 11; 
							tmp4->data_flag_ =(DATAFLAG)1; 
						}
					}
					tmp2 = tmp2->column_name_list_;
				}
			}
		}


	}
#line 4953 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 125:
#line 1509 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE1;
		(yyval.create_view_stmt_t)->opt_view_algorithm_ = (yyvsp[-7].opt_view_algorithm_t);
		(yyval.create_view_stmt_t)->opt_sql_security_ = (yyvsp[-6].opt_sql_security_t);
		(yyval.create_view_stmt_t)->view_name_ = (yyvsp[-4].view_name_t);
		(yyval.create_view_stmt_t)->opt_column_name_list_p_ = (yyvsp[-3].opt_column_name_list_p_t);
		(yyval.create_view_stmt_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		(yyval.create_view_stmt_t)->opt_check_option_ = (yyvsp[0].opt_check_option_t);
		if((yyval.create_view_stmt_t)){
			auto tmp1 = (yyval.create_view_stmt_t)->view_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 10; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if((yyval.create_view_stmt_t)){
			auto tmp1 = (yyval.create_view_stmt_t)->opt_column_name_list_p_; 
			if(tmp1){
				auto tmp2 = tmp1->column_name_list_; 
				while(tmp2){
					auto tmp3 = tmp2->column_name_; 
					if(tmp3){
						auto tmp4 = tmp3->identifier_; 
						if(tmp4){
							tmp4->data_type_ = kDataColumnName; 
							tmp4->scope_ = 11; 
							tmp4->data_flag_ =(DATAFLAG)1; 
						}
					}
					tmp2 = tmp2->column_name_list_;
				}
			}
		}


	}
#line 5000 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 126:
#line 1554 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
		
	}
#line 5011 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 127:
#line 1560 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE1;
		
	}
#line 5021 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 128:
#line 1568 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE0;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[0].table_option_t);
		
	}
#line 5032 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 129:
#line 1574 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE1;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[-2].table_option_t);
		(yyval.table_option_list_t)->opt_op_comma_ = (yyvsp[-1].opt_op_comma_t);
		(yyval.table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
		
	}
#line 5045 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 130:
#line 1585 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE0;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5056 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 131:
#line 1591 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE1;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5067 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 132:
#line 1597 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE2;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5078 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 133:
#line 1603 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE3;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5089 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 134:
#line 1609 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE4;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5100 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 135:
#line 1615 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE5;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5111 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 136:
#line 1621 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE6;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5122 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 137:
#line 1627 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE7;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5133 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 138:
#line 1633 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE8;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5144 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 139:
#line 1642 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE0;
		
	}
#line 5154 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 140:
#line 1647 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE1;
		
	}
#line 5164 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 141:
#line 1655 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE0;
		
	}
#line 5174 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 142:
#line 1660 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE1;
		
	}
#line 5184 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 143:
#line 1665 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE2;
		
	}
#line 5194 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 144:
#line 1673 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE0;
		
	}
#line 5204 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 145:
#line 1678 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE1;
		
	}
#line 5214 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 146:
#line 1683 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE2;
		
	}
#line 5224 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 147:
#line 1688 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE3;
		
	}
#line 5234 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 148:
#line 1696 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE0;
		
	}
#line 5244 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 149:
#line 1701 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE1;
		
	}
#line 5254 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 150:
#line 1706 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE2;
		
	}
#line 5264 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 151:
#line 1714 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE0;
		
	}
#line 5274 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 152:
#line 1719 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE1;
		
	}
#line 5284 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 153:
#line 1724 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE2;
		
	}
#line 5294 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 154:
#line 1732 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE0;
		(yyval.opt_extra_option_t)->index_algorithm_option_ = (yyvsp[0].index_algorithm_option_t);
		
	}
#line 5305 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 155:
#line 1738 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE1;
		(yyval.opt_extra_option_t)->lock_option_ = (yyvsp[0].lock_option_t);
		
	}
#line 5316 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 156:
#line 1744 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE2;
		
	}
#line 5326 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 157:
#line 1752 "bison.y" /* yacc.c:1652  */
    {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE0;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5337 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 158:
#line 1758 "bison.y" /* yacc.c:1652  */
    {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE1;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5348 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 159:
#line 1764 "bison.y" /* yacc.c:1652  */
    {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE2;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5359 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 160:
#line 1773 "bison.y" /* yacc.c:1652  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE0;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5370 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 161:
#line 1779 "bison.y" /* yacc.c:1652  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE1;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5381 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 162:
#line 1785 "bison.y" /* yacc.c:1652  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE2;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5392 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 163:
#line 1791 "bison.y" /* yacc.c:1652  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE3;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5403 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 164:
#line 1800 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE0;
		
	}
#line 5413 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 165:
#line 1805 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE1;
		
	}
#line 5423 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 166:
#line 1813 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE0;
		
	}
#line 5433 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 167:
#line 1818 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE1;
		
	}
#line 5443 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 168:
#line 1823 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE2;
		
	}
#line 5453 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 169:
#line 1831 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_name_t) = new TriggerName();
		(yyval.trigger_name_t)->case_idx_ = CASE0;
		(yyval.trigger_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 5464 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 170:
#line 1840 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE0;
		
	}
#line 5474 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 171:
#line 1845 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE1;
		
	}
#line 5484 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 172:
#line 1853 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_index_stmt_t) = new DropIndexStmt();
		(yyval.drop_index_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_index_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.drop_index_stmt_t)->opt_extra_option_ = (yyvsp[0].opt_extra_option_t);
		if((yyval.drop_index_stmt_t)){
			auto tmp1 = (yyval.drop_index_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}


	}
#line 5508 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 173:
#line 1875 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_table_stmt_t) = new DropTableStmt();
		(yyval.drop_table_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_table_stmt_t)->opt_temp_ = (yyvsp[-4].opt_temp_t);
		(yyval.drop_table_stmt_t)->opt_if_exist_ = (yyvsp[-2].opt_if_exist_t);
		(yyval.drop_table_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.drop_table_stmt_t)->opt_restrict_or_cascade_ = (yyvsp[0].opt_restrict_or_cascade_t);
		if((yyval.drop_table_stmt_t)){
			auto tmp1 = (yyval.drop_table_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}


	}
#line 5534 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 174:
#line 1899 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE0;
		
	}
#line 5544 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 175:
#line 1904 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE1;
		
	}
#line 5554 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 176:
#line 1909 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE2;
		
	}
#line 5564 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 177:
#line 1917 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_trigger_stmt_t) = new DropTriggerStmt();
		(yyval.drop_trigger_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_trigger_stmt_t)->opt_if_exist_ = (yyvsp[-1].opt_if_exist_t);
		(yyval.drop_trigger_stmt_t)->trigger_name_ = (yyvsp[0].trigger_name_t);
		if((yyval.drop_trigger_stmt_t)){
			auto tmp1 = (yyval.drop_trigger_stmt_t)->trigger_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTriggerName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}


	}
#line 5588 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 178:
#line 1939 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_view_stmt_t) = new DropViewStmt();
		(yyval.drop_view_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_view_stmt_t)->opt_if_exist_ = (yyvsp[-2].opt_if_exist_t);
		(yyval.drop_view_stmt_t)->view_name_ = (yyvsp[-1].view_name_t);
		(yyval.drop_view_stmt_t)->opt_restrict_or_cascade_ = (yyvsp[0].opt_restrict_or_cascade_t);
		if((yyval.drop_view_stmt_t)){
			auto tmp1 = (yyval.drop_view_stmt_t)->view_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}


	}
#line 5613 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 179:
#line 1962 "bison.y" /* yacc.c:1652  */
    {
		(yyval.insert_stmt_t) = new InsertStmt();
		(yyval.insert_stmt_t)->case_idx_ = CASE0;
		(yyval.insert_stmt_t)->opt_with_clause_ = (yyvsp[-6].opt_with_clause_t);
		(yyval.insert_stmt_t)->table_name_ = (yyvsp[-3].table_name_t);
		(yyval.insert_stmt_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.insert_stmt_t)->insert_rest_ = (yyvsp[-1].insert_rest_t);
		(yyval.insert_stmt_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);
		
	}
#line 5628 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 180:
#line 1975 "bison.y" /* yacc.c:1652  */
    {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE0;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-1].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 5640 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 181:
#line 1982 "bison.y" /* yacc.c:1652  */
    {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE1;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		
	}
#line 5651 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 182:
#line 1988 "bison.y" /* yacc.c:1652  */
    {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE2;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 5663 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 183:
#line 1998 "bison.y" /* yacc.c:1652  */
    {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE0;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[0].values_list_t);
		
	}
#line 5674 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 184:
#line 2004 "bison.y" /* yacc.c:1652  */
    {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE1;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[-2].values_list_t);
		(yyval.super_values_list_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 5686 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 185:
#line 2014 "bison.y" /* yacc.c:1652  */
    {
		(yyval.values_list_t) = new ValuesList();
		(yyval.values_list_t)->case_idx_ = CASE0;
		(yyval.values_list_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 5697 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 186:
#line 2023 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE0;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-2].opt_conflict_expr_t);
		
	}
#line 5708 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 187:
#line 2029 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE1;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-4].opt_conflict_expr_t);
		(yyval.opt_on_conflict_t)->set_clause_list_ = (yyvsp[-1].set_clause_list_t);
		(yyval.opt_on_conflict_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 5721 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 188:
#line 2037 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE2;
		
	}
#line 5731 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 189:
#line 2045 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE0;
		(yyval.opt_conflict_expr_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
		(yyval.opt_conflict_expr_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 5743 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 190:
#line 2052 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE1;
		
	}
#line 5753 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 191:
#line 2060 "bison.y" /* yacc.c:1652  */
    {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE0;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[0].indexed_column_t);
		
	}
#line 5764 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 192:
#line 2066 "bison.y" /* yacc.c:1652  */
    {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE1;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[-2].indexed_column_t);
		(yyval.indexed_column_list_t)->indexed_column_list_ = (yyvsp[0].indexed_column_list_t);
		
	}
#line 5776 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 193:
#line 2076 "bison.y" /* yacc.c:1652  */
    {
		(yyval.indexed_column_t) = new IndexedColumn();
		(yyval.indexed_column_t)->case_idx_ = CASE0;
		(yyval.indexed_column_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.indexed_column_t)->opt_order_behavior_ = (yyvsp[0].opt_order_behavior_t);
		
	}
#line 5788 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 194:
#line 2086 "bison.y" /* yacc.c:1652  */
    {
		(yyval.update_stmt_t) = new UpdateStmt();
		(yyval.update_stmt_t)->case_idx_ = CASE0;
		(yyval.update_stmt_t)->table_name_ = (yyvsp[-6].table_name_t);
		(yyval.update_stmt_t)->opt_as_alias_ = (yyvsp[-5].opt_as_alias_t);
		(yyval.update_stmt_t)->set_clause_list_ = (yyvsp[-3].set_clause_list_t);
		(yyval.update_stmt_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.update_stmt_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.update_stmt_t)->opt_limit_row_count_ = (yyvsp[0].opt_limit_row_count_t);
		
	}
#line 5804 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 195:
#line 2097 "bison.y" /* yacc.c:1652  */
    {
		(yyval.update_stmt_t) = new UpdateStmt();
		(yyval.update_stmt_t)->case_idx_ = CASE1;
		(yyval.update_stmt_t)->table_name_ = (yyvsp[-6].table_name_t);
		(yyval.update_stmt_t)->opt_as_alias_ = (yyvsp[-5].opt_as_alias_t);
		(yyval.update_stmt_t)->set_clause_list_ = (yyvsp[-3].set_clause_list_t);
		(yyval.update_stmt_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.update_stmt_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.update_stmt_t)->opt_limit_row_count_ = (yyvsp[0].opt_limit_row_count_t);
		
	}
#line 5820 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 196:
#line 2111 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE0;
		(yyval.alter_action_t)->table_name_ = (yyvsp[0].table_name_t);
		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)64; 
				}
			}
		}


	}
#line 5843 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 197:
#line 2129 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE1;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-3].opt_column_t);
		(yyval.alter_action_t)->column_name_1_ = (yyvsp[-2].column_name_t);
		(yyval.alter_action_t)->column_name_2_ = (yyvsp[0].column_name_t);
		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->column_name_1_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataColumnName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}

		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->column_name_2_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataColumnName; 
					tmp2->scope_ = 3; 
					tmp2->data_flag_ =(DATAFLAG)64; 
				}
			}
		}


	}
#line 5880 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 198:
#line 2161 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE2;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-1].opt_column_t);
		(yyval.alter_action_t)->column_def_ = (yyvsp[0].column_def_t);
		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->column_def_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataColumnName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}


	}
#line 5904 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 199:
#line 2180 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE3;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-1].opt_column_t);
		(yyval.alter_action_t)->column_name_1_ = (yyvsp[0].column_name_t);
		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->column_name_1_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataColumnName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}


	}
#line 5928 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 200:
#line 2199 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE4;
		(yyval.alter_action_t)->alter_constant_action_ = (yyvsp[0].alter_constant_action_t);
		
	}
#line 5939 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 201:
#line 2208 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE0;
		
	}
#line 5949 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 202:
#line 2213 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE1;
		
	}
#line 5959 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 203:
#line 2218 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE2;
		
	}
#line 5969 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 204:
#line 2223 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE3;
		
	}
#line 5979 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 205:
#line 2228 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE4;
		(yyval.alter_constant_action_t)->lock_option_ = (yyvsp[0].lock_option_t);
		
	}
#line 5990 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 206:
#line 2234 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE5;
		
	}
#line 6000 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 207:
#line 2239 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE6;
		
	}
#line 6010 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 208:
#line 2247 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE0;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[0].column_def_t);
		
	}
#line 6021 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 209:
#line 2253 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE1;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[-2].column_def_t);
		(yyval.column_def_list_t)->column_def_list_ = (yyvsp[0].column_def_list_t);
		
	}
#line 6033 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 210:
#line 2263 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_def_t) = new ColumnDef();
		(yyval.column_def_t)->case_idx_ = CASE0;
		(yyval.column_def_t)->identifier_ = (yyvsp[-2].identifier_t);
		(yyval.column_def_t)->type_name_ = (yyvsp[-1].type_name_t);
		(yyval.column_def_t)->opt_column_constraint_list_ = (yyvsp[0].opt_column_constraint_list_t);
		if((yyval.column_def_t)){
			auto tmp1 = (yyval.column_def_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataColumnName; 
				tmp1->scope_ = 2; 
				tmp1->data_flag_ =(DATAFLAG)1; 
			}
		}


	}
#line 6055 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 211:
#line 2283 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_column_constraint_list_t)->column_constraint_list_ = (yyvsp[-2].column_constraint_list_t);
		(yyval.opt_column_constraint_list_t)->opt_check_ = (yyvsp[-1].opt_check_t);
		(yyval.opt_column_constraint_list_t)->opt_reference_clause_ = (yyvsp[0].opt_reference_clause_t);
		
	}
#line 6068 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 212:
#line 2291 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 6078 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 213:
#line 2299 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[0].column_constraint_t);
		
	}
#line 6089 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 214:
#line 2305 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE1;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[-1].column_constraint_t);
		(yyval.column_constraint_list_t)->column_constraint_list_ = (yyvsp[0].column_constraint_list_t);
		
	}
#line 6101 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 215:
#line 2315 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_constraint_t) = new ColumnConstraint();
		(yyval.column_constraint_t)->case_idx_ = CASE0;
		(yyval.column_constraint_t)->constraint_type_ = (yyvsp[0].constraint_type_t);
		
	}
#line 6112 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 216:
#line 2324 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_reference_clause_t) = new OptReferenceClause();
		(yyval.opt_reference_clause_t)->case_idx_ = CASE0;
		(yyval.opt_reference_clause_t)->opt_foreign_key_ = (yyvsp[-1].opt_foreign_key_t);
		(yyval.opt_reference_clause_t)->reference_clause_ = (yyvsp[0].reference_clause_t);
		
	}
#line 6124 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 217:
#line 2331 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_reference_clause_t) = new OptReferenceClause();
		(yyval.opt_reference_clause_t)->case_idx_ = CASE1;
		
	}
#line 6134 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 218:
#line 2339 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_t) = new OptCheck();
		(yyval.opt_check_t)->case_idx_ = CASE0;
		(yyval.opt_check_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.opt_check_t)->opt_enforced_ = (yyvsp[0].opt_enforced_t);
		
	}
#line 6146 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 219:
#line 2346 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_t) = new OptCheck();
		(yyval.opt_check_t)->case_idx_ = CASE1;
		
	}
#line 6156 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 220:
#line 2354 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE0;
		
	}
#line 6166 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 221:
#line 2359 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE1;
		
	}
#line 6176 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 222:
#line 2364 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE2;
		
	}
#line 6186 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 223:
#line 2372 "bison.y" /* yacc.c:1652  */
    {
		(yyval.reference_clause_t) = new ReferenceClause();
		(yyval.reference_clause_t)->case_idx_ = CASE0;
		(yyval.reference_clause_t)->table_name_ = (yyvsp[-3].table_name_t);
		(yyval.reference_clause_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		(yyval.reference_clause_t)->opt_foreign_key_actions_ = (yyvsp[-1].opt_foreign_key_actions_t);
		(yyval.reference_clause_t)->opt_constraint_attribute_spec_ = (yyvsp[0].opt_constraint_attribute_spec_t);
		if((yyval.reference_clause_t)){
			auto tmp1 = (yyval.reference_clause_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 100; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}

		if((yyval.reference_clause_t)){
			auto tmp1 = (yyval.reference_clause_t)->opt_column_name_list_p_; 
			if(tmp1){
				auto tmp2 = tmp1->column_name_list_; 
				while(tmp2){
					auto tmp3 = tmp2->column_name_; 
					if(tmp3){
						auto tmp4 = tmp3->identifier_; 
						if(tmp4){
							tmp4->data_type_ = kDataColumnName; 
							tmp4->scope_ = 101; 
							tmp4->data_flag_ =(DATAFLAG)8; 
						}
					}
					tmp2 = tmp2->column_name_list_;
				}
			}
		}


	}
#line 6231 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 224:
#line 2415 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_foreign_key_t) = new OptForeignKey();
		(yyval.opt_foreign_key_t)->case_idx_ = CASE0;
		
	}
#line 6241 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 225:
#line 2420 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_foreign_key_t) = new OptForeignKey();
		(yyval.opt_foreign_key_t)->case_idx_ = CASE1;
		
	}
#line 6251 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 226:
#line 2428 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE0;
		(yyval.opt_foreign_key_actions_t)->foreign_key_actions_ = (yyvsp[0].foreign_key_actions_t);
		
	}
#line 6262 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 227:
#line 2434 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 6272 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 228:
#line 2442 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE0;
		
	}
#line 6282 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 229:
#line 2447 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 6292 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 230:
#line 2452 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE2;
		
	}
#line 6302 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 231:
#line 2457 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE3;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 6313 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 232:
#line 2463 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE4;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 6324 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 233:
#line 2472 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE0;
		
	}
#line 6334 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 234:
#line 2477 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE1;
		
	}
#line 6344 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 235:
#line 2482 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE2;
		
	}
#line 6354 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 236:
#line 2487 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE3;
		
	}
#line 6364 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 237:
#line 2492 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE4;
		
	}
#line 6374 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 238:
#line 2500 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE0;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 6385 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 239:
#line 2506 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE1;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 6396 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 240:
#line 2512 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE2;
		
	}
#line 6406 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 241:
#line 2520 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE0;
		
	}
#line 6416 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 242:
#line 2525 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE1;
		
	}
#line 6426 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 243:
#line 2530 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE2;
		
	}
#line 6436 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 244:
#line 2538 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_name_t) = new ConstraintName();
		(yyval.constraint_name_t)->case_idx_ = CASE0;
		(yyval.constraint_name_t)->name_ = (yyvsp[0].name_t);
		
	}
#line 6447 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 245:
#line 2547 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE0;
		
	}
#line 6457 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 246:
#line 2552 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE1;
		
	}
#line 6467 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 247:
#line 2560 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE0;
		
	}
#line 6477 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 248:
#line 2565 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE1;
		
	}
#line 6487 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 249:
#line 2570 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE2;
		
	}
#line 6497 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 250:
#line 2575 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE3;
		
	}
#line 6507 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 251:
#line 2583 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE0;
		(yyval.opt_column_name_list_p_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 6518 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 252:
#line 2589 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE1;
		
	}
#line 6528 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 253:
#line 2597 "bison.y" /* yacc.c:1652  */
    {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE0;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[0].set_clause_t);
		
	}
#line 6539 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 254:
#line 2603 "bison.y" /* yacc.c:1652  */
    {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE1;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[-2].set_clause_t);
		(yyval.set_clause_list_t)->set_clause_list_ = (yyvsp[0].set_clause_list_t);
		
	}
#line 6551 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 255:
#line 2613 "bison.y" /* yacc.c:1652  */
    {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE0;
		(yyval.set_clause_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 6563 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 256:
#line 2620 "bison.y" /* yacc.c:1652  */
    {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE1;
		(yyval.set_clause_t)->column_name_list_ = (yyvsp[-3].column_name_list_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 6575 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 257:
#line 2630 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE0;
		(yyval.opt_as_alias_t)->as_alias_ = (yyvsp[0].as_alias_t);
		
	}
#line 6586 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 258:
#line 2636 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE1;
		
	}
#line 6596 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 259:
#line 2644 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE0;
		(yyval.expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 6607 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 260:
#line 2650 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE1;
		(yyval.expr_t)->between_expr_ = (yyvsp[0].between_expr_t);
		
	}
#line 6618 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 261:
#line 2656 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE2;
		(yyval.expr_t)->exists_expr_ = (yyvsp[0].exists_expr_t);
		
	}
#line 6629 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 262:
#line 2662 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE3;
		(yyval.expr_t)->in_expr_ = (yyvsp[0].in_expr_t);
		
	}
#line 6640 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 263:
#line 2668 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE4;
		(yyval.expr_t)->cast_expr_ = (yyvsp[0].cast_expr_t);
		
	}
#line 6651 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 264:
#line 2674 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE5;
		(yyval.expr_t)->logic_expr_ = (yyvsp[0].logic_expr_t);
		
	}
#line 6662 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 265:
#line 2683 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE0;
		(yyval.operand_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 6673 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 266:
#line 2689 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE1;
		(yyval.operand_t)->array_index_ = (yyvsp[0].array_index_t);
		
	}
#line 6684 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 267:
#line 2695 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE2;
		(yyval.operand_t)->scalar_expr_ = (yyvsp[0].scalar_expr_t);
		
	}
#line 6695 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 268:
#line 2701 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE3;
		(yyval.operand_t)->unary_expr_ = (yyvsp[0].unary_expr_t);
		
	}
#line 6706 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 269:
#line 2707 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE4;
		(yyval.operand_t)->binary_expr_ = (yyvsp[0].binary_expr_t);
		
	}
#line 6717 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 270:
#line 2713 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE5;
		(yyval.operand_t)->case_expr_ = (yyvsp[0].case_expr_t);
		
	}
#line 6728 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 271:
#line 2719 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE6;
		(yyval.operand_t)->extract_expr_ = (yyvsp[0].extract_expr_t);
		
	}
#line 6739 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 272:
#line 2725 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE7;
		(yyval.operand_t)->array_expr_ = (yyvsp[0].array_expr_t);
		
	}
#line 6750 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 273:
#line 2731 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE8;
		(yyval.operand_t)->function_expr_ = (yyvsp[0].function_expr_t);
		
	}
#line 6761 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 274:
#line 2737 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE9;
		(yyval.operand_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 6772 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 275:
#line 2746 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cast_expr_t) = new CastExpr();
		(yyval.cast_expr_t)->case_idx_ = CASE0;
		(yyval.cast_expr_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.cast_expr_t)->type_name_ = (yyvsp[-1].type_name_t);
		
	}
#line 6784 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 276:
#line 2756 "bison.y" /* yacc.c:1652  */
    {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE0;
		(yyval.scalar_expr_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 6795 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 277:
#line 2762 "bison.y" /* yacc.c:1652  */
    {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE1;
		(yyval.scalar_expr_t)->literal_ = (yyvsp[0].literal_t);
		
	}
#line 6806 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 278:
#line 2771 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE0;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 6817 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 279:
#line 2777 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE1;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 6828 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 280:
#line 2783 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE2;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-1].operand_t);
		
	}
#line 6839 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 281:
#line 2789 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE3;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-2].operand_t);
		
	}
#line 6850 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 282:
#line 2795 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE4;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-3].operand_t);
		
	}
#line 6861 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 283:
#line 2801 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE5;
		
	}
#line 6871 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 284:
#line 2806 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE6;
		
	}
#line 6881 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 285:
#line 2814 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE0;
		(yyval.binary_expr_t)->comp_expr_ = (yyvsp[0].comp_expr_t);
		
	}
#line 6892 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 286:
#line 2820 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE1;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->binary_op_ = (yyvsp[-1].binary_op_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6905 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 287:
#line 2828 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE2;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6917 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 288:
#line 2835 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE3;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-3].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6929 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 289:
#line 2845 "bison.y" /* yacc.c:1652  */
    {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE0;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 6941 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 290:
#line 2852 "bison.y" /* yacc.c:1652  */
    {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE1;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 6953 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 291:
#line 2862 "bison.y" /* yacc.c:1652  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE0;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 6966 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 292:
#line 2870 "bison.y" /* yacc.c:1652  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE1;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 6979 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 293:
#line 2878 "bison.y" /* yacc.c:1652  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE2;
		(yyval.in_expr_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-2].opt_not_t);
		(yyval.in_expr_t)->table_name_ = (yyvsp[0].table_name_t);
		
	}
#line 6992 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 294:
#line 2889 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE0;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 7004 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 295:
#line 2896 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE1;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 7015 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 296:
#line 2902 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE2;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-4].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_2_ = (yyvsp[-1].expr_t);
		
	}
#line 7028 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 297:
#line 2910 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE3;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-1].expr_t);
		
	}
#line 7040 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 298:
#line 2920 "bison.y" /* yacc.c:1652  */
    {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE0;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-4].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 7053 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 299:
#line 2928 "bison.y" /* yacc.c:1652  */
    {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE1;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-5].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 7066 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 300:
#line 2939 "bison.y" /* yacc.c:1652  */
    {
		(yyval.exists_expr_t) = new ExistsExpr();
		(yyval.exists_expr_t)->case_idx_ = CASE0;
		(yyval.exists_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.exists_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 7078 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 301:
#line 2949 "bison.y" /* yacc.c:1652  */
    {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE0;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-4].function_name_t);
		(yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
		
	}
#line 7091 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 302:
#line 2957 "bison.y" /* yacc.c:1652  */
    {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE1;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-6].function_name_t);
		(yyval.function_expr_t)->opt_distinct_ = (yyvsp[-4].opt_distinct_t);
		(yyval.function_expr_t)->expr_list_ = (yyvsp[-3].expr_list_t);
		(yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
		
	}
#line 7106 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 303:
#line 2970 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE0;
		
	}
#line 7116 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 304:
#line 2975 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE1;
		
	}
#line 7126 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 305:
#line 2983 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_filter_clause_t) = new OptFilterClause();
		(yyval.opt_filter_clause_t)->case_idx_ = CASE0;
		(yyval.opt_filter_clause_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 7137 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 306:
#line 2989 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_filter_clause_t) = new OptFilterClause();
		(yyval.opt_filter_clause_t)->case_idx_ = CASE1;
		
	}
#line 7147 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 307:
#line 2997 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE0;
		(yyval.opt_over_clause_t)->window_ = (yyvsp[-1].window_t);
		
	}
#line 7158 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 308:
#line 3003 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE1;
		(yyval.opt_over_clause_t)->window_name_ = (yyvsp[0].window_name_t);
		
	}
#line 7169 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 309:
#line 3009 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE2;
		
	}
#line 7179 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 310:
#line 3017 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE0;
		(yyval.case_list_t)->case_clause_ = (yyvsp[0].case_clause_t);
		
	}
#line 7190 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 311:
#line 3023 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE1;
		(yyval.case_list_t)->case_clause_ = (yyvsp[-1].case_clause_t);
		(yyval.case_list_t)->case_list_ = (yyvsp[0].case_list_t);
		
	}
#line 7202 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 312:
#line 3033 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_clause_t) = new CaseClause();
		(yyval.case_clause_t)->case_idx_ = CASE0;
		(yyval.case_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 7214 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 313:
#line 3043 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE0;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 7226 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 314:
#line 3050 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE1;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 7238 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 315:
#line 3057 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE2;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 7250 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 316:
#line 3064 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE3;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 7262 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 317:
#line 3071 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE4;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 7274 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 318:
#line 3078 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE5;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 7286 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 319:
#line 3088 "bison.y" /* yacc.c:1652  */
    {
		(yyval.extract_expr_t) = new ExtractExpr();
		(yyval.extract_expr_t)->case_idx_ = CASE0;
		(yyval.extract_expr_t)->datetime_field_ = (yyvsp[-3].datetime_field_t);
		(yyval.extract_expr_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 7298 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 320:
#line 3098 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE0;
		
	}
#line 7308 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 321:
#line 3103 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE1;
		
	}
#line 7318 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 322:
#line 3108 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE2;
		
	}
#line 7328 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 323:
#line 3113 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE3;
		
	}
#line 7338 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 324:
#line 3118 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE4;
		
	}
#line 7348 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 325:
#line 3123 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE5;
		
	}
#line 7358 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 326:
#line 3131 "bison.y" /* yacc.c:1652  */
    {
		(yyval.array_expr_t) = new ArrayExpr();
		(yyval.array_expr_t)->case_idx_ = CASE0;
		(yyval.array_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 7369 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 327:
#line 3140 "bison.y" /* yacc.c:1652  */
    {
		(yyval.array_index_t) = new ArrayIndex();
		(yyval.array_index_t)->case_idx_ = CASE0;
		(yyval.array_index_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.array_index_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 7381 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 328:
#line 3150 "bison.y" /* yacc.c:1652  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE0;
		(yyval.literal_t)->string_literal_ = (yyvsp[0].string_literal_t);
		
	}
#line 7392 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 329:
#line 3156 "bison.y" /* yacc.c:1652  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE1;
		(yyval.literal_t)->bool_literal_ = (yyvsp[0].bool_literal_t);
		
	}
#line 7403 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 330:
#line 3162 "bison.y" /* yacc.c:1652  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE2;
		(yyval.literal_t)->num_literal_ = (yyvsp[0].num_literal_t);
		
	}
#line 7414 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 331:
#line 3171 "bison.y" /* yacc.c:1652  */
    {
		(yyval.string_literal_t) = new StringLiteral();
		(yyval.string_literal_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
		
	}
#line 7425 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 332:
#line 3180 "bison.y" /* yacc.c:1652  */
    {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE0;
		
	}
#line 7435 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 333:
#line 3185 "bison.y" /* yacc.c:1652  */
    {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE1;
		
	}
#line 7445 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 334:
#line 3193 "bison.y" /* yacc.c:1652  */
    {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE0;
		(yyval.num_literal_t)->int_literal_ = (yyvsp[0].int_literal_t);
		
	}
#line 7456 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 335:
#line 3199 "bison.y" /* yacc.c:1652  */
    {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE1;
		(yyval.num_literal_t)->float_literal_ = (yyvsp[0].float_literal_t);
		
	}
#line 7467 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 336:
#line 3208 "bison.y" /* yacc.c:1652  */
    {
		(yyval.int_literal_t) = new IntLiteral();
		(yyval.int_literal_t)->int_val_ = (yyvsp[0].ival);
		
	}
#line 7477 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 337:
#line 3216 "bison.y" /* yacc.c:1652  */
    {
		(yyval.float_literal_t) = new FloatLiteral();
		(yyval.float_literal_t)->float_val_ = (yyvsp[0].fval);
		
	}
#line 7487 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 338:
#line 3224 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE0;
		
	}
#line 7497 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 339:
#line 3229 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE1;
		
	}
#line 7507 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 340:
#line 3237 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE0;
		(yyval.trigger_body_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
		
	}
#line 7518 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 341:
#line 3243 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE1;
		(yyval.trigger_body_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
		
	}
#line 7529 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 342:
#line 3249 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE2;
		(yyval.trigger_body_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
		
	}
#line 7540 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 343:
#line 3255 "bison.y" /* yacc.c:1652  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE3;
		(yyval.trigger_body_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
		
	}
#line 7551 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 344:
#line 3264 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE0;
		
	}
#line 7561 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 345:
#line 3269 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE1;
		
	}
#line 7571 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 346:
#line 3277 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE0;
		
	}
#line 7581 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 347:
#line 3282 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE1;
		
	}
#line 7591 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 348:
#line 3290 "bison.y" /* yacc.c:1652  */
    {
		(yyval.identifier_t) = new Identifier();
		(yyval.identifier_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
		
	}
#line 7602 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 349:
#line 3299 "bison.y" /* yacc.c:1652  */
    {
		(yyval.as_alias_t) = new AsAlias();
		(yyval.as_alias_t)->case_idx_ = CASE0;
		(yyval.as_alias_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.as_alias_t)){
			auto tmp1 = (yyval.as_alias_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataAliasName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)1; 
			}
		}


	}
#line 7622 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 350:
#line 3317 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_name_t) = new TableName();
		(yyval.table_name_t)->case_idx_ = CASE0;
		(yyval.table_name_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.table_name_t)){
			auto tmp1 = (yyval.table_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataTableName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}


	}
#line 7642 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 351:
#line 3335 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_name_t) = new ColumnName();
		(yyval.column_name_t)->case_idx_ = CASE0;
		(yyval.column_name_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.column_name_t)){
			auto tmp1 = (yyval.column_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataColumnName; 
				tmp1->scope_ = 2; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}


	}
#line 7662 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 352:
#line 3353 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE0;
		
	}
#line 7672 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 353:
#line 3358 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE1;
		
	}
#line 7682 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 354:
#line 3363 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE2;
		
	}
#line 7692 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 355:
#line 3368 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE3;
		
	}
#line 7702 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 356:
#line 3376 "bison.y" /* yacc.c:1652  */
    {
		(yyval.view_name_t) = new ViewName();
		(yyval.view_name_t)->case_idx_ = CASE0;
		(yyval.view_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 7713 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 357:
#line 3385 "bison.y" /* yacc.c:1652  */
    {
		(yyval.function_name_t) = new FunctionName();
		(yyval.function_name_t)->case_idx_ = CASE0;
		(yyval.function_name_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.function_name_t)){
			auto tmp1 = (yyval.function_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataFunctionName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)4; 
			}
		}


	}
#line 7733 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 358:
#line 3403 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE0;
		
	}
#line 7743 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 359:
#line 3408 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE1;
		
	}
#line 7753 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 360:
#line 3413 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE2;
		
	}
#line 7763 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 361:
#line 3418 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE3;
		
	}
#line 7773 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 362:
#line 3423 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE4;
		
	}
#line 7783 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 363:
#line 3428 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE5;
		
	}
#line 7793 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 364:
#line 3436 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE0;
		
	}
#line 7803 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 365:
#line 3441 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE1;
		
	}
#line 7813 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 366:
#line 3449 "bison.y" /* yacc.c:1652  */
    {
		(yyval.name_t) = new Name();
		(yyval.name_t)->case_idx_ = CASE0;
		(yyval.name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 7824 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 367:
#line 3458 "bison.y" /* yacc.c:1652  */
    {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE0;
		(yyval.type_name_t)->numeric_type_ = (yyvsp[0].numeric_type_t);
		
	}
#line 7835 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 368:
#line 3464 "bison.y" /* yacc.c:1652  */
    {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE1;
		(yyval.type_name_t)->character_type_ = (yyvsp[0].character_type_t);
		
	}
#line 7846 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 369:
#line 3473 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE0;
		(yyval.character_type_t)->character_with_length_ = (yyvsp[0].character_with_length_t);
		
	}
#line 7857 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 370:
#line 3479 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE1;
		(yyval.character_type_t)->character_without_length_ = (yyvsp[0].character_without_length_t);
		
	}
#line 7868 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 371:
#line 3488 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_with_length_t) = new CharacterWithLength();
		(yyval.character_with_length_t)->case_idx_ = CASE0;
		(yyval.character_with_length_t)->character_conflicta_ = (yyvsp[-3].character_conflicta_t);
		(yyval.character_with_length_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 7880 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 372:
#line 3498 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE0;
		(yyval.character_without_length_t)->character_conflicta_ = (yyvsp[0].character_conflicta_t);
		
	}
#line 7891 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 373:
#line 3504 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE1;
		
	}
#line 7901 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 374:
#line 3509 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE2;
		
	}
#line 7911 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 375:
#line 3514 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE3;
		
	}
#line 7921 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 376:
#line 3522 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE0;
		
	}
#line 7931 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 377:
#line 3527 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE1;
		
	}
#line 7941 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 378:
#line 3532 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE2;
		
	}
#line 7951 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 379:
#line 3537 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE3;
		
	}
#line 7961 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 380:
#line 3542 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE4;
		
	}
#line 7971 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 381:
#line 3547 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE5;
		
	}
#line 7981 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 382:
#line 3552 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE6;
		
	}
#line 7991 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 383:
#line 3557 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE7;
		
	}
#line 8001 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 384:
#line 3562 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE8;
		
	}
#line 8011 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 385:
#line 3567 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE9;
		
	}
#line 8021 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 386:
#line 3575 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE0;
		
	}
#line 8031 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 387:
#line 3580 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE1;
		
	}
#line 8041 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 388:
#line 3585 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE2;
		
	}
#line 8051 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 389:
#line 3590 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE3;
		
	}
#line 8061 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 390:
#line 3595 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE4;
		
	}
#line 8071 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 391:
#line 3600 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE5;
		
	}
#line 8081 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 392:
#line 3605 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE6;
		
	}
#line 8091 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 393:
#line 3610 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE7;
		
	}
#line 8101 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 394:
#line 3615 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE8;
		
	}
#line 8111 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 395:
#line 3620 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE9;
		
	}
#line 8121 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 396:
#line 3625 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE10;
		
	}
#line 8131 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 397:
#line 3630 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE11;
		
	}
#line 8141 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 398:
#line 3635 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE12;
		
	}
#line 8151 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 399:
#line 3643 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 8162 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 400:
#line 3649 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 8172 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 401:
#line 3657 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[0].table_constraint_t);
		
	}
#line 8183 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 402:
#line 3663 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE1;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[-2].table_constraint_t);
		(yyval.table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 8195 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 403:
#line 3673 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE0;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-5].constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 8207 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 404:
#line 3680 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE1;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-4].constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 8219 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 405:
#line 3687 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE2;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-5].constraint_name_t);
		(yyval.table_constraint_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.table_constraint_t)->opt_enforced_ = (yyvsp[0].opt_enforced_t);
		
	}
#line 8232 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 406:
#line 3695 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE3;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-6].constraint_name_t);
		(yyval.table_constraint_t)->column_name_list_ = (yyvsp[-2].column_name_list_t);
		(yyval.table_constraint_t)->reference_clause_ = (yyvsp[0].reference_clause_t);
		if((yyval.table_constraint_t)){
			auto tmp1 = (yyval.table_constraint_t)->column_name_list_; 
			while(tmp1){
				auto tmp2 = tmp1->column_name_; 
				if(tmp2){
					auto tmp3 = tmp2->identifier_; 
					if(tmp3){
						tmp3->data_type_ = kDataColumnName; 
						tmp3->scope_ = 2; 
						tmp3->data_flag_ =(DATAFLAG)8; 
					}
				}
				tmp1 = tmp1->column_name_list_;
			}
		}


	}
#line 8261 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 407:
#line 3722 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE0;
		
	}
#line 8271 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 408:
#line 3727 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE1;
		
	}
#line 8281 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 409:
#line 3732 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE2;
		
	}
#line 8291 "bison_parser.cpp" /* yacc.c:1652  */
    break;


#line 8295 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 3739 "bison.y" /* yacc.c:1918  */
