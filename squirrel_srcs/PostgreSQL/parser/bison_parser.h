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
#line 8 "bison.y" /* yacc.c:1921  */

#include "../include/ast.h"
#include "parser_typedef.h"

#line 61 "bison_parser.h" /* yacc.c:1921  */

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
#line 30 "bison.y" /* yacc.c:1921  */
union FF_STYPE
{
#line 30 "bison.y" /* yacc.c:1921  */

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

#line 393 "bison_parser.h" /* yacc.c:1921  */
};
#line 30 "bison.y" /* yacc.c:1921  */
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
