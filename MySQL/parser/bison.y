%{
#include "bison_parser.h"
#include "flex_lexer.h"
#include <stdio.h>
#include <string.h>
int yyerror(YYLTYPE* llocp, Program * result, yyscan_t scanner, const char *msg) { return 0; }
%}
%code requires {
#include "../include/ast.h"
#include "parser_typedef.h"
}
%define api.prefix	{ff_}
%define parse.error	verbose
%define api.pure	full
%define api.token.prefix	{SQL_}
%locations

%initial-action {
    // Initialize
    @$.first_column = 0;
    @$.last_column = 0;
    @$.first_line = 0;
    @$.last_line = 0;
    @$.total_column = 0;
    @$.string_length = 0;
};
%lex-param { yyscan_t scanner }
%parse-param { Program* result }
%parse-param { yyscan_t scanner }
%union FF_STYPE{
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
}

%token OP_NOTEQUAL ENABLE SIMPLE TEXT OVER YEAR INSERT_METHOD OP_SEMI
%token BIGINT LIMIT OP_GREATERTHAN WITH ORDER OPTION LAST UNBOUNDED
%token PRECEDING EXCEPT NUMERIC OP_LESSTHAN ACTION BEFORE OP_GREATEREQ CHECK
%token COMPACT FULL NATURAL BINARY NATIONAL ENUM REDUNDANT OP_ADD
%token CURRENT MERGE TRIGGER COMPRESSED OP_SUB FALSE UNIQUE WHERE
%token MINUTE FIRST ON PARTIAL DOUBLE AFTER PRIMARY MONTH
%token DEFERRED VALUES LONGTEXT SQL SHARED VALIDATION OR VIEW
%token INDEX GROUP OP_MUL INPLACE FOREIGN RESTRICT SPATIAL FOLLOWING
%token DEC SELECT NONE DISTINCT TRUE DYNAMIC BY OP_MOD
%token INTEGER SECURITY IS DEFINER ROW ENFORCED END RECURSIVE
%token FOR TEMPTABLE UNION NULLS UPDATE ELSE RANGE SET
%token INVOKER OFFSET INDEXED FORCE NCHAR AND INITIALLY PRECISION
%token FILTER WITHOUT NOT DELETE DEFFERRABLE REAL THEN UNDEFINED
%token DEFAULT CROSS CHAR REFERENCES OP_XOR CASE FIXED HOUR
%token NO COLUMN LOCAL DROP REPLACE ASC OP_COMMA DISABLE
%token TABLE ARRAY IF EXTRACT LEFT FULLTEXT HASH ALGORITHM
%token LOCK DECIMAL PARTITION CASCADE ADD BETWEEN OP_LESSEQ MATCH
%token ALL ROWS JOIN LIKE OP_RP IGNORE INT MEDIUMTEXT
%token BOOLEAN KEY EACH USING RENAME DO OP_LP CHARACTER
%token UMINUS CAST GROUPS OUTER NULL SMALLINT EXCLUSIVE TEMPORARY
%token CONSTRAINT CREATE OP_LBRACKET WHEN IMMEDIATE TO BTREE DAY
%token CONFLICT ROW_FORMAT OP_RBRACKET EXISTS INSERT KEYS INTO OP_DIVIDE
%token CASCADED ISNULL AS INNER INTERSECT IN OP_EQUAL VARCHAR
%token COPY ALTER DESC FROM TINYTEXT FLOAT SECOND WINDOW
%token NOTHING HAVING
%token <ival> INTLITERAL

%token <fval> FLOATLITERAL

%token <sval> IDENTIFIER

%token <sval> STRINGLITERAL


%type <program_t>	program
%type <stmtlist_t>	stmtlist
%type <stmt_t>	stmt
%type <create_stmt_t>	create_stmt
%type <drop_stmt_t>	drop_stmt
%type <alter_stmt_t>	alter_stmt
%type <select_stmt_t>	select_stmt
%type <select_with_parens_t>	select_with_parens
%type <select_no_parens_t>	select_no_parens
%type <select_clause_list_t>	select_clause_list
%type <select_clause_t>	select_clause
%type <combine_clause_t>	combine_clause
%type <opt_from_clause_t>	opt_from_clause
%type <select_target_t>	select_target
%type <opt_window_clause_t>	opt_window_clause
%type <window_clause_t>	window_clause
%type <window_def_list_t>	window_def_list
%type <window_def_t>	window_def
%type <window_name_t>	window_name
%type <window_t>	window
%type <opt_partition_t>	opt_partition
%type <opt_frame_clause_t>	opt_frame_clause
%type <range_or_rows_t>	range_or_rows
%type <frame_bound_start_t>	frame_bound_start
%type <frame_bound_end_t>	frame_bound_end
%type <frame_bound_t>	frame_bound
%type <opt_exist_window_name_t>	opt_exist_window_name
%type <opt_group_clause_t>	opt_group_clause
%type <opt_having_clause_t>	opt_having_clause
%type <opt_where_clause_t>	opt_where_clause
%type <where_clause_t>	where_clause
%type <from_clause_t>	from_clause
%type <table_ref_t>	table_ref
%type <opt_index_t>	opt_index
%type <opt_on_t>	opt_on
%type <opt_using_t>	opt_using
%type <column_name_list_t>	column_name_list
%type <opt_table_prefix_t>	opt_table_prefix
%type <join_op_t>	join_op
%type <opt_join_type_t>	opt_join_type
%type <expr_list_t>	expr_list
%type <opt_limit_clause_t>	opt_limit_clause
%type <limit_clause_t>	limit_clause
%type <opt_limit_row_count_t>	opt_limit_row_count
%type <opt_order_clause_t>	opt_order_clause
%type <opt_order_nulls_t>	opt_order_nulls
%type <order_item_list_t>	order_item_list
%type <order_item_t>	order_item
%type <opt_order_behavior_t>	opt_order_behavior
%type <opt_with_clause_t>	opt_with_clause
%type <cte_table_list_t>	cte_table_list
%type <cte_table_t>	cte_table
%type <cte_table_name_t>	cte_table_name
%type <opt_all_or_distinct_t>	opt_all_or_distinct
%type <create_table_stmt_t>	create_table_stmt
%type <create_index_stmt_t>	create_index_stmt
%type <create_trigger_stmt_t>	create_trigger_stmt
%type <create_view_stmt_t>	create_view_stmt
%type <opt_table_option_list_t>	opt_table_option_list
%type <table_option_list_t>	table_option_list
%type <table_option_t>	table_option
%type <opt_op_comma_t>	opt_op_comma
%type <opt_ignore_or_replace_t>	opt_ignore_or_replace
%type <opt_view_algorithm_t>	opt_view_algorithm
%type <opt_sql_security_t>	opt_sql_security
%type <opt_index_option_t>	opt_index_option
%type <opt_extra_option_t>	opt_extra_option
%type <index_algorithm_option_t>	index_algorithm_option
%type <lock_option_t>	lock_option
%type <opt_op_equal_t>	opt_op_equal
%type <trigger_events_t>	trigger_events
%type <trigger_name_t>	trigger_name
%type <trigger_action_time_t>	trigger_action_time
%type <drop_index_stmt_t>	drop_index_stmt
%type <drop_table_stmt_t>	drop_table_stmt
%type <opt_restrict_or_cascade_t>	opt_restrict_or_cascade
%type <drop_trigger_stmt_t>	drop_trigger_stmt
%type <drop_view_stmt_t>	drop_view_stmt
%type <insert_stmt_t>	insert_stmt
%type <insert_rest_t>	insert_rest
%type <super_values_list_t>	super_values_list
%type <values_list_t>	values_list
%type <opt_on_conflict_t>	opt_on_conflict
%type <opt_conflict_expr_t>	opt_conflict_expr
%type <indexed_column_list_t>	indexed_column_list
%type <indexed_column_t>	indexed_column
%type <update_stmt_t>	update_stmt
%type <alter_action_t>	alter_action
%type <alter_constant_action_t>	alter_constant_action
%type <column_def_list_t>	column_def_list
%type <column_def_t>	column_def
%type <opt_column_constraint_list_t>	opt_column_constraint_list
%type <column_constraint_list_t>	column_constraint_list
%type <column_constraint_t>	column_constraint
%type <opt_reference_clause_t>	opt_reference_clause
%type <opt_check_t>	opt_check
%type <constraint_type_t>	constraint_type
%type <reference_clause_t>	reference_clause
%type <opt_foreign_key_t>	opt_foreign_key
%type <opt_foreign_key_actions_t>	opt_foreign_key_actions
%type <foreign_key_actions_t>	foreign_key_actions
%type <key_actions_t>	key_actions
%type <opt_constraint_attribute_spec_t>	opt_constraint_attribute_spec
%type <opt_initial_time_t>	opt_initial_time
%type <constraint_name_t>	constraint_name
%type <opt_temp_t>	opt_temp
%type <opt_check_option_t>	opt_check_option
%type <opt_column_name_list_p_t>	opt_column_name_list_p
%type <set_clause_list_t>	set_clause_list
%type <set_clause_t>	set_clause
%type <opt_as_alias_t>	opt_as_alias
%type <expr_t>	expr
%type <operand_t>	operand
%type <cast_expr_t>	cast_expr
%type <scalar_expr_t>	scalar_expr
%type <unary_expr_t>	unary_expr
%type <binary_expr_t>	binary_expr
%type <logic_expr_t>	logic_expr
%type <in_expr_t>	in_expr
%type <case_expr_t>	case_expr
%type <between_expr_t>	between_expr
%type <exists_expr_t>	exists_expr
%type <function_expr_t>	function_expr
%type <opt_distinct_t>	opt_distinct
%type <opt_filter_clause_t>	opt_filter_clause
%type <opt_over_clause_t>	opt_over_clause
%type <case_list_t>	case_list
%type <case_clause_t>	case_clause
%type <comp_expr_t>	comp_expr
%type <extract_expr_t>	extract_expr
%type <datetime_field_t>	datetime_field
%type <array_expr_t>	array_expr
%type <array_index_t>	array_index
%type <literal_t>	literal
%type <string_literal_t>	string_literal
%type <bool_literal_t>	bool_literal
%type <num_literal_t>	num_literal
%type <int_literal_t>	int_literal
%type <float_literal_t>	float_literal
%type <opt_column_t>	opt_column
%type <trigger_body_t>	trigger_body
%type <opt_if_not_exist_t>	opt_if_not_exist
%type <opt_if_exist_t>	opt_if_exist
%type <identifier_t>	identifier
%type <as_alias_t>	as_alias
%type <table_name_t>	table_name
%type <column_name_t>	column_name
%type <opt_index_keyword_t>	opt_index_keyword
%type <view_name_t>	view_name
%type <function_name_t>	function_name
%type <binary_op_t>	binary_op
%type <opt_not_t>	opt_not
%type <name_t>	name
%type <type_name_t>	type_name
%type <character_type_t>	character_type
%type <character_with_length_t>	character_with_length
%type <character_without_length_t>	character_without_length
%type <character_conflicta_t>	character_conflicta
%type <numeric_type_t>	numeric_type
%type <opt_table_constraint_list_t>	opt_table_constraint_list
%type <table_constraint_list_t>	table_constraint_list
%type <table_constraint_t>	table_constraint
%type <opt_enforced_t>	opt_enforced

%left  OR
%left  AND
%left  NOT
%nonassoc  OP_NOTEQUAL MATCH LIKE OP_EQUAL
%nonassoc  OP_GREATERTHAN OP_LESSTHAN OP_GREATEREQ OP_LESSEQ
%nonassoc  ISNULL
%nonassoc  IS
%left  OP_ADD OP_SUB
%left  OP_MUL OP_MOD OP_DIVIDE
%left  OP_XOR
%right  UMINUS
%left  OP_LBRACKET OP_RBRACKET
%left  OP_RP OP_LP
%nonassoc  JOIN
%nonassoc  ON

%destructor{
	free( ($$) );
}  <sval>

%destructor{
	 
}  <fval> <ival>

%destructor { if($$!=NULL)$$->deep_delete(); } <*>

%%
program:
	stmtlist  {
		$$ = result;
		$$->case_idx_ = CASE0;
		$$->stmtlist_ = $1;
				$$ = NULL;

	}
  ;

stmtlist:
	stmt OP_SEMI stmtlist  {
		$$ = new Stmtlist();
		$$->case_idx_ = CASE0;
		$$->stmt_ = $1;
		$$->stmtlist_ = $3;
		
	}
   |	stmt OP_SEMI  {
		$$ = new Stmtlist();
		$$->case_idx_ = CASE1;
		$$->stmt_ = $1;
		
	}
  ;

stmt:
	create_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE0;
		$$->create_stmt_ = $1;
		
	}
   |	drop_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE1;
		$$->drop_stmt_ = $1;
		
	}
   |	select_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE2;
		$$->select_stmt_ = $1;
		
	}
   |	update_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE3;
		$$->update_stmt_ = $1;
		
	}
   |	insert_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE4;
		$$->insert_stmt_ = $1;
		
	}
   |	alter_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE5;
		$$->alter_stmt_ = $1;
		
	}
  ;

create_stmt:
	create_table_stmt  {
		$$ = new CreateStmt();
		$$->case_idx_ = CASE0;
		$$->create_table_stmt_ = $1;
		
	}
   |	create_index_stmt  {
		$$ = new CreateStmt();
		$$->case_idx_ = CASE1;
		$$->create_index_stmt_ = $1;
		
	}
   |	create_trigger_stmt  {
		$$ = new CreateStmt();
		$$->case_idx_ = CASE2;
		$$->create_trigger_stmt_ = $1;
		
	}
   |	create_view_stmt  {
		$$ = new CreateStmt();
		$$->case_idx_ = CASE3;
		$$->create_view_stmt_ = $1;
		
	}
  ;

drop_stmt:
	drop_index_stmt  {
		$$ = new DropStmt();
		$$->case_idx_ = CASE0;
		$$->drop_index_stmt_ = $1;
		
	}
   |	drop_table_stmt  {
		$$ = new DropStmt();
		$$->case_idx_ = CASE1;
		$$->drop_table_stmt_ = $1;
		
	}
   |	drop_trigger_stmt  {
		$$ = new DropStmt();
		$$->case_idx_ = CASE2;
		$$->drop_trigger_stmt_ = $1;
		
	}
   |	drop_view_stmt  {
		$$ = new DropStmt();
		$$->case_idx_ = CASE3;
		$$->drop_view_stmt_ = $1;
		
	}
  ;

alter_stmt:
	ALTER TABLE table_name alter_action  {
		$$ = new AlterStmt();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $3;
		$$->alter_action_ = $4;
		
	}
  ;

select_stmt:
	select_no_parens %prec UMINUS {
		$$ = new SelectStmt();
		$$->case_idx_ = CASE0;
		$$->select_no_parens_ = $1;
		
	}
   |	select_with_parens %prec UMINUS {
		$$ = new SelectStmt();
		$$->case_idx_ = CASE1;
		$$->select_with_parens_ = $1;
		
	}
  ;

select_with_parens:
	OP_LP select_no_parens OP_RP  {
		$$ = new SelectWithParens();
		$$->case_idx_ = CASE0;
		$$->select_no_parens_ = $2;
		
	}
   |	OP_LP select_with_parens OP_RP  {
		$$ = new SelectWithParens();
		$$->case_idx_ = CASE1;
		$$->select_with_parens_ = $2;
		
	}
  ;

select_no_parens:
	opt_with_clause select_clause_list opt_order_clause opt_limit_clause  {
		$$ = new SelectNoParens();
		$$->case_idx_ = CASE0;
		$$->opt_with_clause_ = $1;
		$$->select_clause_list_ = $2;
		$$->opt_order_clause_ = $3;
		$$->opt_limit_clause_ = $4;
		
	}
  ;

select_clause_list:
	select_clause  {
		$$ = new SelectClauseList();
		$$->case_idx_ = CASE0;
		$$->select_clause_ = $1;
		
	}
   |	select_clause combine_clause select_clause_list  {
		$$ = new SelectClauseList();
		$$->case_idx_ = CASE1;
		$$->select_clause_ = $1;
		$$->combine_clause_ = $2;
		$$->select_clause_list_ = $3;
		
	}
  ;

select_clause:
	SELECT opt_all_or_distinct select_target opt_from_clause opt_where_clause opt_group_clause opt_window_clause  {
		$$ = new SelectClause();
		$$->case_idx_ = CASE0;
		$$->opt_all_or_distinct_ = $2;
		$$->select_target_ = $3;
		$$->opt_from_clause_ = $4;
		$$->opt_where_clause_ = $5;
		$$->opt_group_clause_ = $6;
		$$->opt_window_clause_ = $7;
		
	}
  ;

combine_clause:
	UNION  {
		$$ = new CombineClause();
		$$->case_idx_ = CASE0;
		
	}
   |	INTERSECT  {
		$$ = new CombineClause();
		$$->case_idx_ = CASE1;
		
	}
   |	EXCEPT  {
		$$ = new CombineClause();
		$$->case_idx_ = CASE2;
		
	}
  ;

opt_from_clause:
	from_clause  {
		$$ = new OptFromClause();
		$$->case_idx_ = CASE0;
		$$->from_clause_ = $1;
		
	}
   |	  {
		$$ = new OptFromClause();
		$$->case_idx_ = CASE1;
		
	}
  ;

select_target:
	expr_list  {
		$$ = new SelectTarget();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $1;
		
	}
  ;

opt_window_clause:
	window_clause  {
		$$ = new OptWindowClause();
		$$->case_idx_ = CASE0;
		$$->window_clause_ = $1;
		
	}
   |	  {
		$$ = new OptWindowClause();
		$$->case_idx_ = CASE1;
		
	}
  ;

window_clause:
	WINDOW window_def_list  {
		$$ = new WindowClause();
		$$->case_idx_ = CASE0;
		$$->window_def_list_ = $2;
		
	}
  ;

window_def_list:
	window_def  {
		$$ = new WindowDefList();
		$$->case_idx_ = CASE0;
		$$->window_def_ = $1;
		
	}
   |	window_def OP_COMMA window_def_list  {
		$$ = new WindowDefList();
		$$->case_idx_ = CASE1;
		$$->window_def_ = $1;
		$$->window_def_list_ = $3;
		
	}
  ;

window_def:
	window_name AS OP_LP window OP_RP  {
		$$ = new WindowDef();
		$$->case_idx_ = CASE0;
		$$->window_name_ = $1;
		$$->window_ = $4;
		if($$){
			auto tmp1 = $$->window_name_; 
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
  ;

window_name:
	identifier  {
		$$ = new WindowName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
		
	}
  ;

window:
	opt_exist_window_name opt_partition opt_order_clause opt_frame_clause  {
		$$ = new Window();
		$$->case_idx_ = CASE0;
		$$->opt_exist_window_name_ = $1;
		$$->opt_partition_ = $2;
		$$->opt_order_clause_ = $3;
		$$->opt_frame_clause_ = $4;
		
	}
  ;

opt_partition:
	PARTITION BY expr_list  {
		$$ = new OptPartition();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $3;
		
	}
   |	  {
		$$ = new OptPartition();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_frame_clause:
	range_or_rows frame_bound_start  {
		$$ = new OptFrameClause();
		$$->case_idx_ = CASE0;
		$$->range_or_rows_ = $1;
		$$->frame_bound_start_ = $2;
		
	}
   |	range_or_rows BETWEEN frame_bound_start AND frame_bound_end  {
		$$ = new OptFrameClause();
		$$->case_idx_ = CASE1;
		$$->range_or_rows_ = $1;
		$$->frame_bound_start_ = $3;
		$$->frame_bound_end_ = $5;
		
	}
   |	  {
		$$ = new OptFrameClause();
		$$->case_idx_ = CASE2;
		
	}
  ;

range_or_rows:
	RANGE  {
		$$ = new RangeOrRows();
		$$->case_idx_ = CASE0;
		
	}
   |	ROWS  {
		$$ = new RangeOrRows();
		$$->case_idx_ = CASE1;
		
	}
   |	GROUPS  {
		$$ = new RangeOrRows();
		$$->case_idx_ = CASE2;
		
	}
  ;

frame_bound_start:
	frame_bound  {
		$$ = new FrameBoundStart();
		$$->case_idx_ = CASE0;
		$$->frame_bound_ = $1;
		
	}
   |	UNBOUNDED PRECEDING  {
		$$ = new FrameBoundStart();
		$$->case_idx_ = CASE1;
		
	}
  ;

frame_bound_end:
	frame_bound  {
		$$ = new FrameBoundEnd();
		$$->case_idx_ = CASE0;
		$$->frame_bound_ = $1;
		
	}
   |	UNBOUNDED FOLLOWING  {
		$$ = new FrameBoundEnd();
		$$->case_idx_ = CASE1;
		
	}
  ;

frame_bound:
	expr PRECEDING  {
		$$ = new FrameBound();
		$$->case_idx_ = CASE0;
		$$->expr_ = $1;
		
	}
   |	expr FOLLOWING  {
		$$ = new FrameBound();
		$$->case_idx_ = CASE1;
		$$->expr_ = $1;
		
	}
   |	CURRENT ROW  {
		$$ = new FrameBound();
		$$->case_idx_ = CASE2;
		
	}
  ;

opt_exist_window_name:
	identifier  {
		$$ = new OptExistWindowName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
		if($$){
			auto tmp1 = $$->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataWindowName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}


	}
   |	  {
		$$ = new OptExistWindowName();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_group_clause:
	GROUP BY expr_list opt_having_clause  {
		$$ = new OptGroupClause();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $3;
		$$->opt_having_clause_ = $4;
		
	}
   |	  {
		$$ = new OptGroupClause();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_having_clause:
	HAVING expr  {
		$$ = new OptHavingClause();
		$$->case_idx_ = CASE0;
		$$->expr_ = $2;
		
	}
   |	  {
		$$ = new OptHavingClause();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_where_clause:
	where_clause  {
		$$ = new OptWhereClause();
		$$->case_idx_ = CASE0;
		$$->where_clause_ = $1;
		
	}
   |	  {
		$$ = new OptWhereClause();
		$$->case_idx_ = CASE1;
		
	}
  ;

where_clause:
	WHERE expr  {
		$$ = new WhereClause();
		$$->case_idx_ = CASE0;
		$$->expr_ = $2;
		
	}
  ;

from_clause:
	FROM table_ref  {
		$$ = new FromClause();
		$$->case_idx_ = CASE0;
		$$->table_ref_ = $2;
		
	}
  ;

table_ref:
	opt_table_prefix table_name opt_as_alias opt_index opt_on opt_using  {
		$$ = new TableRef();
		$$->case_idx_ = CASE0;
		$$->opt_table_prefix_ = $1;
		$$->table_name_ = $2;
		$$->opt_as_alias_ = $3;
		$$->opt_index_ = $4;
		$$->opt_on_ = $5;
		$$->opt_using_ = $6;
		
	}
   |	opt_table_prefix function_name OP_LP expr_list OP_RP opt_as_alias opt_on opt_using  {
		$$ = new TableRef();
		$$->case_idx_ = CASE1;
		$$->opt_table_prefix_ = $1;
		$$->function_name_ = $2;
		$$->expr_list_ = $4;
		$$->opt_as_alias_ = $6;
		$$->opt_on_ = $7;
		$$->opt_using_ = $8;
		
	}
   |	opt_table_prefix OP_LP select_no_parens OP_RP opt_as_alias opt_on opt_using  {
		$$ = new TableRef();
		$$->case_idx_ = CASE2;
		$$->opt_table_prefix_ = $1;
		$$->select_no_parens_ = $3;
		$$->opt_as_alias_ = $5;
		$$->opt_on_ = $6;
		$$->opt_using_ = $7;
		
	}
   |	opt_table_prefix OP_LP table_ref OP_RP opt_as_alias opt_on opt_using  {
		$$ = new TableRef();
		$$->case_idx_ = CASE3;
		$$->opt_table_prefix_ = $1;
		$$->table_ref_ = $3;
		$$->opt_as_alias_ = $5;
		$$->opt_on_ = $6;
		$$->opt_using_ = $7;
		
	}
  ;

opt_index:
	INDEXED BY column_name  {
		$$ = new OptIndex();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $3;
		
	}
   |	NOT INDEXED  {
		$$ = new OptIndex();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptIndex();
		$$->case_idx_ = CASE2;
		
	}
  ;

opt_on:
	ON expr  {
		$$ = new OptOn();
		$$->case_idx_ = CASE0;
		$$->expr_ = $2;
		
	}
   |	 %prec JOIN {
		$$ = new OptOn();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_using:
	USING OP_LP column_name_list OP_RP  {
		$$ = new OptUsing();
		$$->case_idx_ = CASE0;
		$$->column_name_list_ = $3;
		
	}
   |	  {
		$$ = new OptUsing();
		$$->case_idx_ = CASE1;
		
	}
  ;

column_name_list:
	column_name  {
		$$ = new ColumnNameList();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $1;
		
	}
   |	column_name OP_COMMA column_name_list  {
		$$ = new ColumnNameList();
		$$->case_idx_ = CASE1;
		$$->column_name_ = $1;
		$$->column_name_list_ = $3;
		
	}
  ;

opt_table_prefix:
	table_ref join_op  {
		$$ = new OptTablePrefix();
		$$->case_idx_ = CASE0;
		$$->table_ref_ = $1;
		$$->join_op_ = $2;
		
	}
   |	  {
		$$ = new OptTablePrefix();
		$$->case_idx_ = CASE1;
		
	}
  ;

join_op:
	OP_COMMA  {
		$$ = new JoinOp();
		$$->case_idx_ = CASE0;
		
	}
   |	JOIN  {
		$$ = new JoinOp();
		$$->case_idx_ = CASE1;
		
	}
   |	NATURAL opt_join_type JOIN  {
		$$ = new JoinOp();
		$$->case_idx_ = CASE2;
		$$->opt_join_type_ = $2;
		
	}
  ;

opt_join_type:
	LEFT  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE0;
		
	}
   |	LEFT OUTER  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE1;
		
	}
   |	INNER  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE2;
		
	}
   |	CROSS  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE3;
		
	}
   |	  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE4;
		
	}
  ;

expr_list:
	expr opt_as_alias OP_COMMA expr_list  {
		$$ = new ExprList();
		$$->case_idx_ = CASE0;
		$$->expr_ = $1;
		$$->opt_as_alias_ = $2;
		$$->expr_list_ = $4;
		
	}
   |	expr opt_as_alias  {
		$$ = new ExprList();
		$$->case_idx_ = CASE1;
		$$->expr_ = $1;
		$$->opt_as_alias_ = $2;
		
	}
  ;

opt_limit_clause:
	limit_clause  {
		$$ = new OptLimitClause();
		$$->case_idx_ = CASE0;
		$$->limit_clause_ = $1;
		
	}
   |	  {
		$$ = new OptLimitClause();
		$$->case_idx_ = CASE1;
		
	}
  ;

limit_clause:
	LIMIT expr  {
		$$ = new LimitClause();
		$$->case_idx_ = CASE0;
		$$->expr_1_ = $2;
		
	}
   |	LIMIT expr OFFSET expr  {
		$$ = new LimitClause();
		$$->case_idx_ = CASE1;
		$$->expr_1_ = $2;
		$$->expr_2_ = $4;
		
	}
   |	LIMIT expr OP_COMMA expr  {
		$$ = new LimitClause();
		$$->case_idx_ = CASE2;
		$$->expr_1_ = $2;
		$$->expr_2_ = $4;
		
	}
  ;

opt_limit_row_count:
	LIMIT expr  {
		$$ = new OptLimitRowCount();
		$$->case_idx_ = CASE0;
		$$->expr_ = $2;
		
	}
   |	  {
		$$ = new OptLimitRowCount();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_order_clause:
	ORDER BY order_item_list  {
		$$ = new OptOrderClause();
		$$->case_idx_ = CASE0;
		$$->order_item_list_ = $3;
		
	}
   |	  {
		$$ = new OptOrderClause();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_order_nulls:
	NULLS FIRST  {
		$$ = new OptOrderNulls();
		$$->case_idx_ = CASE0;
		
	}
   |	NULLS LAST  {
		$$ = new OptOrderNulls();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptOrderNulls();
		$$->case_idx_ = CASE2;
		
	}
  ;

order_item_list:
	order_item  {
		$$ = new OrderItemList();
		$$->case_idx_ = CASE0;
		$$->order_item_ = $1;
		
	}
   |	order_item OP_COMMA order_item_list  {
		$$ = new OrderItemList();
		$$->case_idx_ = CASE1;
		$$->order_item_ = $1;
		$$->order_item_list_ = $3;
		
	}
  ;

order_item:
	expr opt_order_behavior opt_order_nulls  {
		$$ = new OrderItem();
		$$->case_idx_ = CASE0;
		$$->expr_ = $1;
		$$->opt_order_behavior_ = $2;
		$$->opt_order_nulls_ = $3;
		
	}
  ;

opt_order_behavior:
	ASC  {
		$$ = new OptOrderBehavior();
		$$->case_idx_ = CASE0;
		
	}
   |	DESC  {
		$$ = new OptOrderBehavior();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptOrderBehavior();
		$$->case_idx_ = CASE2;
		
	}
  ;

opt_with_clause:
	WITH cte_table_list  {
		$$ = new OptWithClause();
		$$->case_idx_ = CASE0;
		$$->cte_table_list_ = $2;
		
	}
   |	WITH RECURSIVE cte_table_list  {
		$$ = new OptWithClause();
		$$->case_idx_ = CASE1;
		$$->cte_table_list_ = $3;
		
	}
   |	  {
		$$ = new OptWithClause();
		$$->case_idx_ = CASE2;
		
	}
  ;

cte_table_list:
	cte_table  {
		$$ = new CteTableList();
		$$->case_idx_ = CASE0;
		$$->cte_table_ = $1;
		
	}
   |	cte_table OP_COMMA cte_table_list  {
		$$ = new CteTableList();
		$$->case_idx_ = CASE1;
		$$->cte_table_ = $1;
		$$->cte_table_list_ = $3;
		
	}
  ;

cte_table:
	cte_table_name AS OP_LP select_stmt OP_RP  {
		$$ = new CteTable();
		$$->case_idx_ = CASE0;
		$$->cte_table_name_ = $1;
		$$->select_stmt_ = $4;
		
	}
  ;

cte_table_name:
	table_name opt_column_name_list_p  {
		$$ = new CteTableName();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $1;
		$$->opt_column_name_list_p_ = $2;
		
	}
  ;

opt_all_or_distinct:
	ALL  {
		$$ = new OptAllOrDistinct();
		$$->case_idx_ = CASE0;
		
	}
   |	DISTINCT  {
		$$ = new OptAllOrDistinct();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptAllOrDistinct();
		$$->case_idx_ = CASE2;
		
	}
  ;

create_table_stmt:
	CREATE opt_temp TABLE opt_if_not_exist table_name opt_table_option_list opt_ignore_or_replace AS select_stmt  {
		$$ = new CreateTableStmt();
		$$->case_idx_ = CASE0;
		$$->opt_temp_ = $2;
		$$->opt_if_not_exist_ = $4;
		$$->table_name_ = $5;
		$$->opt_table_option_list_ = $6;
		$$->opt_ignore_or_replace_ = $7;
		$$->select_stmt_ = $9;
		if($$){
			auto tmp1 = $$->table_name_; 
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
   |	CREATE opt_temp TABLE opt_if_not_exist table_name OP_LP column_def_list opt_table_constraint_list OP_RP opt_table_option_list  {
		$$ = new CreateTableStmt();
		$$->case_idx_ = CASE1;
		$$->opt_temp_ = $2;
		$$->opt_if_not_exist_ = $4;
		$$->table_name_ = $5;
		$$->column_def_list_ = $7;
		$$->opt_table_constraint_list_ = $8;
		$$->opt_table_option_list_ = $10;
		if($$){
			auto tmp1 = $$->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if($$){
			auto tmp1 = $$->column_def_list_; 
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
  ;

create_index_stmt:
	CREATE opt_index_keyword INDEX table_name ON table_name OP_LP indexed_column_list OP_RP opt_index_option opt_extra_option  {
		$$ = new CreateIndexStmt();
		$$->case_idx_ = CASE0;
		$$->opt_index_keyword_ = $2;
		$$->table_name_1_ = $4;
		$$->table_name_2_ = $6;
		$$->indexed_column_list_ = $8;
		$$->opt_index_option_ = $10;
		$$->opt_extra_option_ = $11;
		if($$){
			auto tmp1 = $$->table_name_1_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)128; 
				}
			}
		}

		if($$){
			auto tmp1 = $$->table_name_2_; 
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
  ;

create_trigger_stmt:
	CREATE TRIGGER trigger_name trigger_action_time trigger_events ON table_name FOR EACH ROW trigger_body  {
		$$ = new CreateTriggerStmt();
		$$->case_idx_ = CASE0;
		$$->trigger_name_ = $3;
		$$->trigger_action_time_ = $4;
		$$->trigger_events_ = $5;
		$$->table_name_ = $7;
		$$->trigger_body_ = $11;
		if($$){
			auto tmp1 = $$->trigger_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTriggerName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if($$){
			auto tmp1 = $$->table_name_; 
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
  ;

create_view_stmt:
	CREATE opt_view_algorithm opt_sql_security VIEW view_name opt_column_name_list_p AS select_stmt opt_check_option  {
		$$ = new CreateViewStmt();
		$$->case_idx_ = CASE0;
		$$->opt_view_algorithm_ = $2;
		$$->opt_sql_security_ = $3;
		$$->view_name_ = $5;
		$$->opt_column_name_list_p_ = $6;
		$$->select_stmt_ = $8;
		$$->opt_check_option_ = $9;
		if($$){
			auto tmp1 = $$->view_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 10; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if($$){
			auto tmp1 = $$->opt_column_name_list_p_; 
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
   |	CREATE OR REPLACE opt_view_algorithm opt_sql_security VIEW view_name opt_column_name_list_p AS select_stmt opt_check_option  {
		$$ = new CreateViewStmt();
		$$->case_idx_ = CASE1;
		$$->opt_view_algorithm_ = $4;
		$$->opt_sql_security_ = $5;
		$$->view_name_ = $7;
		$$->opt_column_name_list_p_ = $8;
		$$->select_stmt_ = $10;
		$$->opt_check_option_ = $11;
		if($$){
			auto tmp1 = $$->view_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 10; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if($$){
			auto tmp1 = $$->opt_column_name_list_p_; 
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
  ;

opt_table_option_list:
	table_option_list  {
		$$ = new OptTableOptionList();
		$$->case_idx_ = CASE0;
		$$->table_option_list_ = $1;
		
	}
   |	  {
		$$ = new OptTableOptionList();
		$$->case_idx_ = CASE1;
		
	}
  ;

table_option_list:
	table_option  {
		$$ = new TableOptionList();
		$$->case_idx_ = CASE0;
		$$->table_option_ = $1;
		
	}
   |	table_option opt_op_comma table_option_list  {
		$$ = new TableOptionList();
		$$->case_idx_ = CASE1;
		$$->table_option_ = $1;
		$$->opt_op_comma_ = $2;
		$$->table_option_list_ = $3;
		
	}
  ;

table_option:
	INSERT_METHOD opt_op_equal NO  {
		$$ = new TableOption();
		$$->case_idx_ = CASE0;
		$$->opt_op_equal_ = $2;
		
	}
   |	INSERT_METHOD opt_op_equal FIRST  {
		$$ = new TableOption();
		$$->case_idx_ = CASE1;
		$$->opt_op_equal_ = $2;
		
	}
   |	INSERT_METHOD opt_op_equal LAST  {
		$$ = new TableOption();
		$$->case_idx_ = CASE2;
		$$->opt_op_equal_ = $2;
		
	}
   |	ROW_FORMAT opt_op_equal DEFAULT  {
		$$ = new TableOption();
		$$->case_idx_ = CASE3;
		$$->opt_op_equal_ = $2;
		
	}
   |	ROW_FORMAT opt_op_equal DYNAMIC  {
		$$ = new TableOption();
		$$->case_idx_ = CASE4;
		$$->opt_op_equal_ = $2;
		
	}
   |	ROW_FORMAT opt_op_equal FIXED  {
		$$ = new TableOption();
		$$->case_idx_ = CASE5;
		$$->opt_op_equal_ = $2;
		
	}
   |	ROW_FORMAT opt_op_equal COMPRESSED  {
		$$ = new TableOption();
		$$->case_idx_ = CASE6;
		$$->opt_op_equal_ = $2;
		
	}
   |	ROW_FORMAT opt_op_equal REDUNDANT  {
		$$ = new TableOption();
		$$->case_idx_ = CASE7;
		$$->opt_op_equal_ = $2;
		
	}
   |	ROW_FORMAT opt_op_equal COMPACT  {
		$$ = new TableOption();
		$$->case_idx_ = CASE8;
		$$->opt_op_equal_ = $2;
		
	}
  ;

opt_op_comma:
	OP_COMMA  {
		$$ = new OptOpComma();
		$$->case_idx_ = CASE0;
		
	}
   |	  {
		$$ = new OptOpComma();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_ignore_or_replace:
	IGNORE  {
		$$ = new OptIgnoreOrReplace();
		$$->case_idx_ = CASE0;
		
	}
   |	REPLACE  {
		$$ = new OptIgnoreOrReplace();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptIgnoreOrReplace();
		$$->case_idx_ = CASE2;
		
	}
  ;

opt_view_algorithm:
	ALGORITHM OP_EQUAL UNDEFINED  {
		$$ = new OptViewAlgorithm();
		$$->case_idx_ = CASE0;
		
	}
   |	ALGORITHM OP_EQUAL MERGE  {
		$$ = new OptViewAlgorithm();
		$$->case_idx_ = CASE1;
		
	}
   |	ALGORITHM OP_EQUAL TEMPTABLE  {
		$$ = new OptViewAlgorithm();
		$$->case_idx_ = CASE2;
		
	}
   |	  {
		$$ = new OptViewAlgorithm();
		$$->case_idx_ = CASE3;
		
	}
  ;

opt_sql_security:
	SQL SECURITY DEFINER  {
		$$ = new OptSqlSecurity();
		$$->case_idx_ = CASE0;
		
	}
   |	SQL SECURITY INVOKER  {
		$$ = new OptSqlSecurity();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptSqlSecurity();
		$$->case_idx_ = CASE2;
		
	}
  ;

opt_index_option:
	USING BTREE  {
		$$ = new OptIndexOption();
		$$->case_idx_ = CASE0;
		
	}
   |	USING HASH  {
		$$ = new OptIndexOption();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptIndexOption();
		$$->case_idx_ = CASE2;
		
	}
  ;

opt_extra_option:
	index_algorithm_option  {
		$$ = new OptExtraOption();
		$$->case_idx_ = CASE0;
		$$->index_algorithm_option_ = $1;
		
	}
   |	lock_option  {
		$$ = new OptExtraOption();
		$$->case_idx_ = CASE1;
		$$->lock_option_ = $1;
		
	}
   |	  {
		$$ = new OptExtraOption();
		$$->case_idx_ = CASE2;
		
	}
  ;

index_algorithm_option:
	ALGORITHM opt_op_equal DEFAULT  {
		$$ = new IndexAlgorithmOption();
		$$->case_idx_ = CASE0;
		$$->opt_op_equal_ = $2;
		
	}
   |	ALGORITHM opt_op_equal INPLACE  {
		$$ = new IndexAlgorithmOption();
		$$->case_idx_ = CASE1;
		$$->opt_op_equal_ = $2;
		
	}
   |	ALGORITHM opt_op_equal COPY  {
		$$ = new IndexAlgorithmOption();
		$$->case_idx_ = CASE2;
		$$->opt_op_equal_ = $2;
		
	}
  ;

lock_option:
	LOCK opt_op_equal DEFAULT  {
		$$ = new LockOption();
		$$->case_idx_ = CASE0;
		$$->opt_op_equal_ = $2;
		
	}
   |	LOCK opt_op_equal NONE  {
		$$ = new LockOption();
		$$->case_idx_ = CASE1;
		$$->opt_op_equal_ = $2;
		
	}
   |	LOCK opt_op_equal SHARED  {
		$$ = new LockOption();
		$$->case_idx_ = CASE2;
		$$->opt_op_equal_ = $2;
		
	}
   |	LOCK opt_op_equal EXCLUSIVE  {
		$$ = new LockOption();
		$$->case_idx_ = CASE3;
		$$->opt_op_equal_ = $2;
		
	}
  ;

opt_op_equal:
	OP_EQUAL  {
		$$ = new OptOpEqual();
		$$->case_idx_ = CASE0;
		
	}
   |	  {
		$$ = new OptOpEqual();
		$$->case_idx_ = CASE1;
		
	}
  ;

trigger_events:
	DELETE  {
		$$ = new TriggerEvents();
		$$->case_idx_ = CASE0;
		
	}
   |	INSERT  {
		$$ = new TriggerEvents();
		$$->case_idx_ = CASE1;
		
	}
   |	UPDATE  {
		$$ = new TriggerEvents();
		$$->case_idx_ = CASE2;
		
	}
  ;

trigger_name:
	identifier  {
		$$ = new TriggerName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
		
	}
  ;

trigger_action_time:
	BEFORE  {
		$$ = new TriggerActionTime();
		$$->case_idx_ = CASE0;
		
	}
   |	AFTER  {
		$$ = new TriggerActionTime();
		$$->case_idx_ = CASE1;
		
	}
  ;

drop_index_stmt:
	DROP INDEX table_name opt_extra_option  {
		$$ = new DropIndexStmt();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $3;
		$$->opt_extra_option_ = $4;
		if($$){
			auto tmp1 = $$->table_name_; 
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
  ;

drop_table_stmt:
	DROP opt_temp TABLE opt_if_exist table_name opt_restrict_or_cascade  {
		$$ = new DropTableStmt();
		$$->case_idx_ = CASE0;
		$$->opt_temp_ = $2;
		$$->opt_if_exist_ = $4;
		$$->table_name_ = $5;
		$$->opt_restrict_or_cascade_ = $6;
		if($$){
			auto tmp1 = $$->table_name_; 
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
  ;

opt_restrict_or_cascade:
	RESTRICT  {
		$$ = new OptRestrictOrCascade();
		$$->case_idx_ = CASE0;
		
	}
   |	CASCADE  {
		$$ = new OptRestrictOrCascade();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptRestrictOrCascade();
		$$->case_idx_ = CASE2;
		
	}
  ;

drop_trigger_stmt:
	DROP TRIGGER opt_if_exist trigger_name  {
		$$ = new DropTriggerStmt();
		$$->case_idx_ = CASE0;
		$$->opt_if_exist_ = $3;
		$$->trigger_name_ = $4;
		if($$){
			auto tmp1 = $$->trigger_name_; 
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
  ;

drop_view_stmt:
	DROP VIEW opt_if_exist view_name opt_restrict_or_cascade  {
		$$ = new DropViewStmt();
		$$->case_idx_ = CASE0;
		$$->opt_if_exist_ = $3;
		$$->view_name_ = $4;
		$$->opt_restrict_or_cascade_ = $5;
		if($$){
			auto tmp1 = $$->view_name_; 
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
  ;

insert_stmt:
	opt_with_clause INSERT INTO table_name opt_as_alias insert_rest opt_on_conflict  {
		$$ = new InsertStmt();
		$$->case_idx_ = CASE0;
		$$->opt_with_clause_ = $1;
		$$->table_name_ = $4;
		$$->opt_as_alias_ = $5;
		$$->insert_rest_ = $6;
		$$->opt_on_conflict_ = $7;
		
	}
  ;

insert_rest:
	opt_column_name_list_p select_no_parens  {
		$$ = new InsertRest();
		$$->case_idx_ = CASE0;
		$$->opt_column_name_list_p_ = $1;
		$$->select_no_parens_ = $2;
		
	}
   |	opt_column_name_list_p DEFAULT VALUES  {
		$$ = new InsertRest();
		$$->case_idx_ = CASE1;
		$$->opt_column_name_list_p_ = $1;
		
	}
   |	opt_column_name_list_p VALUES super_values_list  {
		$$ = new InsertRest();
		$$->case_idx_ = CASE2;
		$$->opt_column_name_list_p_ = $1;
		$$->super_values_list_ = $3;
		
	}
  ;

super_values_list:
	values_list  {
		$$ = new SuperValuesList();
		$$->case_idx_ = CASE0;
		$$->values_list_ = $1;
		
	}
   |	values_list OP_COMMA super_values_list  {
		$$ = new SuperValuesList();
		$$->case_idx_ = CASE1;
		$$->values_list_ = $1;
		$$->super_values_list_ = $3;
		
	}
  ;

values_list:
	OP_LP expr_list OP_RP  {
		$$ = new ValuesList();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $2;
		
	}
  ;

opt_on_conflict:
	ON CONFLICT opt_conflict_expr DO NOTHING  {
		$$ = new OptOnConflict();
		$$->case_idx_ = CASE0;
		$$->opt_conflict_expr_ = $3;
		
	}
   |	ON CONFLICT opt_conflict_expr DO UPDATE set_clause_list where_clause  {
		$$ = new OptOnConflict();
		$$->case_idx_ = CASE1;
		$$->opt_conflict_expr_ = $3;
		$$->set_clause_list_ = $6;
		$$->where_clause_ = $7;
		
	}
   |	  {
		$$ = new OptOnConflict();
		$$->case_idx_ = CASE2;
		
	}
  ;

opt_conflict_expr:
	OP_LP indexed_column_list OP_RP where_clause  {
		$$ = new OptConflictExpr();
		$$->case_idx_ = CASE0;
		$$->indexed_column_list_ = $2;
		$$->where_clause_ = $4;
		
	}
   |	  {
		$$ = new OptConflictExpr();
		$$->case_idx_ = CASE1;
		
	}
  ;

indexed_column_list:
	indexed_column  {
		$$ = new IndexedColumnList();
		$$->case_idx_ = CASE0;
		$$->indexed_column_ = $1;
		
	}
   |	indexed_column OP_COMMA indexed_column_list  {
		$$ = new IndexedColumnList();
		$$->case_idx_ = CASE1;
		$$->indexed_column_ = $1;
		$$->indexed_column_list_ = $3;
		
	}
  ;

indexed_column:
	expr opt_order_behavior  {
		$$ = new IndexedColumn();
		$$->case_idx_ = CASE0;
		$$->expr_ = $1;
		$$->opt_order_behavior_ = $2;
		
	}
  ;

update_stmt:
	UPDATE IGNORE table_name opt_as_alias SET set_clause_list opt_where_clause opt_order_clause opt_limit_row_count  {
		$$ = new UpdateStmt();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $3;
		$$->opt_as_alias_ = $4;
		$$->set_clause_list_ = $6;
		$$->opt_where_clause_ = $7;
		$$->opt_order_clause_ = $8;
		$$->opt_limit_row_count_ = $9;
		
	}
   |	UPDATE table_name opt_as_alias SET set_clause_list opt_where_clause opt_order_clause opt_limit_row_count  {
		$$ = new UpdateStmt();
		$$->case_idx_ = CASE1;
		$$->table_name_ = $2;
		$$->opt_as_alias_ = $3;
		$$->set_clause_list_ = $5;
		$$->opt_where_clause_ = $6;
		$$->opt_order_clause_ = $7;
		$$->opt_limit_row_count_ = $8;
		
	}
  ;

alter_action:
	RENAME TO table_name  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $3;
		if($$){
			auto tmp1 = $$->table_name_; 
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
   |	RENAME opt_column column_name TO column_name  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE1;
		$$->opt_column_ = $2;
		$$->column_name_1_ = $3;
		$$->column_name_2_ = $5;
		if($$){
			auto tmp1 = $$->column_name_1_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataColumnName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}

		if($$){
			auto tmp1 = $$->column_name_2_; 
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
   |	ADD opt_column column_def  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE2;
		$$->opt_column_ = $2;
		$$->column_def_ = $3;
		if($$){
			auto tmp1 = $$->column_def_; 
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
   |	DROP opt_column column_name  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE3;
		$$->opt_column_ = $2;
		$$->column_name_1_ = $3;
		if($$){
			auto tmp1 = $$->column_name_1_; 
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
   |	alter_constant_action  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE4;
		$$->alter_constant_action_ = $1;
		
	}
  ;

alter_constant_action:
	DROP PRIMARY KEY  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE0;
		
	}
   |	FORCE  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE1;
		
	}
   |	DISABLE KEYS  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE2;
		
	}
   |	ENABLE KEYS  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE3;
		
	}
   |	lock_option  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE4;
		$$->lock_option_ = $1;
		
	}
   |	WITH VALIDATION  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE5;
		
	}
   |	WITHOUT VALIDATION  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE6;
		
	}
  ;

column_def_list:
	column_def  {
		$$ = new ColumnDefList();
		$$->case_idx_ = CASE0;
		$$->column_def_ = $1;
		
	}
   |	column_def OP_COMMA column_def_list  {
		$$ = new ColumnDefList();
		$$->case_idx_ = CASE1;
		$$->column_def_ = $1;
		$$->column_def_list_ = $3;
		
	}
  ;

column_def:
	identifier type_name opt_column_constraint_list  {
		$$ = new ColumnDef();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
		$$->type_name_ = $2;
		$$->opt_column_constraint_list_ = $3;
		if($$){
			auto tmp1 = $$->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataColumnName; 
				tmp1->scope_ = 2; 
				tmp1->data_flag_ =(DATAFLAG)1; 
			}
		}


	}
  ;

opt_column_constraint_list:
	column_constraint_list opt_check opt_reference_clause  {
		$$ = new OptColumnConstraintList();
		$$->case_idx_ = CASE0;
		$$->column_constraint_list_ = $1;
		$$->opt_check_ = $2;
		$$->opt_reference_clause_ = $3;
		
	}
   |	  {
		$$ = new OptColumnConstraintList();
		$$->case_idx_ = CASE1;
		
	}
  ;

column_constraint_list:
	column_constraint  {
		$$ = new ColumnConstraintList();
		$$->case_idx_ = CASE0;
		$$->column_constraint_ = $1;
		
	}
   |	column_constraint column_constraint_list  {
		$$ = new ColumnConstraintList();
		$$->case_idx_ = CASE1;
		$$->column_constraint_ = $1;
		$$->column_constraint_list_ = $2;
		
	}
  ;

column_constraint:
	constraint_type  {
		$$ = new ColumnConstraint();
		$$->case_idx_ = CASE0;
		$$->constraint_type_ = $1;
		
	}
  ;

opt_reference_clause:
	opt_foreign_key reference_clause  {
		$$ = new OptReferenceClause();
		$$->case_idx_ = CASE0;
		$$->opt_foreign_key_ = $1;
		$$->reference_clause_ = $2;
		
	}
   |	  {
		$$ = new OptReferenceClause();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_check:
	CHECK OP_LP expr OP_RP opt_enforced  {
		$$ = new OptCheck();
		$$->case_idx_ = CASE0;
		$$->expr_ = $3;
		$$->opt_enforced_ = $5;
		
	}
   |	  {
		$$ = new OptCheck();
		$$->case_idx_ = CASE1;
		
	}
  ;

constraint_type:
	PRIMARY KEY  {
		$$ = new ConstraintType();
		$$->case_idx_ = CASE0;
		
	}
   |	NOT NULL  {
		$$ = new ConstraintType();
		$$->case_idx_ = CASE1;
		
	}
   |	UNIQUE  {
		$$ = new ConstraintType();
		$$->case_idx_ = CASE2;
		
	}
  ;

reference_clause:
	REFERENCES table_name opt_column_name_list_p opt_foreign_key_actions opt_constraint_attribute_spec  {
		$$ = new ReferenceClause();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $2;
		$$->opt_column_name_list_p_ = $3;
		$$->opt_foreign_key_actions_ = $4;
		$$->opt_constraint_attribute_spec_ = $5;
		if($$){
			auto tmp1 = $$->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 100; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}

		if($$){
			auto tmp1 = $$->opt_column_name_list_p_; 
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
  ;

opt_foreign_key:
	FOREIGN KEY  {
		$$ = new OptForeignKey();
		$$->case_idx_ = CASE0;
		
	}
   |	  {
		$$ = new OptForeignKey();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_foreign_key_actions:
	foreign_key_actions  {
		$$ = new OptForeignKeyActions();
		$$->case_idx_ = CASE0;
		$$->foreign_key_actions_ = $1;
		
	}
   |	  {
		$$ = new OptForeignKeyActions();
		$$->case_idx_ = CASE1;
		
	}
  ;

foreign_key_actions:
	MATCH FULL  {
		$$ = new ForeignKeyActions();
		$$->case_idx_ = CASE0;
		
	}
   |	MATCH PARTIAL  {
		$$ = new ForeignKeyActions();
		$$->case_idx_ = CASE1;
		
	}
   |	MATCH SIMPLE  {
		$$ = new ForeignKeyActions();
		$$->case_idx_ = CASE2;
		
	}
   |	ON UPDATE key_actions  {
		$$ = new ForeignKeyActions();
		$$->case_idx_ = CASE3;
		$$->key_actions_ = $3;
		
	}
   |	ON DELETE key_actions  {
		$$ = new ForeignKeyActions();
		$$->case_idx_ = CASE4;
		$$->key_actions_ = $3;
		
	}
  ;

key_actions:
	SET NULL  {
		$$ = new KeyActions();
		$$->case_idx_ = CASE0;
		
	}
   |	SET DEFAULT  {
		$$ = new KeyActions();
		$$->case_idx_ = CASE1;
		
	}
   |	CASCADE  {
		$$ = new KeyActions();
		$$->case_idx_ = CASE2;
		
	}
   |	RESTRICT  {
		$$ = new KeyActions();
		$$->case_idx_ = CASE3;
		
	}
   |	NO ACTION  {
		$$ = new KeyActions();
		$$->case_idx_ = CASE4;
		
	}
  ;

opt_constraint_attribute_spec:
	DEFFERRABLE opt_initial_time  {
		$$ = new OptConstraintAttributeSpec();
		$$->case_idx_ = CASE0;
		$$->opt_initial_time_ = $2;
		
	}
   |	NOT DEFFERRABLE opt_initial_time  {
		$$ = new OptConstraintAttributeSpec();
		$$->case_idx_ = CASE1;
		$$->opt_initial_time_ = $3;
		
	}
   |	  {
		$$ = new OptConstraintAttributeSpec();
		$$->case_idx_ = CASE2;
		
	}
  ;

opt_initial_time:
	INITIALLY DEFERRED  {
		$$ = new OptInitialTime();
		$$->case_idx_ = CASE0;
		
	}
   |	INITIALLY IMMEDIATE  {
		$$ = new OptInitialTime();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptInitialTime();
		$$->case_idx_ = CASE2;
		
	}
  ;

constraint_name:
	CONSTRAINT name  {
		$$ = new ConstraintName();
		$$->case_idx_ = CASE0;
		$$->name_ = $2;
		
	}
  ;

opt_temp:
	TEMPORARY  {
		$$ = new OptTemp();
		$$->case_idx_ = CASE0;
		
	}
   |	  {
		$$ = new OptTemp();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_check_option:
	WITH CHECK OPTION  {
		$$ = new OptCheckOption();
		$$->case_idx_ = CASE0;
		
	}
   |	WITH CASCADED CHECK OPTION  {
		$$ = new OptCheckOption();
		$$->case_idx_ = CASE1;
		
	}
   |	WITH LOCAL CHECK OPTION  {
		$$ = new OptCheckOption();
		$$->case_idx_ = CASE2;
		
	}
   |	  {
		$$ = new OptCheckOption();
		$$->case_idx_ = CASE3;
		
	}
  ;

opt_column_name_list_p:
	OP_LP column_name_list OP_RP  {
		$$ = new OptColumnNameListP();
		$$->case_idx_ = CASE0;
		$$->column_name_list_ = $2;
		
	}
   |	  {
		$$ = new OptColumnNameListP();
		$$->case_idx_ = CASE1;
		
	}
  ;

set_clause_list:
	set_clause  {
		$$ = new SetClauseList();
		$$->case_idx_ = CASE0;
		$$->set_clause_ = $1;
		
	}
   |	set_clause OP_COMMA set_clause_list  {
		$$ = new SetClauseList();
		$$->case_idx_ = CASE1;
		$$->set_clause_ = $1;
		$$->set_clause_list_ = $3;
		
	}
  ;

set_clause:
	column_name OP_EQUAL expr  {
		$$ = new SetClause();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $1;
		$$->expr_ = $3;
		
	}
   |	OP_LP column_name_list OP_RP OP_EQUAL expr  {
		$$ = new SetClause();
		$$->case_idx_ = CASE1;
		$$->column_name_list_ = $2;
		$$->expr_ = $5;
		
	}
  ;

opt_as_alias:
	as_alias  {
		$$ = new OptAsAlias();
		$$->case_idx_ = CASE0;
		$$->as_alias_ = $1;
		
	}
   |	  {
		$$ = new OptAsAlias();
		$$->case_idx_ = CASE1;
		
	}
  ;

expr:
	operand  {
		$$ = new Expr();
		$$->case_idx_ = CASE0;
		$$->operand_ = $1;
		
	}
   |	between_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE1;
		$$->between_expr_ = $1;
		
	}
   |	exists_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE2;
		$$->exists_expr_ = $1;
		
	}
   |	in_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE3;
		$$->in_expr_ = $1;
		
	}
   |	cast_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE4;
		$$->cast_expr_ = $1;
		
	}
   |	logic_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE5;
		$$->logic_expr_ = $1;
		
	}
  ;

operand:
	OP_LP expr_list OP_RP  {
		$$ = new Operand();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $2;
		
	}
   |	array_index  {
		$$ = new Operand();
		$$->case_idx_ = CASE1;
		$$->array_index_ = $1;
		
	}
   |	scalar_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE2;
		$$->scalar_expr_ = $1;
		
	}
   |	unary_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE3;
		$$->unary_expr_ = $1;
		
	}
   |	binary_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE4;
		$$->binary_expr_ = $1;
		
	}
   |	case_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE5;
		$$->case_expr_ = $1;
		
	}
   |	extract_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE6;
		$$->extract_expr_ = $1;
		
	}
   |	array_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE7;
		$$->array_expr_ = $1;
		
	}
   |	function_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE8;
		$$->function_expr_ = $1;
		
	}
   |	OP_LP select_no_parens OP_RP  {
		$$ = new Operand();
		$$->case_idx_ = CASE9;
		$$->select_no_parens_ = $2;
		
	}
  ;

cast_expr:
	CAST OP_LP expr AS type_name OP_RP  {
		$$ = new CastExpr();
		$$->case_idx_ = CASE0;
		$$->expr_ = $3;
		$$->type_name_ = $5;
		
	}
  ;

scalar_expr:
	column_name  {
		$$ = new ScalarExpr();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $1;
		
	}
   |	literal  {
		$$ = new ScalarExpr();
		$$->case_idx_ = CASE1;
		$$->literal_ = $1;
		
	}
  ;

unary_expr:
	OP_SUB operand %prec OP_SUB {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE0;
		$$->operand_ = $2;
		
	}
   |	NOT operand %prec NOT {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE1;
		$$->operand_ = $2;
		
	}
   |	operand ISNULL %prec ISNULL {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE2;
		$$->operand_ = $1;
		
	}
   |	operand IS NULL  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE3;
		$$->operand_ = $1;
		
	}
   |	operand IS NOT NULL  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE4;
		$$->operand_ = $1;
		
	}
   |	NULL  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE5;
		
	}
   |	OP_MUL  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE6;
		
	}
  ;

binary_expr:
	comp_expr  {
		$$ = new BinaryExpr();
		$$->case_idx_ = CASE0;
		$$->comp_expr_ = $1;
		
	}
   |	operand binary_op operand %prec OP_ADD {
		$$ = new BinaryExpr();
		$$->case_idx_ = CASE1;
		$$->operand_1_ = $1;
		$$->binary_op_ = $2;
		$$->operand_2_ = $3;
		
	}
   |	operand LIKE operand  {
		$$ = new BinaryExpr();
		$$->case_idx_ = CASE2;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
		
	}
   |	operand NOT LIKE operand  {
		$$ = new BinaryExpr();
		$$->case_idx_ = CASE3;
		$$->operand_1_ = $1;
		$$->operand_2_ = $4;
		
	}
  ;

logic_expr:
	expr AND expr  {
		$$ = new LogicExpr();
		$$->case_idx_ = CASE0;
		$$->expr_1_ = $1;
		$$->expr_2_ = $3;
		
	}
   |	expr OR expr  {
		$$ = new LogicExpr();
		$$->case_idx_ = CASE1;
		$$->expr_1_ = $1;
		$$->expr_2_ = $3;
		
	}
  ;

in_expr:
	operand opt_not IN OP_LP select_no_parens OP_RP  {
		$$ = new InExpr();
		$$->case_idx_ = CASE0;
		$$->operand_ = $1;
		$$->opt_not_ = $2;
		$$->select_no_parens_ = $5;
		
	}
   |	operand opt_not IN OP_LP expr_list OP_RP  {
		$$ = new InExpr();
		$$->case_idx_ = CASE1;
		$$->operand_ = $1;
		$$->opt_not_ = $2;
		$$->expr_list_ = $5;
		
	}
   |	operand opt_not IN table_name  {
		$$ = new InExpr();
		$$->case_idx_ = CASE2;
		$$->operand_ = $1;
		$$->opt_not_ = $2;
		$$->table_name_ = $4;
		
	}
  ;

case_expr:
	CASE expr case_list END  {
		$$ = new CaseExpr();
		$$->case_idx_ = CASE0;
		$$->expr_1_ = $2;
		$$->case_list_ = $3;
		
	}
   |	CASE case_list END  {
		$$ = new CaseExpr();
		$$->case_idx_ = CASE1;
		$$->case_list_ = $2;
		
	}
   |	CASE expr case_list ELSE expr END  {
		$$ = new CaseExpr();
		$$->case_idx_ = CASE2;
		$$->expr_1_ = $2;
		$$->case_list_ = $3;
		$$->expr_2_ = $5;
		
	}
   |	CASE case_list ELSE expr END  {
		$$ = new CaseExpr();
		$$->case_idx_ = CASE3;
		$$->case_list_ = $2;
		$$->expr_1_ = $4;
		
	}
  ;

between_expr:
	operand BETWEEN operand AND operand %prec BETWEEN {
		$$ = new BetweenExpr();
		$$->case_idx_ = CASE0;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
		$$->operand_3_ = $5;
		
	}
   |	operand NOT BETWEEN operand AND operand %prec NOT {
		$$ = new BetweenExpr();
		$$->case_idx_ = CASE1;
		$$->operand_1_ = $1;
		$$->operand_2_ = $4;
		$$->operand_3_ = $6;
		
	}
  ;

exists_expr:
	opt_not EXISTS OP_LP select_no_parens OP_RP  {
		$$ = new ExistsExpr();
		$$->case_idx_ = CASE0;
		$$->opt_not_ = $1;
		$$->select_no_parens_ = $4;
		
	}
  ;

function_expr:
	function_name OP_LP OP_RP opt_filter_clause opt_over_clause  {
		$$ = new FunctionExpr();
		$$->case_idx_ = CASE0;
		$$->function_name_ = $1;
		$$->opt_filter_clause_ = $4;
		$$->opt_over_clause_ = $5;
		
	}
   |	function_name OP_LP opt_distinct expr_list OP_RP opt_filter_clause opt_over_clause  {
		$$ = new FunctionExpr();
		$$->case_idx_ = CASE1;
		$$->function_name_ = $1;
		$$->opt_distinct_ = $3;
		$$->expr_list_ = $4;
		$$->opt_filter_clause_ = $6;
		$$->opt_over_clause_ = $7;
		
	}
  ;

opt_distinct:
	DISTINCT  {
		$$ = new OptDistinct();
		$$->case_idx_ = CASE0;
		
	}
   |	  {
		$$ = new OptDistinct();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_filter_clause:
	FILTER OP_LP WHERE expr OP_RP  {
		$$ = new OptFilterClause();
		$$->case_idx_ = CASE0;
		$$->expr_ = $4;
		
	}
   |	  {
		$$ = new OptFilterClause();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_over_clause:
	OVER OP_LP window OP_RP  {
		$$ = new OptOverClause();
		$$->case_idx_ = CASE0;
		$$->window_ = $3;
		
	}
   |	OVER window_name  {
		$$ = new OptOverClause();
		$$->case_idx_ = CASE1;
		$$->window_name_ = $2;
		
	}
   |	  {
		$$ = new OptOverClause();
		$$->case_idx_ = CASE2;
		
	}
  ;

case_list:
	case_clause  {
		$$ = new CaseList();
		$$->case_idx_ = CASE0;
		$$->case_clause_ = $1;
		
	}
   |	case_clause case_list  {
		$$ = new CaseList();
		$$->case_idx_ = CASE1;
		$$->case_clause_ = $1;
		$$->case_list_ = $2;
		
	}
  ;

case_clause:
	WHEN expr THEN expr  {
		$$ = new CaseClause();
		$$->case_idx_ = CASE0;
		$$->expr_1_ = $2;
		$$->expr_2_ = $4;
		
	}
  ;

comp_expr:
	operand OP_EQUAL operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE0;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
		
	}
   |	operand OP_NOTEQUAL operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE1;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
		
	}
   |	operand OP_GREATERTHAN operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE2;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
		
	}
   |	operand OP_LESSTHAN operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE3;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
		
	}
   |	operand OP_LESSEQ operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE4;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
		
	}
   |	operand OP_GREATEREQ operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE5;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
		
	}
  ;

extract_expr:
	EXTRACT OP_LP datetime_field FROM expr OP_RP  {
		$$ = new ExtractExpr();
		$$->case_idx_ = CASE0;
		$$->datetime_field_ = $3;
		$$->expr_ = $5;
		
	}
  ;

datetime_field:
	SECOND  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE0;
		
	}
   |	MINUTE  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE1;
		
	}
   |	HOUR  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE2;
		
	}
   |	DAY  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE3;
		
	}
   |	MONTH  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE4;
		
	}
   |	YEAR  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE5;
		
	}
  ;

array_expr:
	ARRAY OP_LBRACKET expr_list OP_RBRACKET  {
		$$ = new ArrayExpr();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $3;
		
	}
  ;

array_index:
	operand OP_LBRACKET int_literal OP_RBRACKET  {
		$$ = new ArrayIndex();
		$$->case_idx_ = CASE0;
		$$->operand_ = $1;
		$$->int_literal_ = $3;
		
	}
  ;

literal:
	string_literal  {
		$$ = new Literal();
		$$->case_idx_ = CASE0;
		$$->string_literal_ = $1;
		
	}
   |	bool_literal  {
		$$ = new Literal();
		$$->case_idx_ = CASE1;
		$$->bool_literal_ = $1;
		
	}
   |	num_literal  {
		$$ = new Literal();
		$$->case_idx_ = CASE2;
		$$->num_literal_ = $1;
		
	}
  ;

string_literal:
	STRINGLITERAL  {
		$$ = new StringLiteral();
		$$->string_val_ = $1;
		free($1);
		
	}
  ;

bool_literal:
	TRUE  {
		$$ = new BoolLiteral();
		$$->case_idx_ = CASE0;
		
	}
   |	FALSE  {
		$$ = new BoolLiteral();
		$$->case_idx_ = CASE1;
		
	}
  ;

num_literal:
	int_literal  {
		$$ = new NumLiteral();
		$$->case_idx_ = CASE0;
		$$->int_literal_ = $1;
		
	}
   |	float_literal  {
		$$ = new NumLiteral();
		$$->case_idx_ = CASE1;
		$$->float_literal_ = $1;
		
	}
  ;

int_literal:
	INTLITERAL  {
		$$ = new IntLiteral();
		$$->int_val_ = $1;
		
	}
  ;

float_literal:
	FLOATLITERAL  {
		$$ = new FloatLiteral();
		$$->float_val_ = $1;
		
	}
  ;

opt_column:
	COLUMN  {
		$$ = new OptColumn();
		$$->case_idx_ = CASE0;
		
	}
   |	  {
		$$ = new OptColumn();
		$$->case_idx_ = CASE1;
		
	}
  ;

trigger_body:
	drop_stmt  {
		$$ = new TriggerBody();
		$$->case_idx_ = CASE0;
		$$->drop_stmt_ = $1;
		
	}
   |	update_stmt  {
		$$ = new TriggerBody();
		$$->case_idx_ = CASE1;
		$$->update_stmt_ = $1;
		
	}
   |	insert_stmt  {
		$$ = new TriggerBody();
		$$->case_idx_ = CASE2;
		$$->insert_stmt_ = $1;
		
	}
   |	alter_stmt  {
		$$ = new TriggerBody();
		$$->case_idx_ = CASE3;
		$$->alter_stmt_ = $1;
		
	}
  ;

opt_if_not_exist:
	IF NOT EXISTS  {
		$$ = new OptIfNotExist();
		$$->case_idx_ = CASE0;
		
	}
   |	  {
		$$ = new OptIfNotExist();
		$$->case_idx_ = CASE1;
		
	}
  ;

opt_if_exist:
	IF EXISTS  {
		$$ = new OptIfExist();
		$$->case_idx_ = CASE0;
		
	}
   |	  {
		$$ = new OptIfExist();
		$$->case_idx_ = CASE1;
		
	}
  ;

identifier:
	IDENTIFIER  {
		$$ = new Identifier();
		$$->string_val_ = $1;
		free($1);
		
	}
  ;

as_alias:
	AS identifier  {
		$$ = new AsAlias();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $2;
		if($$){
			auto tmp1 = $$->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataAliasName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)1; 
			}
		}


	}
  ;

table_name:
	identifier  {
		$$ = new TableName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
		if($$){
			auto tmp1 = $$->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataTableName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}


	}
  ;

column_name:
	identifier  {
		$$ = new ColumnName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
		if($$){
			auto tmp1 = $$->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataColumnName; 
				tmp1->scope_ = 2; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}


	}
  ;

opt_index_keyword:
	UNIQUE  {
		$$ = new OptIndexKeyword();
		$$->case_idx_ = CASE0;
		
	}
   |	FULLTEXT  {
		$$ = new OptIndexKeyword();
		$$->case_idx_ = CASE1;
		
	}
   |	SPATIAL  {
		$$ = new OptIndexKeyword();
		$$->case_idx_ = CASE2;
		
	}
   |	  {
		$$ = new OptIndexKeyword();
		$$->case_idx_ = CASE3;
		
	}
  ;

view_name:
	identifier  {
		$$ = new ViewName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
		
	}
  ;

function_name:
	identifier  {
		$$ = new FunctionName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
		if($$){
			auto tmp1 = $$->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataFunctionName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)4; 
			}
		}


	}
  ;

binary_op:
	OP_ADD  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE0;
		
	}
   |	OP_SUB  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE1;
		
	}
   |	OP_DIVIDE  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE2;
		
	}
   |	OP_MOD  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE3;
		
	}
   |	OP_MUL  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE4;
		
	}
   |	OP_XOR  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE5;
		
	}
  ;

opt_not:
	NOT  {
		$$ = new OptNot();
		$$->case_idx_ = CASE0;
		
	}
   |	  {
		$$ = new OptNot();
		$$->case_idx_ = CASE1;
		
	}
  ;

name:
	identifier  {
		$$ = new Name();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
		
	}
  ;

type_name:
	numeric_type  {
		$$ = new TypeName();
		$$->case_idx_ = CASE0;
		$$->numeric_type_ = $1;
		
	}
   |	character_type  {
		$$ = new TypeName();
		$$->case_idx_ = CASE1;
		$$->character_type_ = $1;
		
	}
  ;

character_type:
	character_with_length  {
		$$ = new CharacterType();
		$$->case_idx_ = CASE0;
		$$->character_with_length_ = $1;
		
	}
   |	character_without_length  {
		$$ = new CharacterType();
		$$->case_idx_ = CASE1;
		$$->character_without_length_ = $1;
		
	}
  ;

character_with_length:
	character_conflicta OP_LP int_literal OP_RP  {
		$$ = new CharacterWithLength();
		$$->case_idx_ = CASE0;
		$$->character_conflicta_ = $1;
		$$->int_literal_ = $3;
		
	}
  ;

character_without_length:
	character_conflicta  {
		$$ = new CharacterWithoutLength();
		$$->case_idx_ = CASE0;
		$$->character_conflicta_ = $1;
		
	}
   |	SET  {
		$$ = new CharacterWithoutLength();
		$$->case_idx_ = CASE1;
		
	}
   |	ENUM  {
		$$ = new CharacterWithoutLength();
		$$->case_idx_ = CASE2;
		
	}
   |	BINARY  {
		$$ = new CharacterWithoutLength();
		$$->case_idx_ = CASE3;
		
	}
  ;

character_conflicta:
	CHARACTER  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE0;
		
	}
   |	CHAR  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE1;
		
	}
   |	VARCHAR  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE2;
		
	}
   |	TEXT  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE3;
		
	}
   |	TINYTEXT  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE4;
		
	}
   |	MEDIUMTEXT  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE5;
		
	}
   |	LONGTEXT  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE6;
		
	}
   |	NATIONAL CHARACTER  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE7;
		
	}
   |	NATIONAL CHAR  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE8;
		
	}
   |	NCHAR  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE9;
		
	}
  ;

numeric_type:
	INT  {
		$$ = new NumericType();
		$$->case_idx_ = CASE0;
		
	}
   |	INTEGER  {
		$$ = new NumericType();
		$$->case_idx_ = CASE1;
		
	}
   |	SMALLINT  {
		$$ = new NumericType();
		$$->case_idx_ = CASE2;
		
	}
   |	BIGINT  {
		$$ = new NumericType();
		$$->case_idx_ = CASE3;
		
	}
   |	REAL  {
		$$ = new NumericType();
		$$->case_idx_ = CASE4;
		
	}
   |	FLOAT  {
		$$ = new NumericType();
		$$->case_idx_ = CASE5;
		
	}
   |	FIXED  {
		$$ = new NumericType();
		$$->case_idx_ = CASE6;
		
	}
   |	DOUBLE  {
		$$ = new NumericType();
		$$->case_idx_ = CASE7;
		
	}
   |	DOUBLE PRECISION  {
		$$ = new NumericType();
		$$->case_idx_ = CASE8;
		
	}
   |	DECIMAL  {
		$$ = new NumericType();
		$$->case_idx_ = CASE9;
		
	}
   |	DEC  {
		$$ = new NumericType();
		$$->case_idx_ = CASE10;
		
	}
   |	NUMERIC  {
		$$ = new NumericType();
		$$->case_idx_ = CASE11;
		
	}
   |	BOOLEAN  {
		$$ = new NumericType();
		$$->case_idx_ = CASE12;
		
	}
  ;

opt_table_constraint_list:
	table_constraint_list  {
		$$ = new OptTableConstraintList();
		$$->case_idx_ = CASE0;
		$$->table_constraint_list_ = $1;
		
	}
   |	  {
		$$ = new OptTableConstraintList();
		$$->case_idx_ = CASE1;
		
	}
  ;

table_constraint_list:
	table_constraint  {
		$$ = new TableConstraintList();
		$$->case_idx_ = CASE0;
		$$->table_constraint_ = $1;
		
	}
   |	table_constraint OP_COMMA table_constraint_list  {
		$$ = new TableConstraintList();
		$$->case_idx_ = CASE1;
		$$->table_constraint_ = $1;
		$$->table_constraint_list_ = $3;
		
	}
  ;

table_constraint:
	constraint_name PRIMARY KEY OP_LP indexed_column_list OP_RP  {
		$$ = new TableConstraint();
		$$->case_idx_ = CASE0;
		$$->constraint_name_ = $1;
		$$->indexed_column_list_ = $5;
		
	}
   |	constraint_name UNIQUE OP_LP indexed_column_list OP_RP  {
		$$ = new TableConstraint();
		$$->case_idx_ = CASE1;
		$$->constraint_name_ = $1;
		$$->indexed_column_list_ = $4;
		
	}
   |	constraint_name CHECK OP_LP expr OP_RP opt_enforced  {
		$$ = new TableConstraint();
		$$->case_idx_ = CASE2;
		$$->constraint_name_ = $1;
		$$->expr_ = $4;
		$$->opt_enforced_ = $6;
		
	}
   |	constraint_name FOREIGN KEY OP_LP column_name_list OP_RP reference_clause  {
		$$ = new TableConstraint();
		$$->case_idx_ = CASE3;
		$$->constraint_name_ = $1;
		$$->column_name_list_ = $5;
		$$->reference_clause_ = $7;
		if($$){
			auto tmp1 = $$->column_name_list_; 
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
  ;

opt_enforced:
	ENFORCED  {
		$$ = new OptEnforced();
		$$->case_idx_ = CASE0;
		
	}
   |	NOT ENFORCED  {
		$$ = new OptEnforced();
		$$->case_idx_ = CASE1;
		
	}
   |	  {
		$$ = new OptEnforced();
		$$->case_idx_ = CASE2;
		
	}
  ;

%%
