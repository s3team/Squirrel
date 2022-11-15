#ifndef __AST_H__
#define __AST_H__
#include <vector>
#include <string>
#include "define.h"
#include <iostream>
using namespace std;

enum NODETYPE{
#define DECLARE_TYPE(v)  \
    v,
ALLTYPE(DECLARE_TYPE)
#undef DECLARE_TYPE
};
typedef NODETYPE IRTYPE;

enum CASEIDX{
	CASE0, CASE1, CASE2, CASE3, CASE4, CASE5, CASE6, CASE7, CASE8, CASE9, CASE10, CASE11, CASE12, CASE13, CASE14, CASE15, CASE16, CASE17, CASE18, CASE19, CASE20, CASE21, CASE22, CASE23, CASE24, CASE25, CASE26, CASE27, CASE28, CASE29, CASE30, CASE31, CASE32, CASE33, CASE34, CASE35, CASE36, CASE37, CASE38, CASE39, CASE40, CASE41, CASE42, CASE43, CASE44, CASE45, CASE46, CASE47, CASE48, CASE49, CASE50, CASE51, CASE52, CASE53, CASE54, CASE55, CASE56, CASE57, CASE58, CASE59, CASE60, CASE61, CASE62, CASE63, CASE64, CASE65, CASE66, CASE67, CASE68, CASE69, CASE70, CASE71, CASE72, CASE73, CASE74, CASE75, CASE76, CASE77, CASE78, CASE79, CASE80, CASE81, CASE82, CASE83, CASE84, CASE85, CASE86, CASE87, CASE88, CASE89, CASE90, CASE91, CASE92, CASE93, CASE94, CASE95, CASE96, CASE97, CASE98, CASE99, CASE100, CASE101, CASE102, CASE103, CASE104, CASE105, CASE106, CASE107, CASE108, CASE109, CASE110, CASE111, CASE112, CASE113, CASE114, CASE115, CASE116, CASE117, CASE118, CASE119, CASE120, CASE121, CASE122, CASE123, CASE124, CASE125, CASE126, CASE127, CASE128, CASE129, CASE130, CASE131, CASE132, CASE133, CASE134, CASE135, CASE136, CASE137, CASE138, CASE139, CASE140, CASE141, CASE142, CASE143, CASE144, CASE145, CASE146, CASE147, CASE148, CASE149, CASE150, CASE151, CASE152, CASE153, CASE154, CASE155, CASE156, CASE157, CASE158, CASE159, CASE160, CASE161, CASE162, CASE163, CASE164, CASE165, CASE166, CASE167, CASE168, CASE169, CASE170, CASE171, CASE172, CASE173, CASE174, CASE175, CASE176, CASE177, CASE178, CASE179, CASE180, CASE181, CASE182, CASE183, CASE184, CASE185, CASE186, CASE187, CASE188, CASE189, CASE190, CASE191, CASE192, CASE193, CASE194, CASE195, CASE196, CASE197, CASE198, CASE199, CASE200, CASE201, CASE202, CASE203, CASE204, CASE205, CASE206, CASE207, CASE208, CASE209, CASE210, CASE211, CASE212, CASE213, CASE214, CASE215, CASE216, CASE217, CASE218, CASE219, CASE220, CASE221, CASE222, CASE223, CASE224, CASE225, CASE226, CASE227, CASE228, CASE229, CASE230, CASE231, CASE232, CASE233, CASE234, CASE235, CASE236, CASE237, CASE238, CASE239, CASE240, CASE241, CASE242, CASE243, CASE244, CASE245, CASE246, CASE247, CASE248, CASE249, CASE250, CASE251, CASE252, CASE253, CASE254, CASE255, CASE256, CASE257, CASE258, CASE259, CASE260, CASE261, CASE262, CASE263, CASE264, CASE265, CASE266, CASE267, CASE268, CASE269, CASE270, CASE271, CASE272, CASE273, CASE274, CASE275, CASE276, CASE277, CASE278, CASE279, CASE280, CASE281, CASE282, CASE283, CASE284, CASE285, CASE286, CASE287, CASE288, CASE289, CASE290, CASE291, CASE292, CASE293, CASE294, CASE295, CASE296, CASE297, CASE298, CASE299, CASE300, CASE301, CASE302, CASE303, CASE304, CASE305, CASE306, CASE307, CASE308, CASE309, CASE310, CASE311, CASE312, CASE313, CASE314, CASE315, CASE316, CASE317, CASE318, CASE319, CASE320, CASE321, CASE322, CASE323, CASE324, CASE325, CASE326, CASE327, CASE328, CASE329, CASE330, CASE331, CASE332, CASE333, CASE334, CASE335, CASE336, CASE337, CASE338, CASE339, CASE340, CASE341, CASE342, CASE343, CASE344, CASE345, CASE346, CASE347, CASE348, CASE349, CASE350, CASE351, CASE352, CASE353, CASE354, CASE355, CASE356, CASE357, CASE358, CASE359, CASE360, CASE361, CASE362, CASE363, CASE364, CASE365, CASE366, CASE367, CASE368, CASE369, CASE370, CASE371, CASE372, CASE373, CASE374, CASE375, CASE376, CASE377, CASE378, CASE379, CASE380, CASE381, CASE382, CASE383, CASE384, CASE385, CASE386, CASE387, CASE388, CASE389, CASE390, CASE391, CASE392, CASE393, CASE394, CASE395, CASE396, CASE397, CASE398, CASE399, 
};

enum DATATYPE{
#define DECLARE_TYPE(v)  \
    k##v,
ALLDATATYPE(DECLARE_TYPE)
#undef DECLARE_TYPE
};



#define GEN_NAME() \
    name_ = gen_id_name();


static unsigned long g_id_counter;

static inline void reset_id_counter(){
    g_id_counter = 0;
}

static string gen_id_name(){
    return "v" + to_string(g_id_counter++);
}

class IROperator{
public:
    IROperator(string prefix="", string middle="", string suffix=""): 
        prefix_(prefix), middle_(middle), suffix_(suffix) {}

    string prefix_;
    string middle_;
    string suffix_;
};

enum UnionType{
    kUnionUnknown = 0,
    kUnionString = 1,
    kUnionFloat,
    kUnionInt,
    kUnionLong,
    kUnionBool,
};


enum DATAFLAG {
	 kUse = 0x8,
	 kMapToClosestOne = 0x10,
	 kNoSplit = 0x100,
	 kGlobal = 0x4,
	 kReplace = 0x40,
	 kUndefine = 0x2,
	 kAlias = 0x80,
	 kMapToAll = 0x20,
	 kDefine = 0x1,
};
#define isUse(a) ((a) & kUse)
#define isMapToClosestOne(a) ((a) & kMapToClosestOne)
#define isNoSplit(a) ((a) & kNoSplit)
#define isGlobal(a) ((a) & kGlobal)
#define isReplace(a) ((a) & kReplace)
#define isUndefine(a) ((a) & kUndefine)
#define isAlias(a) ((a) & kAlias)
#define isMapToAll(a) ((a) & kMapToAll)
#define isDefine(a) ((a) & kDefine)



class IR{
public:
    IR(IRTYPE type,  IROperator * op, IR * left=NULL, IR* right=NULL):
        type_(type), op_(op), left_(left), right_(right), operand_num_((!!right)+(!!left)), data_type_(kDataWhatever){
            GEN_NAME();
        }

    IR(IRTYPE type, string str_val, DATATYPE data_type=kDataWhatever, int scope = -1, DATAFLAG flag = kUse):
        type_(type), str_val_(str_val), op_(NULL), left_(NULL), right_(NULL), operand_num_
    (0), data_type_(data_type), scope_(scope) , data_flag_(flag){
            GEN_NAME();
        }

    IR(IRTYPE type, bool b_val, DATATYPE data_type=kDataWhatever, int scope = -1, DATAFLAG flag = kUse):
        type_(type), bool_val_(b_val),left_(NULL), op_(NULL), right_(NULL), operand_num_(0), data_type_(kDataWhatever), scope_(scope) , data_flag_(flag){
            GEN_NAME();
        }
    
    IR(IRTYPE type, unsigned long long_val, DATATYPE data_type=kDataWhatever, int scope = -1, DATAFLAG flag = kUse):
        type_(type), long_val_(long_val),left_(NULL), op_(NULL), right_(NULL), operand_num_(0), data_type_(kDataWhatever), scope_(scope) , data_flag_(flag){
            GEN_NAME();
        }
    
    IR(IRTYPE type, int int_val, DATATYPE data_type=kDataWhatever, int scope = -1, DATAFLAG flag = kUse):
        type_(type), int_val_(int_val),left_(NULL), op_(NULL), right_(NULL), operand_num_(0), data_type_(kDataWhatever), scope_(scope) , data_flag_(flag){
            GEN_NAME();
    }

    IR(IRTYPE type, double f_val, DATATYPE data_type=kDataWhatever, int scope = -1, DATAFLAG flag = kUse):
        type_(type), float_val_(f_val),left_(NULL), op_(NULL), right_(NULL), operand_num_(0), data_type_(kDataWhatever), scope_(scope) , data_flag_(flag){
            GEN_NAME();
        }

    IR(IRTYPE type, IROperator * op, IR * left, IR* right, double f_val, string str_val, string name, unsigned int mutated_times, int scope, DATAFLAG flag):
        type_(type), op_(op), left_(left), right_(right), operand_num_((!!right)+(!!left)), name_(name), str_val_(str_val),
        float_val_(f_val), mutated_times_(mutated_times), data_type_(kDataWhatever), scope_(scope), data_flag_(flag){

        }

    IR(const IR* ir, IR* left, IR* right){
        this->type_ = ir->type_;
        if(ir->op_ != NULL)
            this->op_ = OP3(ir->op_->prefix_, ir->op_->middle_, ir->op_->suffix_);
        else{
            this->op_ = OP0();
        }
        this->left_ = left;
        this->right_ = right;
        this->str_val_ = ir->str_val_;
        this->long_val_ = ir->long_val_;
        this->data_type_ = ir->data_type_;
        this->scope_ = ir->scope_;
        this->data_flag_ = ir->data_flag_;
        this->name_ = ir->name_;
        this->operand_num_ = ir->operand_num_;
        this->mutated_times_ = ir->mutated_times_;
    }

    union{
        int int_val_;
        unsigned long long_val_;
        double float_val_;
        bool bool_val_;
    };


    int scope_;
    DATAFLAG data_flag_;
    DATATYPE data_type_;
    IRTYPE type_;
    string name_;

    string str_val_;

    IROperator* op_;
    IR* left_;
    IR* right_;
    int operand_num_;
    unsigned int mutated_times_ = 0;

    string to_string();
    string to_string_core();
};

class Node{
public:
    void set_sub_type(unsigned int i){case_idx_ = i;}
    NODETYPE type_;
    DATATYPE data_type_;
    DATAFLAG data_flag_;
    int scope_;
    unsigned int case_idx_;
    virtual IR* translate(vector<IR*> &v_ir_collector);
    virtual void generate(){}
    virtual void deep_delete(){}
    Node(){};
    ~Node(){};
};

Node* generate_ast_node_by_type(IRTYPE);

DATATYPE get_datatype_by_string(string s);

NODETYPE get_nodetype_by_string(string s);

string get_string_by_nodetype(NODETYPE tt);
string get_string_by_datatype(DATATYPE tt);
IR * deep_copy(const IR * root);

void deep_delete(IR * root);


#define DECLARE_CLASS(v) \
    class v ; 
ALLCLASS(DECLARE_CLASS);
#undef DECLARE_CLASS



class Program:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Stmtlist * stmtlist_;
};

class Stmtlist:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Stmt * stmt_;
	Stmtlist * stmtlist_;
};

class Stmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	InsertStmt * insert_stmt_;
	DropStmt * drop_stmt_;
	CreateStmt * create_stmt_;
	SelectStmt * select_stmt_;
	AlterStmt * alter_stmt_;
	ReindexStmt * reindex_stmt_;
	UpdateStmt * update_stmt_;
};

class CreateStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	CreateIndexStmt * create_index_stmt_;
	CreateViewStmt * create_view_stmt_;
	CreateTableStmt * create_table_stmt_;
};

class DropStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	DropTableStmt * drop_table_stmt_;
	DropViewStmt * drop_view_stmt_;
	DropIndexStmt * drop_index_stmt_;
};

class AlterStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	AlterAction * alter_action_;
	TableName * table_name_;
};

class SelectStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	SelectNoParens * select_no_parens_;
	SelectWithParens * select_with_parens_;
};

class SelectWithParens:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	SelectNoParens * select_no_parens_;
	SelectWithParens * select_with_parens_;
};

class SelectNoParens:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	SelectClauseList * select_clause_list_;
	OptWithClause * opt_with_clause_;
	OptOrderClause * opt_order_clause_;
	OptLimitClause * opt_limit_clause_;
};

class SelectClauseList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	SelectClauseList * select_clause_list_;
	CombineClause * combine_clause_;
	SelectClause * select_clause_;
};

class SelectClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptGroupClause * opt_group_clause_;
	OptAllOrDistinct * opt_all_or_distinct_;
	OptFromClause * opt_from_clause_;
	OptWindowClause * opt_window_clause_;
	SelectTarget * select_target_;
	OptWhereClause * opt_where_clause_;
};

class CombineClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptFromClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	FromClause * from_clause_;
};

class SelectTarget:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ExprList * expr_list_;
};

class OptWindowClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	WindowClause * window_clause_;
};

class WindowClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	WindowDefList * window_def_list_;
};

class WindowDefList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	WindowDef * window_def_;
	WindowDefList * window_def_list_;
};

class WindowDef:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Window * window_;
	WindowName * window_name_;
};

class WindowName:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Identifier * identifier_;
};

class Window:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptExistWindowName * opt_exist_window_name_;
	OptFrameClause * opt_frame_clause_;
	OptPartition * opt_partition_;
	OptOrderClause * opt_order_clause_;
};

class OptPartition:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ExprList * expr_list_;
};

class OptFrameClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	FrameBoundStart * frame_bound_start_;
	OptFrameExclude * opt_frame_exclude_;
	RangeOrRows * range_or_rows_;
	FrameBoundEnd * frame_bound_end_;
};

class RangeOrRows:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class FrameBoundStart:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	FrameBound * frame_bound_;
};

class FrameBoundEnd:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	FrameBound * frame_bound_;
};

class FrameBound:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
};

class OptFrameExclude:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	FrameExclude * frame_exclude_;
};

class FrameExclude:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptExistWindowName:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Identifier * identifier_;
};

class OptGroupClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ExprList * expr_list_;
	OptHavingClause * opt_having_clause_;
};

class OptHavingClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
};

class OptWhereClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	WhereClause * where_clause_;
};

class WhereClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
};

class FromClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	TableRef * table_ref_;
};

class TableRef:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	SelectNoParens * select_no_parens_;
	TableRef * table_ref_;
	TableName * table_name_;
	OptTablePrefix * opt_table_prefix_;
	OptOnOrUsing * opt_on_or_using_;
};

class OptOnOrUsing:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OnOrUsing * on_or_using_;
};

class OnOrUsing:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
	ColumnNameList * column_name_list_;
};

class ColumnNameList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ColumnNameList * column_name_list_;
	ColumnName * column_name_;
};

class OptTablePrefix:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	JoinOp * join_op_;
	TableRef * table_ref_;
};

class JoinOp:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptJoinType * opt_join_type_;
};

class OptJoinType:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class ExprList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
	ExprList * expr_list_;
};

class OptLimitClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	LimitClause * limit_clause_;
};

class LimitClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_1_;
	Expr * expr_2_;
};

class OptOrderClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OrderItemList * order_item_list_;
};

class OptOrderNulls:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OrderItemList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OrderItem * order_item_;
	OrderItemList * order_item_list_;
};

class OrderItem:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
	OptOrderNulls * opt_order_nulls_;
	OptOrderBehavior * opt_order_behavior_;
};

class OptOrderBehavior:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptWithClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	CteTableList * cte_table_list_;
};

class CteTableList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	CteTableList * cte_table_list_;
	CteTable * cte_table_;
};

class CteTable:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	CteTableName * cte_table_name_;
	SelectStmt * select_stmt_;
};

class CteTableName:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptColumnNameListP * opt_column_name_list_p_;
	TableName * table_name_;
};

class OptAllOrDistinct:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class CreateTableStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptTableConstraintList * opt_table_constraint_list_;
	OptTemp * opt_temp_;
	SelectStmt * select_stmt_;
	TableName * table_name_;
	ColumnDefList * column_def_list_;
	OptIfNotExist * opt_if_not_exist_;
};

class CreateIndexStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	TableName * table_name_1_;
	TableName * table_name_2_;
	OptIfNotExist * opt_if_not_exist_;
	IndexedColumnList * indexed_column_list_;
	OptWhereClause * opt_where_clause_;
	OptUnique * opt_unique_;
};

class CreateViewStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptTemp * opt_temp_;
	ViewName * view_name_;
	OptColumnNameListP * opt_column_name_list_p_;
	SelectStmt * select_stmt_;
	OptCheckOption * opt_check_option_;
};

class DropIndexStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	TableName * table_name_;
	OptIfExist * opt_if_exist_;
};

class DropTableStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	TableName * table_name_;
	OptIfExist * opt_if_exist_;
};

class DropViewStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ViewName * view_name_;
	OptIfExist * opt_if_exist_;
};

class InsertStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	InsertRest * insert_rest_;
	TableName * table_name_;
	OptOnConflict * opt_on_conflict_;
	OptWithClause * opt_with_clause_;
};

class InsertRest:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptColumnNameListP * opt_column_name_list_p_;
	SuperValuesList * super_values_list_;
	SelectNoParens * select_no_parens_;
};

class SuperValuesList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ValuesList * values_list_;
	SuperValuesList * super_values_list_;
};

class ValuesList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ExprList * expr_list_;
};

class OptOnConflict:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptConflictExpr * opt_conflict_expr_;
	SetClauseList * set_clause_list_;
	WhereClause * where_clause_;
};

class OptConflictExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	IndexedColumnList * indexed_column_list_;
	WhereClause * where_clause_;
};

class IndexedColumnList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	IndexedColumn * indexed_column_;
	IndexedColumnList * indexed_column_list_;
};

class IndexedColumn:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
	OptOrderBehavior * opt_order_behavior_;
};

class UpdateStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	TableName * table_name_;
	SetClauseList * set_clause_list_;
	OptWithClause * opt_with_clause_;
	OptWhereClause * opt_where_clause_;
};

class ReindexStmt:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	TableName * table_name_;
};

class AlterAction:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ColumnDef * column_def_;
	OptColumn * opt_column_;
	TableName * table_name_;
	ColumnName * column_name_1_;
	ColumnName * column_name_2_;
};

class ColumnDefList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ColumnDef * column_def_;
	ColumnDefList * column_def_list_;
};

class ColumnDef:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	TypeName * type_name_;
	Identifier * identifier_;
	OptColumnConstraintList * opt_column_constraint_list_;
};

class OptColumnConstraintList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ColumnConstraintList * column_constraint_list_;
};

class ColumnConstraintList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ColumnConstraintList * column_constraint_list_;
	ColumnConstraint * column_constraint_;
};

class ColumnConstraint:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ConstraintType * constraint_type_;
};

class ConstraintType:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
	ForeignClause * foreign_clause_;
};

class ForeignClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptConstraintAttributeSpec * opt_constraint_attribute_spec_;
	OptColumnNameListP * opt_column_name_list_p_;
	TableName * table_name_;
	OptForeignKeyActions * opt_foreign_key_actions_;
};

class OptForeignKeyActions:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ForeignKeyActions * foreign_key_actions_;
};

class ForeignKeyActions:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	KeyActions * key_actions_;
};

class KeyActions:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptConstraintAttributeSpec:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptInitialTime * opt_initial_time_;
};

class OptInitialTime:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class ConstraintName:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Name * name_;
};

class OptTemp:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptCheckOption:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptColumnNameListP:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	ColumnNameList * column_name_list_;
};

class SetClauseList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	SetClause * set_clause_;
	SetClauseList * set_clause_list_;
};

class SetClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
	ColumnNameList * column_name_list_;
	ColumnName * column_name_;
};

class Expr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	CastExpr * cast_expr_;
	InExpr * in_expr_;
	BetweenExpr * between_expr_;
	Operand * operand_;
	ExistsExpr * exists_expr_;
	LogicExpr * logic_expr_;
};

class Operand:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	UnaryExpr * unary_expr_;
	ExprList * expr_list_;
	CaseExpr * case_expr_;
	SelectNoParens * select_no_parens_;
	ExtractExpr * extract_expr_;
	ArrayIndex * array_index_;
	BinaryExpr * binary_expr_;
	ScalarExpr * scalar_expr_;
};

class CastExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
	TypeName * type_name_;
};

class ScalarExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Literal * literal_;
	ColumnName * column_name_;
};

class UnaryExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Operand * operand_;
};

class BinaryExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Operand * operand_1_;
	Operand * operand_2_;
	BinaryOp * binary_op_;
	CompExpr * comp_expr_;
};

class LogicExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_1_;
	Expr * expr_2_;
};

class InExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Operand * operand_;
	ExprList * expr_list_;
	OptNot * opt_not_;
	TableName * table_name_;
	SelectNoParens * select_no_parens_;
};

class CaseExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_1_;
	Expr * expr_2_;
	CaseList * case_list_;
};

class BetweenExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Operand * operand_1_;
	Operand * operand_2_;
	Operand * operand_3_;
};

class ExistsExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptNot * opt_not_;
	SelectNoParens * select_no_parens_;
};

class CaseList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	CaseList * case_list_;
	CaseClause * case_clause_;
};

class CaseClause:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_1_;
	Expr * expr_2_;
};

class CompExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Operand * operand_1_;
	Operand * operand_2_;
};

class ExtractExpr:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	DatetimeField * datetime_field_;
	Expr * expr_;
};

class DatetimeField:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class ArrayIndex:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Operand * operand_;
	IntLiteral * int_literal_;
};

class Literal:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	BoolLiteral * bool_literal_;
	StringLiteral * string_literal_;
	NumLiteral * num_literal_;
};

class StringLiteral:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	string string_val_;
};

class BoolLiteral:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class NumLiteral:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	IntLiteral * int_literal_;
	FloatLiteral * float_literal_;
};

class IntLiteral:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	int int_val_;
};

class FloatLiteral:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	float float_val_;
};

class OptColumn:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptIfNotExist:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptIfExist:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class Identifier:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	string string_val_;
};

class TableName:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Identifier * identifier_;
};

class ColumnName:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Identifier * identifier_;
};

class OptUnique:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class ViewName:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Identifier * identifier_;
};

class BinaryOp:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptNot:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class Name:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Identifier * identifier_;
};

class TypeName:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	NumericType * numeric_type_;
	CharacterType * character_type_;
};

class CharacterType:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	CharacterWithLength * character_with_length_;
	CharacterWithoutLength * character_without_length_;
};

class CharacterWithLength:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	CharacterConflicta * character_conflicta_;
	IntLiteral * int_literal_;
};

class CharacterWithoutLength:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	CharacterConflicta * character_conflicta_;
};

class CharacterConflicta:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	OptVarying * opt_varying_;
};

class OptVarying:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class NumericType:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

};

class OptTableConstraintList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	TableConstraintList * table_constraint_list_;
};

class TableConstraintList:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	TableConstraint * table_constraint_;
	TableConstraintList * table_constraint_list_;
};

class TableConstraint:public Node {
public:
	virtual void deep_delete();
	virtual IR* translate(vector<IR*> &v_ir_collector);
	virtual void generate();

	Expr * expr_;
	IndexedColumnList * indexed_column_list_;
	ForeignClause * foreign_clause_;
	ConstraintName * constraint_name_;
	ColumnNameList * column_name_list_;
};

#endif
