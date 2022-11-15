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
    SQL_SIMPLE = 259,
    SQL_TEXT = 260,
    SQL_OVER = 261,
    SQL_BETWEEN = 262,
    SQL_OP_SEMI = 263,
    SQL_BIGINT = 264,
    SQL_LIMIT = 265,
    SQL_WITH = 266,
    SQL_ORDER = 267,
    SQL_LAST = 268,
    SQL_UNBOUNDED = 269,
    SQL_PRECEDING = 270,
    SQL_EXCEPT = 271,
    SQL_NUMERIC = 272,
    SQL_OP_LESSTHAN = 273,
    SQL_PROCEDURE = 274,
    SQL_ACTION = 275,
    SQL_FIRST = 276,
    SQL_OP_GREATEREQ = 277,
    SQL_CHECK = 278,
    SQL_FULL = 279,
    SQL_NATURAL = 280,
    SQL_DOUBLE = 281,
    SQL_NATIONAL = 282,
    SQL_OP_ADD = 283,
    SQL_CURRENT = 284,
    SQL_TRIGGER = 285,
    SQL_OP_SUB = 286,
    SQL_FALSE = 287,
    SQL_UNIQUE = 288,
    SQL_WHERE = 289,
    SQL_MINUTE = 290,
    SQL_BEFORE = 291,
    SQL_ON = 292,
    SQL_PARTIAL = 293,
    SQL_OF = 294,
    SQL_AFTER = 295,
    SQL_PRIMARY = 296,
    SQL_MONTH = 297,
    SQL_DEFERRED = 298,
    SQL_OP_DOUBLE_DOLLAR = 299,
    SQL_VARYING = 300,
    SQL_OP_GREATERTHAN = 301,
    SQL_OR = 302,
    SQL_PLPGSQL = 303,
    SQL_DELETE = 304,
    SQL_INDEX = 305,
    SQL_RETURN = 306,
    SQL_OP_MUL = 307,
    SQL_FOREIGN = 308,
    SQL_RESTRICT = 309,
    SQL_FOLLOWING = 310,
    SQL_TIES = 311,
    SQL_DEC = 312,
    SQL_SELECT = 313,
    SQL_BEGIN = 314,
    SQL_LANGUAGE = 315,
    SQL_DISTINCT = 316,
    SQL_TRUE = 317,
    SQL_BY = 318,
    SQL_OP_MOD = 319,
    SQL_VALUES = 320,
    SQL_IS = 321,
    SQL_ROW = 322,
    SQL_FUNCTION = 323,
    SQL_END = 324,
    SQL_RECURSIVE = 325,
    SQL_FOR = 326,
    SQL_UNION = 327,
    SQL_NULLS = 328,
    SQL_UPDATE = 329,
    SQL_ELSE = 330,
    SQL_RANGE = 331,
    SQL_OFFSET = 332,
    SQL_INDEXED = 333,
    SQL_INSTEAD = 334,
    SQL_NCHAR = 335,
    SQL_AND = 336,
    SQL_REINDEX = 337,
    SQL_INITIALLY = 338,
    SQL_YEAR = 339,
    SQL_PRECISION = 340,
    SQL_FILTER = 341,
    SQL_NOT = 342,
    SQL_VIEW = 343,
    SQL_DEFFERRABLE = 344,
    SQL_REAL = 345,
    SQL_THEN = 346,
    SQL_OPTION = 347,
    SQL_DEFAULT = 348,
    SQL_GLOBAL = 349,
    SQL_CROSS = 350,
    SQL_CHAR = 351,
    SQL_REFERENCES = 352,
    SQL_OP_XOR = 353,
    SQL_GROUP = 354,
    SQL_CASE = 355,
    SQL_SET = 356,
    SQL_HOUR = 357,
    SQL_NO = 358,
    SQL_COLUMN = 359,
    SQL_LOCAL = 360,
    SQL_DROP = 361,
    SQL_REPLACE = 362,
    SQL_ASC = 363,
    SQL_OP_COMMA = 364,
    SQL_TABLE = 365,
    SQL_ARRAY = 366,
    SQL_IF = 367,
    SQL_EXTRACT = 368,
    SQL_LEFT = 369,
    SQL_OUTER = 370,
    SQL_DECIMAL = 371,
    SQL_PARTITION = 372,
    SQL_CASCADE = 373,
    SQL_ADD = 374,
    SQL_OTHERS = 375,
    SQL_OP_LESSEQ = 376,
    SQL_MATCH = 377,
    SQL_ALL = 378,
    SQL_ROWS = 379,
    SQL_JOIN = 380,
    SQL_LIKE = 381,
    SQL_INTEGER = 382,
    SQL_OP_RP = 383,
    SQL_INT = 384,
    SQL_BOOLEAN = 385,
    SQL_KEY = 386,
    SQL_EACH = 387,
    SQL_USING = 388,
    SQL_RENAME = 389,
    SQL_DO = 390,
    SQL_FLOAT = 391,
    SQL_OP_LP = 392,
    SQL_CHARACTER = 393,
    SQL_UMINUS = 394,
    SQL_CAST = 395,
    SQL_GROUPS = 396,
    SQL_NULL = 397,
    SQL_SMALLINT = 398,
    SQL_INSERT = 399,
    SQL_TEMPORARY = 400,
    SQL_CONSTRAINT = 401,
    SQL_CREATE = 402,
    SQL_OP_LBRACKET = 403,
    SQL_WHEN = 404,
    SQL_IMMEDIATE = 405,
    SQL_TO = 406,
    SQL_EXCLUDE = 407,
    SQL_DAY = 408,
    SQL_CONFLICT = 409,
    SQL_OP_RBRACKET = 410,
    SQL_EXECUTE = 411,
    SQL_EXISTS = 412,
    SQL_INTO = 413,
    SQL_OP_DIVIDE = 414,
    SQL_CASCADED = 415,
    SQL_ISNULL = 416,
    SQL_AS = 417,
    SQL_INNER = 418,
    SQL_INTERSECT = 419,
    SQL_IN = 420,
    SQL_OP_EQUAL = 421,
    SQL_VARCHAR = 422,
    SQL_ALTER = 423,
    SQL_DESC = 424,
    SQL_FROM = 425,
    SQL_TEMP = 426,
    SQL_UNLOGGED = 427,
    SQL_SECOND = 428,
    SQL_WINDOW = 429,
    SQL_NOTHING = 430,
    SQL_HAVING = 431,
    SQL_INTLITERAL = 432,
    SQL_STRINGLITERAL = 433,
    SQL_FLOATLITERAL = 434,
    SQL_IDENTIFIER = 435
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
	OptFrameExclude *	opt_frame_exclude_t;
	FrameExclude *	frame_exclude_t;
	OptExistWindowName *	opt_exist_window_name_t;
	OptGroupClause *	opt_group_clause_t;
	OptHavingClause *	opt_having_clause_t;
	OptWhereClause *	opt_where_clause_t;
	WhereClause *	where_clause_t;
	FromClause *	from_clause_t;
	TableRef *	table_ref_t;
	OptOnOrUsing *	opt_on_or_using_t;
	OnOrUsing *	on_or_using_t;
	ColumnNameList *	column_name_list_t;
	OptTablePrefix *	opt_table_prefix_t;
	JoinOp *	join_op_t;
	OptJoinType *	opt_join_type_t;
	ExprList *	expr_list_t;
	OptLimitClause *	opt_limit_clause_t;
	LimitClause *	limit_clause_t;
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
	CreateViewStmt *	create_view_stmt_t;
	DropIndexStmt *	drop_index_stmt_t;
	DropTableStmt *	drop_table_stmt_t;
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
	ReindexStmt *	reindex_stmt_t;
	AlterAction *	alter_action_t;
	ColumnDefList *	column_def_list_t;
	ColumnDef *	column_def_t;
	OptColumnConstraintList *	opt_column_constraint_list_t;
	ColumnConstraintList *	column_constraint_list_t;
	ColumnConstraint *	column_constraint_t;
	ConstraintType *	constraint_type_t;
	ForeignClause *	foreign_clause_t;
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
	CaseList *	case_list_t;
	CaseClause *	case_clause_t;
	CompExpr *	comp_expr_t;
	ExtractExpr *	extract_expr_t;
	DatetimeField *	datetime_field_t;
	ArrayIndex *	array_index_t;
	Literal *	literal_t;
	StringLiteral *	string_literal_t;
	BoolLiteral *	bool_literal_t;
	NumLiteral *	num_literal_t;
	IntLiteral *	int_literal_t;
	FloatLiteral *	float_literal_t;
	OptColumn *	opt_column_t;
	OptIfNotExist *	opt_if_not_exist_t;
	OptIfExist *	opt_if_exist_t;
	Identifier *	identifier_t;
	TableName *	table_name_t;
	ColumnName *	column_name_t;
	OptUnique *	opt_unique_t;
	ViewName *	view_name_t;
	BinaryOp *	binary_op_t;
	OptNot *	opt_not_t;
	Name *	name_t;
	TypeName *	type_name_t;
	CharacterType *	character_type_t;
	CharacterWithLength *	character_with_length_t;
	CharacterWithoutLength *	character_without_length_t;
	CharacterConflicta *	character_conflicta_t;
	OptVarying *	opt_varying_t;
	NumericType *	numeric_type_t;
	OptTableConstraintList *	opt_table_constraint_list_t;
	TableConstraintList *	table_constraint_list_t;
	TableConstraint *	table_constraint_t;

#line 464 "bison_parser.cpp" /* yacc.c:352  */
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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   844

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  181
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  321
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  581

#define YYUNDEFTOK  2
#define YYMAXUTOK   435

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
     175,   176,   177,   178,   179,   180
};

#if FF_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   362,   362,   372,   379,   388,   394,   400,   406,   412,
     418,   424,   433,   439,   445,   454,   460,   466,   475,   485,
     491,   500,   506,   515,   527,   533,   544,   558,   563,   568,
     576,   582,   590,   599,   605,   613,   622,   628,   638,   660,
     669,   681,   687,   695,   703,   712,   720,   725,   730,   738,
     744,   752,   758,   766,   772,   778,   786,   792,   800,   805,
     810,   815,   823,   838,   846,   853,   861,   867,   875,   881,
     889,   898,   907,   915,   923,   934,   940,   948,   954,   963,
     969,   979,   986,   994,   999,  1004,  1013,  1018,  1023,  1028,
    1033,  1041,  1048,  1057,  1063,  1071,  1077,  1084,  1094,  1100,
    1108,  1113,  1118,  1126,  1132,  1142,  1153,  1158,  1163,  1171,
    1177,  1183,  1191,  1197,  1207,  1217,  1227,  1232,  1237,  1245,
    1266,  1307,  1345,  1386,  1427,  1468,  1512,  1534,  1556,  1578,
    1590,  1597,  1603,  1613,  1619,  1629,  1638,  1644,  1652,  1660,
    1667,  1675,  1681,  1691,  1701,  1713,  1719,  1728,  1746,  1778,
    1788,  1794,  1804,  1824,  1830,  1838,  1844,  1854,  1863,  1868,
    1873,  1878,  1884,  1893,  1936,  1942,  1950,  1955,  1960,  1965,
    1971,  1980,  1985,  1990,  1995,  2000,  2008,  2014,  2020,  2028,
    2033,  2038,  2046,  2055,  2060,  2065,  2070,  2075,  2080,  2085,
    2090,  2098,  2103,  2108,  2113,  2121,  2127,  2135,  2141,  2151,
    2158,  2168,  2174,  2180,  2186,  2192,  2198,  2207,  2213,  2219,
    2225,  2231,  2237,  2243,  2249,  2258,  2268,  2274,  2283,  2289,
    2295,  2301,  2307,  2313,  2318,  2326,  2332,  2340,  2347,  2357,
    2364,  2374,  2382,  2390,  2401,  2408,  2414,  2422,  2432,  2440,
    2451,  2461,  2467,  2477,  2487,  2494,  2501,  2508,  2515,  2522,
    2532,  2542,  2547,  2552,  2557,  2562,  2567,  2575,  2585,  2591,
    2597,  2606,  2615,  2620,  2628,  2634,  2643,  2651,  2659,  2664,
    2672,  2677,  2685,  2690,  2698,  2707,  2725,  2743,  2748,  2756,
    2765,  2770,  2775,  2780,  2785,  2793,  2798,  2806,  2815,  2821,
    2830,  2836,  2845,  2855,  2864,  2870,  2876,  2881,  2886,  2892,
    2898,  2907,  2912,  2920,  2925,  2930,  2935,  2940,  2945,  2950,
    2955,  2960,  2965,  2970,  2978,  2984,  2992,  2998,  3008,  3015,
    3022,  3029
};
#endif

#if FF_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP_NOTEQUAL", "SIMPLE", "TEXT", "OVER",
  "BETWEEN", "OP_SEMI", "BIGINT", "LIMIT", "WITH", "ORDER", "LAST",
  "UNBOUNDED", "PRECEDING", "EXCEPT", "NUMERIC", "OP_LESSTHAN",
  "PROCEDURE", "ACTION", "FIRST", "OP_GREATEREQ", "CHECK", "FULL",
  "NATURAL", "DOUBLE", "NATIONAL", "OP_ADD", "CURRENT", "TRIGGER",
  "OP_SUB", "FALSE", "UNIQUE", "WHERE", "MINUTE", "BEFORE", "ON",
  "PARTIAL", "OF", "AFTER", "PRIMARY", "MONTH", "DEFERRED",
  "OP_DOUBLE_DOLLAR", "VARYING", "OP_GREATERTHAN", "OR", "PLPGSQL",
  "DELETE", "INDEX", "RETURN", "OP_MUL", "FOREIGN", "RESTRICT",
  "FOLLOWING", "TIES", "DEC", "SELECT", "BEGIN", "LANGUAGE", "DISTINCT",
  "TRUE", "BY", "OP_MOD", "VALUES", "IS", "ROW", "FUNCTION", "END",
  "RECURSIVE", "FOR", "UNION", "NULLS", "UPDATE", "ELSE", "RANGE",
  "OFFSET", "INDEXED", "INSTEAD", "NCHAR", "AND", "REINDEX", "INITIALLY",
  "YEAR", "PRECISION", "FILTER", "NOT", "VIEW", "DEFFERRABLE", "REAL",
  "THEN", "OPTION", "DEFAULT", "GLOBAL", "CROSS", "CHAR", "REFERENCES",
  "OP_XOR", "GROUP", "CASE", "SET", "HOUR", "NO", "COLUMN", "LOCAL",
  "DROP", "REPLACE", "ASC", "OP_COMMA", "TABLE", "ARRAY", "IF", "EXTRACT",
  "LEFT", "OUTER", "DECIMAL", "PARTITION", "CASCADE", "ADD", "OTHERS",
  "OP_LESSEQ", "MATCH", "ALL", "ROWS", "JOIN", "LIKE", "INTEGER", "OP_RP",
  "INT", "BOOLEAN", "KEY", "EACH", "USING", "RENAME", "DO", "FLOAT",
  "OP_LP", "CHARACTER", "UMINUS", "CAST", "GROUPS", "NULL", "SMALLINT",
  "INSERT", "TEMPORARY", "CONSTRAINT", "CREATE", "OP_LBRACKET", "WHEN",
  "IMMEDIATE", "TO", "EXCLUDE", "DAY", "CONFLICT", "OP_RBRACKET",
  "EXECUTE", "EXISTS", "INTO", "OP_DIVIDE", "CASCADED", "ISNULL", "AS",
  "INNER", "INTERSECT", "IN", "OP_EQUAL", "VARCHAR", "ALTER", "DESC",
  "FROM", "TEMP", "UNLOGGED", "SECOND", "WINDOW", "NOTHING", "HAVING",
  "INTLITERAL", "STRINGLITERAL", "FLOATLITERAL", "IDENTIFIER", "$accept",
  "program", "stmtlist", "stmt", "create_stmt", "drop_stmt", "alter_stmt",
  "select_stmt", "select_with_parens", "select_no_parens",
  "select_clause_list", "select_clause", "combine_clause",
  "opt_from_clause", "select_target", "opt_window_clause", "window_clause",
  "window_def_list", "window_def", "window_name", "window",
  "opt_partition", "opt_frame_clause", "range_or_rows",
  "frame_bound_start", "frame_bound_end", "frame_bound",
  "opt_frame_exclude", "frame_exclude", "opt_exist_window_name",
  "opt_group_clause", "opt_having_clause", "opt_where_clause",
  "where_clause", "from_clause", "table_ref", "opt_on_or_using",
  "on_or_using", "column_name_list", "opt_table_prefix", "join_op",
  "opt_join_type", "expr_list", "opt_limit_clause", "limit_clause",
  "opt_order_clause", "opt_order_nulls", "order_item_list", "order_item",
  "opt_order_behavior", "opt_with_clause", "cte_table_list", "cte_table",
  "cte_table_name", "opt_all_or_distinct", "create_table_stmt",
  "create_index_stmt", "create_view_stmt", "drop_index_stmt",
  "drop_table_stmt", "drop_view_stmt", "insert_stmt", "insert_rest",
  "super_values_list", "values_list", "opt_on_conflict",
  "opt_conflict_expr", "indexed_column_list", "indexed_column",
  "update_stmt", "reindex_stmt", "alter_action", "column_def_list",
  "column_def", "opt_column_constraint_list", "column_constraint_list",
  "column_constraint", "constraint_type", "foreign_clause",
  "opt_foreign_key_actions", "foreign_key_actions", "key_actions",
  "opt_constraint_attribute_spec", "opt_initial_time", "constraint_name",
  "opt_temp", "opt_check_option", "opt_column_name_list_p",
  "set_clause_list", "set_clause", "expr", "operand", "cast_expr",
  "scalar_expr", "unary_expr", "binary_expr", "logic_expr", "in_expr",
  "case_expr", "between_expr", "exists_expr", "case_list", "case_clause",
  "comp_expr", "extract_expr", "datetime_field", "array_index", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "float_literal", "opt_column", "opt_if_not_exist", "opt_if_exist",
  "identifier", "table_name", "column_name", "opt_unique", "view_name",
  "binary_op", "opt_not", "name", "type_name", "character_type",
  "character_with_length", "character_without_length",
  "character_conflicta", "opt_varying", "numeric_type",
  "opt_table_constraint_list", "table_constraint_list", "table_constraint", YY_NULLPTR
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
     435
};
# endif

#define YYPACT_NINF -331

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-331)))

#define YYTABLE_NINF -287

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-287)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,   -33,    47,   177,     2,    95,   -79,    20,  -331,    26,
    -331,  -331,  -331,  -331,  -331,  -331,   -36,  -331,  -331,  -331,
    -331,  -331,  -331,  -331,  -331,  -331,  -119,  -331,  -331,   -16,
      31,  -331,    39,  -119,  -119,   117,   117,   117,   109,   128,
     202,  -331,   166,   216,   230,  -331,  -331,  -331,   237,   227,
    -119,  -331,    89,   -40,  -119,   193,   312,    -2,  -331,  -119,
     218,  -119,  -331,  -331,  -331,   214,  -119,  -119,  -119,  -331,
    -331,   139,  -331,  -331,  -331,  -331,   305,  -119,   273,   273,
     200,  -331,  -331,  -331,   640,   309,  -119,   348,   392,  -331,
    -331,  -331,   202,  -331,     2,   285,  -331,   306,  -331,  -331,
    -331,  -331,  -331,   298,  -119,    39,   334,  -119,  -119,   318,
      88,  -331,   655,  -331,  -331,  -331,   655,   623,   287,    73,
     289,  -331,  -331,  -331,  -331,   258,  -331,   256,   366,  -331,
    -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,   270,    68,
      39,   640,   640,  -331,  -331,  -331,   308,  -331,  -119,   346,
    -119,    39,   278,   286,   168,   405,  -331,  -119,  -119,  -119,
     655,    22,   518,   640,     1,   320,   296,    12,   321,   322,
     640,  -331,   412,  -331,   640,   640,   640,   655,   655,   655,
     655,  -331,  -331,   655,  -331,  -331,   -69,    17,   655,   655,
     274,  -331,  -331,   655,   655,   282,   311,  -119,   412,   349,
     300,   427,    90,  -331,   358,   -31,   208,  -331,  -331,  -119,
      39,   307,     2,  -331,  -119,     2,  -119,  -331,   616,  -331,
     317,   344,   257,   329,  -331,   640,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,   302,  -331,  -331,   -18,    63,   141,   640,
     374,  -331,   390,  -331,  -331,   572,   413,   683,   683,   683,
     333,  -331,   655,   655,   683,   572,   323,   572,    22,   176,
     465,   352,  -331,    68,   640,   327,  -331,   345,   418,  -331,
     640,  -331,  -331,   415,   640,   640,    39,   324,     2,   474,
     350,   381,  -331,   354,  -331,  -331,  -331,   410,   158,  -331,
     452,  -331,   452,  -331,  -331,  -331,  -331,  -331,   452,  -331,
    -331,   249,  -331,  -331,  -331,   361,  -331,  -119,   640,  -331,
     640,   271,   640,   616,   -52,  -331,  -331,  -331,    34,    19,
      28,   438,   330,   655,  -331,   471,   572,  -331,    73,  -331,
     375,   341,  -331,    28,   371,   640,  -331,   400,  -331,  -331,
      99,  -331,    28,    28,   351,     2,   474,   -11,  -331,  -119,
     339,   382,  -331,   402,  -119,   640,  -331,   452,   452,  -331,
    -331,  -331,  -331,   378,  -331,   385,   370,  -119,  -331,  -331,
     249,  -331,  -331,   274,  -331,    28,   297,  -331,   151,   391,
    -331,   403,  -331,   397,   398,    54,   640,   401,  -331,  -331,
     640,  -119,  -331,  -331,   502,   655,   414,   416,  -331,   640,
     640,   393,   417,   345,  -331,  -331,     2,   474,  -331,   437,
     520,   524,  -331,  -331,   404,   419,   420,   422,  -331,   350,
    -331,   429,   441,   -31,  -331,  -331,   640,  -331,  -331,    39,
    -331,   431,  -331,  -331,  -331,  -331,  -331,    19,    19,    28,
    -119,   379,  -331,   451,   407,  -331,   502,  -331,  -331,    28,
     434,   -19,  -331,  -331,   474,  -331,  -331,   473,   475,   640,
     640,   426,   436,  -331,   412,   640,  -331,   160,    -9,  -331,
    -331,  -331,   443,   640,  -331,  -119,   439,   412,    68,  -331,
    -331,  -331,  -331,   164,   449,   640,  -119,  -331,  -331,  -331,
     325,   319,   239,  -331,  -331,    28,  -331,  -119,  -331,   412,
    -331,  -331,   450,   453,   180,   180,  -331,  -331,  -331,   491,
     500,  -331,   457,   469,  -331,  -331,  -331,   490,  -331,   -51,
     568,  -331,  -331,  -331,   500,   -26,  -331,  -331,   528,   312,
    -331,  -331,  -331,  -331,  -331,  -331,  -331,   640,   -46,  -331,
    -331,  -331,  -331,  -331,   122,   277,   578,   529,   446,  -331,
     165,   514,  -331,  -331,   172,  -331,  -331,  -331,   283,   532,
    -331,  -331,   481,  -331,   547,   446,  -331,  -331,  -331,  -331,
    -331
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     111,     0,     0,     0,   111,   190,     0,     0,     2,     0,
       5,     6,    10,     7,    20,    19,     0,    12,    13,    14,
      15,    16,    17,     9,     8,    11,     0,   274,   109,   112,
       0,   275,   196,     0,     0,   273,   273,   273,     0,     0,
       0,   277,     0,     0,     0,   183,   184,   189,     0,     0,
       0,     1,   111,   118,     0,     0,    99,    24,   110,     0,
       0,     0,   115,   146,   145,     0,     0,     0,     0,    22,
      21,   190,   187,   188,   185,   186,     0,     0,   271,   271,
       0,     3,   117,   116,   286,     0,     0,     0,    94,    29,
      27,    28,     0,   113,   111,     0,   276,    79,   272,   126,
     279,   128,   127,     0,     0,   196,     0,     0,     0,   269,
     269,    18,     0,   263,   224,   262,   285,   286,     0,   111,
       0,   223,   266,   261,   267,    31,    32,    92,   201,   205,
     209,   210,   211,   206,   204,   212,   202,   203,   225,   213,
     208,   217,   258,   259,   260,   264,   265,   216,     0,     0,
     196,   286,   286,    23,    93,    25,     0,   195,     0,     0,
       0,   196,     0,     0,     0,     0,   268,     0,     0,     0,
       0,   218,   219,   286,     0,     0,   241,     0,     0,     0,
     286,    82,    69,    30,   286,   286,   286,     0,     0,     0,
       0,   280,   281,     0,   284,   283,     0,   285,     0,     0,
       0,   282,   220,     0,     0,     0,     0,     0,    69,   197,
       0,   138,   111,    98,   103,   108,    95,   114,    80,     0,
     196,     0,   111,   270,     0,   111,     0,   149,     0,   147,
       0,     0,     0,     0,   235,   286,   242,   252,   255,   256,
     253,   254,   251,     0,   214,   207,     0,    71,     0,   286,
      65,    68,   230,   229,    91,   245,     0,   247,   249,   246,
       0,   221,     0,     0,   248,   227,     0,   244,   226,     0,
     111,     0,   144,     0,   286,     0,   129,     0,     0,   130,
     286,   106,   107,   102,   286,   286,   196,     0,   111,   194,
     315,   150,   119,     0,   297,   306,   312,     0,     0,   311,
     302,   307,   302,   310,   304,   303,   313,   308,   302,   305,
     296,   154,   289,   290,   291,   293,   288,     0,   286,   234,
     286,     0,   286,     0,    90,    83,    84,    81,    82,    76,
      70,     0,    34,     0,   222,     0,   228,   257,   111,   233,
       0,     0,   198,   199,   140,   286,   132,   133,   131,   104,
       0,   105,    96,    97,     0,   111,   194,     0,   122,     0,
       0,     0,   314,   316,     0,   286,   309,   302,   302,   301,
     300,   295,   294,     0,   160,     0,     0,     0,   152,   153,
     155,   157,   162,     0,   148,   243,     0,   237,     0,     0,
      89,    86,    88,     0,     0,     0,   286,     0,    72,    75,
     286,     0,    26,    33,   238,     0,     0,     0,   240,   286,
     286,     0,     0,     0,   101,   100,   111,   194,   123,     0,
       0,     0,   287,   182,     0,     0,     0,     0,   120,     0,
     151,     0,   141,   108,   299,   298,   286,   158,   159,   196,
     156,     0,   236,   250,   215,    87,    85,    76,    76,    77,
       0,    67,    35,    36,     0,    39,   239,   231,   232,   200,
       0,     0,   135,   134,   194,   124,   191,     0,     0,   286,
     286,     0,     0,   317,    69,   286,   143,     0,   165,   292,
      73,    74,     0,   286,    64,     0,     0,     0,     0,   136,
     125,   193,   192,     0,     0,   286,     0,   121,   142,   161,
       0,     0,   178,   164,    78,    66,    37,    63,   139,     0,
     320,   319,     0,     0,     0,     0,   168,   166,   167,     0,
     181,   163,     0,    42,    62,   137,   318,     0,   174,     0,
       0,   173,   170,   169,   181,     0,   176,    38,     0,    99,
     321,   172,   171,   175,   177,   179,   180,   286,    45,    41,
      46,    47,    48,    40,   286,   286,     0,     0,    57,    49,
       0,     0,    50,    55,     0,    43,    53,    54,   286,     0,
      61,    60,     0,    56,     0,    57,    51,    59,    58,    52,
      44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -331,  -331,   552,  -331,  -331,  -331,  -331,   -85,   601,     4,
     515,  -331,  -331,  -331,  -331,  -331,  -331,   121,  -331,  -331,
    -331,  -331,  -331,  -331,    53,  -331,    41,    35,  -331,  -331,
    -331,  -331,  -198,  -312,  -331,   284,   -41,  -331,  -155,  -331,
    -331,  -331,  -114,  -331,  -331,    72,  -331,   335,  -331,   181,
     217,   301,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,   203,  -331,  -331,  -331,  -232,  -331,  -331,
    -331,  -331,   253,   455,  -331,   233,  -331,  -331,    93,  -331,
    -331,   111,  -331,    97,  -331,   556,  -330,   -90,  -269,  -331,
    -116,   -72,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,
    -331,   229,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,
    -331,  -189,  -331,   519,   555,   372,    -1,   -27,   -59,  -331,
     -58,  -331,   507,  -331,   326,  -331,  -331,  -331,  -331,    14,
    -331,  -331,   211,  -331
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      56,    57,    92,   182,   125,   402,   403,   452,   453,   454,
     522,   539,   553,   554,   558,   575,   559,   565,   573,   523,
     332,   484,   250,   251,   183,   247,   398,   399,    95,   248,
     327,   393,   126,   153,   154,    88,   351,   213,   214,   283,
      40,    28,    29,    30,    84,    17,    18,    19,    20,    21,
      22,    23,   211,   346,   347,   276,   411,   431,   432,    24,
      25,   111,   290,   291,   378,   379,   380,   381,   382,   502,
     503,   532,   521,   536,   360,    48,   358,    62,   208,   209,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   175,   176,   138,   139,   243,   140,   141,   142,   143,
     144,   145,   146,   167,   107,    66,    96,    32,   147,    49,
     101,   204,   148,   423,   311,   312,   313,   314,   315,   370,
     316,   361,   362,   363
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   174,    97,   218,   342,   179,    63,    64,    39,   156,
     272,   266,   419,     1,    89,   162,   184,   545,   260,   105,
      51,    82,    53,    80,   262,    31,   418,    85,   500,   184,
     550,    50,    31,    31,    52,   215,   216,    26,    54,    99,
     171,   102,   541,   390,   172,     1,   161,   237,   184,    31,
     185,     1,   271,    31,   238,   488,   396,   232,    31,   150,
     212,    27,   391,   185,   246,    31,   100,    31,   252,   253,
      90,   221,   254,   261,   194,   184,   100,   281,   551,   324,
     164,   165,   185,    83,     1,    31,   195,   465,   324,    -4,
     210,   542,  -111,    59,   420,   552,   239,    33,   172,    97,
       1,     1,   220,   100,   112,   113,    31,    31,    55,   185,
     230,   392,   414,   501,   240,   255,   256,   257,   258,   321,
     415,   259,     2,   178,   546,   114,   264,   265,    41,   555,
     287,   267,   268,   330,   490,   115,   556,   289,   282,     4,
     292,   229,    42,   263,   323,  -278,     3,    27,    97,   421,
     173,   557,   397,   112,   113,   277,   489,    34,   343,   100,
     116,   286,    91,   325,   215,   241,   228,    31,   352,   353,
     200,     2,   325,   117,   114,   508,    61,     4,   460,   326,
     566,   201,   448,   278,   115,   242,   118,     5,   326,    43,
     335,   336,   166,    60,   441,     3,   354,   525,   184,   293,
      44,   569,   385,   356,   386,   207,   388,   184,     6,   116,
     119,   184,   184,   120,   210,   121,   279,    16,   100,   509,
     567,   329,   117,   228,   407,    31,     4,    35,   570,    65,
    -286,   412,   185,    43,   528,   118,     5,    69,   494,   168,
      45,   185,   339,   498,    44,   185,   185,    31,    27,   433,
     122,   123,   124,    27,   367,   184,    70,     6,   384,   119,
      53,   404,   120,   512,   121,    36,    46,    47,    31,    16,
     417,   571,   373,    71,   340,   572,   497,    79,   328,   443,
     449,   529,   374,   530,    45,   284,   451,    37,   499,   185,
     375,   556,   510,   459,   433,   482,   368,   574,   531,   122,
     123,   124,    27,   184,   184,   224,   557,    76,   112,   113,
      46,    47,   557,   338,   112,   113,   371,   285,   184,   109,
     477,    27,   372,   516,    87,    77,   519,    58,   520,   114,
     225,   464,   394,   456,   110,   114,   376,   185,   185,   115,
     387,   513,   406,   517,   184,   115,   377,    78,   318,   478,
     439,    86,   185,   493,   433,    94,    27,   518,   422,   433,
      93,    72,   424,   228,   116,   186,   442,   505,   159,   187,
     116,    98,   425,   188,   514,    74,    31,   117,   185,   433,
     426,   434,   435,   117,   189,   106,   160,    73,   190,   234,
     118,    97,   427,   104,   191,   235,   118,   192,   319,   515,
     455,    75,   152,   233,   320,   236,   480,   481,    67,    68,
     149,   151,   193,   157,   119,   158,   187,   120,   194,   121,
     119,   163,   166,   120,   177,   121,   180,   206,   181,   210,
     195,   189,   196,   549,   219,   190,   217,    97,   560,   560,
     222,   191,   226,   223,   192,   173,   249,   269,   270,   244,
     245,   122,   560,   197,   122,   123,   124,    27,   273,   193,
     122,   123,   124,    27,   275,   194,   274,   280,   317,   288,
     263,   185,   322,   331,   187,   334,     1,   195,   337,   196,
     341,   344,   345,   348,   455,   357,   355,   198,   350,   189,
     364,   365,   199,   190,   333,   366,   359,   369,   383,   191,
     231,   400,   192,   408,   401,   187,   524,   409,   410,   413,
     428,   429,   438,   416,   200,   436,   437,   193,   445,   444,
     189,   187,   446,   194,   190,   201,   447,   202,   461,   466,
     191,  -286,   203,   192,   198,   195,   189,   196,   450,   199,
     190,   469,   457,   467,   458,   462,   191,   468,   193,   192,
     475,   471,   405,   472,   194,   483,   470,   474,   231,   479,
     485,   200,   487,   495,   193,   491,   195,   492,   196,   486,
     194,   504,   201,   496,   202,  -287,   507,   511,   526,   203,
     534,   527,   195,   535,   196,   537,   538,   377,   543,   231,
     189,   547,   198,   562,   190,   568,   563,   199,   564,   577,
     191,   578,   579,   192,    81,    38,   506,   155,   561,   576,
     580,   548,   395,   440,   476,   349,   463,   430,   193,   200,
     540,   294,   227,   198,   194,   295,   533,   103,   199,   169,
     201,   544,   202,   296,   108,   205,   195,   203,   196,   198,
     473,     0,   297,   298,   199,     0,     0,     0,     0,   389,
     200,     0,     0,     0,   112,   113,     0,     0,     0,     0,
       0,   201,     0,   202,     0,     0,   200,     0,   203,     0,
       0,   112,   113,   299,     0,   114,     0,   201,     0,   202,
       0,     0,     0,     0,   203,   115,   112,   113,     0,     0,
       0,     0,   114,   198,     0,     0,   300,     0,  -287,     0,
       0,  -287,   115,     0,     0,  -287,   301,   114,     0,     0,
     116,   191,   302,     0,   192,     0,     0,   115,     0,     0,
     200,     0,     0,   117,     0,     0,     0,   116,     0,  -287,
       0,   201,   303,   202,     0,   194,   118,     0,  -287,     0,
     117,     0,   170,   304,     0,   305,   306,   195,     0,   196,
       0,     0,   307,   118,   308,   117,     0,     0,     0,   309,
     119,     0,     0,   120,     0,   121,     0,     0,   118,     0,
       0,     0,   173,     0,     0,     0,     0,   119,     0,     0,
     120,     0,   121,   310,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,   121,     0,     0,
     122,   123,   124,    27,  -287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,   122,   123,   124,    27,     0,     0,     0,     0,
       0,     0,   201,     0,   202
};

static const yytype_int16 yycheck[] =
{
       1,   117,    61,   158,   273,   119,    33,    34,     4,    94,
     208,   200,    23,    11,    16,   105,    47,    43,    87,    77,
       0,    61,    58,    50,     7,    26,   356,    54,    37,    47,
      76,   110,    33,    34,     8,   151,   152,    70,    74,    66,
     112,    68,    93,    95,   116,    11,   104,    35,    47,    50,
      81,    11,   207,    54,    42,    74,    37,   173,    59,    86,
     150,   180,   114,    81,   180,    66,    67,    68,   184,   185,
      72,   161,   186,   142,    52,    47,    77,   108,   124,    25,
     107,   108,    81,   123,    11,    86,    64,   417,    25,     0,
     149,   142,    58,   109,   105,   141,    84,    50,   170,   158,
      11,    11,   160,   104,    31,    32,   107,   108,   144,    81,
     169,   163,    13,   122,   102,   187,   188,   189,   190,   235,
      21,   193,    82,   119,   150,    52,   198,   199,    33,     7,
     220,   203,   204,   249,   464,    62,    14,   222,   169,   137,
     225,   168,    47,   126,   162,    50,   106,   180,   207,   160,
     149,    29,   133,    31,    32,    65,   175,   110,   274,   160,
      87,   219,   164,   109,   280,   153,   167,   168,   284,   285,
     148,    82,   109,   100,    52,   487,   137,   137,   410,   125,
      15,   159,   128,    93,    62,   173,   113,   147,   125,    94,
     262,   263,   104,   162,   383,   106,   286,   509,    47,   226,
     105,    29,   318,   288,   320,   137,   322,    47,   168,    87,
     137,    47,    47,   140,   273,   142,   212,     0,   219,   488,
      55,   248,   100,   224,   338,   226,   137,    50,    56,   112,
     157,   345,    81,    94,    54,   113,   147,   128,   470,   151,
     145,    81,   269,   475,   105,    81,    81,   248,   180,   365,
     177,   178,   179,   180,    96,    47,   128,   168,   317,   137,
      58,   333,   140,   495,   142,    88,   171,   172,   269,    52,
     355,    99,    23,   107,   270,   103,   474,    50,   137,   128,
     396,   101,    33,   103,   145,    77,   400,   110,   128,    81,
      41,    14,   128,   409,   410,   450,   138,    14,   118,   177,
     178,   179,   180,    47,    47,   137,    29,    70,    31,    32,
     171,   172,    29,   137,    31,    32,   302,   109,    47,   119,
     436,   180,   308,     4,    12,    88,    87,    26,    89,    52,
     162,   416,   328,   405,   134,    52,    87,    81,    81,    62,
      69,   496,   338,    24,    47,    62,    97,   110,    91,   439,
     377,   158,    81,   469,   470,   137,   180,    38,   359,   475,
      59,   145,    23,   364,    87,   109,    69,   483,    70,     3,
      87,   157,    33,     7,    49,   145,   377,   100,    81,   495,
      41,   367,   368,   100,    18,   112,    88,   171,    22,    69,
     113,   450,    53,    88,    28,    75,   113,    31,    69,    74,
     401,   171,    10,   174,    75,   176,   447,   448,    36,    37,
     101,    63,    46,   128,   137,   109,     3,   140,    52,   142,
     137,    87,   104,   140,   137,   142,   137,   157,   170,   488,
      64,    18,    66,   547,    88,    22,   128,   496,   554,   555,
     162,    28,    37,   157,    31,   149,    34,   165,   137,   128,
     128,   177,   568,    87,   177,   178,   179,   180,   109,    46,
     177,   178,   179,   180,    37,    52,   166,   109,   151,   162,
     126,    81,   170,    99,     3,   142,    11,    64,   155,    66,
     128,   154,   137,    65,   485,    11,   162,   121,    73,    18,
     109,   137,   126,    22,    81,    85,   146,    45,   137,    28,
      87,    63,    31,   128,   174,     3,   507,   166,   137,   109,
     128,   109,   142,   162,   148,   137,   131,    46,   115,   128,
      18,     3,   125,    52,    22,   159,   128,   161,   135,    92,
      28,   165,   166,    31,   121,    64,    18,    66,   137,   126,
      22,   137,   128,    23,   128,   128,    28,    23,    46,    31,
     109,   131,    81,   131,    52,   176,   137,   128,    87,   128,
     109,   148,   128,   137,    46,    92,    64,    92,    66,   162,
      52,   128,   159,   137,   161,     3,   137,   128,   128,   166,
      89,   128,    64,    83,    66,   128,   117,    97,    20,    87,
      18,    63,   121,    15,    22,    81,    67,   126,   152,    67,
      28,   120,    55,    31,    52,     4,   485,    92,   555,   568,
     575,   539,   328,   380,   433,   280,   413,   364,    46,   148,
     527,     5,   167,   121,    52,     9,   515,    71,   126,   110,
     159,   534,   161,    17,    79,   128,    64,   166,    66,   121,
     429,    -1,    26,    27,   126,    -1,    -1,    -1,    -1,   323,
     148,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,    -1,    -1,   148,    -1,   166,    -1,
      -1,    31,    32,    57,    -1,    52,    -1,   159,    -1,   161,
      -1,    -1,    -1,    -1,   166,    62,    31,    32,    -1,    -1,
      -1,    -1,    52,   121,    -1,    -1,    80,    -1,   126,    -1,
      -1,    18,    62,    -1,    -1,    22,    90,    52,    -1,    -1,
      87,    28,    96,    -1,    31,    -1,    -1,    62,    -1,    -1,
     148,    -1,    -1,   100,    -1,    -1,    -1,    87,    -1,    46,
      -1,   159,   116,   161,    -1,    52,   113,    -1,   166,    -1,
     100,    -1,    87,   127,    -1,   129,   130,    64,    -1,    66,
      -1,    -1,   136,   113,   138,   100,    -1,    -1,    -1,   143,
     137,    -1,    -1,   140,    -1,   142,    -1,    -1,   113,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   137,    -1,    -1,
     140,    -1,   142,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,
     177,   178,   179,   180,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,   178,   179,
     180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   177,   178,   179,   180,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    11,    82,   106,   137,   147,   168,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   231,   236,   237,   238,
     239,   240,   241,   242,   250,   251,    70,   180,   232,   233,
     234,   297,   298,    50,   110,    50,    88,   110,   189,   190,
     231,    33,    47,    94,   105,   145,   171,   172,   266,   300,
     110,     0,     8,    58,    74,   144,   191,   192,   232,   109,
     162,   137,   268,   298,   298,   112,   296,   296,   296,   128,
     128,   107,   145,   171,   145,   171,    70,    88,   110,    50,
     298,   183,    61,   123,   235,   298,   158,    12,   226,    16,
      72,   164,   193,   232,   137,   219,   297,   299,   157,   298,
     297,   301,   298,   266,    88,   301,   112,   295,   295,   119,
     134,   252,    31,    32,    52,    62,    87,   100,   113,   137,
     140,   142,   177,   178,   179,   195,   223,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   284,   285,
     287,   288,   289,   290,   291,   292,   293,   299,   303,   101,
     298,    63,    10,   224,   225,   191,   188,   128,   109,    70,
      88,   301,   268,    87,   298,   298,   104,   294,   151,   294,
      87,   272,   272,   149,   271,   282,   283,   137,   190,   223,
     137,   170,   194,   215,    47,    81,   109,     3,     7,    18,
      22,    28,    31,    46,    52,    64,    66,    87,   121,   126,
     148,   159,   161,   166,   302,   303,   157,   137,   269,   270,
     299,   243,   268,   228,   229,   271,   271,   128,   219,    88,
     301,   268,   162,   157,   137,   162,    37,   254,   297,   298,
     299,    87,   271,   282,    69,    75,   282,    35,    42,    84,
     102,   153,   173,   286,   128,   128,   271,   216,   220,    34,
     213,   214,   271,   271,   223,   272,   272,   272,   272,   272,
      87,   142,     7,   126,   272,   272,   292,   272,   272,   165,
     137,   219,   213,   109,   166,    37,   246,    65,    93,   190,
     109,   108,   169,   230,    77,   109,   301,   268,   162,   188,
     253,   254,   188,   298,     5,     9,    17,    26,    27,    57,
      80,    90,    96,   116,   127,   129,   130,   136,   138,   143,
     167,   305,   306,   307,   308,   309,   311,   151,    91,    69,
      75,   271,   170,   162,    25,   109,   125,   221,   137,   298,
     271,    99,   211,    81,   142,   272,   272,   155,   137,   298,
     190,   128,   269,   271,   154,   137,   244,   245,    65,   228,
      73,   227,   271,   271,   268,   162,   188,    11,   267,   146,
     265,   312,   313,   314,   109,   137,    85,    96,   138,    45,
     310,   310,   310,    23,    33,    41,    87,    97,   255,   256,
     257,   258,   259,   137,   299,   271,   271,    69,   271,   305,
      95,   114,   163,   222,   190,   216,    37,   133,   217,   218,
      63,   174,   196,   197,   272,    81,   190,   223,   128,   166,
     137,   247,   223,   109,    13,    21,   162,   188,   267,    23,
     105,   160,   297,   304,    23,    33,    41,    53,   128,   109,
     253,   248,   249,   271,   310,   310,   137,   131,   142,   298,
     256,   292,    69,   128,   128,   115,   125,   128,   128,   271,
     137,   223,   198,   199,   200,   297,   272,   128,   128,   271,
     248,   135,   128,   244,   188,   267,    92,    23,    23,   137,
     137,   131,   131,   313,   128,   109,   230,   271,   268,   128,
     217,   217,   219,   176,   212,   109,   162,   128,    74,   175,
     267,    92,    92,   271,   248,   137,   137,   213,   248,   128,
      37,   122,   260,   261,   128,   271,   198,   137,   214,   269,
     128,   128,   248,   219,    49,    74,     4,    24,    38,    87,
      89,   263,   201,   210,   297,   214,   128,   128,    54,   101,
     103,   118,   262,   262,    89,    83,   264,   128,   117,   202,
     259,    93,   142,    20,   264,    43,   150,    63,   226,   223,
      76,   124,   141,   203,   204,     7,    14,    29,   205,   207,
     271,   205,    15,    67,   152,   208,    15,    55,    81,    29,
      56,    99,   103,   209,    14,   206,   207,    67,   120,    55,
     208
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   181,   182,   183,   183,   184,   184,   184,   184,   184,
     184,   184,   185,   185,   185,   186,   186,   186,   187,   188,
     188,   189,   189,   190,   191,   191,   192,   193,   193,   193,
     194,   194,   195,   196,   196,   197,   198,   198,   199,   200,
     201,   202,   202,   203,   203,   203,   204,   204,   204,   205,
     205,   206,   206,   207,   207,   207,   208,   208,   209,   209,
     209,   209,   210,   210,   211,   211,   212,   212,   213,   213,
     214,   215,   216,   216,   216,   217,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   221,   222,   222,   222,   222,
     222,   223,   223,   224,   224,   225,   225,   225,   226,   226,
     227,   227,   227,   228,   228,   229,   230,   230,   230,   231,
     231,   231,   232,   232,   233,   234,   235,   235,   235,   236,
     236,   237,   238,   238,   238,   238,   239,   240,   241,   242,
     243,   243,   243,   244,   244,   245,   246,   246,   246,   247,
     247,   248,   248,   249,   250,   251,   251,   252,   252,   252,
     253,   253,   254,   255,   255,   256,   256,   257,   258,   258,
     258,   258,   258,   259,   260,   260,   261,   261,   261,   261,
     261,   262,   262,   262,   262,   262,   263,   263,   263,   264,
     264,   264,   265,   266,   266,   266,   266,   266,   266,   266,
     266,   267,   267,   267,   267,   268,   268,   269,   269,   270,
     270,   271,   271,   271,   271,   271,   271,   272,   272,   272,
     272,   272,   272,   272,   272,   273,   274,   274,   275,   275,
     275,   275,   275,   275,   275,   276,   276,   276,   276,   277,
     277,   278,   278,   278,   279,   279,   279,   279,   280,   280,
     281,   282,   282,   283,   284,   284,   284,   284,   284,   284,
     285,   286,   286,   286,   286,   286,   286,   287,   288,   288,
     288,   289,   290,   290,   291,   291,   292,   293,   294,   294,
     295,   295,   296,   296,   297,   298,   299,   300,   300,   301,
     302,   302,   302,   302,   302,   303,   303,   304,   305,   305,
     306,   306,   307,   308,   309,   309,   309,   309,   309,   309,
     309,   310,   310,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   312,   312,   313,   313,   314,   314,
     314,   314
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     3,     3,     4,     1,     3,     7,     1,     1,     1,
       1,     0,     1,     1,     0,     2,     1,     3,     5,     1,
       4,     3,     0,     3,     6,     0,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     2,     2,     0,     2,     2,
       1,     1,     1,     0,     4,     0,     2,     0,     1,     0,
       2,     2,     3,     5,     5,     1,     0,     2,     4,     1,
       3,     2,     0,     1,     1,     3,     1,     2,     1,     1,
       0,     3,     1,     1,     0,     2,     4,     4,     3,     0,
       2,     2,     0,     1,     3,     3,     1,     1,     0,     2,
       3,     0,     1,     3,     5,     2,     1,     1,     0,     7,
       9,    11,     8,     9,    10,    11,     4,     4,     4,     6,
       2,     3,     3,     1,     3,     3,     5,     7,     0,     4,
       0,     1,     3,     2,     6,     3,     3,     3,     5,     3,
       1,     3,     3,     1,     0,     1,     2,     1,     2,     2,
       1,     4,     1,     5,     1,     0,     2,     2,     2,     3,
       3,     2,     2,     1,     1,     2,     2,     3,     0,     2,
       2,     0,     2,     1,     1,     2,     2,     2,     2,     1,
       0,     3,     4,     4,     0,     3,     0,     1,     3,     3,
       5,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     6,     1,     1,     2,     2,
       2,     3,     4,     1,     1,     1,     3,     3,     4,     3,
       3,     6,     6,     4,     4,     3,     6,     5,     5,     6,
       5,     1,     2,     4,     3,     3,     3,     3,     3,     3,
       6,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     0,     2,     0,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     4,     1,     2,     2,     1,     1,     3,     3,
       2,     1,     0,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     0,     1,     3,     6,     5,
       5,     7
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
    case 177: /* INTLITERAL  */
#line 354 "bison.y" /* yacc.c:1257  */
      {
	 
}
#line 1938 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* STRINGLITERAL  */
#line 350 "bison.y" /* yacc.c:1257  */
      {
	free( (((*yyvaluep).sval)) );
}
#line 1946 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* FLOATLITERAL  */
#line 354 "bison.y" /* yacc.c:1257  */
      {
	 
}
#line 1954 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* IDENTIFIER  */
#line 350 "bison.y" /* yacc.c:1257  */
      {
	free( (((*yyvaluep).sval)) );
}
#line 1962 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* program  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).program_t)!=NULL)((*yyvaluep).program_t)->deep_delete(); }
#line 1968 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* stmtlist  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).stmtlist_t)!=NULL)((*yyvaluep).stmtlist_t)->deep_delete(); }
#line 1974 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).stmt_t)!=NULL)((*yyvaluep).stmt_t)->deep_delete(); }
#line 1980 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* create_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_stmt_t)!=NULL)((*yyvaluep).create_stmt_t)->deep_delete(); }
#line 1986 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* drop_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_stmt_t)!=NULL)((*yyvaluep).drop_stmt_t)->deep_delete(); }
#line 1992 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* alter_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_stmt_t)!=NULL)((*yyvaluep).alter_stmt_t)->deep_delete(); }
#line 1998 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_stmt_t)!=NULL)((*yyvaluep).select_stmt_t)->deep_delete(); }
#line 2004 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* select_with_parens  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_with_parens_t)!=NULL)((*yyvaluep).select_with_parens_t)->deep_delete(); }
#line 2010 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* select_no_parens  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_no_parens_t)!=NULL)((*yyvaluep).select_no_parens_t)->deep_delete(); }
#line 2016 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* select_clause_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_clause_list_t)!=NULL)((*yyvaluep).select_clause_list_t)->deep_delete(); }
#line 2022 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* select_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_clause_t)!=NULL)((*yyvaluep).select_clause_t)->deep_delete(); }
#line 2028 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* combine_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).combine_clause_t)!=NULL)((*yyvaluep).combine_clause_t)->deep_delete(); }
#line 2034 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_from_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_from_clause_t)!=NULL)((*yyvaluep).opt_from_clause_t)->deep_delete(); }
#line 2040 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* select_target  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_target_t)!=NULL)((*yyvaluep).select_target_t)->deep_delete(); }
#line 2046 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_window_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_window_clause_t)!=NULL)((*yyvaluep).opt_window_clause_t)->deep_delete(); }
#line 2052 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* window_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_clause_t)!=NULL)((*yyvaluep).window_clause_t)->deep_delete(); }
#line 2058 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* window_def_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_def_list_t)!=NULL)((*yyvaluep).window_def_list_t)->deep_delete(); }
#line 2064 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* window_def  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_def_t)!=NULL)((*yyvaluep).window_def_t)->deep_delete(); }
#line 2070 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* window_name  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_name_t)!=NULL)((*yyvaluep).window_name_t)->deep_delete(); }
#line 2076 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* window  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_t)!=NULL)((*yyvaluep).window_t)->deep_delete(); }
#line 2082 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_partition  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_partition_t)!=NULL)((*yyvaluep).opt_partition_t)->deep_delete(); }
#line 2088 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_frame_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_frame_clause_t)!=NULL)((*yyvaluep).opt_frame_clause_t)->deep_delete(); }
#line 2094 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* range_or_rows  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).range_or_rows_t)!=NULL)((*yyvaluep).range_or_rows_t)->deep_delete(); }
#line 2100 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* frame_bound_start  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_start_t)!=NULL)((*yyvaluep).frame_bound_start_t)->deep_delete(); }
#line 2106 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* frame_bound_end  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_end_t)!=NULL)((*yyvaluep).frame_bound_end_t)->deep_delete(); }
#line 2112 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* frame_bound  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_t)!=NULL)((*yyvaluep).frame_bound_t)->deep_delete(); }
#line 2118 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_frame_exclude  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_frame_exclude_t)!=NULL)((*yyvaluep).opt_frame_exclude_t)->deep_delete(); }
#line 2124 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* frame_exclude  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_exclude_t)!=NULL)((*yyvaluep).frame_exclude_t)->deep_delete(); }
#line 2130 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_exist_window_name  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_exist_window_name_t)!=NULL)((*yyvaluep).opt_exist_window_name_t)->deep_delete(); }
#line 2136 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_group_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_group_clause_t)!=NULL)((*yyvaluep).opt_group_clause_t)->deep_delete(); }
#line 2142 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_having_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_having_clause_t)!=NULL)((*yyvaluep).opt_having_clause_t)->deep_delete(); }
#line 2148 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_where_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_where_clause_t)!=NULL)((*yyvaluep).opt_where_clause_t)->deep_delete(); }
#line 2154 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* where_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).where_clause_t)!=NULL)((*yyvaluep).where_clause_t)->deep_delete(); }
#line 2160 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* from_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).from_clause_t)!=NULL)((*yyvaluep).from_clause_t)->deep_delete(); }
#line 2166 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* table_ref  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_ref_t)!=NULL)((*yyvaluep).table_ref_t)->deep_delete(); }
#line 2172 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* opt_on_or_using  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_or_using_t)!=NULL)((*yyvaluep).opt_on_or_using_t)->deep_delete(); }
#line 2178 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* on_or_using  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).on_or_using_t)!=NULL)((*yyvaluep).on_or_using_t)->deep_delete(); }
#line 2184 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* column_name_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_list_t)!=NULL)((*yyvaluep).column_name_list_t)->deep_delete(); }
#line 2190 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* opt_table_prefix  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_prefix_t)!=NULL)((*yyvaluep).opt_table_prefix_t)->deep_delete(); }
#line 2196 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* join_op  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).join_op_t)!=NULL)((*yyvaluep).join_op_t)->deep_delete(); }
#line 2202 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* opt_join_type  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_join_type_t)!=NULL)((*yyvaluep).opt_join_type_t)->deep_delete(); }
#line 2208 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* expr_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_list_t)!=NULL)((*yyvaluep).expr_list_t)->deep_delete(); }
#line 2214 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* opt_limit_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_limit_clause_t)!=NULL)((*yyvaluep).opt_limit_clause_t)->deep_delete(); }
#line 2220 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* limit_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).limit_clause_t)!=NULL)((*yyvaluep).limit_clause_t)->deep_delete(); }
#line 2226 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* opt_order_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_clause_t)!=NULL)((*yyvaluep).opt_order_clause_t)->deep_delete(); }
#line 2232 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* opt_order_nulls  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_nulls_t)!=NULL)((*yyvaluep).opt_order_nulls_t)->deep_delete(); }
#line 2238 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* order_item_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_item_list_t)!=NULL)((*yyvaluep).order_item_list_t)->deep_delete(); }
#line 2244 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* order_item  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_item_t)!=NULL)((*yyvaluep).order_item_t)->deep_delete(); }
#line 2250 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* opt_order_behavior  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_behavior_t)!=NULL)((*yyvaluep).opt_order_behavior_t)->deep_delete(); }
#line 2256 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* opt_with_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_with_clause_t)!=NULL)((*yyvaluep).opt_with_clause_t)->deep_delete(); }
#line 2262 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* cte_table_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_list_t)!=NULL)((*yyvaluep).cte_table_list_t)->deep_delete(); }
#line 2268 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* cte_table  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_t)!=NULL)((*yyvaluep).cte_table_t)->deep_delete(); }
#line 2274 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* cte_table_name  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_name_t)!=NULL)((*yyvaluep).cte_table_name_t)->deep_delete(); }
#line 2280 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* opt_all_or_distinct  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_all_or_distinct_t)!=NULL)((*yyvaluep).opt_all_or_distinct_t)->deep_delete(); }
#line 2286 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* create_table_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_table_stmt_t)!=NULL)((*yyvaluep).create_table_stmt_t)->deep_delete(); }
#line 2292 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* create_index_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_index_stmt_t)!=NULL)((*yyvaluep).create_index_stmt_t)->deep_delete(); }
#line 2298 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* create_view_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_view_stmt_t)!=NULL)((*yyvaluep).create_view_stmt_t)->deep_delete(); }
#line 2304 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* drop_index_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_index_stmt_t)!=NULL)((*yyvaluep).drop_index_stmt_t)->deep_delete(); }
#line 2310 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* drop_table_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_table_stmt_t)!=NULL)((*yyvaluep).drop_table_stmt_t)->deep_delete(); }
#line 2316 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* drop_view_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_view_stmt_t)!=NULL)((*yyvaluep).drop_view_stmt_t)->deep_delete(); }
#line 2322 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* insert_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_stmt_t)!=NULL)((*yyvaluep).insert_stmt_t)->deep_delete(); }
#line 2328 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* insert_rest  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_rest_t)!=NULL)((*yyvaluep).insert_rest_t)->deep_delete(); }
#line 2334 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* super_values_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).super_values_list_t)!=NULL)((*yyvaluep).super_values_list_t)->deep_delete(); }
#line 2340 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* values_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).values_list_t)!=NULL)((*yyvaluep).values_list_t)->deep_delete(); }
#line 2346 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* opt_on_conflict  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_conflict_t)!=NULL)((*yyvaluep).opt_on_conflict_t)->deep_delete(); }
#line 2352 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* opt_conflict_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_conflict_expr_t)!=NULL)((*yyvaluep).opt_conflict_expr_t)->deep_delete(); }
#line 2358 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* indexed_column_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).indexed_column_list_t)!=NULL)((*yyvaluep).indexed_column_list_t)->deep_delete(); }
#line 2364 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* indexed_column  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).indexed_column_t)!=NULL)((*yyvaluep).indexed_column_t)->deep_delete(); }
#line 2370 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* update_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).update_stmt_t)!=NULL)((*yyvaluep).update_stmt_t)->deep_delete(); }
#line 2376 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* reindex_stmt  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).reindex_stmt_t)!=NULL)((*yyvaluep).reindex_stmt_t)->deep_delete(); }
#line 2382 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* alter_action  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_action_t)!=NULL)((*yyvaluep).alter_action_t)->deep_delete(); }
#line 2388 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* column_def_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_list_t)!=NULL)((*yyvaluep).column_def_list_t)->deep_delete(); }
#line 2394 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* column_def  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_t)!=NULL)((*yyvaluep).column_def_t)->deep_delete(); }
#line 2400 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* opt_column_constraint_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_constraint_list_t)!=NULL)((*yyvaluep).opt_column_constraint_list_t)->deep_delete(); }
#line 2406 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* column_constraint_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_constraint_list_t)!=NULL)((*yyvaluep).column_constraint_list_t)->deep_delete(); }
#line 2412 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* column_constraint  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_constraint_t)!=NULL)((*yyvaluep).column_constraint_t)->deep_delete(); }
#line 2418 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* constraint_type  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).constraint_type_t)!=NULL)((*yyvaluep).constraint_type_t)->deep_delete(); }
#line 2424 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* foreign_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).foreign_clause_t)!=NULL)((*yyvaluep).foreign_clause_t)->deep_delete(); }
#line 2430 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_foreign_key_actions  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_foreign_key_actions_t)!=NULL)((*yyvaluep).opt_foreign_key_actions_t)->deep_delete(); }
#line 2436 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* foreign_key_actions  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).foreign_key_actions_t)!=NULL)((*yyvaluep).foreign_key_actions_t)->deep_delete(); }
#line 2442 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* key_actions  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).key_actions_t)!=NULL)((*yyvaluep).key_actions_t)->deep_delete(); }
#line 2448 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* opt_constraint_attribute_spec  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_constraint_attribute_spec_t)!=NULL)((*yyvaluep).opt_constraint_attribute_spec_t)->deep_delete(); }
#line 2454 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* opt_initial_time  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_initial_time_t)!=NULL)((*yyvaluep).opt_initial_time_t)->deep_delete(); }
#line 2460 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* constraint_name  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).constraint_name_t)!=NULL)((*yyvaluep).constraint_name_t)->deep_delete(); }
#line 2466 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* opt_temp  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_temp_t)!=NULL)((*yyvaluep).opt_temp_t)->deep_delete(); }
#line 2472 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* opt_check_option  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_check_option_t)!=NULL)((*yyvaluep).opt_check_option_t)->deep_delete(); }
#line 2478 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* opt_column_name_list_p  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_name_list_p_t)!=NULL)((*yyvaluep).opt_column_name_list_p_t)->deep_delete(); }
#line 2484 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* set_clause_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).set_clause_list_t)!=NULL)((*yyvaluep).set_clause_list_t)->deep_delete(); }
#line 2490 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* set_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).set_clause_t)!=NULL)((*yyvaluep).set_clause_t)->deep_delete(); }
#line 2496 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_t)!=NULL)((*yyvaluep).expr_t)->deep_delete(); }
#line 2502 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* operand  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).operand_t)!=NULL)((*yyvaluep).operand_t)->deep_delete(); }
#line 2508 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* cast_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cast_expr_t)!=NULL)((*yyvaluep).cast_expr_t)->deep_delete(); }
#line 2514 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 274: /* scalar_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).scalar_expr_t)!=NULL)((*yyvaluep).scalar_expr_t)->deep_delete(); }
#line 2520 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 275: /* unary_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).unary_expr_t)!=NULL)((*yyvaluep).unary_expr_t)->deep_delete(); }
#line 2526 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 276: /* binary_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).binary_expr_t)!=NULL)((*yyvaluep).binary_expr_t)->deep_delete(); }
#line 2532 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 277: /* logic_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).logic_expr_t)!=NULL)((*yyvaluep).logic_expr_t)->deep_delete(); }
#line 2538 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 278: /* in_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).in_expr_t)!=NULL)((*yyvaluep).in_expr_t)->deep_delete(); }
#line 2544 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 279: /* case_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_expr_t)!=NULL)((*yyvaluep).case_expr_t)->deep_delete(); }
#line 2550 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 280: /* between_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).between_expr_t)!=NULL)((*yyvaluep).between_expr_t)->deep_delete(); }
#line 2556 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 281: /* exists_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).exists_expr_t)!=NULL)((*yyvaluep).exists_expr_t)->deep_delete(); }
#line 2562 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 282: /* case_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_list_t)!=NULL)((*yyvaluep).case_list_t)->deep_delete(); }
#line 2568 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 283: /* case_clause  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_clause_t)!=NULL)((*yyvaluep).case_clause_t)->deep_delete(); }
#line 2574 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 284: /* comp_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).comp_expr_t)!=NULL)((*yyvaluep).comp_expr_t)->deep_delete(); }
#line 2580 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 285: /* extract_expr  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).extract_expr_t)!=NULL)((*yyvaluep).extract_expr_t)->deep_delete(); }
#line 2586 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 286: /* datetime_field  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).datetime_field_t)!=NULL)((*yyvaluep).datetime_field_t)->deep_delete(); }
#line 2592 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 287: /* array_index  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).array_index_t)!=NULL)((*yyvaluep).array_index_t)->deep_delete(); }
#line 2598 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 288: /* literal  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).literal_t)!=NULL)((*yyvaluep).literal_t)->deep_delete(); }
#line 2604 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 289: /* string_literal  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).string_literal_t)!=NULL)((*yyvaluep).string_literal_t)->deep_delete(); }
#line 2610 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 290: /* bool_literal  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).bool_literal_t)!=NULL)((*yyvaluep).bool_literal_t)->deep_delete(); }
#line 2616 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 291: /* num_literal  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).num_literal_t)!=NULL)((*yyvaluep).num_literal_t)->deep_delete(); }
#line 2622 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 292: /* int_literal  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).int_literal_t)!=NULL)((*yyvaluep).int_literal_t)->deep_delete(); }
#line 2628 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 293: /* float_literal  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).float_literal_t)!=NULL)((*yyvaluep).float_literal_t)->deep_delete(); }
#line 2634 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 294: /* opt_column  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_t)!=NULL)((*yyvaluep).opt_column_t)->deep_delete(); }
#line 2640 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 295: /* opt_if_not_exist  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_if_not_exist_t)!=NULL)((*yyvaluep).opt_if_not_exist_t)->deep_delete(); }
#line 2646 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 296: /* opt_if_exist  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_if_exist_t)!=NULL)((*yyvaluep).opt_if_exist_t)->deep_delete(); }
#line 2652 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 297: /* identifier  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).identifier_t)!=NULL)((*yyvaluep).identifier_t)->deep_delete(); }
#line 2658 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 298: /* table_name  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_name_t)!=NULL)((*yyvaluep).table_name_t)->deep_delete(); }
#line 2664 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 299: /* column_name  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_t)!=NULL)((*yyvaluep).column_name_t)->deep_delete(); }
#line 2670 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 300: /* opt_unique  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_unique_t)!=NULL)((*yyvaluep).opt_unique_t)->deep_delete(); }
#line 2676 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 301: /* view_name  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).view_name_t)!=NULL)((*yyvaluep).view_name_t)->deep_delete(); }
#line 2682 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 302: /* binary_op  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).binary_op_t)!=NULL)((*yyvaluep).binary_op_t)->deep_delete(); }
#line 2688 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 303: /* opt_not  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_not_t)!=NULL)((*yyvaluep).opt_not_t)->deep_delete(); }
#line 2694 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 304: /* name  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).name_t)!=NULL)((*yyvaluep).name_t)->deep_delete(); }
#line 2700 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 305: /* type_name  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).type_name_t)!=NULL)((*yyvaluep).type_name_t)->deep_delete(); }
#line 2706 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 306: /* character_type  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_type_t)!=NULL)((*yyvaluep).character_type_t)->deep_delete(); }
#line 2712 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 307: /* character_with_length  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_with_length_t)!=NULL)((*yyvaluep).character_with_length_t)->deep_delete(); }
#line 2718 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 308: /* character_without_length  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_without_length_t)!=NULL)((*yyvaluep).character_without_length_t)->deep_delete(); }
#line 2724 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 309: /* character_conflicta  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_conflicta_t)!=NULL)((*yyvaluep).character_conflicta_t)->deep_delete(); }
#line 2730 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 310: /* opt_varying  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_varying_t)!=NULL)((*yyvaluep).opt_varying_t)->deep_delete(); }
#line 2736 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 311: /* numeric_type  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).numeric_type_t)!=NULL)((*yyvaluep).numeric_type_t)->deep_delete(); }
#line 2742 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 312: /* opt_table_constraint_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_constraint_list_t)!=NULL)((*yyvaluep).opt_table_constraint_list_t)->deep_delete(); }
#line 2748 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 313: /* table_constraint_list  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_constraint_list_t)!=NULL)((*yyvaluep).table_constraint_list_t)->deep_delete(); }
#line 2754 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 314: /* table_constraint  */
#line 358 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_constraint_t)!=NULL)((*yyvaluep).table_constraint_t)->deep_delete(); }
#line 2760 "bison_parser.cpp" /* yacc.c:1257  */
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

#line 2878 "bison_parser.cpp" /* yacc.c:1431  */
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
#line 362 "bison.y" /* yacc.c:1652  */
    {
		(yyval.program_t) = result;
		(yyval.program_t)->case_idx_ = CASE0;
		(yyval.program_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
				(yyval.program_t) = NULL;

	}
#line 3078 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 3:
#line 372 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE0;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-2].stmt_t);
		(yyval.stmtlist_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
		
	}
#line 3090 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 4:
#line 379 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE1;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-1].stmt_t);
		
	}
#line 3101 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 388 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE0;
		(yyval.stmt_t)->create_stmt_ = (yyvsp[0].create_stmt_t);
		
	}
#line 3112 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 394 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE1;
		(yyval.stmt_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
		
	}
#line 3123 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 7:
#line 400 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE2;
		(yyval.stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
		
	}
#line 3134 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 8:
#line 406 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE3;
		(yyval.stmt_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
		
	}
#line 3145 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 9:
#line 412 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE4;
		(yyval.stmt_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
		
	}
#line 3156 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 418 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE5;
		(yyval.stmt_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
		
	}
#line 3167 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 424 "bison.y" /* yacc.c:1652  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE6;
		(yyval.stmt_t)->reindex_stmt_ = (yyvsp[0].reindex_stmt_t);
		
	}
#line 3178 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 433 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE0;
		(yyval.create_stmt_t)->create_table_stmt_ = (yyvsp[0].create_table_stmt_t);
		
	}
#line 3189 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 439 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE1;
		(yyval.create_stmt_t)->create_index_stmt_ = (yyvsp[0].create_index_stmt_t);
		
	}
#line 3200 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 14:
#line 445 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE2;
		(yyval.create_stmt_t)->create_view_stmt_ = (yyvsp[0].create_view_stmt_t);
		
	}
#line 3211 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 15:
#line 454 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_stmt_t)->drop_index_stmt_ = (yyvsp[0].drop_index_stmt_t);
		
	}
#line 3222 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 460 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE1;
		(yyval.drop_stmt_t)->drop_table_stmt_ = (yyvsp[0].drop_table_stmt_t);
		
	}
#line 3233 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 466 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE2;
		(yyval.drop_stmt_t)->drop_view_stmt_ = (yyvsp[0].drop_view_stmt_t);
		
	}
#line 3244 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 18:
#line 475 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_stmt_t) = new AlterStmt();
		(yyval.alter_stmt_t)->case_idx_ = CASE0;
		(yyval.alter_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.alter_stmt_t)->alter_action_ = (yyvsp[0].alter_action_t);
		
	}
#line 3256 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 19:
#line 485 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE0;
		(yyval.select_stmt_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 3267 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 20:
#line 491 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE1;
		(yyval.select_stmt_t)->select_with_parens_ = (yyvsp[0].select_with_parens_t);
		
	}
#line 3278 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 21:
#line 500 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE0;
		(yyval.select_with_parens_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 3289 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 506 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE1;
		(yyval.select_with_parens_t)->select_with_parens_ = (yyvsp[-1].select_with_parens_t);
		
	}
#line 3300 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 515 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_no_parens_t) = new SelectNoParens();
		(yyval.select_no_parens_t)->case_idx_ = CASE0;
		(yyval.select_no_parens_t)->opt_with_clause_ = (yyvsp[-3].opt_with_clause_t);
		(yyval.select_no_parens_t)->select_clause_list_ = (yyvsp[-2].select_clause_list_t);
		(yyval.select_no_parens_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.select_no_parens_t)->opt_limit_clause_ = (yyvsp[0].opt_limit_clause_t);
		
	}
#line 3314 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 24:
#line 527 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE0;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[0].select_clause_t);
		
	}
#line 3325 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 533 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE1;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[-2].select_clause_t);
		(yyval.select_clause_list_t)->combine_clause_ = (yyvsp[-1].combine_clause_t);
		(yyval.select_clause_list_t)->select_clause_list_ = (yyvsp[0].select_clause_list_t);
		
	}
#line 3338 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 26:
#line 544 "bison.y" /* yacc.c:1652  */
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
#line 3354 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 27:
#line 558 "bison.y" /* yacc.c:1652  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE0;
		
	}
#line 3364 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 563 "bison.y" /* yacc.c:1652  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE1;
		
	}
#line 3374 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 29:
#line 568 "bison.y" /* yacc.c:1652  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE2;
		
	}
#line 3384 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 30:
#line 576 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE0;
		(yyval.opt_from_clause_t)->from_clause_ = (yyvsp[0].from_clause_t);
		
	}
#line 3395 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 582 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE1;
		
	}
#line 3405 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 32:
#line 590 "bison.y" /* yacc.c:1652  */
    {
		(yyval.select_target_t) = new SelectTarget();
		(yyval.select_target_t)->case_idx_ = CASE0;
		(yyval.select_target_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 3416 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 33:
#line 599 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE0;
		(yyval.opt_window_clause_t)->window_clause_ = (yyvsp[0].window_clause_t);
		
	}
#line 3427 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 34:
#line 605 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE1;
		
	}
#line 3437 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 35:
#line 613 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_clause_t) = new WindowClause();
		(yyval.window_clause_t)->case_idx_ = CASE0;
		(yyval.window_clause_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 3448 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 622 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE0;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[0].window_def_t);
		
	}
#line 3459 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 628 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE1;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[-2].window_def_t);
		(yyval.window_def_list_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 3471 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 638 "bison.y" /* yacc.c:1652  */
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
#line 3495 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 660 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_name_t) = new WindowName();
		(yyval.window_name_t)->case_idx_ = CASE0;
		(yyval.window_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 3506 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 669 "bison.y" /* yacc.c:1652  */
    {
		(yyval.window_t) = new Window();
		(yyval.window_t)->case_idx_ = CASE0;
		(yyval.window_t)->opt_exist_window_name_ = (yyvsp[-3].opt_exist_window_name_t);
		(yyval.window_t)->opt_partition_ = (yyvsp[-2].opt_partition_t);
		(yyval.window_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.window_t)->opt_frame_clause_ = (yyvsp[0].opt_frame_clause_t);
		
	}
#line 3520 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 41:
#line 681 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE0;
		(yyval.opt_partition_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 3531 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 687 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE1;
		
	}
#line 3541 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 695 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE0;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-2].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[-1].frame_bound_start_t);
		(yyval.opt_frame_clause_t)->opt_frame_exclude_ = (yyvsp[0].opt_frame_exclude_t);
		
	}
#line 3554 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 703 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE1;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-5].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[-3].frame_bound_start_t);
		(yyval.opt_frame_clause_t)->frame_bound_end_ = (yyvsp[-1].frame_bound_end_t);
		(yyval.opt_frame_clause_t)->opt_frame_exclude_ = (yyvsp[0].opt_frame_exclude_t);
		
	}
#line 3568 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 45:
#line 712 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE2;
		
	}
#line 3578 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 720 "bison.y" /* yacc.c:1652  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE0;
		
	}
#line 3588 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 725 "bison.y" /* yacc.c:1652  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE1;
		
	}
#line 3598 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 730 "bison.y" /* yacc.c:1652  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE2;
		
	}
#line 3608 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 738 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE0;
		(yyval.frame_bound_start_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 3619 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 744 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE1;
		
	}
#line 3629 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 752 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE0;
		(yyval.frame_bound_end_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 3640 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 758 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE1;
		
	}
#line 3650 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 766 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE0;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 3661 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 772 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE1;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 3672 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 778 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE2;
		
	}
#line 3682 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 786 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_frame_exclude_t) = new OptFrameExclude();
		(yyval.opt_frame_exclude_t)->case_idx_ = CASE0;
		(yyval.opt_frame_exclude_t)->frame_exclude_ = (yyvsp[0].frame_exclude_t);
		
	}
#line 3693 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 792 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_frame_exclude_t) = new OptFrameExclude();
		(yyval.opt_frame_exclude_t)->case_idx_ = CASE1;
		
	}
#line 3703 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 800 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_exclude_t) = new FrameExclude();
		(yyval.frame_exclude_t)->case_idx_ = CASE0;
		
	}
#line 3713 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 805 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_exclude_t) = new FrameExclude();
		(yyval.frame_exclude_t)->case_idx_ = CASE1;
		
	}
#line 3723 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 60:
#line 810 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_exclude_t) = new FrameExclude();
		(yyval.frame_exclude_t)->case_idx_ = CASE2;
		
	}
#line 3733 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 61:
#line 815 "bison.y" /* yacc.c:1652  */
    {
		(yyval.frame_exclude_t) = new FrameExclude();
		(yyval.frame_exclude_t)->case_idx_ = CASE3;
		
	}
#line 3743 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 62:
#line 823 "bison.y" /* yacc.c:1652  */
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
#line 3763 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 63:
#line 838 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE1;
		
	}
#line 3773 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 64:
#line 846 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE0;
		(yyval.opt_group_clause_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		(yyval.opt_group_clause_t)->opt_having_clause_ = (yyvsp[0].opt_having_clause_t);
		
	}
#line 3785 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 65:
#line 853 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE1;
		
	}
#line 3795 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 66:
#line 861 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE0;
		(yyval.opt_having_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 3806 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 67:
#line 867 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE1;
		
	}
#line 3816 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 68:
#line 875 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE0;
		(yyval.opt_where_clause_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 3827 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 69:
#line 881 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE1;
		
	}
#line 3837 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 70:
#line 889 "bison.y" /* yacc.c:1652  */
    {
		(yyval.where_clause_t) = new WhereClause();
		(yyval.where_clause_t)->case_idx_ = CASE0;
		(yyval.where_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 3848 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 71:
#line 898 "bison.y" /* yacc.c:1652  */
    {
		(yyval.from_clause_t) = new FromClause();
		(yyval.from_clause_t)->case_idx_ = CASE0;
		(yyval.from_clause_t)->table_ref_ = (yyvsp[0].table_ref_t);
		
	}
#line 3859 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 72:
#line 907 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE0;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-2].opt_table_prefix_t);
		(yyval.table_ref_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.table_ref_t)->opt_on_or_using_ = (yyvsp[0].opt_on_or_using_t);
		
	}
#line 3872 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 73:
#line 915 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE1;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-4].opt_table_prefix_t);
		(yyval.table_ref_t)->select_no_parens_ = (yyvsp[-2].select_no_parens_t);
		(yyval.table_ref_t)->opt_on_or_using_ = (yyvsp[0].opt_on_or_using_t);
		
	}
#line 3885 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 74:
#line 923 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE2;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-4].opt_table_prefix_t);
		(yyval.table_ref_t)->table_ref_ = (yyvsp[-2].table_ref_t);
		(yyval.table_ref_t)->opt_on_or_using_ = (yyvsp[0].opt_on_or_using_t);
		
	}
#line 3898 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 75:
#line 934 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_or_using_t) = new OptOnOrUsing();
		(yyval.opt_on_or_using_t)->case_idx_ = CASE0;
		(yyval.opt_on_or_using_t)->on_or_using_ = (yyvsp[0].on_or_using_t);
		
	}
#line 3909 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 76:
#line 940 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_or_using_t) = new OptOnOrUsing();
		(yyval.opt_on_or_using_t)->case_idx_ = CASE1;
		
	}
#line 3919 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 77:
#line 948 "bison.y" /* yacc.c:1652  */
    {
		(yyval.on_or_using_t) = new OnOrUsing();
		(yyval.on_or_using_t)->case_idx_ = CASE0;
		(yyval.on_or_using_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 3930 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 78:
#line 954 "bison.y" /* yacc.c:1652  */
    {
		(yyval.on_or_using_t) = new OnOrUsing();
		(yyval.on_or_using_t)->case_idx_ = CASE1;
		(yyval.on_or_using_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 3941 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 79:
#line 963 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE0;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 3952 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 80:
#line 969 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE1;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.column_name_list_t)->column_name_list_ = (yyvsp[0].column_name_list_t);
		
	}
#line 3964 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 81:
#line 979 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE0;
		(yyval.opt_table_prefix_t)->table_ref_ = (yyvsp[-1].table_ref_t);
		(yyval.opt_table_prefix_t)->join_op_ = (yyvsp[0].join_op_t);
		
	}
#line 3976 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 82:
#line 986 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE1;
		
	}
#line 3986 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 83:
#line 994 "bison.y" /* yacc.c:1652  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE0;
		
	}
#line 3996 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 84:
#line 999 "bison.y" /* yacc.c:1652  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE1;
		
	}
#line 4006 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 85:
#line 1004 "bison.y" /* yacc.c:1652  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE2;
		(yyval.join_op_t)->opt_join_type_ = (yyvsp[-1].opt_join_type_t);
		
	}
#line 4017 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 86:
#line 1013 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE0;
		
	}
#line 4027 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 87:
#line 1018 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE1;
		
	}
#line 4037 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 88:
#line 1023 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE2;
		
	}
#line 4047 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 89:
#line 1028 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE3;
		
	}
#line 4057 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 90:
#line 1033 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE4;
		
	}
#line 4067 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 91:
#line 1041 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE0;
		(yyval.expr_list_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.expr_list_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 4079 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 92:
#line 1048 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE1;
		(yyval.expr_list_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4090 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 93:
#line 1057 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE0;
		(yyval.opt_limit_clause_t)->limit_clause_ = (yyvsp[0].limit_clause_t);
		
	}
#line 4101 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 94:
#line 1063 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE1;
		
	}
#line 4111 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 95:
#line 1071 "bison.y" /* yacc.c:1652  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE0;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[0].expr_t);
		
	}
#line 4122 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 96:
#line 1077 "bison.y" /* yacc.c:1652  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE1;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 4134 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 97:
#line 1084 "bison.y" /* yacc.c:1652  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE2;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 4146 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 98:
#line 1094 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE0;
		(yyval.opt_order_clause_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 4157 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 99:
#line 1100 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE1;
		
	}
#line 4167 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 100:
#line 1108 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE0;
		
	}
#line 4177 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 101:
#line 1113 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE1;
		
	}
#line 4187 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 102:
#line 1118 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE2;
		
	}
#line 4197 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 103:
#line 1126 "bison.y" /* yacc.c:1652  */
    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE0;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[0].order_item_t);
		
	}
#line 4208 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 104:
#line 1132 "bison.y" /* yacc.c:1652  */
    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE1;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[-2].order_item_t);
		(yyval.order_item_list_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 4220 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 105:
#line 1142 "bison.y" /* yacc.c:1652  */
    {
		(yyval.order_item_t) = new OrderItem();
		(yyval.order_item_t)->case_idx_ = CASE0;
		(yyval.order_item_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.order_item_t)->opt_order_behavior_ = (yyvsp[-1].opt_order_behavior_t);
		(yyval.order_item_t)->opt_order_nulls_ = (yyvsp[0].opt_order_nulls_t);
		
	}
#line 4233 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 106:
#line 1153 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE0;
		
	}
#line 4243 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 107:
#line 1158 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE1;
		
	}
#line 4253 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 108:
#line 1163 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE2;
		
	}
#line 4263 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 109:
#line 1171 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE0;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 4274 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 110:
#line 1177 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE1;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 4285 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 111:
#line 1183 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE2;
		
	}
#line 4295 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 112:
#line 1191 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE0;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[0].cte_table_t);
		
	}
#line 4306 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 113:
#line 1197 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE1;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[-2].cte_table_t);
		(yyval.cte_table_list_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 4318 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 114:
#line 1207 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cte_table_t) = new CteTable();
		(yyval.cte_table_t)->case_idx_ = CASE0;
		(yyval.cte_table_t)->cte_table_name_ = (yyvsp[-4].cte_table_name_t);
		(yyval.cte_table_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		
	}
#line 4330 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 115:
#line 1217 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cte_table_name_t) = new CteTableName();
		(yyval.cte_table_name_t)->case_idx_ = CASE0;
		(yyval.cte_table_name_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.cte_table_name_t)->opt_column_name_list_p_ = (yyvsp[0].opt_column_name_list_p_t);
		
	}
#line 4342 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 116:
#line 1227 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE0;
		
	}
#line 4352 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 117:
#line 1232 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE1;
		
	}
#line 4362 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 118:
#line 1237 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE2;
		
	}
#line 4372 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 119:
#line 1245 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE0;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-5].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-3].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-2].table_name_t);
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
#line 4398 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 120:
#line 1266 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE1;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-7].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-5].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.create_table_stmt_t)->column_def_list_ = (yyvsp[-2].column_def_list_t);
		(yyval.create_table_stmt_t)->opt_table_constraint_list_ = (yyvsp[-1].opt_table_constraint_list_t);
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
#line 4441 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 121:
#line 1307 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_index_stmt_t) = new CreateIndexStmt();
		(yyval.create_index_stmt_t)->case_idx_ = CASE0;
		(yyval.create_index_stmt_t)->opt_unique_ = (yyvsp[-9].opt_unique_t);
		(yyval.create_index_stmt_t)->opt_if_not_exist_ = (yyvsp[-7].opt_if_not_exist_t);
		(yyval.create_index_stmt_t)->table_name_1_ = (yyvsp[-6].table_name_t);
		(yyval.create_index_stmt_t)->table_name_2_ = (yyvsp[-4].table_name_t);
		(yyval.create_index_stmt_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
		(yyval.create_index_stmt_t)->opt_where_clause_ = (yyvsp[0].opt_where_clause_t);
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
#line 4481 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 122:
#line 1345 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE0;
		(yyval.create_view_stmt_t)->opt_temp_ = (yyvsp[-6].opt_temp_t);
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
#line 4527 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 123:
#line 1386 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE1;
		(yyval.create_view_stmt_t)->opt_temp_ = (yyvsp[-7].opt_temp_t);
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
#line 4573 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 124:
#line 1427 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE2;
		(yyval.create_view_stmt_t)->opt_temp_ = (yyvsp[-6].opt_temp_t);
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
#line 4619 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 125:
#line 1468 "bison.y" /* yacc.c:1652  */
    {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE3;
		(yyval.create_view_stmt_t)->opt_temp_ = (yyvsp[-7].opt_temp_t);
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
#line 4665 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 126:
#line 1512 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_index_stmt_t) = new DropIndexStmt();
		(yyval.drop_index_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_index_stmt_t)->opt_if_exist_ = (yyvsp[-1].opt_if_exist_t);
		(yyval.drop_index_stmt_t)->table_name_ = (yyvsp[0].table_name_t);
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
#line 4689 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 127:
#line 1534 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_table_stmt_t) = new DropTableStmt();
		(yyval.drop_table_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_table_stmt_t)->opt_if_exist_ = (yyvsp[-1].opt_if_exist_t);
		(yyval.drop_table_stmt_t)->table_name_ = (yyvsp[0].table_name_t);
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
#line 4713 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 128:
#line 1556 "bison.y" /* yacc.c:1652  */
    {
		(yyval.drop_view_stmt_t) = new DropViewStmt();
		(yyval.drop_view_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_view_stmt_t)->opt_if_exist_ = (yyvsp[-1].opt_if_exist_t);
		(yyval.drop_view_stmt_t)->view_name_ = (yyvsp[0].view_name_t);
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
#line 4737 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 129:
#line 1578 "bison.y" /* yacc.c:1652  */
    {
		(yyval.insert_stmt_t) = new InsertStmt();
		(yyval.insert_stmt_t)->case_idx_ = CASE0;
		(yyval.insert_stmt_t)->opt_with_clause_ = (yyvsp[-5].opt_with_clause_t);
		(yyval.insert_stmt_t)->table_name_ = (yyvsp[-2].table_name_t);
		(yyval.insert_stmt_t)->insert_rest_ = (yyvsp[-1].insert_rest_t);
		(yyval.insert_stmt_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);
		
	}
#line 4751 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 130:
#line 1590 "bison.y" /* yacc.c:1652  */
    {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE0;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-1].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 4763 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 131:
#line 1597 "bison.y" /* yacc.c:1652  */
    {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE1;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		
	}
#line 4774 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 132:
#line 1603 "bison.y" /* yacc.c:1652  */
    {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE2;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 4786 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 133:
#line 1613 "bison.y" /* yacc.c:1652  */
    {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE0;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[0].values_list_t);
		
	}
#line 4797 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 134:
#line 1619 "bison.y" /* yacc.c:1652  */
    {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE1;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[-2].values_list_t);
		(yyval.super_values_list_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 4809 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 135:
#line 1629 "bison.y" /* yacc.c:1652  */
    {
		(yyval.values_list_t) = new ValuesList();
		(yyval.values_list_t)->case_idx_ = CASE0;
		(yyval.values_list_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 4820 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 136:
#line 1638 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE0;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-2].opt_conflict_expr_t);
		
	}
#line 4831 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 137:
#line 1644 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE1;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-4].opt_conflict_expr_t);
		(yyval.opt_on_conflict_t)->set_clause_list_ = (yyvsp[-1].set_clause_list_t);
		(yyval.opt_on_conflict_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 4844 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 138:
#line 1652 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE2;
		
	}
#line 4854 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 139:
#line 1660 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE0;
		(yyval.opt_conflict_expr_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
		(yyval.opt_conflict_expr_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 4866 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 140:
#line 1667 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE1;
		
	}
#line 4876 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 141:
#line 1675 "bison.y" /* yacc.c:1652  */
    {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE0;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[0].indexed_column_t);
		
	}
#line 4887 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 142:
#line 1681 "bison.y" /* yacc.c:1652  */
    {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE1;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[-2].indexed_column_t);
		(yyval.indexed_column_list_t)->indexed_column_list_ = (yyvsp[0].indexed_column_list_t);
		
	}
#line 4899 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 143:
#line 1691 "bison.y" /* yacc.c:1652  */
    {
		(yyval.indexed_column_t) = new IndexedColumn();
		(yyval.indexed_column_t)->case_idx_ = CASE0;
		(yyval.indexed_column_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.indexed_column_t)->opt_order_behavior_ = (yyvsp[0].opt_order_behavior_t);
		
	}
#line 4911 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 144:
#line 1701 "bison.y" /* yacc.c:1652  */
    {
		(yyval.update_stmt_t) = new UpdateStmt();
		(yyval.update_stmt_t)->case_idx_ = CASE0;
		(yyval.update_stmt_t)->opt_with_clause_ = (yyvsp[-5].opt_with_clause_t);
		(yyval.update_stmt_t)->table_name_ = (yyvsp[-3].table_name_t);
		(yyval.update_stmt_t)->set_clause_list_ = (yyvsp[-1].set_clause_list_t);
		(yyval.update_stmt_t)->opt_where_clause_ = (yyvsp[0].opt_where_clause_t);
		
	}
#line 4925 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 145:
#line 1713 "bison.y" /* yacc.c:1652  */
    {
		(yyval.reindex_stmt_t) = new ReindexStmt();
		(yyval.reindex_stmt_t)->case_idx_ = CASE0;
		(yyval.reindex_stmt_t)->table_name_ = (yyvsp[0].table_name_t);
		
	}
#line 4936 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 146:
#line 1719 "bison.y" /* yacc.c:1652  */
    {
		(yyval.reindex_stmt_t) = new ReindexStmt();
		(yyval.reindex_stmt_t)->case_idx_ = CASE1;
		(yyval.reindex_stmt_t)->table_name_ = (yyvsp[0].table_name_t);
		
	}
#line 4947 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 147:
#line 1728 "bison.y" /* yacc.c:1652  */
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
#line 4970 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 148:
#line 1746 "bison.y" /* yacc.c:1652  */
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
#line 5007 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 149:
#line 1778 "bison.y" /* yacc.c:1652  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE2;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-1].opt_column_t);
		(yyval.alter_action_t)->column_def_ = (yyvsp[0].column_def_t);
		
	}
#line 5019 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 150:
#line 1788 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE0;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[0].column_def_t);
		
	}
#line 5030 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 151:
#line 1794 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE1;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[-2].column_def_t);
		(yyval.column_def_list_t)->column_def_list_ = (yyvsp[0].column_def_list_t);
		
	}
#line 5042 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 152:
#line 1804 "bison.y" /* yacc.c:1652  */
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
#line 5064 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 153:
#line 1824 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_column_constraint_list_t)->column_constraint_list_ = (yyvsp[0].column_constraint_list_t);
		
	}
#line 5075 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 154:
#line 1830 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 5085 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 155:
#line 1838 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[0].column_constraint_t);
		
	}
#line 5096 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 156:
#line 1844 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE1;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[-1].column_constraint_t);
		(yyval.column_constraint_list_t)->column_constraint_list_ = (yyvsp[0].column_constraint_list_t);
		
	}
#line 5108 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 157:
#line 1854 "bison.y" /* yacc.c:1652  */
    {
		(yyval.column_constraint_t) = new ColumnConstraint();
		(yyval.column_constraint_t)->case_idx_ = CASE0;
		(yyval.column_constraint_t)->constraint_type_ = (yyvsp[0].constraint_type_t);
		
	}
#line 5119 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 158:
#line 1863 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE0;
		
	}
#line 5129 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 159:
#line 1868 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE1;
		
	}
#line 5139 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 160:
#line 1873 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE2;
		
	}
#line 5149 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 161:
#line 1878 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE3;
		(yyval.constraint_type_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 5160 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 162:
#line 1884 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE4;
		(yyval.constraint_type_t)->foreign_clause_ = (yyvsp[0].foreign_clause_t);
		
	}
#line 5171 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 163:
#line 1893 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_clause_t) = new ForeignClause();
		(yyval.foreign_clause_t)->case_idx_ = CASE0;
		(yyval.foreign_clause_t)->table_name_ = (yyvsp[-3].table_name_t);
		(yyval.foreign_clause_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		(yyval.foreign_clause_t)->opt_foreign_key_actions_ = (yyvsp[-1].opt_foreign_key_actions_t);
		(yyval.foreign_clause_t)->opt_constraint_attribute_spec_ = (yyvsp[0].opt_constraint_attribute_spec_t);
		if((yyval.foreign_clause_t)){
			auto tmp1 = (yyval.foreign_clause_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 100; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}

		if((yyval.foreign_clause_t)){
			auto tmp1 = (yyval.foreign_clause_t)->opt_column_name_list_p_; 
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
#line 5216 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 164:
#line 1936 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE0;
		(yyval.opt_foreign_key_actions_t)->foreign_key_actions_ = (yyvsp[0].foreign_key_actions_t);
		
	}
#line 5227 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 165:
#line 1942 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 5237 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 166:
#line 1950 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE0;
		
	}
#line 5247 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 167:
#line 1955 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 5257 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 168:
#line 1960 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE2;
		
	}
#line 5267 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 169:
#line 1965 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE3;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 5278 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 170:
#line 1971 "bison.y" /* yacc.c:1652  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE4;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 5289 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 171:
#line 1980 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE0;
		
	}
#line 5299 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 172:
#line 1985 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE1;
		
	}
#line 5309 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 173:
#line 1990 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE2;
		
	}
#line 5319 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 174:
#line 1995 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE3;
		
	}
#line 5329 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 175:
#line 2000 "bison.y" /* yacc.c:1652  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE4;
		
	}
#line 5339 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 176:
#line 2008 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE0;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 5350 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 177:
#line 2014 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE1;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 5361 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 178:
#line 2020 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE2;
		
	}
#line 5371 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 179:
#line 2028 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE0;
		
	}
#line 5381 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 180:
#line 2033 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE1;
		
	}
#line 5391 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 181:
#line 2038 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE2;
		
	}
#line 5401 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 182:
#line 2046 "bison.y" /* yacc.c:1652  */
    {
		(yyval.constraint_name_t) = new ConstraintName();
		(yyval.constraint_name_t)->case_idx_ = CASE0;
		(yyval.constraint_name_t)->name_ = (yyvsp[0].name_t);
		
	}
#line 5412 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 183:
#line 2055 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE0;
		
	}
#line 5422 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 184:
#line 2060 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE1;
		
	}
#line 5432 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 185:
#line 2065 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE2;
		
	}
#line 5442 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 186:
#line 2070 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE3;
		
	}
#line 5452 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 187:
#line 2075 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE4;
		
	}
#line 5462 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 188:
#line 2080 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE5;
		
	}
#line 5472 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 189:
#line 2085 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE6;
		
	}
#line 5482 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 190:
#line 2090 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE7;
		
	}
#line 5492 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 191:
#line 2098 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE0;
		
	}
#line 5502 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 192:
#line 2103 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE1;
		
	}
#line 5512 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 193:
#line 2108 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE2;
		
	}
#line 5522 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 194:
#line 2113 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE3;
		
	}
#line 5532 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 195:
#line 2121 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE0;
		(yyval.opt_column_name_list_p_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 5543 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 196:
#line 2127 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE1;
		
	}
#line 5553 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 197:
#line 2135 "bison.y" /* yacc.c:1652  */
    {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE0;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[0].set_clause_t);
		
	}
#line 5564 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 198:
#line 2141 "bison.y" /* yacc.c:1652  */
    {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE1;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[-2].set_clause_t);
		(yyval.set_clause_list_t)->set_clause_list_ = (yyvsp[0].set_clause_list_t);
		
	}
#line 5576 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 199:
#line 2151 "bison.y" /* yacc.c:1652  */
    {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE0;
		(yyval.set_clause_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 5588 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 200:
#line 2158 "bison.y" /* yacc.c:1652  */
    {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE1;
		(yyval.set_clause_t)->column_name_list_ = (yyvsp[-3].column_name_list_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 5600 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 201:
#line 2168 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE0;
		(yyval.expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 5611 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 202:
#line 2174 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE1;
		(yyval.expr_t)->between_expr_ = (yyvsp[0].between_expr_t);
		
	}
#line 5622 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 203:
#line 2180 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE2;
		(yyval.expr_t)->exists_expr_ = (yyvsp[0].exists_expr_t);
		
	}
#line 5633 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 204:
#line 2186 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE3;
		(yyval.expr_t)->in_expr_ = (yyvsp[0].in_expr_t);
		
	}
#line 5644 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 205:
#line 2192 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE4;
		(yyval.expr_t)->cast_expr_ = (yyvsp[0].cast_expr_t);
		
	}
#line 5655 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 206:
#line 2198 "bison.y" /* yacc.c:1652  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE5;
		(yyval.expr_t)->logic_expr_ = (yyvsp[0].logic_expr_t);
		
	}
#line 5666 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 207:
#line 2207 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE0;
		(yyval.operand_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 5677 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 208:
#line 2213 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE1;
		(yyval.operand_t)->array_index_ = (yyvsp[0].array_index_t);
		
	}
#line 5688 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 209:
#line 2219 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE2;
		(yyval.operand_t)->scalar_expr_ = (yyvsp[0].scalar_expr_t);
		
	}
#line 5699 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 210:
#line 2225 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE3;
		(yyval.operand_t)->unary_expr_ = (yyvsp[0].unary_expr_t);
		
	}
#line 5710 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 211:
#line 2231 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE4;
		(yyval.operand_t)->binary_expr_ = (yyvsp[0].binary_expr_t);
		
	}
#line 5721 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 212:
#line 2237 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE5;
		(yyval.operand_t)->case_expr_ = (yyvsp[0].case_expr_t);
		
	}
#line 5732 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 213:
#line 2243 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE6;
		(yyval.operand_t)->extract_expr_ = (yyvsp[0].extract_expr_t);
		
	}
#line 5743 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 214:
#line 2249 "bison.y" /* yacc.c:1652  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE7;
		(yyval.operand_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 5754 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 215:
#line 2258 "bison.y" /* yacc.c:1652  */
    {
		(yyval.cast_expr_t) = new CastExpr();
		(yyval.cast_expr_t)->case_idx_ = CASE0;
		(yyval.cast_expr_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.cast_expr_t)->type_name_ = (yyvsp[-1].type_name_t);
		
	}
#line 5766 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 216:
#line 2268 "bison.y" /* yacc.c:1652  */
    {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE0;
		(yyval.scalar_expr_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 5777 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 217:
#line 2274 "bison.y" /* yacc.c:1652  */
    {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE1;
		(yyval.scalar_expr_t)->literal_ = (yyvsp[0].literal_t);
		
	}
#line 5788 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 218:
#line 2283 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE0;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 5799 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 219:
#line 2289 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE1;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 5810 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 220:
#line 2295 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE2;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-1].operand_t);
		
	}
#line 5821 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 221:
#line 2301 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE3;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-2].operand_t);
		
	}
#line 5832 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 222:
#line 2307 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE4;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-3].operand_t);
		
	}
#line 5843 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 223:
#line 2313 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE5;
		
	}
#line 5853 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 224:
#line 2318 "bison.y" /* yacc.c:1652  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE6;
		
	}
#line 5863 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 225:
#line 2326 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE0;
		(yyval.binary_expr_t)->comp_expr_ = (yyvsp[0].comp_expr_t);
		
	}
#line 5874 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 226:
#line 2332 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE1;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->binary_op_ = (yyvsp[-1].binary_op_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 5887 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 227:
#line 2340 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE2;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 5899 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 228:
#line 2347 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE3;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-3].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 5911 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 229:
#line 2357 "bison.y" /* yacc.c:1652  */
    {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE0;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 5923 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 230:
#line 2364 "bison.y" /* yacc.c:1652  */
    {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE1;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 5935 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 231:
#line 2374 "bison.y" /* yacc.c:1652  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE0;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 5948 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 232:
#line 2382 "bison.y" /* yacc.c:1652  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE1;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 5961 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 233:
#line 2390 "bison.y" /* yacc.c:1652  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE2;
		(yyval.in_expr_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-2].opt_not_t);
		(yyval.in_expr_t)->table_name_ = (yyvsp[0].table_name_t);
		
	}
#line 5974 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 234:
#line 2401 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE0;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 5986 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 235:
#line 2408 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE1;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 5997 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 236:
#line 2414 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE2;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-4].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_2_ = (yyvsp[-1].expr_t);
		
	}
#line 6010 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 237:
#line 2422 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE3;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-1].expr_t);
		
	}
#line 6022 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 238:
#line 2432 "bison.y" /* yacc.c:1652  */
    {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE0;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-4].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 6035 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 239:
#line 2440 "bison.y" /* yacc.c:1652  */
    {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE1;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-5].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 6048 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 240:
#line 2451 "bison.y" /* yacc.c:1652  */
    {
		(yyval.exists_expr_t) = new ExistsExpr();
		(yyval.exists_expr_t)->case_idx_ = CASE0;
		(yyval.exists_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.exists_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 6060 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 241:
#line 2461 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE0;
		(yyval.case_list_t)->case_clause_ = (yyvsp[0].case_clause_t);
		
	}
#line 6071 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 242:
#line 2467 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE1;
		(yyval.case_list_t)->case_clause_ = (yyvsp[-1].case_clause_t);
		(yyval.case_list_t)->case_list_ = (yyvsp[0].case_list_t);
		
	}
#line 6083 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 243:
#line 2477 "bison.y" /* yacc.c:1652  */
    {
		(yyval.case_clause_t) = new CaseClause();
		(yyval.case_clause_t)->case_idx_ = CASE0;
		(yyval.case_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 6095 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 244:
#line 2487 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE0;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6107 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 245:
#line 2494 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE1;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6119 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 246:
#line 2501 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE2;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6131 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 247:
#line 2508 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE3;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6143 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 248:
#line 2515 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE4;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6155 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 249:
#line 2522 "bison.y" /* yacc.c:1652  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE5;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6167 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 250:
#line 2532 "bison.y" /* yacc.c:1652  */
    {
		(yyval.extract_expr_t) = new ExtractExpr();
		(yyval.extract_expr_t)->case_idx_ = CASE0;
		(yyval.extract_expr_t)->datetime_field_ = (yyvsp[-3].datetime_field_t);
		(yyval.extract_expr_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 6179 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 251:
#line 2542 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE0;
		
	}
#line 6189 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 252:
#line 2547 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE1;
		
	}
#line 6199 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 253:
#line 2552 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE2;
		
	}
#line 6209 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 254:
#line 2557 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE3;
		
	}
#line 6219 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 255:
#line 2562 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE4;
		
	}
#line 6229 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 256:
#line 2567 "bison.y" /* yacc.c:1652  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE5;
		
	}
#line 6239 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 257:
#line 2575 "bison.y" /* yacc.c:1652  */
    {
		(yyval.array_index_t) = new ArrayIndex();
		(yyval.array_index_t)->case_idx_ = CASE0;
		(yyval.array_index_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.array_index_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 6251 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 258:
#line 2585 "bison.y" /* yacc.c:1652  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE0;
		(yyval.literal_t)->string_literal_ = (yyvsp[0].string_literal_t);
		
	}
#line 6262 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 259:
#line 2591 "bison.y" /* yacc.c:1652  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE1;
		(yyval.literal_t)->bool_literal_ = (yyvsp[0].bool_literal_t);
		
	}
#line 6273 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 260:
#line 2597 "bison.y" /* yacc.c:1652  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE2;
		(yyval.literal_t)->num_literal_ = (yyvsp[0].num_literal_t);
		
	}
#line 6284 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 261:
#line 2606 "bison.y" /* yacc.c:1652  */
    {
		(yyval.string_literal_t) = new StringLiteral();
		(yyval.string_literal_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
		
	}
#line 6295 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 262:
#line 2615 "bison.y" /* yacc.c:1652  */
    {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE0;
		
	}
#line 6305 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 263:
#line 2620 "bison.y" /* yacc.c:1652  */
    {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE1;
		
	}
#line 6315 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 264:
#line 2628 "bison.y" /* yacc.c:1652  */
    {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE0;
		(yyval.num_literal_t)->int_literal_ = (yyvsp[0].int_literal_t);
		
	}
#line 6326 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 265:
#line 2634 "bison.y" /* yacc.c:1652  */
    {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE1;
		(yyval.num_literal_t)->float_literal_ = (yyvsp[0].float_literal_t);
		
	}
#line 6337 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 266:
#line 2643 "bison.y" /* yacc.c:1652  */
    {
		(yyval.int_literal_t) = new IntLiteral();
		(yyval.int_literal_t)->int_val_ = (yyvsp[0].ival);
		
	}
#line 6347 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 267:
#line 2651 "bison.y" /* yacc.c:1652  */
    {
		(yyval.float_literal_t) = new FloatLiteral();
		(yyval.float_literal_t)->float_val_ = (yyvsp[0].fval);
		
	}
#line 6357 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 268:
#line 2659 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE0;
		
	}
#line 6367 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 269:
#line 2664 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE1;
		
	}
#line 6377 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 270:
#line 2672 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE0;
		
	}
#line 6387 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 271:
#line 2677 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE1;
		
	}
#line 6397 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 272:
#line 2685 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE0;
		
	}
#line 6407 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 273:
#line 2690 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE1;
		
	}
#line 6417 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 274:
#line 2698 "bison.y" /* yacc.c:1652  */
    {
		(yyval.identifier_t) = new Identifier();
		(yyval.identifier_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
		
	}
#line 6428 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 275:
#line 2707 "bison.y" /* yacc.c:1652  */
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
#line 6448 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 276:
#line 2725 "bison.y" /* yacc.c:1652  */
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
#line 6468 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 277:
#line 2743 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_unique_t) = new OptUnique();
		(yyval.opt_unique_t)->case_idx_ = CASE0;
		
	}
#line 6478 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 278:
#line 2748 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_unique_t) = new OptUnique();
		(yyval.opt_unique_t)->case_idx_ = CASE1;
		
	}
#line 6488 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 279:
#line 2756 "bison.y" /* yacc.c:1652  */
    {
		(yyval.view_name_t) = new ViewName();
		(yyval.view_name_t)->case_idx_ = CASE0;
		(yyval.view_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 6499 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 280:
#line 2765 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE0;
		
	}
#line 6509 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 281:
#line 2770 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE1;
		
	}
#line 6519 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 282:
#line 2775 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE2;
		
	}
#line 6529 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 283:
#line 2780 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE3;
		
	}
#line 6539 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 284:
#line 2785 "bison.y" /* yacc.c:1652  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE4;
		
	}
#line 6549 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 285:
#line 2793 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE0;
		
	}
#line 6559 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 286:
#line 2798 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE1;
		
	}
#line 6569 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 287:
#line 2806 "bison.y" /* yacc.c:1652  */
    {
		(yyval.name_t) = new Name();
		(yyval.name_t)->case_idx_ = CASE0;
		(yyval.name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 6580 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 288:
#line 2815 "bison.y" /* yacc.c:1652  */
    {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE0;
		(yyval.type_name_t)->numeric_type_ = (yyvsp[0].numeric_type_t);
		
	}
#line 6591 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 289:
#line 2821 "bison.y" /* yacc.c:1652  */
    {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE1;
		(yyval.type_name_t)->character_type_ = (yyvsp[0].character_type_t);
		
	}
#line 6602 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 290:
#line 2830 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE0;
		(yyval.character_type_t)->character_with_length_ = (yyvsp[0].character_with_length_t);
		
	}
#line 6613 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 291:
#line 2836 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE1;
		(yyval.character_type_t)->character_without_length_ = (yyvsp[0].character_without_length_t);
		
	}
#line 6624 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 292:
#line 2845 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_with_length_t) = new CharacterWithLength();
		(yyval.character_with_length_t)->case_idx_ = CASE0;
		(yyval.character_with_length_t)->character_conflicta_ = (yyvsp[-3].character_conflicta_t);
		(yyval.character_with_length_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 6636 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 293:
#line 2855 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE0;
		(yyval.character_without_length_t)->character_conflicta_ = (yyvsp[0].character_conflicta_t);
		
	}
#line 6647 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 294:
#line 2864 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE0;
		(yyval.character_conflicta_t)->opt_varying_ = (yyvsp[0].opt_varying_t);
		
	}
#line 6658 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 295:
#line 2870 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE1;
		(yyval.character_conflicta_t)->opt_varying_ = (yyvsp[0].opt_varying_t);
		
	}
#line 6669 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 296:
#line 2876 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE2;
		
	}
#line 6679 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 297:
#line 2881 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE3;
		
	}
#line 6689 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 298:
#line 2886 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE4;
		(yyval.character_conflicta_t)->opt_varying_ = (yyvsp[0].opt_varying_t);
		
	}
#line 6700 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 299:
#line 2892 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE5;
		(yyval.character_conflicta_t)->opt_varying_ = (yyvsp[0].opt_varying_t);
		
	}
#line 6711 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 300:
#line 2898 "bison.y" /* yacc.c:1652  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE6;
		(yyval.character_conflicta_t)->opt_varying_ = (yyvsp[0].opt_varying_t);
		
	}
#line 6722 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 301:
#line 2907 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_varying_t) = new OptVarying();
		(yyval.opt_varying_t)->case_idx_ = CASE0;
		
	}
#line 6732 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 302:
#line 2912 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_varying_t) = new OptVarying();
		(yyval.opt_varying_t)->case_idx_ = CASE1;
		
	}
#line 6742 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 303:
#line 2920 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE0;
		
	}
#line 6752 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 304:
#line 2925 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE1;
		
	}
#line 6762 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 305:
#line 2930 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE2;
		
	}
#line 6772 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 306:
#line 2935 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE3;
		
	}
#line 6782 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 307:
#line 2940 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE4;
		
	}
#line 6792 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 308:
#line 2945 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE5;
		
	}
#line 6802 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 309:
#line 2950 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE6;
		
	}
#line 6812 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 310:
#line 2955 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE7;
		
	}
#line 6822 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 311:
#line 2960 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE8;
		
	}
#line 6832 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 312:
#line 2965 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE9;
		
	}
#line 6842 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 313:
#line 2970 "bison.y" /* yacc.c:1652  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE10;
		
	}
#line 6852 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 314:
#line 2978 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 6863 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 315:
#line 2984 "bison.y" /* yacc.c:1652  */
    {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 6873 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 316:
#line 2992 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[0].table_constraint_t);
		
	}
#line 6884 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 317:
#line 2998 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE1;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[-2].table_constraint_t);
		(yyval.table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 6896 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 318:
#line 3008 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE0;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-5].constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 6908 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 319:
#line 3015 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE1;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-4].constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 6920 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 320:
#line 3022 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE2;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-4].constraint_name_t);
		(yyval.table_constraint_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 6932 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 321:
#line 3029 "bison.y" /* yacc.c:1652  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE3;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-6].constraint_name_t);
		(yyval.table_constraint_t)->column_name_list_ = (yyvsp[-2].column_name_list_t);
		(yyval.table_constraint_t)->foreign_clause_ = (yyvsp[0].foreign_clause_t);
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
#line 6961 "bison_parser.cpp" /* yacc.c:1652  */
    break;


#line 6965 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 3055 "bison.y" /* yacc.c:1918  */
