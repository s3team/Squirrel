#include  "../include/ast.h"
#include  "../include/utils.h"
#include "../include/mutator.h"
#include <iostream>
#include <vector>
#include <cassert>
#include <cstdio>


static string s_table_name;

string IR::to_string(){
    
    string res;

    if(type_ == kColumnName && str_val_ == "*") return str_val_;
    if(type_ == kFilePath || type_ == kPrepareTargetQuery || type_ == kStringLiteral || type_ == kIdentifier || type_ == kOptOrderType
       || type_ == kColumnType || type_ == kSetType || type_ == kOptJoinType
       || type_ == kOptDistinct || type_ == kNullLiteral) return str_val_;
    if(type_ == kIntLiteral) return std::to_string(int_val_);
    if(type_ == kFloatLiteral || type_ == kconst_float) return std::to_string(f_val_);
    if(type_ == kconst_str) return str_val_;
    if(type_ == kconst_int)  return std::to_string(int_val_);
    

    if(!str_val_.empty()) return str_val_;

    if( op_!= NULL )
        res += op_->prefix_ + " ";
    if(left_ != NULL)
        res += left_->to_string() + " ";
    if( op_!= NULL)
        res += op_->middle_ + " ";
    if(right_ != NULL)
        res += right_->to_string() + " ";
    if(op_!= NULL)
        res += op_->suffix_;
   
    trim_string(res);
    return res;
}


IR* ShowStatement::translate(vector<IR *> &v_ir_collector){

    TRANSLATESTART

    SWITCHSTART
        CASESTART(1)
            IR * tmp = SAFETRANSLATE(table_name_);
            res = new IR(kShowStatement, OPSTART("SHOW COLUMNS"), tmp);
        CASEEND
        CASESTART(0)
            res = new IR(kShowStatement, OPSTART("SHOW TABLES"));
        CASEEND
        CASESTART(2)
            IR * tmp = SAFETRANSLATE(table_name_);
            res = new IR(kShowStatement, OPSTART("DESCRIBE"), tmp);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR * TableName::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            IR * tmp1 = SAFETRANSLATE(table_name_);
            res = new IR(kTableName, OP0(), tmp1);
        CASEEND
        CASESTART(1)
            IR * tmp1 = SAFETRANSLATE(database_name_);
            IR * tmp2 = SAFETRANSLATE(table_name_);
            res = new IR(kTableName, OPMID("."), tmp1, tmp2);
        CASEEND        
    SWITCHEND
    TRANSLATEEND
}

IR * DropStatement::translate(vector<IR *> &v_ir_collector){

    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            IR * tmp1 = SAFETRANSLATE(opt_exists_);
            IR * tmp2 = SAFETRANSLATE(table_name_);
            res = new IR(kDropStatement, OPSTART("DROP TABLE"), tmp1, tmp2);
        CASEEND
        CASESTART(1)
            IR * tmp1 = SAFETRANSLATE(opt_exists_);
            IR * tmp2 = SAFETRANSLATE(table_name_);
            res = new IR(kDropStatement, OPSTART("DROP VIEW"), tmp1, tmp2);
        CASEEND
        CASESTART(2)
            IR * tmp1 = SAFETRANSLATE(id_);
            res = new IR(kDropStatement, OPSTART("DEALLOCATE PREPARE"), tmp1);
        CASEEND
        CASESTART(3)
            auto opt_exist = SAFETRANSLATE(opt_exists_);
            auto schema_name = SAFETRANSLATE(schema_name_);
            auto trigger_name = SAFETRANSLATE(trigger_name_);
            res = new IR(kUnknown, OPMID("."), schema_name, trigger_name);
            PUSH(res);
            res = new IR(kDropStatement, OP1("DROP TRIGGER"), opt_exist, res);
        CASEEND
        CASESTART(4)
            auto opt_exist = SAFETRANSLATE(opt_exists_);
            auto trigger_name = SAFETRANSLATE(trigger_name_);
            res = new IR(kDropStatement, OP1("DROP TRIGGER"), opt_exist, trigger_name);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR * OptExists::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = new IR(kOptExists, str_val_);

    TRANSLATEEND
}

IR* Node::translate(vector<IR *> &v_ir_collector){
    return NULL;
}

IR* Opt::translate(vector<IR *> &v_ir_collector){
    return NULL;
}

IR* OptString::translate(vector<IR *> &v_ir_collector){
    return NULL;
}

IR* Program::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = SAFETRANSLATE(statement_list_);
    auto tmp = SAFETRANSLATE(opt_semicolon_);
    res = new IR(kProgram, OP0(), res, tmp);

    TRANSLATEEND
}

IR* StatementList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    TRANSLATELIST(kStatementList, v_statement_list_, ";");

    TRANSLATEENDNOPUSH
}

IR* Statement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(preparable_statement_);
            auto tmp = SAFETRANSLATE(optional_hints_);
            res = new IR(kStatement, OP0(), res, tmp);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(prepare_statement_);
            auto tmp = SAFETRANSLATE(optional_hints_);
            res = new IR(kStatement, OP0(), res, tmp);
        CASEEND
        CASESTART(2)
            res = SAFETRANSLATE(show_statement_);
            res = new IR(kStatement, OP0(), res);
        CASEEND
        CASESTART(3)
            res = SAFETRANSLATE(cmd_);
            res = new IR(kStatement, OP0(), res);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* OptionalHints::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(hint_list_);
            res = new IR(kOptionalHints, OP3("WITH HINT", "(", ")"), NULL, res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptionalHints, "");
        CASEEND
    SWITCHEND
    
    TRANSLATEEND
}




IR* PrepareStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = SAFETRANSLATE(id_);
    auto tmp = SAFETRANSLATE(prep_target_que_);
    res = new IR(kPrepareStatement, OP2("PREPARE", "FROM"), res, tmp);

    TRANSLATEEND
    
}

IR* PreparableStatement::translate(vector<IR *> &v_ir_collector){
    return NULL;
}

IR* Hint::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(id_);
            auto tmp = SAFETRANSLATE(literal_list_);
            res = new IR(kHint, OP3("", "(", ")"), res, tmp);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(id_);
            res = new IR(kHint, OP0(), res);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* HintList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    TRANSLATELIST(kHintList, v_hint_list_, ",");

    TRANSLATEEND
}

IR* PrepareTargetQuery::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kPrepareTargetQuery, prep_target_que_);

    TRANSLATEEND
}

IR* SelectStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto tmp1 = SAFETRANSLATE(opt_with_clause_);
            auto tmp2 = SAFETRANSLATE(select_with_paren_);
            res = new IR(kSelectStatement, OP0(), tmp1 ,tmp2);
        CASEEND
        CASESTART(1)
            auto tmp1 = SAFETRANSLATE(opt_with_clause_);
            auto tmp2 = SAFETRANSLATE(select_no_paren_);
            res = new IR(kSelectStatement, OP0(), tmp1 ,tmp2);
        CASEEND
        CASESTART(2)
            auto tmp1 = SAFETRANSLATE(opt_with_clause_);
            auto tmp2 = SAFETRANSLATE(select_with_paren_);
            auto tmp3 = SAFETRANSLATE(set_operator_);
            auto tmp4 = SAFETRANSLATE(select_paren_or_clause_);
            auto tmp5 = SAFETRANSLATE(opt_order_);
            IR * tmp6 = NULL;
            if(opt_limit_ != NULL)
                tmp6 = SAFETRANSLATE(opt_limit_);
            
            res = new IR(kUnknown, OP0(), tmp1 ,tmp2);
            PUSH(res);
            res = new IR(kUnknown, OP0(), res ,tmp3);
            PUSH(res);
            res = new IR(kUnknown, OP0(), res ,tmp4);
            PUSH(res);
            res = new IR(kUnknown, OP0(), res ,tmp5);
            if(opt_limit_ != NULL){
                PUSH(res);
                res = new IR(kSelectStatement, OP0(), res ,tmp6);
            }
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* ImportStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    auto tmp1 = SAFETRANSLATE(import_file_type_);
    auto tmp2 = SAFETRANSLATE(file_path_);
    auto tmp3 = SAFETRANSLATE(table_name_);
    
    res = new IR(kUnknown, OP2("IMPORT FROM", "FILE"),tmp1, tmp2);
    PUSH(res);
    res = new IR(kImportStatement, OPMID("INTO"), res, tmp3);
    TRANSLATEEND
}

IR* CreateStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    
    SWITCHSTART
        CASESTART(0)
            auto tmp1 = SAFETRANSLATE(opt_not_exists_);
            auto tmp2 = SAFETRANSLATE(table_name_);
            auto tmp = new IR(kUnknown, OP0(), tmp1, tmp2);
            PUSH(tmp);
            auto tmp3 = SAFETRANSLATE(file_path_);
            res = new IR(kCreateStatement, OP2("CREATE TABLE", "FROM TBL FILE"), tmp, tmp3);
        CASEEND
        CASESTART(1)
            auto tmp1 = SAFETRANSLATE(opt_not_exists_);
            auto tmp2 = SAFETRANSLATE(table_name_);
            auto tmp = new IR(kUnknown, OP0(), tmp1, tmp2);
            PUSH(tmp);
            auto tmp3 = SAFETRANSLATE(column_def_comma_list_);
            res = new IR(kCreateStatement, OP3("CREATE TABLE", "(", ")"), tmp, tmp3);
        CASEEND
        CASESTART(2)
            auto tmp1 = SAFETRANSLATE(opt_not_exists_);
            auto tmp2 = SAFETRANSLATE(table_name_);
            auto tmp = new IR(kUnknown, OP0(), tmp1, tmp2);
            PUSH(tmp);
            auto tmp3 = SAFETRANSLATE(select_statement_);
            res = new IR(kCreateStatement, OP2("CREATE TABLE", "AS"), tmp, tmp3);
        CASEEND
        CASESTART(3)
            auto tmp1 = SAFETRANSLATE(opt_not_exists_);
            auto tmp2 = SAFETRANSLATE(table_name_);
            auto tmp = new IR(kUnknown, OP0(), tmp1, tmp2);
            PUSH(tmp);
            auto tmp3 = SAFETRANSLATE(opt_column_list_);
            auto tmp4 = new IR(kUnknown, OP0(), tmp, tmp3);
            PUSH(tmp4);
            auto tmp5 = SAFETRANSLATE(select_statement_);
            res = new IR(kCreateStatement, OP2("CREATE VIEW", "AS"), tmp4, tmp5);
        CASEEND
        CASESTART(4)
            auto tmp1 = SAFETRANSLATE(opt_unique_);
            auto tmp2 = SAFETRANSLATE(opt_not_exists_);
            res = new IR(kUnknown, OP2("CREATE", "INDEX"), tmp1, tmp2);
            PUSH(res);
            auto tmp3 = SAFETRANSLATE(index_name_);
            res = new IR(kUnknown, OP0(), res, tmp3);
            PUSH(res);
            auto tmp4 = SAFETRANSLATE(table_name_);
            res = new IR(kUnknown, OPMID("ON"), res, tmp4);
            PUSH(res);
            auto tmp5 = SAFETRANSLATE(ident_commalist_);
            res = new IR(kCreateStatement, OP3("", "(", ")"), res, tmp5);
            PUSH(res);
            auto tmp6 = SAFETRANSLATE(opt_where_);
            res = new IR(kCreateStatement, OP0(), res, tmp6);
        CASEEND
        CASESTART(5)
            auto tmp1 = SAFETRANSLATE(opt_not_exists_);
            auto tmp2 = SAFETRANSLATE(table_name_);
            res = new IR(kUnknown, OP1("CREATE VIRTUAL TABLE"), tmp1, tmp2);
            PUSH(res);
            auto tmp3 = SAFETRANSLATE(module_name_);
            res = new IR(kCreateStatement, OPMID("USING"), res, tmp3);
        CASEEND
        CASESTART(6)
            auto tmp1 = SAFETRANSLATE(opt_not_exists_);
            auto tmp2 = SAFETRANSLATE(table_name_);
            res = new IR(kUnknown, OP1("CREATE VIRTUAL TABLE"), tmp1, tmp2);
            PUSH(res);
            auto tmp3 = SAFETRANSLATE(module_name_);
            res = new IR(kCreateStatement, OPMID("USING"), res, tmp3);
            PUSH(res);
            auto tmp4 = SAFETRANSLATE(column_def_comma_list_);
            res = new IR(kCreateStatement, OP3("", "(", ")"), res, tmp4);
        CASEEND
        CASESTART(7)
            auto tmp1 = SAFETRANSLATE(trigger_declare_);
            auto tmp2 = SAFETRANSLATE(trigger_cmd_list_);
            res = new IR(kCreateStatement, OP3("CREATE", "BEGIN", "END"), tmp1, tmp2);
        CASEEND
    SWITCHEND
    TRANSLATEEND
}

IR* InsertStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(insert_type_);
            auto tmp = SAFETRANSLATE(table_name_);
            res = new IR(kUnknown, OPMID("INTO"), res, tmp);
            PUSH(res);

            tmp = SAFETRANSLATE(opt_column_list_);
            res = new IR(kUnknown, OP0(), res, tmp);
            PUSH(res);

            tmp = SAFETRANSLATE(super_list_);
            tmp = new IR(kUnknown, OP0(), tmp);
            PUSH(tmp);
            res = new IR(kInsertStatement, OPMID("VALUES"), res, tmp);
            PUSH(tmp);

            tmp = SAFETRANSLATE(opt_upsert_clause_);
            res = new IR(kInsertStatement, OP0(), res, tmp);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(insert_type_);
            auto tmp = SAFETRANSLATE(table_name_);
            res = new IR(kUnknown, OPMID("INTO"), res, tmp);
            PUSH(res);

            tmp = SAFETRANSLATE(opt_column_list_);
            res = new IR(kUnknown, OP0(), res, tmp);
            PUSH(res);

            tmp = SAFETRANSLATE(select_no_paren_);
            res = new IR(kInsertStatement, OP0(), res, tmp);
            PUSH(tmp);

            tmp = SAFETRANSLATE(opt_upsert_clause_);
            res = new IR(kInsertStatement, OP0(), res, tmp);
        CASEEND
    SWITCHEND
            
    TRANSLATEEND
}

IR* InsertType::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = new IR(kInsertType, str_val_);
        CASEEND
        CASESTART(1)
            res = new IR(kInsertType, str_val_);
        CASEEND
        CASESTART(2)
            res = SAFETRANSLATE(resolve_type_);
            res = new IR(kInsertType, OP1("INSERT OR"), res);
        CASEEND
    SWITCHEND
    TRANSLATEEND
}

void InsertType::deep_delete(){
    SAFEDELETE(resolve_type_);
    delete this;
}

IR* DeleteStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
    CASESTART(0)
        IR* tmp1 = SAFETRANSLATE(table_name_);
        IR* tmp2 = SAFETRANSLATE(opt_where_);
        res = new IR(kDeleteStatement, OPSTART("DELETE FROM"), tmp1, tmp2);
    CASEEND
    CASESTART(1)
        IR * tmp1 = SAFETRANSLATE(table_name_);
        res = new IR(kDeleteStatement, OPSTART("TRUNCATE"), tmp1);
    CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* UpdateStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = SAFETRANSLATE(table_ref_name_no_alias_);
    auto tmp = SAFETRANSLATE(update_clause_comma_list_);
    res = new IR(kUpdateStatement, OP2("UPDATE", "SET"), res, tmp);
    PUSH(res);

    tmp = SAFETRANSLATE(opt_where_);
    res = new IR(kUpdateStatement, OP0(), res, tmp);
    
    TRANSLATEEND

}

IR* ExecuteStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto id = SAFETRANSLATE(id_);
            res = new IR(kExecuteStatement, OPSTART("EXECUTE"), id);
        CASEEND
        CASESTART(1)
            auto id = SAFETRANSLATE(id_);
            auto tmp = SAFETRANSLATE(opt_literal_list_);
            res = new IR(kExecuteStatement, OP3("EXECUTE","(",")"), id, tmp);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* ImportFileType::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = new IR(kImportFileType, str_val_);

    TRANSLATEEND
}

IR* FilePath::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = new IR(kFilePath, str_val_);
    
    TRANSLATEEND
}

IR* OptNotExists::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = new IR(kOptNotExists, str_val_);
    
    TRANSLATEEND
}

IR* ColumnDefCommaList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    TRANSLATELIST(kColumnDefCommaList, v_column_def_comma_list_, ",");
    
    TRANSLATEENDNOPUSH
}

IR* ColumnDef::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = SAFETRANSLATE(id_);
    auto tmp = SAFETRANSLATE(column_type_);
    res = new IR(kColumnDef, OP0(), res, tmp);
    PUSH(res);
    
    tmp = SAFETRANSLATE(opt_column_arglist_);
    res = new IR(kColumnDef, OP0(), res, tmp);
    
    TRANSLATEEND
}

IR* ColumnType::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = new IR(kColumnType, str_val_);

    TRANSLATEEND
}

IR* OptColumnNullable::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = new IR(kOptColumnNullable, str_val_);

    TRANSLATEEND
}

IR* OptColumnList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(ident_comma_list_);
            res = new IR(kOptColumnList, OP3("(", "", ")"), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptColumnList, "");
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* UpdateClauseCommalist::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    TRANSLATELIST(kUpdateClauseCommalist, v_update_clause_list_, ",");

    TRANSLATEENDNOPUSH
}

IR* UpdateClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    auto tmp1 = SAFETRANSLATE(id_);
    auto tmp2 = SAFETRANSLATE(expr_);
    res = new IR(kUpdateClause, OPMID("="), tmp1 ,tmp2);

    TRANSLATEEND
}

IR* SelectWithParen::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(select_no_paren_);
            res = new IR(kSelectWithParen, OP3("(","",")"), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(select_with_paren_);
            res = new IR(kSelectWithParen, OP3("(","",")"), res);
        CASEEND
    SWITCHEND
        
    TRANSLATEEND
}

IR* SelectParenOrClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(select_with_paren_);
            res = new IR(kSelectParenOrClause, OP0(), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(select_clause_);
            res = new IR(kSelectParenOrClause, OP0(), res);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* SelectNoParen::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(select_clause_);
            auto tmp = SAFETRANSLATE(opt_order_);
            res = new IR(kSelectNoParen, OP0(), res, tmp);
            
            if(opt_limit_ != NULL){
                PUSH(res);
                tmp = SAFETRANSLATE(opt_limit_);
                res = new IR(kSelectNoParen, OP0(), res, tmp);
            }
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(select_clause_);
            auto tmp = SAFETRANSLATE(set_operator_);
            res = new IR(kUnknown, OP0(), res, tmp);
            PUSH(res);

            tmp = SAFETRANSLATE(select_paren_or_clause_);
            res = new IR(kSelectNoParen, OP0(), res, tmp);
            PUSH(res);

            tmp = SAFETRANSLATE(opt_order_);
            res = new IR(kSelectNoParen, OP0(), res, tmp);  
            
            if(opt_limit_ != NULL){
                PUSH(res);
                tmp = SAFETRANSLATE(opt_limit_);
                res = new IR(kSelectNoParen, OP0(), res, tmp);
            }
        CASEEND
    SWITCHEND

    TRANSLATEEND
           
}

IR* SetOperator::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = SAFETRANSLATE(set_type_);
    auto tmp = SAFETRANSLATE(opt_all_);
    res = new IR(kSetOperator, OP0(), res, tmp);
    
    TRANSLATEEND
}

IR* SetType::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = new IR(kSetType, str_val_);

    TRANSLATEEND
}

IR* OptAll::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = new IR(kOptAll, str_val_);

    TRANSLATEEND
}

IR* SelectClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    auto tmp1 = SAFETRANSLATE(opt_top_);
    auto tmp2 = SAFETRANSLATE(opt_distinct_);
    auto tmp3 = SAFETRANSLATE(select_list_);
    auto tmp4 = SAFETRANSLATE(opt_from_clause_);
    auto tmp5 = SAFETRANSLATE(opt_where_);
    auto tmp6 = SAFETRANSLATE(opt_group_);
    
    res = new IR(kUnknown, OPSTART("SELECT"), tmp1, tmp2);
    PUSH(res);
    res = new IR(kUnknown, OP0(), res, tmp3);
    PUSH(res);
    res = new IR(kUnknown, OP0(), res, tmp4);
    PUSH(res);
    res = new IR(kUnknown, OP0(), res, tmp5);
    PUSH(res);
    res = new IR(kSelectClause, OP0(), res, tmp6);
    if(sub_type_ == 1){
        PUSH(res);
        auto tmp = SAFETRANSLATE(window_clause_);
        res = new IR(kSelectClause, OP0(), res, tmp);
    }
    TRANSLATEEND
}

IR* OptDistinct::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kOptDistinct, str_val_);
    
    TRANSLATEEND
}

IR* SelectList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = SAFETRANSLATE(expr_list_);
    res = new IR(kSelectList, OP0(), res);

    TRANSLATEEND
}

IR* FromClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = SAFETRANSLATE(table_ref_);
    res = new IR(kFromClause, OPSTART("FROM"), res);

    TRANSLATEEND
}

IR* OptFromClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(from_clause_);
            res = new IR(kOptFromClause, OP0(), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptFromClause, "");
        CASEEND
    SWITCHEND
    
    TRANSLATEEND
}

IR* OptWhere::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            IR* tmp1 = SAFETRANSLATE(expr_);
            res = new IR(kOptWhere, OPSTART("WHERE"), tmp1);
        CASEEND
        CASESTART(1)
            res = new IR(kOptWhere, string(""));
        CASEEND
    SWITCHEND
    TRANSLATEEND
}

IR* OptGroup::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            auto tmp1 = SAFETRANSLATE(expr_list_);
            auto tmp2 = SAFETRANSLATE(opt_having_);
            res = new IR(kOptGroup, OPSTART("GROUP BY"), tmp1, tmp2);
        CASEEND
        CASESTART(1)
            res = new IR(kOptGroup, "");
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* OptHaving::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(expr_);
            res = new IR(kOptHaving, OP1("HAVING"), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptHaving, "");
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* OptOrder::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(order_list_);
            res = new IR(kOptOrder, OP1("ORDER BY"), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptOrder, "");
        CASEEND
    SWITCHEND
    
    TRANSLATEEND
}

IR* OrderList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    TRANSLATELIST(kOrderList, v_order_desc_, ",");

    TRANSLATEENDNOPUSH
}

IR* OrderDesc::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = SAFETRANSLATE(expr_);
    auto tmp = SAFETRANSLATE(opt_order_type_);
    
    res = new IR(kOrderDesc, OP0(), res, tmp);
    PUSH(res);

    tmp = SAFETRANSLATE(opt_null_);
    res = new IR(kOrderDesc, OP0(), res, tmp);
    
    TRANSLATEEND    
}

IR* OptOrderType::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kOptOrderType, str_val_);

    TRANSLATEEND
}

IR* OptTop::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto tmp = SAFETRANSLATE(int_literal_);
            res = new IR(kOptTop, OPSTART("TOP"), tmp);
        CASEEND

        CASESTART(1)
            res = new IR(kOptTop, "");
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* OptLimit::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            auto tmp = SAFETRANSLATE(expr1_);
            res = new IR(kOptLimit, OPSTART("LIMIT"), tmp);
        CASEEND
        CASESTART(1)
            auto tmp = SAFETRANSLATE(expr1_);
            res = new IR(kOptLimit, OPSTART("OFFSET"), tmp);
        CASEEND
        CASESTART(2)
            auto tmp1 = SAFETRANSLATE(expr1_);
            auto tmp2 = SAFETRANSLATE(expr2_);
            res = new IR(kOptLimit, OP2("LIMIT", "OFFSET"), tmp1, tmp2);
        CASEEND
        CASESTART(3)
            res = new IR(kOptLimit, "LIMIT ALL");
        CASEEND
        CASESTART(4)
            auto tmp = SAFETRANSLATE(expr1_);
            res = new IR(kOptLimit, OPSTART("LIMIT ALL OFFSET"), tmp);
        CASEEND
        CASESTART(5)
            res = new IR(kOptLimit, "");
        CASEEND
    SWITCHEND
    
    TRANSLATEEND         
}

IR* ExprList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    TRANSLATELIST(kExprList, v_expr_list_, ",");

    TRANSLATEENDNOPUSH
}

IR* LiteralList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    TRANSLATELIST(kLiteralList, v_literal_list_, ",");

    TRANSLATEENDNOPUSH
}

IR* OptLiteralList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(literal_list_);
            res = new IR(kOptLiteralList, OP0(), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptLiteralList, "");
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* ExprAlias::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = SAFETRANSLATE(expr_);
    auto tmp = SAFETRANSLATE(opt_alias_);
    
    res = new IR(kExprAlias, OP0(), res, tmp);
    
    TRANSLATEEND
}

IR* Expr::translate(vector<IR *> &v_ir_collector){
    
    return NULL;
}

IR* Operand::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(expr_);
            res = new IR(kOperand, OP2("(", ")"), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(expr_);
            res = new IR(kOperand, OP0(), res);
        CASEEND
        CASESTART(2)
            res = SAFETRANSLATE(select_no_paren_);
            res = new IR(kOperand, OP2("(", ")"), res);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* BetweenExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    auto tmp1 = SAFETRANSLATE(operand2_);
    auto tmp2 = SAFETRANSLATE(operand3_);
    res = new IR(kUnknown, OPMID("AND"), tmp1, tmp2);
    PUSH(res);

    auto tmp3 = SAFETRANSLATE(operand1_);
    res = new IR(kBetweenExpr, OPMID("BETWEEN"), tmp3, res);

    TRANSLATEEND
}
IR* LogicExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    auto tmp1 = SAFETRANSLATE(expr1_);
    auto tmp2 = SAFETRANSLATE(expr2_);

    res = new IR(kLogicExpr, OPMID(operator_), tmp1, tmp2);
    TRANSLATEEND    
}

IR* ExistsExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(select_no_paren_);
            res = new IR(kOperand, OP2("(", ")"), res); 
            PUSH(res);
            res = new IR(kExistsExpr, OP1("EXISTS"), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(select_no_paren_);
            res = new IR(kUnknown, OP2("(", ")"), res); 
            PUSH(res);
            res = new IR(kExistsExpr, OP1("EXISTS"), res);
        CASEEND
    SWITCHEND
    
    TRANSLATEEND        
}

IR* InExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto tmp1 = SAFETRANSLATE(operand_);
            auto tmp2 = SAFETRANSLATE(expr_list_);
            auto tmp3 = new IR(kUnknown, OP3("(", "", ")"), tmp2);
            res = new IR(kInExpr, OPMID("IN"), tmp1, tmp3);
        CASEEND
        CASESTART(1)
            auto tmp1 = SAFETRANSLATE(operand_);
            auto tmp2 = SAFETRANSLATE(expr_list_);
            auto tmp3 = new IR(kUnknown, OP3("(", "", ")"), tmp2);
            res = new IR(kInExpr, OPMID("NOT IN"), tmp1, tmp3);
        CASEEND
        CASESTART(2)
            auto tmp1 = SAFETRANSLATE(operand_);
            auto tmp2 = SAFETRANSLATE(select_no_paren_);
            auto tmp3 = new IR(kUnknown, OP3("(", "", ")"), tmp2);
            res = new IR(kInExpr, OPMID("IN"), tmp1, tmp3);
        CASEEND
        CASESTART(3)
            auto tmp1 = SAFETRANSLATE(operand_);
            auto tmp2 = SAFETRANSLATE(select_no_paren_);
            auto tmp3 = new IR(kUnknown, OP3("(", "", ")"), tmp2);
            res = new IR(kInExpr, OPMID("IN"), tmp1, tmp3);
        CASEEND
    SWITCHEND
    TRANSLATEEND
}

IR* ArrayIndex::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    auto tmp1 = SAFETRANSLATE(operand_);
    auto tmp2 = SAFETRANSLATE(int_literal_);
    res = new IR(kArrayIndex, OP3("","[", "]"), tmp1, tmp2);

    TRANSLATEEND
}


IR* ScalarExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(column_name_);
            res = new IR(kScalarExpr, OP0(), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(literal_);
            res = new IR(kScalarExpr, OP0(), res);
        CASEEND
    SWITCHEND
    
    TRANSLATEEND
}

IR* UnaryExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = SAFETRANSLATE(operand_);
    SWITCHSTART
        CASESTART(0)           
            res = new IR(kUnaryExpr, OP1("-"), res);
        CASEEND
        CASESTART(1)
            res = new IR(kUnaryExpr, OP1("NOT"), res);
        CASEEND
        CASESTART(2)
            res = new IR(kUnaryExpr, OPMID("ISNULL"), res);
        CASEEND
        CASESTART(3)
            res = new IR(kUnaryExpr, OPMID("IS NULL"), res);
        CASEEND
        CASESTART(4)
            res = new IR(kUnaryExpr, OPMID("IS NOT NULL"), res);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* BinaryExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
        auto tmp = SAFETRANSLATE(comp_expr_);
        res = new IR(kBinaryExpr, OP0(), tmp);
        CASEEND
        
        CASESTART(1)
            auto tmp1 = SAFETRANSLATE(operand1_);
            auto tmp2 = SAFETRANSLATE(operand2_);
            res = new IR(kBinaryExpr, OPMID(operator_), tmp1, tmp2);
        CASEEND
    SWITCHEND

    TRANSLATEEND
    
}

IR* CompExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    auto tmp1 = SAFETRANSLATE(operand1_);
    auto tmp2 = SAFETRANSLATE(operand2_);
    res = new IR(kCompExpr, OPMID(operator_), tmp1, tmp2);
    TRANSLATEEND
}
IR* CaseExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto tmp1 = SAFETRANSLATE(case_expr_);
            auto tmp2 = SAFETRANSLATE(case_list_);
            res = new IR(kCaseExpr, OP3("CASE", "", "END"), tmp1, tmp2);
        CASEEND
        CASESTART(1)
            auto tmp1 = SAFETRANSLATE(case_expr_);
            auto tmp2 = SAFETRANSLATE(case_list_);
            auto tmp3 = SAFETRANSLATE(else_expr_);
            res = new IR(kUnknown, OP0(), tmp1 , tmp2);
            PUSH(res);
            res = new IR(kCaseExpr, OP3("CASE", "ELSE", "END"), res , tmp3);
        CASEEND
        CASESTART(2)
            res = SAFETRANSLATE(case_list_);
            res = new IR(kCaseExpr, OP3("CASE", "", "END"), res);
        CASEEND
        CASESTART(3)
            auto tmp1 = SAFETRANSLATE(case_list_);
            auto tmp2 = SAFETRANSLATE(else_expr_);
            res = new IR(kCaseExpr, OP3("CASE", "ELSE", "END"), tmp1, tmp2);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* FunctionExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(id_);
            res = new IR(kFunctionExpr, OPEND("()"), res);
            PUSH(res);
            auto tmp1 = SAFETRANSLATE(opt_filter_clause_);
            res = new IR(kFunctionExpr, OP0(), res, tmp1);
            PUSH(res);
            tmp1 = SAFETRANSLATE(opt_over_clause_);
            res = new IR(kFunctionExpr, OP0(), res, tmp1);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(id_);
            auto tmp = SAFETRANSLATE(opt_distinct_);
            auto tmp2 = SAFETRANSLATE(expr_list_);
            
            auto tmp_res = new IR(kExprList, OP3("(", "", ")"), tmp, tmp2);
            PUSH(tmp_res);
            res = new IR(kFunctionExpr, OP0(), res, tmp_res);
            PUSH(res);
            auto tmp1 = SAFETRANSLATE(opt_filter_clause_);
            res = new IR(kFunctionExpr, OP0(), res, tmp1);
            PUSH(res);
            tmp1 = SAFETRANSLATE(opt_over_clause_);
            res = new IR(kFunctionExpr, OP0(), res, tmp1);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* ExtractExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = SAFETRANSLATE(datetime_field_);
    IR * expr = SAFETRANSLATE(expr_);
    res = new IR(kUnknown, OP3("(", "FROM", ")"), res, expr);
    PUSH(res);
    res = new IR(kExtractExpr, OPSTART("EXTRACT"), res);

    TRANSLATEEND
}

IR* ArrayExpr::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = SAFETRANSLATE(expr_list_);
    res = new IR(kArrayExpr, OP3("ARRAY", "[","]"), NULL, res);
    
    TRANSLATEEND
    
}

IR* CaseClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    auto tmp1 = SAFETRANSLATE(when_expr_);
    auto tmp2 = SAFETRANSLATE(then_expr_);
    res = new IR(kCaseClause, OP2("WHEN", "THEN"), tmp1, tmp2);

    TRANSLATEEND

}
IR* CaseList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    TRANSLATELIST(kCaseList, v_case_list_, " ");

    TRANSLATEENDNOPUSH
}

IR* DatetimeField::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kDatetimeField, str_val_);

    TRANSLATEEND
}

IR* ColumnName::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(identifier1_);
            res = new IR(kColumnName, OP0(), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(identifier1_);
            IR * tmp = SAFETRANSLATE(identifier2_);
            res->id_type_ = id_whatever;
            tmp->id_type_ = id_whatever;
            res = new IR(kColumnName, OPMID("."), res, tmp);
            res->id_type_ = id_column_name;
        CASEEND
        CASESTART(2)
            res = new IR(kColumnName, string("*"));
        CASEEND
        CASESTART(3)
            res = SAFETRANSLATE(identifier1_);
            res->id_type_ = id_whatever;
            IR * tmp = new IR(kconst_str, string("*"));
            PUSH(tmp);
            res = new IR(kColumnName, OPMID("."), res, tmp);
            res->id_type_ = id_column_name;
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* Literal::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    assert(0);
    TRANSLATEEND
}

IR* StringLiteral::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kStringLiteral, "'" + str_val_ + "'");

    TRANSLATEEND
}

IR* BoolLiteral::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kBoolLiteral, b_val_);

    TRANSLATEEND
}

IR* NumLiteral::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = new IR(kFloatLiteral, f_val_);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(int_literal_);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* IntLiteral::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kIntLiteral, int_val_);

    TRANSLATEEND
}

IR* NullLiteral::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kNullLiteral, string("NULL"));
    
    TRANSLATEEND
}


IR* ParamExpr::translate(vector<IR *> &v_ir_collector){
    return NULL;
}

IR* Identifier::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    res = new IR(kIdentifier, id_, id_type_);

    TRANSLATEEND
}

IR* TableRefCommaList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    TRANSLATELIST(kTableRefCommaList, v_table_ref_comma_list_, ",");

    TRANSLATEEND
}

IR* TableRefAtomic::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(nonjoin_table_ref_atomic_);
            res = new IR(kTableRefAtomic, OP0(), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(join_clause_);
            res = new IR(kTableRefAtomic, OP0(), res);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* NonjoinTableRefAtomic::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(table_ref_name_);
            res = new IR(kNonjoinTableRefAtomic, OP0(), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(select_statement_);
            IR * tmp1 = SAFETRANSLATE(opt_table_alias_);
            res = new IR(kNonjoinTableRefAtomic, OP2("(", ")"), res, tmp1);
        CASEEND
    SWITCHEND
    
    TRANSLATEEND
}

IR* TableRefName::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    auto tmp1 = SAFETRANSLATE(table_name_);
    auto tmp2 = SAFETRANSLATE(opt_table_alias_);
    res = new IR(kTableRefName, OP0(), tmp1, tmp2);

    TRANSLATEEND
}

IR* TableRefNameNoAlias::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = SAFETRANSLATE(table_name_);
    res = new IR(kTableRefNameNoAlias, OP0(), res);

    TRANSLATEEND
}

IR* TableAlias::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(alias_);
            res = new IR(kTableAlias, OP0(), res);
        CASEEND
        CASESTART(1)
            IR* id = SAFETRANSLATE(id_);
            IR* tmp = SAFETRANSLATE(ident_comma_list_);
            res = new IR(kTableAlias, OP3("AS", "(", ")"), id, tmp);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* OptTableAlias::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(table_alias_);
            res = new IR(kOptTableAlias, OP0(), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptTableAlias, "");
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* Alias::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(id_);
            res = new IR(kAlias, OPSTART("AS"),res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(id_);
            res = new IR(kAlias, OP0(), res);
        CASEEND
    SWITCHEND
    
    TRANSLATEEND
}

IR* OptAlias::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(alias_);
            res = new IR(kOptAlias, OP0(), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptAlias, "");
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* WithClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = SAFETRANSLATE(with_description_list_);
    res = new IR(kWithClause, OPSTART("WITH"), res);

    TRANSLATEEND
}

IR* OptWithClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART 

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(with_clause_);
            res = new IR(kOptWithClause, OP0(), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptWithClause, "");
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

IR* WithDescriptionList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    TRANSLATELIST(kWithDescriptionList, v_with_description_list_, ",");

    TRANSLATEENDNOPUSH  
}

IR* WithDescription::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    IR* id = SAFETRANSLATE(id_);
    IR* tmp = SAFETRANSLATE(select_with_paren_);
    res = new IR(kWithDescription, OPMID("AS"), id, tmp);

    TRANSLATEEND
}

IR* JoinClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            IR * tmp = SAFETRANSLATE(table_ref_atomic1_);
            IR * tmp2 = SAFETRANSLATE(nonjoin_table_ref_atomic_);
            res = new IR(kJoinClause, OPMID("NATURAL JOIN"), tmp, tmp2);
        CASEEND
        CASESTART(1)
            IR * tmp = SAFETRANSLATE(table_ref_atomic1_);
            IR * tmp2 = SAFETRANSLATE(opt_join_type_);
            res = new IR(kUnknown, OP0(), tmp, tmp2);
            PUSH(res);

            IR * tmp3 = SAFETRANSLATE(table_ref_atomic2_);
            res = new IR(kUnknown, OPMID("JOIN"), res, tmp3);
            PUSH(res);

            IR * tmp4 = SAFETRANSLATE(join_condition_);
            res = new IR(kJoinClause, OPMID("ON"), res, tmp4);
        CASEEND
        CASESTART(2)
            IR * tmp = SAFETRANSLATE(table_ref_atomic1_);
            IR * tmp2 = SAFETRANSLATE(opt_join_type_);
            res = new IR(kUnknown, OP0(), tmp, tmp2);
            PUSH(res);

            IR * tmp3 = SAFETRANSLATE(table_ref_atomic2_);
            res = new IR(kUnknown, OPMID("JOIN"), res, tmp3);
            PUSH(res);

            IR * tmp4 = SAFETRANSLATE(column_name_);
            IR * tmp5 = new IR(kUnknown, OP3("(", "", ")"), tmp4);
            PUSH(res);
            res = new IR(kJoinClause, OP3("", "USING", ""), res, tmp5);
        CASEEND
        CASESTART(3)
            IR * tmp = SAFETRANSLATE(table_ref_atomic1_);
            IR * tmp2 = SAFETRANSLATE(opt_join_type_);
            res = new IR(kUnknown, OP0(), tmp, tmp2);
            PUSH(res);

            IR * tmp3 = SAFETRANSLATE(table_ref_atomic2_);
            res = new IR(kJoinClause, OPMID("JOIN"), res, tmp3);
        CASEEND
    SWITCHEND

    TRANSLATEEND

}

IR* OptJoinType::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = new IR(kOptJoinType, str_val_);

    TRANSLATEEND
}

IR* JoinCondition::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = SAFETRANSLATE(expr_);
    res = new IR(kJoinCondition, OP0(), res);

    TRANSLATEEND
}

IR* OptSemicolon::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kOptSemicolon, str_val_);

    TRANSLATEEND
}

IR* IdentCommaList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    TRANSLATELIST(kIdentCommaList, v_iden_comma_list_, ",")
    
    TRANSLATEENDNOPUSH
}

void Opt::deep_delete(){
	delete this;
}


void OptString::deep_delete(){
	delete this;
}


void Program::deep_delete(){
	SAFEDELETE(statement_list_);
	SAFEDELETE(opt_semicolon_);
	delete this;
}


void StatementList::deep_delete(){
	SAFEDELETELIST(v_statement_list_);
	delete this;
}


void Statement::deep_delete(){
	SAFEDELETE(optional_hints_);
	SAFEDELETE(preparable_statement_);
	SAFEDELETE(prepare_statement_);
	SAFEDELETE(show_statement_);
    SAFEDELETE(cmd_);
	delete this;
}


void OptionalHints::deep_delete(){
	SAFEDELETE(hint_list_);
	delete this;
}


void PrepareStatement::deep_delete(){
	SAFEDELETE(id_);
	SAFEDELETE(prep_target_que_);
	delete this;
}


void PreparableStatement::deep_delete(){
	delete this;
}


void ShowStatement::deep_delete(){
	SAFEDELETE(table_name_);
	delete this;
}


void Hint::deep_delete(){
	SAFEDELETE(literal_list_);
	SAFEDELETE(id_);
	delete this;
}


void HintList::deep_delete(){
	SAFEDELETELIST(v_hint_list_);
	delete this;
}


void PrepareTargetQuery::deep_delete(){
	delete this;
}


void SelectStatement::deep_delete(){
	SAFEDELETE(opt_with_clause_);
	SAFEDELETE(select_with_paren_);
	SAFEDELETE(select_no_paren_);
	SAFEDELETE(set_operator_);
	SAFEDELETE(select_paren_or_clause_);
	SAFEDELETE(opt_order_);
	SAFEDELETE(opt_limit_);
	delete this;
}


void ImportStatement::deep_delete(){
	SAFEDELETE(import_file_type_);
	SAFEDELETE(file_path_);
	SAFEDELETE(table_name_);
	delete this;
}


void CreateStatement::deep_delete(){
	SAFEDELETE(opt_not_exists_);
	SAFEDELETE(table_name_);
	SAFEDELETE(file_path_);
	SAFEDELETE(column_def_comma_list_);
	SAFEDELETE(select_statement_);
	SAFEDELETE(opt_column_list_);
    SAFEDELETE(opt_unique_);
    SAFEDELETE(index_name_);
    SAFEDELETE(ident_commalist_);
    SAFEDELETE(opt_where_);
    SAFEDELETE(module_name_);
    SAFEDELETE(trigger_declare_);
    SAFEDELETE(trigger_cmd_list_);
	delete this;
}


void InsertStatement::deep_delete(){
    SAFEDELETE(insert_type_);
	SAFEDELETE(table_name_);
	SAFEDELETE(opt_column_list_);
	SAFEDELETE(super_list_);
	SAFEDELETE(select_no_paren_);
    SAFEDELETE(opt_upsert_clause_);
	delete this;
}


void DeleteStatement::deep_delete(){
	SAFEDELETE(table_name_);
	SAFEDELETE(opt_where_);
	delete this;
}


void UpdateStatement::deep_delete(){
	SAFEDELETE(table_ref_name_no_alias_);
	SAFEDELETE(update_clause_comma_list_);
	SAFEDELETE(opt_where_);
	delete this;
}


void DropStatement::deep_delete(){
	SAFEDELETE(opt_exists_);
	SAFEDELETE(table_name_);
	SAFEDELETE(id_);
    SAFEDELETE(schema_name_);
    SAFEDELETE(trigger_name_);
	delete this;
}


void ExecuteStatement::deep_delete(){
	SAFEDELETE(id_);
	SAFEDELETE(opt_literal_list_);
	delete this;
}


void ImportFileType::deep_delete(){
	delete this;
}


void FilePath::deep_delete(){
	delete this;
}


void OptNotExists::deep_delete(){
	delete this;
}


void ColumnDefCommaList::deep_delete(){
	SAFEDELETELIST(v_column_def_comma_list_);
	delete this;
}


void ColumnDef::deep_delete(){
	SAFEDELETE(id_);
	SAFEDELETE(column_type_);
	SAFEDELETE(opt_column_arglist_);
	delete this;
}


void ColumnType::deep_delete(){
	delete this;
}


void OptColumnNullable::deep_delete(){
	delete this;
}


void OptExists::deep_delete(){
	delete this;
}


void OptColumnList::deep_delete(){
	SAFEDELETE(ident_comma_list_);
	delete this;
}


void UpdateClauseCommalist::deep_delete(){
	SAFEDELETELIST(v_update_clause_list_);
	delete this;
}


void UpdateClause::deep_delete(){
	SAFEDELETE(id_);
	SAFEDELETE(expr_);
	delete this;
}


void SelectWithParen::deep_delete(){
	SAFEDELETE(select_no_paren_);
	SAFEDELETE(select_with_paren_);
	delete this;
}


void SelectParenOrClause::deep_delete(){
	SAFEDELETE(select_with_paren_);
	SAFEDELETE(select_clause_);
	delete this;
}


void SelectNoParen::deep_delete(){
	SAFEDELETE(select_clause_);
	SAFEDELETE(opt_order_);
	SAFEDELETE(opt_limit_);
	SAFEDELETE(set_operator_);
	SAFEDELETE(select_paren_or_clause_);
	delete this;
}


void SetOperator::deep_delete(){
	SAFEDELETE(set_type_);
	SAFEDELETE(opt_all_);
	delete this;
}


void SetType::deep_delete(){
	delete this;
}


void OptAll::deep_delete(){
	delete this;
}


void SelectClause::deep_delete(){
	SAFEDELETE(opt_top_);
	SAFEDELETE(opt_distinct_);
	SAFEDELETE(select_list_);
	SAFEDELETE(opt_from_clause_);
	SAFEDELETE(opt_where_);
	SAFEDELETE(opt_group_);
    SAFEDELETE(window_clause_);
	delete this;
}


void OptDistinct::deep_delete(){
	delete this;
}


void SelectList::deep_delete(){
	SAFEDELETE(expr_list_);
	delete this;
}


void FromClause::deep_delete(){
	SAFEDELETE(table_ref_);
	delete this;
}


void OptFromClause::deep_delete(){
	SAFEDELETE(from_clause_);
	delete this;
}


void OptWhere::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}


void OptGroup::deep_delete(){
	SAFEDELETE(expr_list_);
	SAFEDELETE(opt_having_);
	delete this;
}


void OptHaving::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}


void OptOrder::deep_delete(){
	SAFEDELETE(order_list_);
	delete this;
}


void OrderList::deep_delete(){
	SAFEDELETELIST(v_order_desc_);
	delete this;
}


void OrderDesc::deep_delete(){
	SAFEDELETE(expr_);
	SAFEDELETE(opt_order_type_);
    SAFEDELETE(opt_null_);
	delete this;
}


void OptOrderType::deep_delete(){
	delete this;
}


void OptTop::deep_delete(){
	SAFEDELETE(int_literal_);
	delete this;
}


void OptLimit::deep_delete(){
	SAFEDELETE(expr1_);
	SAFEDELETE(expr2_);
	delete this;
}


void ExprList::deep_delete(){
	SAFEDELETELIST(v_expr_list_);
	delete this;
}


void LiteralList::deep_delete(){
	SAFEDELETELIST(v_literal_list_);
	delete this;
}


void OptLiteralList::deep_delete(){
	SAFEDELETE(literal_list_);
	delete this;
}


void Alias::deep_delete(){
	SAFEDELETE(id_);
	delete this;
}


void Expr::deep_delete(){
	delete this;
}


void ExprAlias::deep_delete(){
	SAFEDELETE(expr_);
	SAFEDELETE(opt_alias_);
	delete this;
}


void Operand::deep_delete(){
	SAFEDELETE(expr_);
	SAFEDELETE(select_no_paren_);

	delete this;
}


void BetweenExpr::deep_delete(){
	SAFEDELETE(operand1_);
	SAFEDELETE(operand2_);
	SAFEDELETE(operand3_);
	delete this;
}


void LogicExpr::deep_delete(){
	SAFEDELETE(expr1_);
	SAFEDELETE(expr2_);
	delete this;
}


void ExistsExpr::deep_delete(){
	SAFEDELETE(select_no_paren_);
	delete this;
}


void InExpr::deep_delete(){
	SAFEDELETE(operand_);
	SAFEDELETE(expr_list_);
	SAFEDELETE(select_no_paren_);
	delete this;
}


void ArrayIndex::deep_delete(){
	SAFEDELETE(int_literal_);
	SAFEDELETE(operand_);
	delete this;
}

void ScalarExpr::deep_delete(){
	SAFEDELETE(column_name_);
	SAFEDELETE(literal_);
	delete this;
}


void UnaryExpr::deep_delete(){
	SAFEDELETE(operand_);
	delete this;
}


void BinaryExpr::deep_delete(){
	SAFEDELETE(operand2_);
    SAFEDELETE(operand1_);
	SAFEDELETE(comp_expr_);
	delete this;
}


void CompExpr::deep_delete(){
    SAFEDELETE(operand2_);
    SAFEDELETE(operand1_);
    
	delete this;
}


void CaseExpr::deep_delete(){
	SAFEDELETE(case_expr_);
	SAFEDELETE(else_expr_);
	SAFEDELETE(case_list_);
	delete this;
}


void FunctionExpr::deep_delete(){
	SAFEDELETE(id_);
	SAFEDELETE(opt_distinct_);
	SAFEDELETE(expr_list_);
    SAFEDELETE(opt_filter_clause_);
    SAFEDELETE(opt_over_clause_);
	delete this;
}


void ExtractExpr::deep_delete(){
	SAFEDELETE(datetime_field_);
	SAFEDELETE(expr_);
	delete this;
}


void ArrayExpr::deep_delete(){
	SAFEDELETE(expr_list_);
	delete this;
}


void CaseClause::deep_delete(){
	SAFEDELETE(when_expr_);
	SAFEDELETE(then_expr_);
	delete this;
}


void CaseList::deep_delete(){
	SAFEDELETELIST(v_case_list_);
	delete this;
}


void DatetimeField::deep_delete(){
	delete this;
}


void ColumnName::deep_delete(){
	SAFEDELETE(identifier1_);
	SAFEDELETE(identifier2_);
	delete this;
}


void Literal::deep_delete(){
	delete this;
}


void StringLiteral::deep_delete(){
	delete this;
}


void BoolLiteral::deep_delete(){
	delete this;
}


void NumLiteral::deep_delete(){
	SAFEDELETE(int_literal_);
	delete this;
}


void IntLiteral::deep_delete(){
	delete this;
}

void NullLiteral::deep_delete(){
	delete this;
}


void ParamExpr::deep_delete(){
	delete this;
}


void Identifier::deep_delete(){
	delete this;
}


void TableRefCommaList::deep_delete(){
	SAFEDELETELIST(v_table_ref_comma_list_);
	delete this;
}


void TableRefAtomic::deep_delete(){
	SAFEDELETE(nonjoin_table_ref_atomic_);
	SAFEDELETE(join_clause_);
	delete this;
}


void NonjoinTableRefAtomic::deep_delete(){
	SAFEDELETE(table_ref_name_);
	SAFEDELETE(select_statement_);
	SAFEDELETE(opt_table_alias_);
	delete this;
}


void TableRefName::deep_delete(){
	SAFEDELETE(table_name_);
	SAFEDELETE(opt_table_alias_);
	delete this;
}


void TableRefNameNoAlias::deep_delete(){
	SAFEDELETE(table_name_);
	delete this;
}


void TableName::deep_delete(){
	SAFEDELETE(table_name_);
	SAFEDELETE(database_name_);
	delete this;
}


void TableAlias::deep_delete(){
	SAFEDELETE(alias_);
	SAFEDELETE(ident_comma_list_);
	SAFEDELETE(id_);
	delete this;
}


void OptTableAlias::deep_delete(){
	SAFEDELETE(table_alias_);
	delete this;
}


void OptAlias::deep_delete(){
	SAFEDELETE(alias_);
	delete this;
}


void WithClause::deep_delete(){
	SAFEDELETE(with_description_list_);
	delete this;
}


void OptWithClause::deep_delete(){
	SAFEDELETE(with_clause_);
	delete this;
}


void WithDescriptionList::deep_delete(){
	SAFEDELETELIST(v_with_description_list_);
	delete this;
}


void WithDescription::deep_delete(){
	SAFEDELETE(select_with_paren_);
	SAFEDELETE(id_);
	delete this;
}


void JoinClause::deep_delete(){
	SAFEDELETE(table_ref_atomic1_);
	SAFEDELETE(nonjoin_table_ref_atomic_);
	SAFEDELETE(opt_join_type_);
	SAFEDELETE(table_ref_atomic2_);
	SAFEDELETE(column_name_);
	SAFEDELETE(join_condition_);
	delete this;
}


void OptJoinType::deep_delete(){
	delete this;
}


void JoinCondition::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}


void OptSemicolon::deep_delete(){
	delete this;
}


void IdentCommaList::deep_delete(){
	SAFEDELETELIST(v_iden_comma_list_);
	delete this;
}



void Cmd::deep_delete(){
    delete this;
}

IR* Cmd::translate(vector<IR*> &v_ir_collector){
    return NULL;
}

void CmdAttach::deep_delete(){
    SAFEDELETE(expr_);
    SAFEDELETE(schema_name_);
    delete this;
}

IR* CmdAttach::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(expr_);
            auto tmp = SAFETRANSLATE(schema_name_);
            res = new IR(kCmdAttach, OP2("ATTACH", "AS"), res, tmp);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(expr_);
            auto tmp = SAFETRANSLATE(schema_name_);
            res = new IR(kCmdAttach, OP2("ATTACH DATABASE", "AS"), res, tmp);
        CASEEND
    SWITCHEND
    TRANSLATEEND
}

IR* CmdReindex::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = new IR(kCmdReindex, "REINDEX");
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(table_name_);
            res = new IR(kCmdReindex, OP1("REINDEX"), res);
        CASEEND
    SWITCHEND
    TRANSLATEEND
}


void CmdReindex::deep_delete(){
    SAFEDELETE(table_name_);
    delete this;
}

void CmdDetach::deep_delete(){
    SAFEDELETE(schema_name_);
    delete this;
}

IR* CmdDetach::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(schema_name_);
            res = new IR(kCmdDetach, OP1("DETACH"), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(schema_name_);
            res = new IR(kCmdDetach, OP1("DETACH DATABASE"), res);
        CASEEND
    SWITCHEND
    TRANSLATEEND
}

void CmdAnalyze::deep_delete(){
    SAFEDELETE(table_name_);
    delete this;
}

IR* CmdAnalyze::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = new IR(kCmdAnalyze, string("ANALYZE"));
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(table_name_);
            res = new IR(kCmdAnalyze, OP1("ANALYZE"), res);
        CASEEND
    SWITCHEND
    TRANSLATEEND
}

void CmdPragma::deep_delete(){
    SAFEDELETE(pragma_key_);
    SAFEDELETE(pragma_value_);
    SAFEDELETE(table_name_);
    delete this;
}

IR* CmdPragma::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto pk = SAFETRANSLATE(pragma_key_);
            res = new IR(kCmdPragma, OPSTART("PRAGMA"), pk);
        CASEEND
        CASESTART(1)
            auto pk = SAFETRANSLATE(pragma_key_);
            auto pv = SAFETRANSLATE(pragma_value_);
            res = new IR(kCmdPragma, OP2("PRAGMA", "="), pk, pv);
        CASEEND
        CASESTART(2)
            auto pk = SAFETRANSLATE(pragma_key_);
            auto pv = SAFETRANSLATE(pragma_value_);
            res = new IR(kCmdPragma, OP3("PRAGMA", "(", ")"), pk, pv);
        CASEEND
        CASESTART(3)
            res = new IR(kCmdPragma, string("REINDEX"));
        CASEEND
        CASESTART(4)
            auto table_name = SAFETRANSLATE(table_name_);
            res = new IR(kCmdPragma, OPSTART("REINDEX"), table_name);
        CASEEND
        CASESTART(5)
            res = new IR(kCmdPragma, string("ANALYZE"));
        CASEEND
        CASESTART(6)
            auto table_name = SAFETRANSLATE(table_name_);
            res = new IR(kCmdPragma, OPSTART("ANALYZE"), table_name);
        CASEEND
    SWITCHEND
        
    TRANSLATEEND
}


void PragmaKey::deep_delete(){
    SAFEDELETE(pragma_name_);
    SAFEDELETE(schema_name_);
    delete this;
}

IR* PragmaKey::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART

    auto pn = SAFETRANSLATE(pragma_name_);

    SWITCHSTART
    CASESTART(0)
    res = new IR(kPragmaKey, OP0(), pn);
    CASEEND
    CASESTART(1)
    auto sn = SAFETRANSLATE(schema_name_);
    res = new IR(kPragmaKey, OPMID("."), sn, pn);
    CASEEND
    SWITCHEND
    TRANSLATEEND
}

void PragmaValue::deep_delete(){
    SAFEDELETE(num_literal_);
    SAFEDELETE(string_literal_);
    SAFEDELETE(id_);
    delete this;
}

IR* PragmaValue::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART
    
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(num_literal_);
            res = new IR(kPragmaValue, OP0(), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(string_literal_);
            res = new IR(kPragmaValue, OP0(), res);
        CASEEND
        CASESTART(2)
            res = SAFETRANSLATE(id_);
            res = new IR(kPragmaValue, OP0(), res);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

void PragmaName::deep_delete(){
    SAFEDELETE(id_);
    delete this;
}

IR* PragmaName::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART
    auto name = SAFETRANSLATE(id_);
    res = new IR(kPragmaName, OP0(), name);
    TRANSLATEEND
}

void SchemaName::deep_delete(){
    SAFEDELETE(id_);
    delete this;
}

IR* SchemaName::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART
    auto name = SAFETRANSLATE(id_);
    res = new IR(kSchemaName, OP0(), name);
    TRANSLATEEND
}


IR * OptColumnArglist::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            auto tmp = SAFETRANSLATE(column_arglist_);
            res = new IR(kOptColumnArglist, OP0(), tmp);
        CASEEND
        CASESTART(1)
            res = new IR(kOptColumnArglist, "");
        CASEEND
    SWITCHEND
    TRANSLATEEND
}

void OptColumnArglist::deep_delete(){
    SAFEDELETE(column_arglist_);
    delete this;
}


IR * ColumnArglist::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART

    TRANSLATELIST(kColumnArglist, v_column_arg_, " ");

	TRANSLATEENDNOPUSH
}

void ColumnArglist::deep_delete(){
    SAFEDELETELIST(v_column_arg_);
	delete this;
}


IR * ColumnArg::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(opt_on_conflict_);
            res = new IR(kColumnArg, OP1("NULL"), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(opt_on_conflict_);
            res = new IR(kColumnArg, OP1("NOT NULL"), res);
        CASEEND
        CASESTART(2)
            auto tmp = SAFETRANSLATE(opt_order_type_);
            auto tmp1 = SAFETRANSLATE(opt_on_conflict_);
            res = new IR(kColumnArg, OP1("PRIMARY KEY"), tmp, tmp1);
            PUSH(res);
            tmp = SAFETRANSLATE(opt_autoinc_);
            res = new IR(kColumnArg, OP0(), res, tmp);
        CASEEND
        CASESTART(3)
            res = SAFETRANSLATE(opt_on_conflict_);
            res = new IR(kColumnArg, OP1("UNIQUE"), res);
        CASEEND
        CASESTART(4)
            res = SAFETRANSLATE(expr_);
            res = new IR(kColumnArg, OP2("GENERATED ALWAYS AS(", ")"), res);
        CASEEND
        CASESTART(5)
            res = SAFETRANSLATE(expr_);
            res = new IR(kColumnArg, OP2("AS(", ")"), res);
        CASEEND
        CASESTART(6)
            res = SAFETRANSLATE(expr_);
            res = new IR(kColumnArg, OP2("CHECK(", ")"), res);
        CASEEND
    SWITCHEND
	TRANSLATEEND
}

void ColumnArg::deep_delete(){
    SAFEDELETE(opt_on_conflict_);
    SAFEDELETE(opt_order_type_);
    SAFEDELETE(opt_autoinc_);
    SAFEDELETE(expr_);
	delete this;
}


IR * OptOnConflict::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(resolve_type_);
            res = new IR(kOptOnConflict, OP1("ON CONFLICT"), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptOnConflict, string(""));
        CASEEND
    SWITCHEND

	TRANSLATEEND
}

void OptOnConflict::deep_delete(){
    SAFEDELETE(resolve_type_);
	delete this;
}


IR * ResolveType::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = new IR(kResolveType, str_val_);
	TRANSLATEEND
}

void ResolveType::deep_delete(){
	delete this;
}


IR * OptAutoinc::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = new IR(kOptAutoinc, str_val_);
	TRANSLATEEND
}

void OptAutoinc::deep_delete(){
	delete this;
}


IR * OptUnique::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = new IR(kOptUnique, str_val_);
	TRANSLATEEND
}

void OptUnique::deep_delete(){
	delete this;
}


IR * IndexName::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = SAFETRANSLATE(id_);
    res = new IR(kIndexName, OP0(), res);
	TRANSLATEEND
}

void IndexName::deep_delete(){
    SAFEDELETE(id_);
	delete this;
}


IR * TriggerDeclare::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = SAFETRANSLATE(opt_tmp_);
    auto tmp = SAFETRANSLATE(opt_not_exists_);
    res = new IR(kUnknown, OPMID("TRIGGER"), res, tmp);
    PUSH(res);
    tmp = SAFETRANSLATE(trigger_name_);
    res = new IR(kUnknown, OP0(), res, tmp);
    PUSH(res);
    tmp = SAFETRANSLATE(opt_trigger_time_);
    res = new IR(kUnknown, OP0(), res, tmp);
    PUSH(res);
    tmp = SAFETRANSLATE(trigger_event_);
    res = new IR(kUnknown, OP0(), res, tmp);
    PUSH(res);
    tmp = SAFETRANSLATE(table_name_);
    res = new IR(kTriggerDeclare, OPMID("ON"), res, tmp);
    PUSH(res);
    tmp = SAFETRANSLATE(opt_for_each_);
    res = new IR(kTriggerDeclare, OP0(), res, tmp);
    PUSH(res);
    tmp = SAFETRANSLATE(opt_when_);
    res = new IR(kTriggerDeclare, OP0(), res, tmp);
	TRANSLATEEND
}

void TriggerDeclare::deep_delete(){
    SAFEDELETE(opt_tmp_);
    SAFEDELETE(opt_not_exists_);
    SAFEDELETE(trigger_name_);
    SAFEDELETE(opt_trigger_time_);
    SAFEDELETE(trigger_event_);
    SAFEDELETE(table_name_);
    SAFEDELETE(opt_for_each_);
    SAFEDELETE(opt_when_);
	delete this;
}


IR * OptTmp::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = new IR(kOptTmp, str_val_);
	TRANSLATEEND
}

void OptTmp::deep_delete(){
	delete this;
}


IR * TriggerName::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = SAFETRANSLATE(id_);
    res = new IR(kTriggerName, OP0(), res);
	TRANSLATEEND
}

void TriggerName::deep_delete(){
    SAFEDELETE(id_);
	delete this;
}


IR * OptTriggerTime::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = new IR(kOptTriggerTime, str_val_);
	TRANSLATEEND
}

void OptTriggerTime::deep_delete(){
	delete this;
}


IR * TriggerEvent::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = new IR(kTriggerEvent, string("DELETE"));
        CASEEND
        CASESTART(1)
            res = new IR(kTriggerEvent, string("INSERT"));
        CASEEND
        CASESTART(2)
            res = SAFETRANSLATE(opt_of_column_list_);
            res = new IR(kTriggerEvent, OP1("UPDATE"), res);
        CASEEND
    SWITCHEND
	TRANSLATEEND
}

void TriggerEvent::deep_delete(){
    SAFEDELETE(opt_of_column_list_);
	delete this;
}


IR * OptOfColumnList::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(ident_commalist_);
            res = new IR(kOptOfColumnList, OP1("OF"), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptOfColumnList, string(""));
        CASEEND
    SWITCHEND
	TRANSLATEEND
}

void OptOfColumnList::deep_delete(){
    SAFEDELETE(ident_commalist_);
	delete this;
}


IR * OptForEach::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = new IR(kOptForEach, str_val_);
	TRANSLATEEND
}

void OptForEach::deep_delete(){
	delete this;
}


IR * OptWhen::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(expr_);
            res = new IR(kOptWhen, OP1("WHEN"), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptWhen, string(""));
        CASEEND
    SWITCHEND
	TRANSLATEEND
}

void OptWhen::deep_delete(){
    SAFEDELETE(expr_);
	delete this;
}


IR * TriggerCmdList::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    TRANSLATELIST(kTriggerCmdList, v_trigger_cmd_list_, ";");
    res->op_->suffix_ = ";";
	TRANSLATEENDNOPUSH
}

void TriggerCmdList::deep_delete(){
    SAFEDELETELIST(v_trigger_cmd_list_);
	delete this;
}


IR * TriggerCmd::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = SAFETRANSLATE(stmt_);
	TRANSLATEEND
}

void TriggerCmd::deep_delete(){
    SAFEDELETE(stmt_);
	delete this;
}


IR * ModuleName::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = SAFETRANSLATE(id_);
    res = new IR(kModuleName, OP0(), res);
	TRANSLATEEND
}

void ModuleName::deep_delete(){
    SAFEDELETE(id_);
	delete this;
}


IR * OptOverClause::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(window_);
            res = new IR(kOptOverClause, OP2("OVER(", ")"), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(id_);
            res = new IR(kOptOverClause, OP1("OVER"), res);
        CASEEND
        CASESTART(2)
            res = new IR(kOptOverClause, string(""));
        CASEEND
    SWITCHEND
	TRANSLATEEND
}

void OptOverClause::deep_delete(){
    SAFEDELETE(window_);
    SAFEDELETE(id_);
	delete this;
}


IR * OptFilterClause::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(expr_);
            res = new IR(kOptFilterClause, OP2("FILTER( WHEN", ")"), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptFilterClause, string(""));
        CASEEND
    SWITCHEND
	TRANSLATEEND
}

void OptFilterClause::deep_delete(){
    SAFEDELETE(expr_);
	delete this;
}


IR * WindowClause::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    
	TRANSLATEEND
}

void WindowClause::deep_delete(){
    SAFEDELETE(windowdefn_list_);
	delete this;
}


IR * WindowDefnList::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    TRANSLATELIST(kWindowDefnList, v_windowdefn_list_, ",");
	TRANSLATEENDNOPUSH
}

void WindowDefnList::deep_delete(){
    SAFEDELETELIST(v_windowdefn_list_);
	delete this;
}


IR * WindowDefn::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    auto id_ir = SAFETRANSLATE(id_);
    auto win_ir = SAFETRANSLATE(window_);
    auto tmp_ir = new IR(kUnknown, OP2("(", ")"), win_ir);
    PUSH(tmp_ir);
    res = new IR(kWindowDefn, OPMID("AS"), id_ir, tmp_ir);
	TRANSLATEEND
}

void WindowDefn::deep_delete(){
    SAFEDELETE(id_);
    SAFEDELETE(window_);
	delete this;
}


IR * Window::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART

    auto windowname = SAFETRANSLATE(opt_base_window_name_);
    auto opt_order = SAFETRANSLATE(opt_order_);
    auto opt_frame = SAFETRANSLATE(opt_frame_);

    SWITCHSTART
        CASESTART(0)
        auto expr_list = SAFETRANSLATE(expr_list_);
        auto tmp = new IR(kUnknown, OPMID("PARTITION BY"), windowname, expr_list);
        PUSH(tmp);
        tmp = new IR(kUnknown, OP0(), tmp, opt_order);
        PUSH(tmp);
        res = new IR(kWindow, OP0(), tmp, opt_frame);
        CASEEND
        CASESTART(1)
        auto tmp = new IR(kUnknown, OP0(), windowname, opt_order);
        PUSH(tmp);
        res = new IR(kWindow, OP0(), tmp, opt_frame);
        CASEEND
    SWITCHEND

	TRANSLATEEND
}

void Window::deep_delete(){
    SAFEDELETE(opt_base_window_name_);
    SAFEDELETE(expr_list_);
    SAFEDELETE(opt_order_);
    SAFEDELETE(opt_frame_);
	delete this;
}


IR * OptBaseWindowName::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(id_);
            res = new IR(kOptBaseWindowName, OP0(), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptBaseWindowName, string(""));
        CASEEND
    SWITCHEND
	TRANSLATEEND
}

void OptBaseWindowName::deep_delete(){
    SAFEDELETE(id_);
	delete this;
}


IR * OptFrame::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART

    

    SWITCHSTART
        CASESTART(0)
            auto range_or_row = SAFETRANSLATE(range_or_rows_);
            auto frame_bound_s = SAFETRANSLATE(frame_bound_s_);
            auto opt_frame_exclude = SAFETRANSLATE(opt_frame_exclude_);
            res = new IR(kUnknown, OP0(), range_or_row, frame_bound_s);
            PUSH(res);
            res = new IR(kOptFrame, OP0(), res, opt_frame_exclude);
        CASEEND
        CASESTART(1)
            auto range_or_row = SAFETRANSLATE(range_or_rows_);
            auto frame_bound_s = SAFETRANSLATE(frame_bound_s_);
            auto opt_frame_exclude = SAFETRANSLATE(opt_frame_exclude_);
            res = SAFETRANSLATE(frame_bound_e_);
            res = new IR(kUnknown, OP2("BEWTEEN", "AND"), frame_bound_s, res);
            PUSH(res);
            res = new IR(kUnknown, OP0(), range_or_row, res);
            PUSH(res);
            res = new IR(kOptFrame, OP0(), res, opt_frame_exclude);
        CASEEND 
        CASESTART(2)
            res = new IR(kOptFrame, string(""));
        CASEEND
    SWITCHEND

	TRANSLATEEND
}

void OptFrame::deep_delete(){
    SAFEDELETE(range_or_rows_);
    SAFEDELETE(frame_bound_e_);
    SAFEDELETE(frame_bound_s_);
    SAFEDELETE(opt_frame_exclude_);
	delete this;
}


IR * RangeOrRows::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = new IR(kRangeOrRows, str_val_);
	TRANSLATEEND
}

void RangeOrRows::deep_delete(){
	delete this;
}


IR * FrameBoundS::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
    CASESTART(0)
    res = SAFETRANSLATE(frame_bound_);
    res = new IR(kFrameBoundS, OP0(), res);
    CASEEND
    CASESTART(1)
    res = new IR(kFrameBoundS, string("UNBOUNDED PRECEDING"));
    CASEEND
    SWITCHEND
	TRANSLATEEND
}

void FrameBoundS::deep_delete(){
    SAFEDELETE(frame_bound_);
	delete this;
}


IR * FrameBoundE::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(frame_bound_);
            res = new IR(kFrameBoundE, OP0(), res);
        CASEEND 
        CASESTART(1)
            res = new IR(kFrameBoundE, string("UNBOUNDED FOLLOWING"));
        CASEEND
    SWITCHEND    
	TRANSLATEEND
}

void FrameBoundE::deep_delete(){
    SAFEDELETE(frame_bound_);
	delete this;
}


IR * FrameBound::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
    CASESTART(0)
    res = SAFETRANSLATE(expr_);
    res = new IR(kFrameBound, OPEND("PRECEDING"), res);
    CASEEND
    CASESTART(1)
    res = SAFETRANSLATE(expr_);
    res = new IR(kFrameBound, OPEND("FOLLOWING"), res);
    CASEEND
    CASESTART(2)
    res = new IR(kFrameBound, OP1("CURRENT ROW"));
    CASEEND
    SWITCHEND
	TRANSLATEEND
}

void FrameBound::deep_delete(){
    SAFEDELETE(expr_);
	delete this;
}


IR * OptFrameExclude::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(frame_exclude_);
            res = new IR(kOptFrameExclude, OP1("EXCLUDE"), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptFrameExclude, string(""));
        CASEEND
    SWITCHEND
	TRANSLATEEND
}

void OptFrameExclude::deep_delete(){
    SAFEDELETE(frame_exclude_);
	delete this;
}


IR * FrameExclude::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = new IR(kFrameExclude, str_val_);
	TRANSLATEEND
}

void FrameExclude::deep_delete(){
	delete this;
}


IR * SuperList::translate(vector<IR*> &v_ir_collector){
	TRANSLATESTART
    res = SAFETRANSLATE(v_super_list_[0]);
    res = new IR(kSuperList, OP2("(", ")"), res);
    PUSH(res);
    for(int i=1; i<v_super_list_.size(); i++){
        auto tmp = SAFETRANSLATE(v_super_list_[i]);
        res = new IR(kSuperList, OP3("", ",(", ")"), res, tmp); 
        PUSH(res);
    }
    
	TRANSLATEENDNOPUSH
}

void SuperList::deep_delete(){
    SAFEDELETELIST(v_super_list_);
	delete this;
}

IR*  TableRef::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
	    CASESTART(0)
	        auto tmp1 = SAFETRANSLATE(table_prefix_);
	        auto tmp2 = SAFETRANSLATE(table_name_);
            res = new IR(kTableRef, OP0(), tmp1, tmp2);
            PUSH(res);

	        auto tmp3 = SAFETRANSLATE(opt_alias_);
            res = new IR(kTableRef, OP0(), res, tmp3);
            PUSH(res);
    
	        auto tmp4 = SAFETRANSLATE(opt_index_);
            res = new IR(kTableRef, OP0(), res, tmp4);
            PUSH(res);

	        auto tmp5 = SAFETRANSLATE(opt_on_);
            res = new IR(kTableRef, OP0(), res, tmp5);
            PUSH(res);

	        auto tmp6 = SAFETRANSLATE(opt_using_);
            res = new IR(kTableRef, OP0(), res, tmp6);
	    CASEEND
	    CASESTART(1)
	        auto tmp1 = SAFETRANSLATE(table_prefix_);
	        auto tmp2 = SAFETRANSLATE(table_name_);
            res = new IR(kUnknown, OP0(), tmp1, tmp2);
            PUSH(res);

	        auto tmp3 = SAFETRANSLATE(expr_list_);
            res = new IR(kTableRef, OP0(), res, tmp3);
            PUSH(res);
    
	        auto tmp4 = SAFETRANSLATE(opt_alias_);
            res = new IR(kTableRef, OP0(), res, tmp4);
            PUSH(res);

	        auto tmp5 = SAFETRANSLATE(opt_on_);
            res = new IR(kTableRef, OP0(), res, tmp5);
            PUSH(res);

	        auto tmp6 = SAFETRANSLATE(opt_using_);
            res = new IR(kTableRef, OP0(), res, tmp6);
	    CASEEND
	    CASESTART(2)
	        auto tmp1 = SAFETRANSLATE(table_prefix_);
	        auto tmp2 = SAFETRANSLATE(select_no_paren_);
            res = new IR(kTableRef, OP0(), tmp1, tmp2);
            PUSH(res);

	        auto tmp3 = SAFETRANSLATE(opt_alias_);
            res = new IR(kTableRef, OP0(), res, tmp3);
            PUSH(res);
    
	        auto tmp4 = SAFETRANSLATE(opt_on_);
            res = new IR(kTableRef, OP0(), res, tmp4);
            PUSH(res);
    
	        auto tmp5 = SAFETRANSLATE(opt_using_);
            res = new IR(kTableRef, OP0(), res, tmp5);

	    CASEEND
	    CASESTART(3)
	        auto tmp1 = SAFETRANSLATE(table_prefix_);
	        auto tmp2 = SAFETRANSLATE(table_ref_);
            res = new IR(kTableRef, OP0(), tmp1, tmp2);
            PUSH(res);
    
	        auto tmp3 = SAFETRANSLATE(opt_alias_);
            res = new IR(kTableRef, OP0(), res, tmp3);
            PUSH(res);

	        auto tmp4 = SAFETRANSLATE(opt_on_);
            res = new IR(kTableRef, OP0(), res, tmp4);
            PUSH(res);
    
	        auto tmp5 = SAFETRANSLATE(opt_using_);
            res = new IR(kTableRef, OP0(), res, tmp5);
    
	    CASEEND
	SWITCHEND
	TRANSLATEEND
}


IR*  TablePrefix::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
	    CASESTART(0)
	        auto tmp1 = SAFETRANSLATE(table_ref_);
	        auto tmp2 = SAFETRANSLATE(join_op_);
            res = new IR(kTablePrefix, OP0(), tmp1, tmp2);
	    CASEEND
	    CASESTART(1)
            res = new IR(kTablePrefix, string(""));
	    CASEEND
	SWITCHEND
    
	TRANSLATEEND
}


IR*  JoinOp::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
	CASESTART(0)
    res = new IR(kJoinOp, string(","));
	CASEEND
	CASESTART(1)
    res = new IR(kJoinOp, string("JOIN"));
	CASEEND
	CASESTART(2)
	auto tmp = SAFETRANSLATE(join_kw_);
    res = new IR(kJoinOp, OPEND("JOIN"), tmp);
	CASEEND
	CASESTART(3)
	auto tmp = SAFETRANSLATE(join_kw_);
	auto tmp2 = SAFETRANSLATE(id1_);
    res = new IR(kJoinOp, OPEND("JOIN"), tmp, tmp2);
	CASEEND
	CASESTART(4)
	auto tmp = SAFETRANSLATE(join_kw_);
	auto tmp1 = SAFETRANSLATE(id1_);
	auto tmp2 = SAFETRANSLATE(id2_);
    res = new IR(kUnknown, OP0(), tmp1, tmp2);
    PUSH(res);
    res = new IR(kJoinOp, OPEND("JOIN"), tmp, res);
	CASEEND
	SWITCHEND
	TRANSLATEEND
}


IR*  OptIndex::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
	CASESTART(0)
	auto tmp = SAFETRANSLATE(column_name_);
    res = new IR(kOptIndex, OP1("INDEXED BY"), tmp);
	CASEEND
	CASESTART(1)
    res = new IR(kOptIndex, string("NOT INDEXED"));
	CASEEND
	CASESTART(2)
    res = new IR(kOptIndex, string(""));
	CASEEND
	SWITCHEND
	TRANSLATEEND
}


IR*  OptOn::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
	CASESTART(0)
	auto tmp = SAFETRANSLATE(expr_);
    res = new IR(kOptOn, OP1("ON"), tmp);
	CASEEND
	CASESTART(1)
    res = new IR(kOptOn, string(""));
	CASEEND
	SWITCHEND
	TRANSLATEEND
}


IR*  OptUsing::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
	CASESTART(0)
	auto tmp = SAFETRANSLATE(ident_commalist_);
    res = new IR(kOptUsing, OP3("USING", "(", ")"), NULL, tmp);
	CASEEND
	CASESTART(1)
    res = new IR(kOptUsing, string(""));
	CASEEND
	SWITCHEND
	TRANSLATEEND
}


IR*  JoinKw::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART
    res = new IR(kJoinKw, str_val_);
	TRANSLATEEND
}

void TableRef::deep_delete(){
	SAFEDELETE(opt_on_);
	SAFEDELETE(opt_alias_);
	SAFEDELETE(expr_list_);
	SAFEDELETE(opt_using_);
	SAFEDELETE(table_name_);
	SAFEDELETE(table_prefix_);
	SAFEDELETE(table_ref_);
	SAFEDELETE(opt_index_);
	SAFEDELETE(select_no_paren_);
	delete this;
}

void TablePrefix::deep_delete(){
	SAFEDELETE(table_ref_);
	SAFEDELETE(join_op_);
	delete this;
}

void JoinOp::deep_delete(){
	SAFEDELETE(join_kw_);
	SAFEDELETE(id1_);
	SAFEDELETE(id2_);
	delete this;
}

void OptIndex::deep_delete(){
	SAFEDELETE(column_name_);
	delete this;
}

void OptOn::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}

void OptUsing::deep_delete(){
	SAFEDELETE(ident_commalist_);
	delete this;
}

void JoinKw::deep_delete(){
	delete this;
}

void CastExpr::deep_delete(){
	SAFEDELETE(column_type_);
	SAFEDELETE(expr_);
	delete this;
}

IR*  CastExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	auto tmp0 = SAFETRANSLATE(expr_);
	auto tmp1 = SAFETRANSLATE(column_type_);
	res = new IR(kUnknown, OP3("CAST (", "AS", ")"), tmp0, tmp1);
	

	TRANSLATEEND
}

void AlterStatement::deep_delete(){
	SAFEDELETE(table_name1_);
    SAFEDELETE(table_name2_);
	SAFEDELETE(column_def_);
	SAFEDELETE(opt_column_);
	SAFEDELETE(column_name1_);
    SAFEDELETE(column_name2_);
	delete this;
}

IR*  AlterStatement::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
			auto tmp0 = SAFETRANSLATE(table_name1_);
			auto tmp1 = SAFETRANSLATE(table_name2_);
			res = new IR(kAlterStatement, OP2("ALTER TABLE", "RENAME TO"), tmp0, tmp1);
		CASEEND
		CASESTART(1)
			auto tmp0 = SAFETRANSLATE(table_name1_);
			auto tmp1 = SAFETRANSLATE(opt_column_);
		    auto tmp2 = SAFETRANSLATE(column_name1_);
			auto tmp3 = SAFETRANSLATE(column_name2_);
			res = new IR(kUnknown, OP2("ALTER TABLE", "RENAME"), tmp0, tmp1);
		    PUSH(res);
		    res = new IR(kUnknown, OP0(), res, tmp2);
		    PUSH(res);
		    res = new IR(kAlterStatement, OPMID("TO"), res, tmp3);
		CASEEND
		CASESTART(2)
			auto tmp0 = SAFETRANSLATE(table_name1_);
			auto tmp1 = SAFETRANSLATE(opt_column_);
		    auto tmp2 = SAFETRANSLATE(column_def_);
			res = new IR(kUnknown, OP2("ALTER TABLE", "ADD"), tmp0, tmp1);
		    PUSH(res);
		    res = new IR(kAlterStatement, OP0(), res, tmp2);
		CASEEND
	SWITCHEND
	TRANSLATEEND
}

void OptColumn::deep_delete(){
	delete this;
}

IR*  OptColumn::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
				res = new IR(kOptColumn, str_val_);
		CASEEND
		CASESTART(1)
				res = new IR(kOptColumn, str_val_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CmdRelease::deep_delete(){
    SAFEDELETE(savepoint_name_);

    delete this;
}


IR* CmdRelease::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(savepoint_name_);
            res = new IR(kCmdRelease, OP1("RELEASE SAVEPOINT"), res);
        CASEEND
        CASESTART(1)
            res = SAFETRANSLATE(savepoint_name_);
            res = new IR(kCmdRelease, OP1("RELEASE"), res);
        CASEEND
    SWITCHEND
    TRANSLATEEND
}

void SavepointName::deep_delete(){
    SAFEDELETE(id_);

    delete this;
}


IR* SavepointName::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART
    
    res = SAFETRANSLATE(id_);
    res = new IR(kSavepointName, OP0(), res);
    
    TRANSLATEEND
}

void VacuumStatement::deep_delete(){
    SAFEDELETE(opt_schema_name_);
    SAFEDELETE(file_path_);

    delete(this);
}

IR* VacuumStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto tmp0 = SAFETRANSLATE(opt_schema_name_);
            auto tmp1 = SAFETRANSLATE(file_path_);
            res = new IR(kVacuumStatement, OP2("VACUUM", "INTO"), tmp0, tmp1);
        CASEEND
        CASESTART(1)
            auto tmp0 = SAFETRANSLATE(opt_schema_name_);
            res = new IR(kVacuumStatement, OP1("VACUUM"), tmp0);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

void OptSchemaName::deep_delete(){
    SAFEDELETE(schema_name_);
    
    delete this;
}

IR*  OptSchemaName::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto tmp0 = SAFETRANSLATE(schema_name_);
            res = new IR(kOptSchemaName, OP0(), tmp0);
        CASEEND
        CASESTART(1)
            res = new IR(kOptSchemaName, string(""));
        CASEEND
    SWITCHEND

    TRANSLATEEND
}

void RollbackStatement::deep_delete(){
    SAFEDELETE(opt_transaction_);
    SAFEDELETE(opt_to_savepoint_);

    delete this;
}

IR*  RollbackStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    auto tmp0 = SAFETRANSLATE(opt_transaction_);
    auto tmp1 = SAFETRANSLATE(opt_to_savepoint_);
    res = new IR(kRollbackStatement, OP1("ROLLBACK"), tmp0, tmp1);

    TRANSLATEEND
}

void OptTransaction::deep_delete(){
    delete this;
}

IR*  OptTransaction::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
            CASESTART(0)
                res = new IR(kOptTransaction, str_val_);
            CASEEND
            CASESTART(1)
                res = new IR(kOptTransaction, str_val_);
            CASEEND
    SWITCHEND

    TRANSLATEEND
}

void OptToSavepoint::deep_delete(){
    SAFEDELETE(savepoint_name_);
        
    delete this;
}

IR*  OptToSavepoint::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto tmp0 = SAFETRANSLATE(savepoint_name_);
            res = new IR(kOptToSavepoint, OP1("TO"), tmp0);
        CASEEND
        CASESTART(1)
            auto tmp0 = SAFETRANSLATE(savepoint_name_);
            res = new IR(kOptToSavepoint, OP1("TO SAVEPOINT"), tmp0);
        CASEEND
        CASESTART(2)
            res = new IR(kOptToSavepoint, string(""));
        CASEEND
    SWITCHEND
    
    TRANSLATEEND
}

void BeginStatement::deep_delete(){
    SAFEDELETE(opt_transaction_);

    delete this;
}

IR*  BeginStatement::translate(vector<IR *> &v_ir_collector){
        TRANSLATESTART

        SWITCHSTART
            CASESTART(0)
                auto tmp0 = SAFETRANSLATE(opt_transaction_);
                res = new IR(kBeginStatement, OP1("BEGIN"), tmp0);
            CASEEND
            CASESTART(1)
                auto tmp0 = SAFETRANSLATE(opt_transaction_);
                res = new IR(kBeginStatement, OP1("BEGIN DEFFERED"), tmp0);
            CASEEND
            CASESTART(2)
                auto tmp0 = SAFETRANSLATE(opt_transaction_);
                res = new IR(kBeginStatement, OP1("BEGIN IMEDIATE"), tmp0);
            CASEEND
            CASESTART(3)
                auto tmp0 = SAFETRANSLATE(opt_transaction_);
                res = new IR(kBeginStatement, OP1("BEGIN EXCLUSIVE"), tmp0);
            CASEEND
        SWITCHEND

        TRANSLATEEND
}

void CommitStatement::deep_delete(){
    SAFEDELETE(opt_transaction_);

    delete this;
}

IR*  CommitStatement::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto tmp0 = SAFETRANSLATE(opt_transaction_);
            res = new IR(kCommitStatement, OP1("COMMIT"), tmp0);
        CASEEND
        CASESTART(1)
            auto tmp0 = SAFETRANSLATE(opt_transaction_);
            res = new IR(kCommitStatement, OP1("END"), tmp0);
        CASEEND
    SWITCHEND
    
    TRANSLATEEND
}


void UpsertClause::deep_delete(){
    SAFEDELETE(assign_list_);
    SAFEDELETE(indexed_column_list_);
    SAFEDELETE(opt_where1_);
    SAFEDELETE(opt_where2_);

    delete this;
}

IR*  UpsertClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = new IR(kUpsertClause, OPSTART("ON CONFLICT DO NOTHING"));
        CASEEND
        CASESTART(1)
            auto tmp0 = SAFETRANSLATE(assign_list_);
            auto tmp1 = SAFETRANSLATE(opt_where1_);
            res = new IR(kUpsertClause, OP1("ON CONFLICT DO UPDATE SET"), tmp0, tmp1);
        CASEEND
        CASESTART(2)
            auto tmp0 = SAFETRANSLATE(indexed_column_list_);
            auto tmp1 = SAFETRANSLATE(opt_where1_);
            res = new IR(kUpsertClause, OP2("ON CONFLICT (", ")"), tmp0, tmp1);
        CASEEND
        CASESTART(3)
            auto tmp0 = SAFETRANSLATE(indexed_column_list_);
            auto tmp1 = SAFETRANSLATE(opt_where1_);
            auto tmp2 = SAFETRANSLATE(assign_list_);
            auto tmp3 = SAFETRANSLATE(opt_where2_);
            res = new IR(kUpsertClause, OP2("ON CONFLICT (", ")"), tmp0, tmp1);
            PUSH(res);
            res = new IR(kUpsertClause, OPMID("DO UPDATE SET"), res, tmp2);
            PUSH(res);
            res = new IR(kUpsertClause, OP0(), res, tmp3);
        CASEEND
    SWITCHEND
    
    TRANSLATEEND
}

void IndexedColumnList::deep_delete(){
    SAFEDELETELIST(v_indexed_column_list_);

    delete this;
}

IR*  IndexedColumnList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    TRANSLATELIST(kIndexedColumnList, v_indexed_column_list_, ",")

    TRANSLATEENDNOPUSH
}

void IndexedColumn::deep_delete(){
    SAFEDELETE(opt_collate_);
    SAFEDELETE(expr_);
    SAFEDELETE(opt_order_type_);

    delete this;
}

IR*  IndexedColumn::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    auto tmp0 = SAFETRANSLATE(expr_);
    auto tmp1 = SAFETRANSLATE(opt_collate_);
    auto tmp2 = SAFETRANSLATE(opt_order_type_);
    res = new IR(kIndexedColumn, OP0(), tmp0, tmp1);
    PUSH(res);
    res = new IR(kIndexedColumn, OP0(), res, tmp2);
    
    TRANSLATEEND
}

void OptCollate::deep_delete(){
    SAFEDELETE(collation_name_);

    delete this;
}

IR*  OptCollate::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            auto tmp0 = SAFETRANSLATE(collation_name_);
            res = new IR(kOptCollate, OP1("COLLATE"), tmp0);
        CASEEND
        CASESTART(1)
            res = new IR(kOptCollate, str_val_);
        CASEEND
    SWITCHEND

    TRANSLATEEND
}


void AssignList::deep_delete(){
    SAFEDELETELIST(v_assign_list_);

    delete this;
}

IR*  AssignList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    TRANSLATELIST(kAssignList, v_assign_list_, ",");

    TRANSLATEENDNOPUSH
}

void OptNull::deep_delete(){
    delete this;
}

IR*  OptNull::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    res = new IR(kOptNull, str_val_);

    TRANSLATEEND
}

void AssignClause::deep_delete(){
    SAFEDELETE(expr_);
    SAFEDELETE(column_name_list_);

    delete this;
}

IR*  AssignClause::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    auto tmp0 = SAFETRANSLATE(column_name_list_);
    auto tmp1 = SAFETRANSLATE(expr_);
    res = new IR(kAssignClause, OP1("="), tmp0, tmp1);

    TRANSLATEEND
}

void ColumnNameList::deep_delete(){
    SAFEDELETELIST(v_column_name_list_);

    delete this;
}

IR*  ColumnNameList::translate(vector<IR *> &v_ir_collector){
    TRANSLATESTART

    TRANSLATELIST(kColumnNameList, v_column_name_list_, ",");

    TRANSLATEENDNOPUSH
}

void CollationName::deep_delete(){
    SAFEDELETE(id_);

    delete this;
}

IR* CollationName::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART

    auto name = SAFETRANSLATE(id_);
    res = new IR(kCollationName, OP0(), name);

    TRANSLATEEND
}

void OptUpsertClause::deep_delete(){
    SAFEDELETE(upsert_clause_);

    delete this;
}

IR* OptUpsertClause::translate(vector<IR*> &v_ir_collector){
    TRANSLATESTART

    SWITCHSTART
        CASESTART(0)
            res = SAFETRANSLATE(upsert_clause_);
            res = new IR(kOptUpsertClause, OP0(), res);
        CASEEND
        CASESTART(1)
            res = new IR(kOptUpsertClause, string(""));
        CASEEND
    SWITCHEND

    TRANSLATEEND
}
