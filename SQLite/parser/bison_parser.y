%{
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

%}
/*********************************
 ** Section 2: Bison Parser Declarations
 *********************************/


// Specify code that is included in the generated .h and .c files
%code requires {
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
}

// Define the names of the created files (defined in Makefile)
// %output  "bison_parser.cpp"
// %defines "bison_parser.h"

// Tell bison to create a reentrant parser
%define api.pure full

// Prefix the parser
%define api.prefix {hsql_}
%define api.token.prefix {SQL_}

%define parse.error verbose
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


// Define additional parameters for yylex (http://www.gnu.org/software/bison/manual/html_node/Pure-Calling.html)
%lex-param   { yyscan_t scanner }

// Define additional parameters for yyparse
%parse-param { Program * result }
%parse-param { yyscan_t scanner }


/*********************************
 ** Define all data-types (http://www.gnu.org/software/bison/manual/html_node/Union-Decl.html)
 *********************************/
%union HSQL_STYPE{
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
}






/*********************************
 ** Token Definition
 *********************************/
%token <sval> STRING IDENTIFIER
%token <fval> FLOATVAL
%token <ival> INTVAL
//%token <identifier_t> IDENTIFIER

/* SQL Keywords */
%token DEALLOCATE PARAMETERS INTERSECT TEMPORARY TIMESTAMP
%token DISTINCT NVARCHAR RESTRICT TRUNCATE ANALYZE BETWEEN
%token CASCADE COLUMNS CONTROL DEFAULT EXECUTE EXPLAIN
%token INTEGER NATURAL PREPARE PRIMARY SCHEMAS
%token SPATIAL VARCHAR VIRTUAL DESCRIBE BEFORE COLUMN CREATE DELETE DIRECT
%token DOUBLE ESCAPE EXCEPT EXISTS EXTRACT GLOBAL HAVING IMPORT
%token INSERT ISNULL OFFSET RENAME SCHEMA SELECT SORTED
%token TABLES UNIQUE UNLOAD UPDATE VALUES AFTER ALTER CROSS
%token DELTA FLOAT GROUP INDEX INNER LIMIT LOCAL MERGE MINUS ORDER
%token OUTER RIGHT TABLE UNION USING WHERE CALL CASE CHAR DATE
%token DESC DROP ELSE FILE FROM FULL HASH HINT INTO JOIN
%token LEFT LIKE LOAD LONG NULL PLAN SHOW TEXT THEN TIME
%token VIEW WHEN WITH ADD ALL AND ASC CSV END FOR INT KEY
%token NOT OFF SET TBL TOP AS BY IF IN IS OF ON OR TO
%token ARRAY CONCAT ILIKE SECOND MINUTE HOUR DAY MONTH YEAR
%token TRUE FALSE

/* For SQLite
*/

%token  PRAGMA REINDEX GENERATED ALWAYS CHECK CONFLICT IGNORE REPLACE ROLLBACK
%token ABORT FAIL AUTOINCR BEGIN TRIGGER TEMP INSTEAD EACH ROW OVER FILTER PARTITION
%token  CURRENT EXCLUDE FOLLOWING GROUPS NO OTHERS PRECEDING RANGE ROWS TIES UNBOUNDED WINDOW
%token  ATTACH DETACH DATABASE INDEXED CAST SAVEPOINT RELEASE VACUUM TRANSACTION DEFFERED EXCLUSIVE
%token IMEDIATE COMMIT GLOB MATCH REGEX NOTHING NULLS LAST FIRST DO COLLATE

%type <program_t>	input
%type <statement_list_t>	statement_list
%type <statement_t>	statement
%type <preparable_statement_t>	preparable_statement
%type <optional_hints_t>	opt_hints
%type <hint_list_t>	hint_list
%type <hint_t>	hint
%type <prepare_statement_t>	prepare_statement
%type <prepare_target_query_t>	prepare_target_query
%type <execute_statement_t>	execute_statement
%type <import_statement_t>	import_statement
%type <import_file_type_t>	import_file_type
%type <file_path_t>	file_path
%type <show_statement_t>	show_statement
%type <create_statement_t>	create_statement
%type <opt_not_exists_t>	opt_not_exists
%type <column_def_comma_list_t>	column_def_commalist
%type <column_def_t>	column_def
%type <column_type_t>	column_type
%type <drop_statement_t>	drop_statement
%type <opt_exists_t>	opt_exists
%type <delete_statement_t>	delete_statement	truncate_statement
%type <insert_statement_t>	insert_statement
%type <opt_column_list_t>	opt_column_list
%type <update_statement_t>	update_statement
%type <update_clause_commalist_t>	update_clause_commalist
%type <update_clause_t>	update_clause
%type <select_statement_t>	select_statement
%type <select_with_paren_t>	select_with_paren
%type <select_paren_or_clause_t>	select_paren_or_clause
%type <select_no_paren_t>	select_no_paren
%type <set_operator_t>	set_operator
%type <set_type_t>	set_type
%type <opt_all_t>	opt_all
%type <select_clause_t>	select_clause
%type <opt_distinct_t>	opt_distinct
%type <select_list_t>	select_list
%type <opt_from_clause_t>	opt_from_clause
%type <from_clause_t>	from_clause
%type <opt_where_t>	opt_where
%type <opt_group_t>	opt_group
%type <opt_having_t>	opt_having
%type <opt_order_t>	opt_order
%type <order_list_t>	order_list
%type <order_desc_t>	order_desc
%type <opt_order_type_t>	opt_order_type
%type <opt_top_t>	opt_top
%type <opt_limit_t>	opt_limit
%type <expr_list_t>	expr_list
%type <opt_literal_list_t>	opt_literal_list
%type <literal_list_t>	literal_list
%type <expr_alias_t>	expr_alias
%type <expr_t>	expr
%type <operand_t>	operand
%type <scalar_expr_t>	scalar_expr
%type <unary_expr_t>	unary_expr
%type <binary_expr_t>	binary_expr
%type <logic_expr_t>	logic_expr
%type <in_expr_t>	in_expr
%type <comp_expr_t> comp_expr
%type <case_expr_t>	case_expr
%type <case_list_t>	case_list
%type <exists_expr_t>	exists_expr
%type <function_expr_t>	function_expr
%type <extract_expr_t>	extract_expr
%type <datetime_field_t>	datetime_field
%type <array_expr_t>	array_expr
%type <array_index_t>	array_index
%type <between_expr_t>	between_expr
%type <column_name_t>	column_name
%type <literal_t>	literal
%type <string_literal_t>	string_literal
%type <bool_literal_t>	bool_literal
%type <num_literal_t>	num_literal
%type <int_literal_t>	int_literal
%type <null_literal_t>	null_literal
%type <param_expr_t>	param_expr
%type <table_ref_t>	    table_ref
%type <table_ref_name_no_alias_t>	table_ref_name_no_alias
%type <table_name_t>	table_name
%type <alias_t>	alias
%type <opt_alias_t>	opt_alias
%type <opt_with_clause_t>	opt_with_clause
%type <with_clause_t>	with_clause
%type <with_description_list_t>	with_description_list
%type <with_description_t>	with_description
%type <opt_semicolon_t>	opt_semicolon
%type <ident_commalist_t>	ident_commalist

%type <table_prefix_t> table_prefix
%type <join_op_t> join_op
%type <opt_index_t> opt_index
%type <opt_on_t> opt_on
%type <opt_using_t> opt_using
%type <join_kw_t> join_kw

%type <cmd_t> cmd
%type <cmd_attach_t> cmd_attach
%type <cmd_detach_t> cmd_detach
%type <cmd_analyze_t> cmd_analyze
%type <cmd_reindex_t> cmd_reindex
%type <cmd_pragma_t> cmd_pragma
%type <pragma_key_t> pragma_key
%type <pragma_value_t> pragma_value
%type <pragma_name_t> pragma_name
%type <schema_name_t> schema_name

%type <opt_column_arglist_t>	opt_column_arglist
%type <column_arglist_t>	column_arglist
%type <column_arg_t>	column_arg
%type <opt_on_conflict_t>	opt_on_conflict
%type <resolve_type_t>	resolve_type
%type <opt_autoinc_t>	opt_autoinc
%type <opt_unique_t>	opt_unique
%type <index_name_t>	index_name
%type <trigger_declare_t>	trigger_declare
%type <opt_tmp_t>	opt_tmp
%type <trigger_name_t>	trigger_name
%type <opt_trigger_time_t>	opt_trigger_time
%type <trigger_event_t>	trigger_event
%type <opt_of_column_list_t>	opt_of_column_list
%type <opt_for_each_t>	opt_for_each
%type <opt_when_t>	opt_when
%type <trigger_cmd_list_t>	trigger_cmd_list
%type <trigger_cmd_t>	trigger_cmd
%type <module_name_t>	module_name
%type <opt_over_clause_t>	opt_over_clause
%type <opt_filter_clause_t>	opt_filter_clause
%type <window_clause_t>	window_clause
%type <window_defn_list_t>	windowdefn_list
%type <window_defn_t>	windowdefn
%type <window_t>	window
%type <opt_base_window_name_t>	opt_base_window_name
%type <opt_frame_t>	opt_frame
%type <range_or_rows_t>	range_or_rows
%type <frame_bound_s_t>	frame_bound_s
%type <frame_bound_e_t>	frame_bound_e
%type <frame_bound_t>	frame_bound
%type <opt_frame_exclude_t>	opt_frame_exclude
%type <frame_exclude_t>	frame_exclude
%type <insert_type_t> insert_type
%type <super_list_t> super_list

%type <cast_expr_t> cast_expr
%type <alter_statement_t> alter_statement
%type <opt_column_t> opt_column
%type <cmd_release_t> cmd_release
%type <savepoint_name_t> savepoint_name
%type <vacuum_statement_t> vacuum_statement
%type <opt_schema_name_t> opt_schema_name
%type <rollback_statement_t> rollback_statement
%type <opt_transaction_t> opt_transaction
%type <opt_to_savepoint_t> opt_to_savepoint
%type <begin_statement_t> begin_statement
%type <commit_statement_t> commit_statement
%type <upsert_clause_t> upsert_clause
%type <indexed_column_list_t> indexed_column_list
%type <indexed_column_t> indexed_column
%type <opt_collate_t> opt_collate

%type <assign_list_t> assign_list
%type <opt_null_t> opt_null
%type <assign_clause_t> assign_clause
%type <column_name_list_t> column_name_list
%type <collation_name_t> collation_name
%type <opt_upsert_clause_t> opt_upsert_clause
/*********************************
 ** Destructor symbols
 *********************************/
%destructor { } <fval> <ival> /*<uval> <bval> */<program_t>
%destructor { free( ($$) ); } <sval>
/*
%destructor {
    cout << "try to delete column_name_t" << endl;
    if($$ != NULL){
        if($$->identifier1_) delete $$->identifier1_;
        if($$->identifier2_) delete $$->identifier2_;
    }
    delete $$;
} column_name

%destructor{
    cout << "try to delete table_name_t" << endl;
    if($$ != NULL){
        delete($$->table_name_);
        delete($$->database_name_);
    }
    delete $$;
}  table_name


%destructor{
    cout << "FUCK here" << endl;
    if($$ != NULL){
        delete($$->id_);
    }
    delete $$;
} <hint_t> <with_description_t> <prepare_statement_t> <execute_statement_t> <column_def_t> <drop_statement_t> <update_clause_t> <function_expr_t> <table_alias_t> <alias_t>

%destructor{
    cout << "FUCK me" << endl;
    if($$ != NULL){
        for(auto &i: $$->v_expr_list_){
            delete(i);
        }
        delete($$);
    }
} <expr_list_t>
*/
%destructor { if($$!=NULL)$$->deep_delete(); } <*> 

/******************************
 ** Token Precedence and Associativity
 ** Precedence: lowest to highest
 ******************************/

%left       OR

%left       AND
%right      NOT
%nonassoc   '=' EQUALS NOTEQUALS LIKE ILIKE GLOB MATCH REGEX
%nonassoc   '<' '>' LESS GREATER LESSEQ GREATEREQ

%nonassoc   NOTNULL 
%nonassoc   ISNULL
%nonassoc   IS              /* sets precedence for IS NULL, etc */
%left       '+' '-'
%left       '*' '/' '%' 
%left       '^' 
%left       CONCAT

/* Unary Operators */
%right  UMINUS
%left       '[' ']'
%left       '(' ')'
%left       '.'
%right       JOIN


%%
/*********************************
 ** Section 3: Grammar Definition
 *********************************/

// Defines our general input.
input:
        statement_list opt_semicolon {
            $$ = NULL;
            result->statement_list_ = $1;
            result->opt_semicolon_ = $2;
        }
    ;


statement_list:
        statement {
            $$ = new StatementList();
            $$->v_statement_list_.push_back($1);
        }
    |   statement_list ';' statement {
            $1->v_statement_list_.push_back($3);
            $$ = $1;
        }
    ;

statement:
        prepare_statement opt_hints {
            $$ = new Statement();
            $$->sub_type_ = CASE1;
            $$->prepare_statement_ = $1;
            $$->optional_hints_ = $2;
        }
    |   preparable_statement opt_hints {
            $$ = new Statement();
            $$->sub_type_ = CASE0;
            $$->preparable_statement_ = $1;
            $$->optional_hints_ = $2;
        }
    |   show_statement {
            $$ = new Statement();
            $$->sub_type_ = CASE2;
            $$->show_statement_ = $1;
        }
    
    |   cmd {
            $$ = new Statement();
            $$->sub_type_ = CASE3;
            $$->cmd_ = $1;
    }
    ;


cmd:
        cmd_pragma {$$ = $1;}
    |   cmd_reindex {$$ = $1;}
    |   cmd_analyze {$$ = $1;}
    |   cmd_attach  {$$ = $1;}
    |   cmd_detach  {$$ = $1;}
    |   cmd_release {$$ = $1;}
    |   rollback_statement {$$ = $1;}
    |   vacuum_statement {$$ = $1;}
    |   begin_statement {$$ = $1;}
    |   commit_statement {$$ = $1;}
    ;

cmd_release:
        RELEASE SAVEPOINT savepoint_name {
            $$ = new CmdRelease();
            $$->sub_type_ = CASE0;
            $$->savepoint_name_ = $3;
        }
    |   RELEASE savepoint_name {
            $$ = new CmdRelease();
            $$->sub_type_ = CASE1;
            $$->savepoint_name_ = $2;
        }
    ;

savepoint_name:
        IDENTIFIER {
            $$ = new SavepointName();
            $$->id_ = new Identifier($1, id_savepoint_name);
            free($1);
        }
    ;

cmd_pragma:
        PRAGMA pragma_key{
            $$ = new CmdPragma();
            $$->sub_type_ = CASE0;
            $$->pragma_key_ = $2;
        }
    |   PRAGMA pragma_key '=' pragma_value {
            $$ = new CmdPragma();
            $$->sub_type_ = CASE1;
            $$->pragma_key_ = $2;
            $$->pragma_value_ = $4;
    }
    |   PRAGMA pragma_key '(' pragma_value ')' {
            $$ = new CmdPragma();
            $$->sub_type_ = CASE2;
            $$->pragma_key_ = $2;
            $$->pragma_value_ = $4;
    }
    ;

cmd_reindex:
       REINDEX {$$ = new CmdReindex(); $$->sub_type_ = CASE0;}
    |   REINDEX table_name {$$ = new CmdReindex(); $$->sub_type_ = CASE1; $$->table_name_ = $2; $$->table_name_->table_name_->id_type_ = id_top_table_name;}
    ;

cmd_analyze:
       ANALYZE {$$ = new CmdAnalyze(); $$->sub_type_ = CASE0;}
    |   ANALYZE table_name {$$ = new CmdAnalyze(); $$->sub_type_ = CASE1; $$->table_name_ = $2; $$->table_name_->table_name_->id_type_ = id_top_table_name;}
    ;

cmd_attach:
        ATTACH expr AS schema_name{
            $$ = new CmdAttach();
            $$->sub_type_ = CASE0;
            $$->expr_ = $2;
            $$->schema_name_ = $4;
        }
    |   ATTACH DATABASE expr AS schema_name{
            $$ = new CmdAttach();
            $$->sub_type_ = CASE1;
            $$->expr_ = $3;
            $$->schema_name_ = $5;
        }
    ;

cmd_detach:
        DETACH schema_name {
            $$ = new CmdDetach();
            $$->sub_type_ = CASE0;
            $$->schema_name_ = $2;
        }
    |   DETACH DATABASE schema_name{
            $$ = new CmdDetach();
            $$->sub_type_ = CASE1;
            $$->schema_name_ = $3;
    }
    ;

pragma_key: 
        pragma_name {$$ = new PragmaKey(); $$->sub_type_ = CASE0; $$->pragma_name_ = $1;}
    |   schema_name '.' pragma_name { $$ = new PragmaKey(); $$->sub_type_ = CASE1; $$->schema_name_ = $1; $$->pragma_name_ = $3;}
    ;

pragma_value:
        num_literal {$$ = new PragmaValue(); $$->sub_type_ = CASE0; $$->num_literal_ = $1;}
    |   string_literal {$$ = new PragmaValue(); $$->sub_type_ = CASE1; $$->string_literal_ = $1;}
    |   IDENTIFIER {$$ = new PragmaValue(); $$->sub_type_ = CASE2; $$->id_ = new Identifier($1, id_pragma_value); free($1);}
    |   ON {$$ = new PragmaValue(); $$->sub_type_ = CASE2; $$->id_ = new Identifier("ON", id_pragma_value); }
    |   DELETE {$$ = new PragmaValue(); $$->sub_type_ = CASE2; $$->id_ = new Identifier("DELETE", id_pragma_value); }
    |   DEFAULT {$$ = new PragmaValue(); $$->sub_type_ = CASE2; $$->id_ = new Identifier("DEFAULT", id_pragma_value); }
    ;

schema_name:
        IDENTIFIER {
            $$ = new SchemaName(); $$->id_ = new Identifier($1, id_schema_name); free($1);
            }
    ;
    
pragma_name:
        IDENTIFIER {$$ = new PragmaName(); $$->id_ = new Identifier($1, id_pragma_name); free($1);}
    ;



preparable_statement:
        select_statement { $$ = $1; }  
    |   import_statement { $$ = $1; }
    |   create_statement { $$ = $1; }
    |   insert_statement { $$ = $1; }
    |   delete_statement { $$ = $1; }
    |   truncate_statement { $$ = $1; }
    |   update_statement { $$ = $1; }
    |   drop_statement { $$ = $1; }
    |   execute_statement { $$ = $1; }
    |   alter_statement {$$ = $1;}
    ;

rollback_statement: // add z
        ROLLBACK opt_transaction opt_to_savepoint {
            $$ = new RollbackStatement();
            $$->opt_transaction_ = $2;
            $$->opt_to_savepoint_ = $3;
        }
 ;

opt_transaction: // add z 
        TRANSACTION {
            $$ = new OptTransaction();
            $$->sub_type_ = CASE0;
            $$->str_val_ = string("TRANSACTION");
        }
    |   /* empty */{
            $$ = new OptTransaction();
            $$->sub_type_ = CASE1;
            $$->str_val_ = string("");
        }
 ;

 opt_to_savepoint: //add z
        TO savepoint_name {
            $$ = new OptToSavepoint();
            $$->sub_type_ = CASE0;
            $$->savepoint_name_ = $2;
        }
    |   TO SAVEPOINT savepoint_name {
            $$ = new OptToSavepoint();
            $$->sub_type_ = CASE1;
            $$->savepoint_name_ = $3;
        }
    |   /* empty */{
            $$ = new OptToSavepoint();
            $$->sub_type_ = CASE2;
        }
 ;


vacuum_statement: //add z
        VACUUM opt_schema_name INTO file_path{
            $$ = new VacuumStatement();
            $$->sub_type_ = CASE0;
            $$->opt_schema_name_ = $2;
            $$->file_path_ = $4;
        }
    |   VACUUM opt_schema_name{
            $$ = new VacuumStatement();
            $$->sub_type_ = CASE1;
            $$->opt_schema_name_ = $2;
        }
    ;

opt_schema_name: //add z
        schema_name {
            $$ = new OptSchemaName();
            $$->sub_type_ = CASE0;
            $$->schema_name_ = $1;
        }
    |   /*empty*/ {
            $$ = new OptSchemaName();
            $$->sub_type_ = CASE1;
        }
    ;

begin_statement: //add z
        BEGIN opt_transaction {
            $$ = new BeginStatement();
            $$->sub_type_ = CASE0;
            $$->opt_transaction_ = $2;
        }
    |   BEGIN DEFFERED opt_transaction {
            $$ = new BeginStatement();
            $$->sub_type_ = CASE1;
            $$->opt_transaction_ = $3;
        }
    |   BEGIN IMEDIATE opt_transaction {
            $$ = new BeginStatement();
            $$->sub_type_ = CASE2;
            $$->opt_transaction_ = $3;
        }
    |   BEGIN EXCLUSIVE opt_transaction {
            $$ = new BeginStatement();
            $$->sub_type_ = CASE3;
            $$->opt_transaction_ = $3;
        }
 ;

commit_statement: //add z
        COMMIT opt_transaction {
            $$ = new CommitStatement();
            $$->sub_type_ = CASE0;
            $$->opt_transaction_ = $2;
        }
    |   END opt_transaction {
            $$ = new CommitStatement();
            $$->sub_type_ = CASE1;
            $$->opt_transaction_ = $2;
        }
 ;


opt_upsert_clause:
        upsert_clause {$$ = new OptUpsertClause(); $$->sub_type_ = CASE0; $$->upsert_clause_ = $1;}
    |   /* empty */ {$$ = new OptUpsertClause(); $$->sub_type_ = CASE1;}

upsert_clause:
        ON CONFLICT DO NOTHING {
            $$ = new UpsertClause();
            $$->sub_type_ = CASE0;
        }
    |   ON CONFLICT DO UPDATE SET assign_list opt_where {
            $$ = new UpsertClause();
            $$->sub_type_ = CASE1;
            $$->assign_list_ = $6;
            $$->opt_where1_ = $7;
        }
    |   ON CONFLICT '(' indexed_column_list ')' opt_where DO NOTHING {
            $$ = new UpsertClause();
            $$->sub_type_ = CASE2;
            $$->indexed_column_list_ = $4;
            $$->opt_where1_ = $6;
        }
    |   ON CONFLICT '(' indexed_column_list ')' opt_where DO UPDATE SET assign_list opt_where {
            $$ = new UpsertClause();
            $$->sub_type_ = CASE3;
            $$->indexed_column_list_ = $4;
            $$->opt_where1_ = $6;
            $$->assign_list_ = $10;
            $$->opt_where2_ = $11;
        }
    
 ;

indexed_column_list:
        indexed_column {
            $$ = new IndexedColumnList();
            $$->v_indexed_column_list_.push_back($1);
        }
    |   indexed_column_list ',' indexed_column {
            $1->v_indexed_column_list_.push_back($3);
            $$ = $1;
        }
 ;

indexed_column:
        expr opt_collate opt_order_type {
            $$ = new IndexedColumn();
            $$->expr_ = $1;
            $$->opt_collate_ = $2;
            $$->opt_order_type_ = $3;
        }
 ;

opt_collate:
        COLLATE collation_name {
            $$ = new OptCollate();
            $$->sub_type_ = CASE0;
            $$->collation_name_ = $2;
        }
    |   /* empty */{
            $$ = new OptCollate();
            $$->sub_type_ = CASE1;
            $$->str_val_ = string("");
        }
 ;


assign_list:
        assign_clause {
            $$ = new AssignList();
            $$->v_assign_list_.push_back($1);

        }
    |   assign_list ',' assign_clause {
            $1->v_assign_list_.push_back($3);
            $$ = $1;
        }
 ;


opt_null:
        NULLS FIRST {
            $$ = new OptNull();
            $$->str_val_ = string("NULLS FIRST");
        }
    |   NULLS LAST {
            $$ = new OptNull();
            $$->str_val_ = string("NULLS LAST");
        }
    |   {
            $$ = new OptNull();
            $$->str_val_ = string("");
        }
 ;

assign_clause:
        column_name_list '=' expr {
            $$ = new AssignClause();
            $$->column_name_list_ = $1;
            $$->expr_ = $3;
        }
 ;

column_name_list:
        column_name {
            $$ = new ColumnNameList();
            $$->v_column_name_list_.push_back($1);
        }
    |   column_name_list ',' column_name {
            $1->v_column_name_list_.push_back($3);
            $$ = $1;
        }
;

collation_name:
        IDENTIFIER {
            $$ = new CollationName(); 
            $$->id_ = new Identifier($1, id_collation_name); 
            free($1);
        }
;

/******************************
 * Hints
 ******************************/

opt_hints:
    WITH HINT '(' hint_list ')' { 
        $$ = new OptionalHints();
        $$->sub_type_ = CASE0;
        $$->hint_list_ = $4; 
        }
  | /* empty */ { $$ = new OptionalHints(); $$->sub_type_ = CASE1;}
  ;


hint_list:
      hint { 
          $$ = new HintList();
          $$->v_hint_list_.push_back($1); 
          }
    | hint_list ',' hint { $1->v_hint_list_.push_back($3); $$ = $1; }
    ;

hint:
        IDENTIFIER {
            $$ = new Hint();
            $$->sub_type_ = CASE1;
            $$->id_ = new Identifier($1);
            free($1);
        }
    | IDENTIFIER '(' literal_list ')' {
            $$ = new Hint();
            $$->sub_type_ = CASE0;
            $$->id_ = new Identifier($1);
            $$->literal_list_ = $3;
            free($1);
        }
    ;


/******************************
 * Prepared Statement
 ******************************/
prepare_statement:
        PREPARE IDENTIFIER FROM prepare_target_query {
            $$ = new PrepareStatement();
            $$->id_ = new Identifier($2);
            $$->prep_target_que_ = $4;
            free($2);
        }
    ;

prepare_target_query: STRING 
        {
            $$ = new PrepareTargetQuery();
            $$->prep_target_que_ = "'" + string($1) + "'";
            free($1);
        }
    ;

execute_statement:
        EXECUTE IDENTIFIER {
            $$ = new ExecuteStatement();
            $$->sub_type_ = CASE0;
            $$->id_ = new Identifier($2);
            free($2);
        }
    |   EXECUTE IDENTIFIER '(' opt_literal_list ')' {
            $$ = new ExecuteStatement();
            $$->sub_type_ = CASE1;
            $$->id_ = new Identifier($2);
            $$->opt_literal_list_ = $4;
            free($2);
        }
    ;


/******************************
 * Import Statement
 ******************************/
import_statement:
        IMPORT FROM import_file_type FILE file_path INTO table_name {
            $$ = new ImportStatement();
            $$->import_file_type_ = $3;
            $$->file_path_ = $5;
            $$->table_name_ = $7;
        }
    ;

import_file_type:
        CSV { $$ = new ImportFileType(); $$->str_val_ = "CSV"; }
    ;

file_path:
        string_literal { 
            $$ = new FilePath();
            $$->str_val_ = $1->str_val_;
            delete($1);
         }
    ;


/******************************
 * Show Statement
 * SHOW TABLES;
 ******************************/

show_statement:
        SHOW TABLES {
            $$ = new ShowStatement();
            $$->sub_type_ = CASE0;
        }
    |   SHOW COLUMNS table_name {
            $$ = new ShowStatement();
            $$->sub_type_ = CASE1;
            $$->table_name_ = $3;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
        }
    |   DESCRIBE table_name {
            $$ = new ShowStatement();
            $$->sub_type_ = CASE2;
            $$->table_name_ = $2;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
        }
    ;


/*****************************
 * Alter statement
 * ALTER TABLE a RENAME TO b;
 * ALTER TABLE a ADD COLUMN c(name INT);
 *****************************/
alter_statement:
	ALTER TABLE table_name RENAME TO table_name {
		$$ = new AlterStatement();
		$$->sub_type_ = CASE0;
        $$->table_name1_ = $3;
        $$->table_name2_ = $6;
	}
 |	ALTER TABLE table_name RENAME opt_column column_name TO column_name {
		$$ = new AlterStatement();
		$$->sub_type_ = CASE1;
        $$->table_name1_ = $3;
        $$->opt_column_ = $5;
        $$->column_name1_ = $6;
        $$->column_name2_ = $8;
	}
 |	ALTER TABLE table_name ADD opt_column column_def {
		$$ = new AlterStatement();
		$$->sub_type_ = CASE2;
        $$->table_name1_ = $3;
        $$->opt_column_ = $5;
        $$->column_def_ = $6;
	}
 ;

opt_column:
	COLUMN {
		$$ = new OptColumn();
		$$->sub_type_ = CASE0;
        $$->str_val_ = string("COLUMN");
	}
 |	/* empty */{
		$$ = new OptColumn();
		$$->sub_type_ = CASE1;
        $$->str_val_ = string("");
	}
 ;


/******************************
 * Create Statement
 * CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)
 * CREATE TABLE students FROM TBL FILE 'test/students.tbl'
 ******************************/
create_statement:
        CREATE TABLE opt_not_exists table_name FROM TBL FILE file_path {
            $$ = new CreateStatement();
            $$->sub_type_ = CASE0;
            $$->opt_not_exists_ = $3;
            $$->table_name_ = $4;
            $$->file_path_ = $8;
            $$->table_name_->table_name_->id_type_ = id_create_table_name;
        }
    |   CREATE TABLE opt_not_exists table_name '(' column_def_commalist ')' {
            $$ = new CreateStatement();
            $$->sub_type_ = CASE1;
            $$->opt_not_exists_ = $3;
            $$->table_name_ = $4;
            $$->column_def_comma_list_ = $6;
            $$->table_name_->table_name_->id_type_ = id_create_table_name;
        }
    |   CREATE TABLE opt_not_exists table_name AS select_statement {
            $$ = new CreateStatement();
            $$->sub_type_ = CASE2;
            $$->opt_not_exists_ = $3;
            $$->table_name_ = $4;
            $$->select_statement_ = $6;
            $$->table_name_->table_name_->id_type_ = id_create_table_name;
        }
    |   CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement {
            $$ = new CreateStatement();
            $$->sub_type_ = CASE3;
            $$->opt_not_exists_ = $3;
            $$->table_name_ = $4;
            $$->table_name_->table_name_->id_type_ = id_create_table_name;
            $$->opt_column_list_ = $5;
            if($$->opt_column_list_->sub_type_ == CASE0)
                for(auto &i: $$->opt_column_list_->ident_comma_list_->v_iden_comma_list_){
                    i->id_type_ = id_create_column_name;
                }
            $$->select_statement_ = $7;
            $$->table_name_->table_name_->id_type_ = id_create_table_name;
        }
    //add 2
    |   CREATE opt_unique INDEX opt_not_exists index_name ON table_name '(' ident_commalist ')' opt_where {
            $$ = new CreateStatement();
            $$->sub_type_ = CASE4;
            $$->opt_unique_ = $2;
            $$->opt_not_exists_ = $4;
            $$->index_name_ = $5;   
            $$->table_name_ = $7;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
            $$->ident_commalist_ = $9;
            for(auto &i: $$->ident_commalist_->v_iden_comma_list_){
                i->id_type_ = id_column_name;
            }
            $$->opt_where_ = $11;
        }
    |   CREATE VIRTUAL TABLE  opt_not_exists table_name USING module_name {
            $$ = new CreateStatement();
            $$->sub_type_ = CASE5;
            $$->opt_not_exists_ = $4;
            $$->table_name_ = $5;
            $$->module_name_ = $7;
            $$->table_name_->table_name_->id_type_ = id_create_table_name;
        } 
    |   CREATE VIRTUAL TABLE  opt_not_exists table_name USING module_name '(' column_def_commalist ')' {
            $$ = new CreateStatement();
            $$->sub_type_ = CASE6;
            $$->opt_not_exists_ = $4;
            $$->table_name_ = $5;
            $$->module_name_ = $7;
            $$->table_name_->table_name_->id_type_ = id_create_table_name;
            $$->column_def_comma_list_ = $9;
        } 
    |   CREATE trigger_declare BEGIN trigger_cmd_list END {
            $$ = new CreateStatement();
            $$->sub_type_ = CASE7;
            $$->trigger_declare_ = $2;
            $$->trigger_cmd_list_ = $4;
        } 
    ;

opt_unique:
        UNIQUE {$$ = new OptUnique(); $$->str_val_ = string("UNIQUE");}
    | /* empty */ {$$ = new OptUnique(); $$->str_val_ = string("");}
    ;

index_name:
        IDENTIFIER {$$ = new IndexName(); $$->id_ = new Identifier($1, id_index_name); free($1);}
    ;

trigger_declare:
        opt_tmp TRIGGER opt_not_exists trigger_name opt_trigger_time trigger_event ON table_name opt_for_each opt_when {
            $$ = new TriggerDeclare();
            $$->opt_tmp_ = $1;
            $$->opt_not_exists_ = $3;
            $$->trigger_name_ = $4;
            $$->opt_trigger_time_ = $5;
            $$->trigger_event_ = $6;
            $$->table_name_ = $8;
            $$->opt_for_each_ = $9;
            $$->opt_when_ = $10;
        }
    ;

opt_tmp:
        TEMP {$$ = new OptTmp(); $$->str_val_ = string("TEMP");}
    |   /* empty */  {$$ = new OptTmp(); $$->str_val_ = string("");}
    ;

trigger_name:
        IDENTIFIER {$$ = new TriggerName(); $$->id_ = new Identifier($1, id_trigger_name); free($1);}
    ;

opt_trigger_time:
        BEFORE {$$ = new OptTriggerTime(); $$->str_val_ = string("BEFORE");}
    |   AFTER {$$ = new OptTriggerTime(); $$->str_val_ = string("AFTER");}
    |   INSTEAD OF {$$ = new OptTriggerTime(); $$->str_val_ = string("INSTEAD OF");}
    |   /* empty */ {$$ = new OptTriggerTime(); $$->str_val_ = string("");}
    ;

trigger_event:
        DELETE {$$ = new TriggerEvent(); $$->sub_type_ = CASE0;}
    |   INSERT {$$ = new TriggerEvent(); $$->sub_type_ = CASE1;}
    |   UPDATE opt_of_column_list {$$ = new TriggerEvent(); $$->sub_type_ = CASE2; $$->opt_of_column_list_ = $2;}
    ;

opt_of_column_list:
        OF ident_commalist {$$ = new OptOfColumnList(); $$->sub_type_ = CASE0; $$->ident_commalist_ = $2;}
    |   /* empty */ {$$ = new OptOfColumnList(); $$->sub_type_ = CASE1;}
    ;

opt_for_each:
        FOR EACH ROW {$$ = new OptForEach(); $$->str_val_ = string("FOR EACH ROW");}
    |   /* empty */ {$$ = new OptForEach(); $$->str_val_ = string("");}
    ;

opt_when:
        WHEN expr {$$ = new OptWhen(); $$->sub_type_ = CASE0; $$->expr_ = $2;}
    |   /* empty */ {$$ = new OptWhen(); $$->sub_type_ = CASE1;}
    ;

trigger_cmd_list:
        trigger_cmd ';' {$$ = new TriggerCmdList(); $$->v_trigger_cmd_list_.push_back($1);}
    |   trigger_cmd_list trigger_cmd ';' {$1->v_trigger_cmd_list_.push_back($2); $$ = $1;}
    ;

trigger_cmd:
        select_statement {$$ = new TriggerCmd(); $$->stmt_ = $1;}
    |   update_statement {$$ = new TriggerCmd(); $$->stmt_ = $1;}
    |   insert_statement {$$ = new TriggerCmd(); $$->stmt_ = $1;}
    |   delete_statement {$$ = new TriggerCmd(); $$->stmt_ = $1;}
    ;

module_name:
        IDENTIFIER {$$ = new ModuleName(); $$->id_ = new Identifier($1); free($1);}
    ;
   

opt_not_exists:
        IF NOT EXISTS { $$ = new OptNotExists(); $$->sub_type_ = CASE0; }
    |   /* empty */ { $$ = new OptNotExists(); $$->sub_type_ = CASE1; }
    ;

column_def_commalist:
        column_def { 
            $$ = new ColumnDefCommaList(); 
            $$->v_column_def_comma_list_.push_back($1); 
            }
    |   column_def_commalist ',' column_def { 
        $1->v_column_def_comma_list_.push_back($3); 
        $$ = $1; 
        }
    ;

column_def:
        IDENTIFIER column_type opt_column_arglist {
            $$ = new ColumnDef();
			$$->id_ = new Identifier($1, id_create_column_name);
            $$->column_type_ = $2;
            $$->opt_column_arglist_ = $3;
            free($1); 
        }
    ;


opt_column_arglist:
        column_arglist {$$ = new OptColumnArglist(); $$->sub_type_ = CASE0; $$->column_arglist_ = $1;}
    |   /* empty */ {$$ = new OptColumnArglist(); $$->sub_type_ = CASE1;}
    ;

column_arglist:
        column_arglist column_arg {
            $1->v_column_arg_.push_back($2); 
            $$ = $1;
            }
    |   column_arg {
        $$ = new ColumnArglist(); 
        $$->v_column_arg_.push_back($1);
        }
    ;

column_arg:
        NULL opt_on_conflict {$$ = new ColumnArg(); $$->sub_type_ = CASE0; $$->opt_on_conflict_ = $2;}
    |   NOT NULL opt_on_conflict {$$ = new ColumnArg(); $$->sub_type_ = CASE1; $$->opt_on_conflict_ = $3;}
    |   PRIMARY KEY opt_order_type opt_on_conflict opt_autoinc {
                $$ = new ColumnArg(); 
                $$->sub_type_ = CASE2; 
                $$->opt_order_type_ = $3;
                $$->opt_on_conflict_ = $4;
                $$->opt_autoinc_ = $5;
        }
    |   UNIQUE opt_on_conflict {$$ = new ColumnArg(); $$->sub_type_ = CASE3; $$->opt_on_conflict_ = $2;}
    |   GENERATED ALWAYS AS '(' expr ')' {$$ = new ColumnArg(); $$->sub_type_ = CASE4; $$->expr_ = $5;}
    |   AS '(' expr ')' {$$ = new ColumnArg(); $$->sub_type_ = CASE5; $$->expr_ = $3;}
    |   CHECK '(' expr ')' {$$ = new ColumnArg(); $$->sub_type_ = CASE6; $$->expr_ = $3;}
    ;


opt_on_conflict: 
        ON CONFLICT resolve_type {$$ = new OptOnConflict(); $$->sub_type_ = CASE0; $$->resolve_type_ = $3;}
    |   /* empty */ {$$ = new OptOnConflict(); $$->sub_type_ = CASE1;}
    ;

resolve_type:
        IGNORE {$$ = new ResolveType(); $$->str_val_ = string("IGNORE");}
    |   REPLACE {$$ = new ResolveType(); $$->str_val_ = string("REPLACE");}
    |   ROLLBACK {$$ = new ResolveType(); $$->str_val_ = string("ROLLBACK");}
    |   ABORT {$$ = new ResolveType(); $$->str_val_ = string("ABORT");}
    |   FAIL {$$ = new ResolveType(); $$->str_val_ = string("FAIL");}
    ;

opt_autoinc:
        AUTOINCR {$$ = new OptAutoinc(); $$->str_val_ = string("AUTOINCR");}
    |   /* empty */ {$$ = new OptAutoinc(); $$->str_val_ = string("");}
    ;


column_type:
        INT { $$ = new ColumnType(); $$->str_val_ = string("INT"); }
    |   INTEGER { $$ = new ColumnType(); $$->str_val_ = string("INTEGER"); }
    |   LONG { $$ = new ColumnType(); $$->str_val_ = string("LONG"); }
    |   FLOAT { $$ = new ColumnType(); $$->str_val_ = string("FLOAT"); }
    |   DOUBLE { $$ = new ColumnType(); $$->str_val_ = string("DOUBLE"); }
    |   VARCHAR '(' INTVAL ')' { 
            $$ = new ColumnType();
            $$->str_val_ = string("VARCHAR(") + to_string($3) + ")"; 
            }
    |   CHAR '(' INTVAL ')' { $$ = new ColumnType(); 
            $$->str_val_ = string("CHAR(") + to_string($3) + ")"; 
            } 
    |   TEXT { $$ = new ColumnType(); $$->str_val_ = string("TEXT"); }
    |   /* empty*/ { $$ = new ColumnType(); $$->str_val_ = string(""); }
    ;

/******************************
 * Drop Statement
 * DROP TABLE students;
 * DEALLOCATE PREPARE stmt;
 ******************************/

drop_statement:
        DROP TABLE opt_exists table_name {
            $$ = new DropStatement();
            $$->sub_type_ = CASE0;
            $$->opt_exists_ = $3;
            $$->table_name_ = $4;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
            $$->id_ = NULL;
        }
    |   DROP VIEW opt_exists table_name {
            $$ = new DropStatement();
            $$->sub_type_ = CASE1;
            $$->opt_exists_ = $3;
            $$->table_name_ = $4;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
            $$->id_ = NULL;
        }
    |   DEALLOCATE PREPARE IDENTIFIER {
            $$ = new DropStatement();
            $$->sub_type_ = CASE2;
            $$->id_ = new Identifier($3);
            free($3);
        }
    |  DROP TRIGGER opt_exists schema_name '.' trigger_name{
            $$ = new DropStatement();
            $$->sub_type_ = CASE3;
            $$->opt_exists_ = $3;
            $$->schema_name_ = $4;
            $$->trigger_name_ = $6;
    }

    |  DROP TRIGGER opt_exists trigger_name{
            $$ = new DropStatement();
            $$->sub_type_ = CASE4;
            $$->opt_exists_ = $3;
            $$->trigger_name_ = $4;
    }
    ;

opt_exists:
        IF EXISTS   { $$ = new OptExists(); $$->str_val_=string("IF EXISTS"); }
    |   /* empty */ { $$ = new OptExists(); $$->str_val_=string(""); }
    ;

/******************************
 * Delete Statement / Truncate statement
 * DELETE FROM students WHERE grade > 3.0
 * DELETE FROM students <=> TRUNCATE students
 ******************************/
delete_statement:
        DELETE FROM table_name opt_where {
            $$ = new DeleteStatement();
            $$->sub_type_ = CASE0;
            $$->table_name_ = $3;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
            $$->opt_where_ = $4;
        }
    ;

truncate_statement:
        TRUNCATE table_name {
            $$ = new DeleteStatement();
            $$->sub_type_ = CASE1;
            $$->table_name_ = $2;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;

        }
    ;

/******************************
 * Insert Statement
 * INSERT INTO students VALUES ('Max', 1112233, 'Musterhausen', 2.3)
 * INSERT INTO employees SELECT * FROM stundents
 ******************************/
insert_statement:
        insert_type INTO table_name opt_column_list VALUES super_list opt_upsert_clause{
            $$ = new InsertStatement();
            $$->sub_type_ = CASE0;
            $$->insert_type_ = $1;
            $$->table_name_ = $3;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
            $$->opt_column_list_ = $4;
            $$->super_list_ = $6;
            $$->opt_upsert_clause_ = $7;
            if($$->opt_column_list_->sub_type_ == CASE0){
                for(auto &cname: $$->opt_column_list_->ident_comma_list_->v_iden_comma_list_){
                    cname->id_type_ = id_column_name;
                }    
            }
        }
    |   insert_type INTO table_name opt_column_list select_no_paren opt_upsert_clause{
            $$ = new InsertStatement();
            $$->sub_type_ = CASE1;
            $$->insert_type_ = $1;
            $$->table_name_ = $3;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
            $$->opt_column_list_ = $4;
            $$->select_no_paren_ = $5;
            $$->opt_upsert_clause_ = $6;
            if($$->opt_column_list_->sub_type_ == CASE0){
                for(auto &cname: $$->opt_column_list_->ident_comma_list_->v_iden_comma_list_){
                    cname->id_type_ = id_column_name;
                }    
            }
        }
    ;

super_list:
        '(' literal_list ')'{
            $$ = new SuperList(); $$->v_super_list_.push_back($2);
        }
    |   super_list ',' '(' literal_list ')'{
            $1->v_super_list_.push_back($4);
            $$ = $1;
        }
    ;

insert_type:
        INSERT { $$ = new InsertType(); $$->sub_type_ = CASE0; $$->str_val_ = string("INSERT"); }
        | REPLACE {$$ = new InsertType(); $$->sub_type_ = CASE1; $$->str_val_  = string("REPLACE");}
        | INSERT OR resolve_type {$$ = new InsertType(); $$->sub_type_ = CASE2; $$->resolve_type_ = $3;}
        ;

opt_column_list:
        '(' ident_commalist ')' { $$ = new OptColumnList(); $$->sub_type_ = CASE0; $$->ident_comma_list_ = $2; }
    |   /* empty */ { $$ = new OptColumnList(); $$->sub_type_ = CASE1; }
    ;


/******************************
 * Update Statement
 * UPDATE students SET grade = 1.3, name='Felix Fürstenberg' WHERE name = 'Max Mustermann';
 ******************************/

update_statement:
    UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where {
        $$ = new UpdateStatement();
        $$->table_ref_name_no_alias_ = $2; //had set id_top_table_name in table_ref_name_no_alias
        $$->update_clause_comma_list_ = $4;
        $$->opt_where_ = $5;
    }
    ;

update_clause_commalist:
        update_clause { 
            $$ = new UpdateClauseCommalist(); 
            $$->v_update_clause_list_.push_back($1); 
            }
    |   update_clause_commalist ',' update_clause { 
        $1->v_update_clause_list_.push_back($3); 
        $$ = $1; }
    ;

update_clause:
        IDENTIFIER '=' expr {
            $$ = new UpdateClause();
            $$->id_ = new Identifier($1, id_column_name);
            $$->expr_ = $3;
            free($1);
        }
    ;

/******************************
 * Select Statement
 * SELECT a TABLE table1 WHERE c = 1
 ******************************/

select_statement:
        opt_with_clause select_with_paren {
            $$ = new SelectStatement();
            $$->sub_type_ = CASE0;
            $$->opt_with_clause_ = $1;
            $$->select_with_paren_ = $2;
        }
    |   opt_with_clause select_no_paren {
            $$ = new SelectStatement();
            $$->sub_type_ = CASE1;
            $$->opt_with_clause_ = $1;
            $$->select_no_paren_ = $2;
        }
    |   opt_with_clause select_with_paren set_operator select_paren_or_clause opt_order opt_limit {
            $$ = new SelectStatement();
            $$->sub_type_ = CASE2;
            $$->opt_with_clause_ = $1;
            $$->select_with_paren_ = $2;
            $$->set_operator_ = $3;
            $$->select_paren_or_clause_ = $4;
            $$->opt_order_ = $5;
            $$->opt_limit_ = $6;
            
        }
    ;

select_with_paren:
        '(' select_no_paren ')' { $$ = new SelectWithParen(); $$->sub_type_ = CASE0; $$->select_no_paren_=$2;}
    |   '(' select_with_paren ')' { $$ = new SelectWithParen(); $$->sub_type_ = CASE1; $$->select_with_paren_=$2;}
    ;

select_paren_or_clause:
        select_with_paren {$$ = new SelectParenOrClause(); $$->sub_type_=CASE0; $$->select_with_paren_=$1;}
    |   select_clause {$$=new SelectParenOrClause(); $$->sub_type_=CASE1; $$->select_clause_=$1;}
    ;

select_no_paren:
        select_clause opt_order opt_limit {
            $$ = new SelectNoParen();
            $$->sub_type_ = CASE0;
            $$->select_clause_ = $1;
            $$->opt_order_ = $2;
            $$->opt_limit_ = $3;
        }
    |   select_clause set_operator select_paren_or_clause opt_order opt_limit {
            $$ = new SelectNoParen();
            $$->sub_type_ = CASE1;
            $$->select_clause_ = $1;
            $$->set_operator_ = $2;
            $$->select_paren_or_clause_ = $3;
            $$->opt_order_ = $4;
            $$->opt_limit_ = $5;    
        }
    ;

set_operator:
        set_type opt_all {
            $$ = new SetOperator();
            $$->set_type_ = $1;
            $$->opt_all_ = $2;
            }
    ;

set_type:
        UNION {$$ = new SetType(); $$->str_val_ = string("UNION");}
    |   INTERSECT {$$ = new SetType(); $$->str_val_ = string("INTERSECT");}
    |   EXCEPT  {$$ = new SetType(); $$->str_val_ = string("EXCEPT");}
    ;

opt_all:
        ALL {$$ = new OptAll(); $$->str_val_ = string("ALL");}
    |   /* empty */ {$$ = new OptAll(); $$->str_val_ = string("");}
    ;

select_clause:
        SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group {
            $$ = new SelectClause();
            $$->sub_type_ = CASE0;
            $$->opt_top_ = $2;
            $$->opt_distinct_ = $3;
            $$->select_list_ = $4;
            $$->opt_from_clause_ = $5;
            $$->opt_where_ = $6;
            $$->opt_group_ = $7;
        }
    
    |   SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group window_clause {
            $$ = new SelectClause();
            $$->sub_type_ = CASE1;
            $$->opt_top_ = $2;
            $$->opt_distinct_ = $3;
            $$->select_list_ = $4;
            $$->opt_from_clause_ = $5;
            $$->opt_where_ = $6;
            $$->opt_group_ = $7;
            $$->window_clause_ = $8;
        }
    ;

window_clause:
        WINDOW windowdefn_list {$$ = new WindowClause(); $$->windowdefn_list_ = $2;}
    ;

windowdefn_list:
        windowdefn {$$ = new WindowDefnList(); $$->v_windowdefn_list_.push_back($1);}
    |   windowdefn_list ',' windowdefn {$1->v_windowdefn_list_.push_back($3); $$ = $1;}
    ;

windowdefn:
        IDENTIFIER AS '(' window ')' {$$ = new WindowDefn(); $$->id_ = new Identifier($1); $$->window_ = $4; free($1);}
    ;

window:
        opt_base_window_name PARTITION BY expr_list opt_order opt_frame {
            $$ = new Window();
            $$->sub_type_ = CASE0;
            $$->opt_base_window_name_ = $1;
            $$->expr_list_ = $4;
            $$->opt_order_ = $5;
            $$->opt_frame_ = $6;
        }
    |   opt_base_window_name opt_order opt_frame {
            $$ = new Window();
            $$->sub_type_ = CASE1;
            $$->opt_base_window_name_ = $1;
            $$->opt_order_ = $2;
            $$->opt_frame_ = $3;
        }
    ;

opt_base_window_name:
        IDENTIFIER {$$ = new OptBaseWindowName(); $$->sub_type_ = CASE0; $$->id_ = new Identifier($1); free($1);}
    | /* empty */ {$$ = new OptBaseWindowName(); $$->sub_type_ = CASE1;}
    ;

opt_frame:
        range_or_rows frame_bound_s opt_frame_exclude {
            $$ = new OptFrame(); 
            $$->sub_type_ = CASE0; 
            $$->range_or_rows_ = $1;
            $$->frame_bound_s_ = $2;
            $$->opt_frame_exclude_ = $3;
        }
    |   range_or_rows BETWEEN frame_bound_s AND frame_bound_e opt_frame_exclude {
            $$ = new OptFrame();
            $$->sub_type_ = CASE1;
            $$->range_or_rows_ = $1;
            $$->frame_bound_s_ = $3;
            $$->frame_bound_e_ = $5;
            $$->opt_frame_exclude_ = $6;
        }
    | /* empty */ {$$ = new OptFrame(); $$->sub_type_ = CASE2;}
    ;

range_or_rows:
        RANGE {$$ = new RangeOrRows(); $$->str_val_ = string("RANGE");}
    |   ROWS {$$ = new RangeOrRows(); $$->str_val_ = string("ROWS");}
    |   GROUPS {$$ = new RangeOrRows(); $$->str_val_ = string("GROUPS");}
    ;

frame_bound_s:
        frame_bound {$$ = new FrameBoundS(); $$->sub_type_ = CASE0; $$->frame_bound_ = $1;}
    |   UNBOUNDED PRECEDING {$$ = new FrameBoundS(); $$->sub_type_ = CASE1;}
    ;

frame_bound_e:
        frame_bound {$$ = new FrameBoundE(); $$->sub_type_ = CASE0; $$->frame_bound_ = $1;}
    |   UNBOUNDED FOLLOWING {$$ = new FrameBoundE(); $$->sub_type_ = CASE1;}
    ;

frame_bound:
        expr PRECEDING {$$ = new FrameBound(); $$->sub_type_ = CASE0; $$->expr_ = $1;}
    |   expr FOLLOWING {$$ = new FrameBound(); $$->sub_type_ = CASE1; $$->expr_ = $1;}
    |   CURRENT ROW {$$ = new FrameBound(); $$->sub_type_ = CASE2;}
    ;

opt_frame_exclude:
        EXCLUDE frame_exclude {$$ = new OptFrameExclude(); $$->sub_type_ = CASE0; $$->frame_exclude_ = $2;}
    |   /* empty */ {$$ = new OptFrameExclude(); $$->sub_type_ = CASE1; }
    ;

frame_exclude:
        NO OTHERS {$$ = new FrameExclude(); $$->str_val_ = string("NO OTHERS");}
    |   CURRENT ROW {$$ = new FrameExclude(); $$->str_val_ = string("CURRENT ROW");}
    |   GROUP {$$ = new FrameExclude(); $$->str_val_ = string("GROUP");}
    |   TIES {$$ = new FrameExclude(); $$->str_val_ = string("TIES");}
    ;


opt_distinct:
        DISTINCT { $$ = new OptDistinct();  $$->str_val_ = string("DISTINCT");}
    |   /* empty */ { $$ = new OptDistinct();  $$->str_val_ = string("");}
    ;

select_list:
        expr_list {
            $$ = new SelectList();
            $$->expr_list_ = $1;
        }
    ;

opt_from_clause:
        from_clause  { $$ = new OptFromClause(); $$->sub_type_ = CASE0; $$->from_clause_ = $1;}
    |   /* empty */  { $$ = new OptFromClause(); $$->sub_type_ = CASE1;}
    ;

from_clause:
        FROM table_ref { $$ = new FromClause(); $$->table_ref_ = $2;}
    ;


opt_where:
        WHERE expr { $$ = new OptWhere(); $$->sub_type_ = CASE0; $$->expr_ = $2; }
    |   /* empty */ { $$ = new OptWhere(); $$->sub_type_ = CASE1;}
    ;

opt_group:
        GROUP BY expr_list opt_having {
            $$ = new OptGroup();
            $$->sub_type_ = CASE0;
            $$->expr_list_ = $3;
            $$->opt_having_ = $4;
        }
    |   /* empty */ { $$ = new OptGroup(); $$->sub_type_ = CASE1;}
    ;

opt_having:
        HAVING expr { $$ = new OptHaving(); $$->sub_type_ = CASE0; $$->expr_ = $2; }
    |   /* empty */ { $$ = new OptHaving(); $$->sub_type_ = CASE1;} ;
    
opt_order:
        ORDER BY order_list { $$ = new OptOrder(); $$->sub_type_ = CASE0; $$->order_list_ = $3; }
    |   /* empty */ {  $$ = new OptOrder(); $$->sub_type_ = CASE1;}
    ;

order_list:
        order_desc { $$ = new OrderList(); $$->v_order_desc_.push_back($1); }
    |   order_list ',' order_desc { $1->v_order_desc_.push_back($3); $$ = $1; }
    ;

order_desc:
        expr opt_order_type opt_null{ $$ = new OrderDesc(); $$->expr_ = $1; $$->opt_order_type_ = $2; $$->opt_null_ = $3;}
    ;

opt_order_type:
        ASC { $$ = new OptOrderType(); $$->str_val_ = string("ASC"); }
    |   DESC { $$ = new OptOrderType(); $$->str_val_ = string("DESC"); }
    |   /* empty */ { $$ = new OptOrderType(); $$->str_val_ = string(""); }
    ;


opt_top:
        TOP int_literal { 
            $$ = new OptTop(); 
            $$->sub_type_ = CASE0;
            $$->int_literal_ = $2;
            }
    |   /* empty */ { 
            $$ = new OptTop(); 
            $$->sub_type_ = CASE1;
            }
    ;

opt_limit:
        LIMIT expr { $$ = new OptLimit(); $$->sub_type_ = CASE0; $$->expr1_ = $2;}
    |   OFFSET expr { $$ = new OptLimit(); $$->sub_type_ = CASE1; $$->expr1_ = $2;}
    |   LIMIT expr OFFSET expr { $$ = new OptLimit(); $$->sub_type_ = CASE2; $$->expr1_ = $2; $$->expr2_ = $4;}
    |   LIMIT ALL { $$ = new OptLimit(); $$->sub_type_ = CASE3;}
    |   LIMIT ALL OFFSET expr { $$ = new OptLimit(); $$->sub_type_ = CASE4; $$->expr1_ = $4;}
    |   /* empty */ { $$ = nullptr; }
    ;

/******************************
 * Expressions
 ******************************/
expr_list:
        expr_alias { 
            $$ = new ExprList(); 
            $$->v_expr_list_.push_back($1); 
            }
    |   expr_list ',' expr_alias { 
        $1->v_expr_list_.push_back($3); 
        $$ = $1; }
    ;

opt_literal_list:
        literal_list { 
            $$ = new OptLiteralList();
            $$->sub_type_ = CASE0;
            $$->literal_list_ = $1;
            }
    |   /* empty */ { 
            $$ = new OptLiteralList();
            $$->sub_type_ = CASE1; }
    ;

literal_list:
        literal { 
            $$ = new LiteralList(); 
            $$->v_literal_list_.push_back($1); 
            }
    |   literal_list ',' literal { 
        $1->v_literal_list_.push_back($3); 
        $$ = $1; 
        }
    ;

expr_alias:
        expr opt_alias {
            $$ = new ExprAlias();
            $$->expr_ = $1;
            $$->opt_alias_ = $2;
        }
    ;

expr:
        operand {$$ = $1;}
    |   between_expr {$$ = $1;}
    |   logic_expr {$$ = $1;}
    |   exists_expr {$$ = $1;}
    |   in_expr {$$ = $1;}
    |   cast_expr {$$ = $1;}
    ;

operand: 
        '(' expr ')' { $$ = new Operand(); $$->sub_type_ = CASE0; $$->expr_ = $2; } 
    |   array_index { $$ = new Operand(); $$->sub_type_ = CASE1; $$->expr_ = $1; }
    |   scalar_expr { $$ = new Operand(); $$->sub_type_ = CASE1; $$->expr_ = $1; }
    |   unary_expr  { $$ = new Operand(); $$->sub_type_ = CASE1; $$->expr_ = $1; }
    |   binary_expr { $$ = new Operand(); $$->sub_type_ = CASE1; $$->expr_ = $1; }
    |   case_expr   { $$ = new Operand(); $$->sub_type_ = CASE1; $$->expr_ = $1; }
    |   function_expr   { $$ = new Operand(); $$->sub_type_ = CASE1; $$->expr_ = $1; }
    |   extract_expr    { $$ = new Operand(); $$->sub_type_ = CASE1; $$->expr_ = $1; }
    |   array_expr  { $$ = new Operand(); $$->sub_type_ = CASE1; $$->expr_ = $1; }
    |   '(' select_no_paren ')' { $$ = new Operand(); $$->sub_type_ = CASE2; $$->select_no_paren_ = $2; }
    ;

cast_expr:
	    CAST '(' expr AS column_type ')' {
		    $$ = new CastExpr();
		    $$->expr_ = $3;
            $$->column_type_ = $5;
	    }
    ;

scalar_expr:
        column_name {$$ = new ScalarExpr(); $$->sub_type_=CASE0; $$->column_name_ = $1;}
    |   literal {$$ = new ScalarExpr(); $$->sub_type_=CASE1; $$->literal_ = $1;}
    ;

unary_expr:
        '-' operand { 
            $$ =new UnaryExpr(); 
            $$->sub_type_ = CASE0;
            $$->operand_ = $2;
            $$->operator_ = string("-");
            }
    |   NOT operand { 
        $$ =new UnaryExpr(); 
            $$->sub_type_ = CASE1;
            $$->operand_ = $2;
            $$->operator_ = string("NOT");
        }
    |   operand ISNULL { 
            $$ =new UnaryExpr(); 
            $$->sub_type_ = CASE2;
            $$->operand_ = $1;
            $$->operator_ = string("ISNULL");
        }
    |   operand IS NULL { 
            $$ =new UnaryExpr(); 
            $$->sub_type_ = CASE3;
            $$->operand_ = $1;
            $$->operator_ = string("IS NULL");
        }
    |   operand IS NOT NULL { 
            $$ =new UnaryExpr(); 
            $$->sub_type_ = CASE4;
            $$->operand_ = $1;
            $$->operator_ = string("IS NOT NULL");
        }
    ;

binary_expr:
        comp_expr {$$ = new BinaryExpr(); $$->sub_type_ = CASE0; $$->comp_expr_ = $1;}
    |   operand '-' operand         { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("-");}
    |   operand '+' operand         { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("+");}
    |   operand '/' operand         { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("/");}
    |   operand '*' operand         { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("*");}
    |   operand '%' operand         { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("%");}
    |   operand '^' operand         { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("^");}
    |   operand LIKE operand        { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("LIKE");}
    |   operand NOT LIKE operand    { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $4; $$->operator_ = string("NOT LIKE");}
    |   operand ILIKE operand       { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("ILIKE");}
    |   operand CONCAT operand  { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("CONCAT");}
    |   operand GLOB operand    { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("GLOB");}
    |   operand MATCH operand   { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("MATCH");}
    |   operand REGEX operand  { $$ = new BinaryExpr(); $$->sub_type_ = CASE1; $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("REGEX");}
    ;

logic_expr:
        expr AND expr   { $$ = new LogicExpr(); $$->expr1_=$1; $$->expr2_=$3; $$->operator_=string("AND"); }
    |   expr OR expr    { $$ = new LogicExpr(); $$->expr1_=$1; $$->expr2_=$3; $$->operator_=string("OR"); }
    ;

in_expr:
        operand IN '(' expr_list ')'            { $$ = new InExpr(); $$->sub_type_=CASE0; $$->operand_=$1; $$->expr_list_=$4;}
    |   operand NOT IN '(' expr_list ')'        { $$ = new InExpr(); $$->sub_type_=CASE1; $$->operand_=$1; $$->expr_list_=$5;}
    |   operand IN '(' select_no_paren ')'      { $$ = new InExpr(); $$->sub_type_=CASE2; $$->operand_=$1; $$->select_no_paren_=$4;}
    |   operand NOT IN '(' select_no_paren ')'  { $$ = new InExpr(); $$->sub_type_=CASE3; $$->operand_=$1; $$->select_no_paren_=$5;}
    ;

// CASE grammar based on: flex & bison by John Levine
// https://www.safaribooksonline.com/library/view/flex-bison/9780596805418/ch04.html#id352665
case_expr:
        CASE expr case_list END             { $$ = new CaseExpr(); $$->sub_type_=CASE0; $$->case_expr_=$2; $$->case_list_=$3; }
    |   CASE expr case_list ELSE expr END   { $$ = new CaseExpr(); $$->sub_type_=CASE1; $$->case_expr_=$2; $$->case_list_=$3; $$->else_expr_=$5;}
    |   CASE case_list END                  { $$ = new CaseExpr(); $$->sub_type_=CASE2; $$->case_list_=$2; }
    |   CASE case_list ELSE expr END        { $$ = new CaseExpr(); $$->sub_type_=CASE3; $$->else_expr_=$4; $$->case_list_=$2; }
    ;

case_list:
        WHEN expr THEN expr              { $$ = new CaseList(); $$->v_case_list_.push_back(new CaseClause($2,$4)); }
    |   case_list WHEN expr THEN expr    { $$->v_case_list_.push_back(new CaseClause($3, $5)); $$ = $1; }
    ;

exists_expr:
        EXISTS '(' select_no_paren ')' { $$ = new ExistsExpr(); $$->sub_type_=CASE0; $$->select_no_paren_=$3;}
    |   NOT EXISTS '(' select_no_paren ')' { $$ = new ExistsExpr(); $$->sub_type_=CASE1; $$->select_no_paren_=$4;}
    ;

comp_expr:
        operand '=' operand         {$$ = new CompExpr(); $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("="); }
    |   operand EQUALS operand          { $$ = new CompExpr(); $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("=="); }//zr
    |   operand NOTEQUALS operand   { $$ = new CompExpr(); $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("!="); }//zr
    |   operand '<' operand         { $$ = new CompExpr(); $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("<"); }
    |   operand '>' operand         { $$ = new CompExpr(); $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string(">"); }
    |   operand LESSEQ operand      { $$ = new CompExpr(); $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string("<="); }//zr
    |   operand GREATEREQ operand   { $$ = new CompExpr(); $$->operand1_ = $1; $$->operand2_ = $3; $$->operator_ = string(">="); }//zr
    ;

function_expr: 
               IDENTIFIER '(' ')' opt_filter_clause opt_over_clause{ 
                   $$ = new FunctionExpr(); 
                   $$->sub_type_ = CASE0; 
                   $$->id_ = new Identifier($1); 
                   $$->opt_filter_clause_ = $4;
                   $$->opt_over_clause_ = $5;
                   free($1);
                   }
       |       IDENTIFIER '(' opt_distinct expr_list ')' opt_filter_clause opt_over_clause{ 
                   $$ = new FunctionExpr(); 
                   $$->sub_type_ = CASE1; 
                   $$->id_ = new Identifier($1); 
                   $$->opt_distinct_ = $3;
                   $$->expr_list_ = $4;
                   $$->opt_filter_clause_ = $6;
                   $$->opt_over_clause_ = $7;
                   free($1);
                   }
       ;

opt_over_clause:
        OVER '(' window ')' {$$ = new OptOverClause(); $$->sub_type_ = CASE0; $$->window_ = $3;}
    |   OVER  IDENTIFIER /* over window_name */ {
        $$ = new OptOverClause(); 
        $$->sub_type_ = CASE1; 
        $$->id_ = new Identifier($2, id_window_name);
        free($2);
    }
    | /* emtpy */ {$$ = new OptOverClause(); $$->sub_type_ = CASE2;}
    ;

opt_filter_clause:
        FILTER '(' WHERE expr ')' {$$ = new OptFilterClause(); $$->sub_type_ = CASE0; $$->expr_ = $4;}
    | /* emtpy */ {$$ = new OptFilterClause(); $$->sub_type_ = CASE1;}
    ;


extract_expr:
         EXTRACT '(' datetime_field FROM expr ')'    { 
             $$ = new ExtractExpr();
             $$->datetime_field_ = $3;
             $$->expr_ = $5; 
             $$->sub_type_ = CASE0;
             }
    ;

datetime_field:
        SECOND { $$ = new DatetimeField(); $$->str_val_ = string("SECOND"); }
    |   MINUTE { $$ = new DatetimeField(); $$->str_val_ = string("MINUTE"); }
    |   HOUR { $$ = new DatetimeField(); $$->str_val_ = string("HOUR"); }
    |   DAY { $$ = new DatetimeField(); $$->str_val_ = string("DAY"); }
    |   MONTH { $$ = new DatetimeField(); $$->str_val_ = string("MONTH"); }
    |   YEAR { $$ = new DatetimeField(); $$->str_val_ = string("YEAR"); }
    ;

array_expr:
        ARRAY '[' expr_list ']' { $$ = new ArrayExpr(); $$->expr_list_=$3; }
    ;

array_index:
        operand '[' int_literal ']' { $$ = new ArrayIndex(); $$->operand_ = $1; $$->int_literal_ = $3;}
    ;

between_expr:
        operand BETWEEN operand AND operand { $$ = new BetweenExpr(); $$->operand1_=$1; $$->operand2_=$3; $$->operand3_=$5;}
    ;

column_name:
        IDENTIFIER { $$ = new ColumnName(); $$->sub_type_=CASE0; $$->identifier1_=new Identifier($1, id_column_name); free($1);}
    |   IDENTIFIER '.' IDENTIFIER { $$ = new ColumnName(); $$->sub_type_=CASE1; $$->identifier1_=new Identifier($1, id_table_name); $$->identifier2_=new Identifier($3, id_column_name); free($1); free($3);}
    |   '*' { $$ = new ColumnName(); $$->sub_type_=CASE2; }
    |   IDENTIFIER '.' '*' { $$ = new ColumnName(); $$->sub_type_=CASE3; $$->identifier1_=new Identifier($1, id_table_name); free($1);}
    ;

literal:
        string_literal  {$$=$1;}
    |   bool_literal  {$$=$1;}
    |   num_literal  {$$=$1;}
    |   null_literal  {$$=$1;}
    |   param_expr  {$$=$1;}
    ;

string_literal:
        STRING { $$ = new StringLiteral(); $$->str_val_ = $1; free($1);}
    ;

bool_literal:
        TRUE { $$ = new BoolLiteral(); $$->b_val_=true; }
    |   FALSE { $$ = new BoolLiteral(); $$->b_val_=false; }
    ;

num_literal:
        FLOATVAL { $$ = new NumLiteral(); $$->sub_type_=CASE0; $$->f_val_ = $1; }
    |   int_literal {$$ = new NumLiteral(); $$->sub_type_=CASE1; $$->int_literal_ = $1;}
    ;

int_literal:
        INTVAL {$$ = new IntLiteral(); $$->int_val_=$1; }
    ;

null_literal:
            NULL { $$ = new NullLiteral(); }
    ;

param_expr:
        '?' {
            $$ = new ParamExpr();
        }
    ;


/******************************
 * Table
 ******************************/


table_ref:
        table_prefix table_name opt_alias opt_index opt_on opt_using{
            $$ = new TableRef();
            $$->sub_type_ = CASE0;
            $$->table_prefix_ = $1;
            $$->table_name_ = $2;
            $$->opt_alias_ = $3;
            $$->opt_index_ = $4;
            $$->opt_on_ = $5;
            $$->opt_using_ = $6;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
        }
    |   table_prefix table_name '(' expr_list ')' opt_alias opt_on opt_using{
            $$ = new TableRef();
            $$->sub_type_ = CASE1;
            $$->table_prefix_ = $1;
            $$->table_name_ = $2;
            $$->expr_list_ = $4;
            $$->opt_alias_  = $6;
            $$->opt_on_ = $7;
            $$->opt_using_ = $8;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
    }
    |   table_prefix '(' select_no_paren ')' opt_alias opt_on opt_using {
            $$ = new TableRef();
            $$->sub_type_ = CASE2;
            $$->table_prefix_ = $1;
            $$->select_no_paren_ = $3;
            $$->opt_alias_ = $5;
            $$->opt_on_ = $6;
            $$->opt_using_ = $7;
    }
    |   table_prefix '(' table_ref ')' opt_alias opt_on opt_using{
            $$ = new TableRef();
            $$->sub_type_ = CASE3;
            $$->table_prefix_ = $1;
            $$->table_ref_ = $3;
            $$->opt_alias_ = $5;
            $$->opt_on_ = $6;
            $$->opt_using_ = $7;
    }
    ;

table_prefix:
        table_ref join_op{
            $$ = new TablePrefix();
            $$->sub_type_ = CASE0;
            $$->table_ref_ = $1;
            $$->join_op_ = $2;
        }
    |   /*empty*/ {
            $$ = new TablePrefix();
            $$->sub_type_ = CASE1;
        }
    ;
join_op:
        ',' {$$ = new JoinOp(); $$->sub_type_ = CASE0; }
    |   JOIN {$$ = new JoinOp(); $$->sub_type_ = CASE1; }
    |   join_kw JOIN {$$ = new JoinOp(); $$->sub_type_ = CASE2; $$->join_kw_ = $1;}
    |   join_kw IDENTIFIER JOIN {
            $$ = new JoinOp(); 
            $$->sub_type_ = CASE3; 
            $$->id1_ = new Identifier($2, id_top_table_name); 
            $$->join_kw_ = $1; 
            free($2);}
    |   join_kw IDENTIFIER IDENTIFIER JOIN {
            $$ = new JoinOp(); 
            $$->sub_type_ = CASE4; 
            $$->id1_ = new Identifier($2);
            $$->id2_ = new Identifier($3);
            $$->join_kw_ = $1;
            free($2);
            free($3);
        }
    ;
    
opt_index:
        INDEXED BY column_name {$$ = new OptIndex(); $$->sub_type_ = CASE0; $$->column_name_ = $3; }
    |   NOT INDEXED {$$ = new OptIndex(); $$->sub_type_ = CASE1; }
    |   /*empty*/ {$$ = new OptIndex(); $$->sub_type_ = CASE2; }
    ;

opt_on:
        ON expr{$$ = new OptOn(); $$->sub_type_ = CASE0; $$->expr_ = $2; }
    |   /*empty*/ {$$ = new OptOn(); $$->sub_type_ = CASE1; }
    ;

opt_using:
        USING '(' ident_commalist ')' {$$ = new OptUsing(); $$->sub_type_ = CASE0; $$->ident_commalist_ = $3; }
    |   /*empty*/ {$$ = new OptUsing(); $$->sub_type_ = CASE1; }
    ; 


table_ref_name_no_alias:
        table_name {
            $$ = new TableRefNameNoAlias();
            $$->table_name_ = $1;
            $$->table_name_->table_name_->id_type_ = id_top_table_name;
        }
    ;
table_name:
        IDENTIFIER                { $$ = new TableName(); $$->sub_type_ = CASE0; $$->table_name_ = new Identifier($1, id_table_name); $$->database_name_ = NULL; free($1);}
    |   IDENTIFIER '.' IDENTIFIER { 
			$$ = new TableName(); 
			$$->sub_type_ = CASE1; 
			$$->database_name_ = new Identifier($1,id_database_name); 
			$$->table_name_ = new Identifier($3, id_table_name);
            free($1);
            free($3);
		}
    ;

alias:
        AS IDENTIFIER { $$ = new Alias(); $$->sub_type_ = CASE0; $$->id_ = new Identifier($2); free($2); }
    ;


opt_alias:
        alias { $$ = new OptAlias(); $$->sub_type_ = CASE0; $$->alias_=$1;}
    |   /* empty */ { $$ = new OptAlias(); $$->sub_type_ = CASE1; }
    ;

/******************************
 * With Descriptions
 ******************************/

opt_with_clause:
        with_clause { $$ = new OptWithClause(); $$->sub_type_ = CASE0; $$->with_clause_=$1;}
    |   /* empty */ { $$ = new OptWithClause(); $$->sub_type_ = CASE1; }
    ;

with_clause:
        WITH with_description_list { $$ = new WithClause(); $$->with_description_list_ = $2; }
    ;

with_description_list:
        with_description {
            $$ = new WithDescriptionList();
            $$->v_with_description_list_.push_back($1);
        }
    |   with_description_list ',' with_description {
            $1->v_with_description_list_.push_back($3);
            $$ = $1;
        }
    ;

with_description:
        IDENTIFIER AS select_with_paren {
            $$ = new WithDescription();
            $$->id_ = new Identifier($1);
            $$->select_with_paren_ = $3;
            free($1);
        }
    ;


/******************************
 * Join Statements
 ******************************/

join_kw:
        INNER       { $$ = new JoinKw(); $$->str_val_ = string("INNER"); }
    |   LEFT OUTER  { $$ = new JoinKw(); $$->str_val_ = string("LEFT OUTER"); }
    |   LEFT        { $$ = new JoinKw(); $$->str_val_ = string("LEFT"); }
    |   RIGHT OUTER { $$ = new JoinKw(); $$->str_val_ = string("RIGHT OUTER"); }
    |   RIGHT       { $$ = new JoinKw(); $$->str_val_ = string("RIGHT"); }
    |   FULL OUTER  { $$ = new JoinKw(); $$->str_val_ = string("FULL OUTER"); }
    |   OUTER       { $$ = new JoinKw(); $$->str_val_ = string("OUTER"); }
    |   FULL        { $$ = new JoinKw(); $$->str_val_ = string("FULL"); }
    |   CROSS       { $$ = new JoinKw(); $$->str_val_ = string("CROSS"); }
    |   NATURAL     {$$ = new JoinKw(); $$->str_val_ = string("NATURAL");}
    //|   /* empty, default */    { $$ = new JoinKw(); $$->str_val_ = string(""); }
    ;

/*
join_condition:
        expr { $$ = new JoinCondition(); $$->expr_ = $1;}
        ;
*/

/******************************
 * Misc
 ******************************/

opt_semicolon:
        ';' {$$ = new OptSemicolon(); $$->str_val_ = string(";");}
    |   /* empty */{$$ = new OptSemicolon(); $$->str_val_ = string("");}
    ;


ident_commalist:
        IDENTIFIER { $$ = new IdentCommaList(); $$->v_iden_comma_list_.push_back(new Identifier($1)); free($1);}
    |   ident_commalist ',' IDENTIFIER { $1->v_iden_comma_list_.push_back(new Identifier($3)); $$ = $1; free($3);}
    ;

%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
