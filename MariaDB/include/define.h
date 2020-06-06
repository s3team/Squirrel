#pragma once
#ifndef __DEFINE_H__
#define __DEFINE_H__


#define ALLTYPE(V) \
	V(kProgram) \
	V(kStmtlist) \
	V(kStmt) \
	V(kCreateStmt) \
	V(kDropStmt) \
	V(kAlterStmt) \
	V(kSelectStmt) \
	V(kSelectWithParens) \
	V(kSelectNoParens) \
	V(kSelectClauseList) \
	V(kSelectClause) \
	V(kCombineClause) \
	V(kOptFromClause) \
	V(kSelectTarget) \
	V(kOptWindowClause) \
	V(kWindowClause) \
	V(kWindowDefList) \
	V(kWindowDef) \
	V(kWindowName) \
	V(kWindow) \
	V(kOptPartition) \
	V(kOptFrameClause) \
	V(kRangeOrRows) \
	V(kFrameBoundStart) \
	V(kFrameBoundEnd) \
	V(kFrameBound) \
	V(kOptExistWindowName) \
	V(kOptGroupClause) \
	V(kOptHavingClause) \
	V(kOptWhereClause) \
	V(kWhereClause) \
	V(kFromClause) \
	V(kTableRef) \
	V(kOptIndex) \
	V(kOptOn) \
	V(kOptUsing) \
	V(kColumnNameList) \
	V(kOptTablePrefix) \
	V(kJoinOp) \
	V(kOptJoinType) \
	V(kExprList) \
	V(kOptLimitClause) \
	V(kLimitClause) \
	V(kOptLimitRowCount) \
	V(kOptOrderClause) \
	V(kOptOrderNulls) \
	V(kOrderItemList) \
	V(kOrderItem) \
	V(kOptOrderBehavior) \
	V(kOptWithClause) \
	V(kCteTableList) \
	V(kCteTable) \
	V(kCteTableName) \
	V(kOptAllOrDistinct) \
	V(kCreateTableStmt) \
	V(kCreateIndexStmt) \
	V(kCreateTriggerStmt) \
	V(kCreateViewStmt) \
	V(kOptTableOptionList) \
	V(kTableOptionList) \
	V(kTableOption) \
	V(kOptOpComma) \
	V(kOptIgnoreOrReplace) \
	V(kOptViewAlgorithm) \
	V(kOptSqlSecurity) \
	V(kOptIndexOption) \
	V(kOptExtraOption) \
	V(kIndexAlgorithmOption) \
	V(kLockOption) \
	V(kOptOpEqual) \
	V(kTriggerEvents) \
	V(kTriggerName) \
	V(kTriggerActionTime) \
	V(kDropIndexStmt) \
	V(kDropTableStmt) \
	V(kOptRestrictOrCascade) \
	V(kDropTriggerStmt) \
	V(kDropViewStmt) \
	V(kInsertStmt) \
	V(kInsertRest) \
	V(kSuperValuesList) \
	V(kValuesList) \
	V(kOptOnConflict) \
	V(kOptConflictExpr) \
	V(kIndexedColumnList) \
	V(kIndexedColumn) \
	V(kUpdateStmt) \
	V(kAlterAction) \
	V(kAlterConstantAction) \
	V(kColumnDefList) \
	V(kColumnDef) \
	V(kOptColumnConstraintList) \
	V(kColumnConstraintList) \
	V(kColumnConstraint) \
	V(kOptReferenceClause) \
	V(kOptCheck) \
	V(kConstraintType) \
	V(kReferenceClause) \
	V(kOptForeignKey) \
	V(kOptForeignKeyActions) \
	V(kForeignKeyActions) \
	V(kKeyActions) \
	V(kOptConstraintAttributeSpec) \
	V(kOptInitialTime) \
	V(kConstraintName) \
	V(kOptTemp) \
	V(kOptCheckOption) \
	V(kOptColumnNameListP) \
	V(kSetClauseList) \
	V(kSetClause) \
	V(kOptAsAlias) \
	V(kExpr) \
	V(kOperand) \
	V(kCastExpr) \
	V(kScalarExpr) \
	V(kUnaryExpr) \
	V(kBinaryExpr) \
	V(kLogicExpr) \
	V(kInExpr) \
	V(kCaseExpr) \
	V(kBetweenExpr) \
	V(kExistsExpr) \
	V(kFunctionExpr) \
	V(kOptDistinct) \
	V(kOptFilterClause) \
	V(kOptOverClause) \
	V(kCaseList) \
	V(kCaseClause) \
	V(kCompExpr) \
	V(kExtractExpr) \
	V(kDatetimeField) \
	V(kArrayExpr) \
	V(kArrayIndex) \
	V(kLiteral) \
	V(kStringLiteral) \
	V(kBoolLiteral) \
	V(kNumLiteral) \
	V(kIntLiteral) \
	V(kFloatLiteral) \
	V(kOptColumn) \
	V(kTriggerBody) \
	V(kOptIfNotExist) \
	V(kOptIfExist) \
	V(kIdentifier) \
	V(kAsAlias) \
	V(kTableName) \
	V(kColumnName) \
	V(kOptIndexKeyword) \
	V(kViewName) \
	V(kFunctionName) \
	V(kBinaryOp) \
	V(kOptNot) \
	V(kName) \
	V(kTypeName) \
	V(kCharacterType) \
	V(kCharacterWithLength) \
	V(kCharacterWithoutLength) \
	V(kCharacterConflicta) \
	V(kNumericType) \
	V(kOptTableConstraintList) \
	V(kTableConstraintList) \
	V(kTableConstraint) \
	V(kOptEnforced) \
	V(kUnknown) \


#define ALLCLASS(V) \
	V(Program) \
	V(Stmtlist) \
	V(Stmt) \
	V(CreateStmt) \
	V(DropStmt) \
	V(AlterStmt) \
	V(SelectStmt) \
	V(SelectWithParens) \
	V(SelectNoParens) \
	V(SelectClauseList) \
	V(SelectClause) \
	V(CombineClause) \
	V(OptFromClause) \
	V(SelectTarget) \
	V(OptWindowClause) \
	V(WindowClause) \
	V(WindowDefList) \
	V(WindowDef) \
	V(WindowName) \
	V(Window) \
	V(OptPartition) \
	V(OptFrameClause) \
	V(RangeOrRows) \
	V(FrameBoundStart) \
	V(FrameBoundEnd) \
	V(FrameBound) \
	V(OptExistWindowName) \
	V(OptGroupClause) \
	V(OptHavingClause) \
	V(OptWhereClause) \
	V(WhereClause) \
	V(FromClause) \
	V(TableRef) \
	V(OptIndex) \
	V(OptOn) \
	V(OptUsing) \
	V(ColumnNameList) \
	V(OptTablePrefix) \
	V(JoinOp) \
	V(OptJoinType) \
	V(ExprList) \
	V(OptLimitClause) \
	V(LimitClause) \
	V(OptLimitRowCount) \
	V(OptOrderClause) \
	V(OptOrderNulls) \
	V(OrderItemList) \
	V(OrderItem) \
	V(OptOrderBehavior) \
	V(OptWithClause) \
	V(CteTableList) \
	V(CteTable) \
	V(CteTableName) \
	V(OptAllOrDistinct) \
	V(CreateTableStmt) \
	V(CreateIndexStmt) \
	V(CreateTriggerStmt) \
	V(CreateViewStmt) \
	V(OptTableOptionList) \
	V(TableOptionList) \
	V(TableOption) \
	V(OptOpComma) \
	V(OptIgnoreOrReplace) \
	V(OptViewAlgorithm) \
	V(OptSqlSecurity) \
	V(OptIndexOption) \
	V(OptExtraOption) \
	V(IndexAlgorithmOption) \
	V(LockOption) \
	V(OptOpEqual) \
	V(TriggerEvents) \
	V(TriggerName) \
	V(TriggerActionTime) \
	V(DropIndexStmt) \
	V(DropTableStmt) \
	V(OptRestrictOrCascade) \
	V(DropTriggerStmt) \
	V(DropViewStmt) \
	V(InsertStmt) \
	V(InsertRest) \
	V(SuperValuesList) \
	V(ValuesList) \
	V(OptOnConflict) \
	V(OptConflictExpr) \
	V(IndexedColumnList) \
	V(IndexedColumn) \
	V(UpdateStmt) \
	V(AlterAction) \
	V(AlterConstantAction) \
	V(ColumnDefList) \
	V(ColumnDef) \
	V(OptColumnConstraintList) \
	V(ColumnConstraintList) \
	V(ColumnConstraint) \
	V(OptReferenceClause) \
	V(OptCheck) \
	V(ConstraintType) \
	V(ReferenceClause) \
	V(OptForeignKey) \
	V(OptForeignKeyActions) \
	V(ForeignKeyActions) \
	V(KeyActions) \
	V(OptConstraintAttributeSpec) \
	V(OptInitialTime) \
	V(ConstraintName) \
	V(OptTemp) \
	V(OptCheckOption) \
	V(OptColumnNameListP) \
	V(SetClauseList) \
	V(SetClause) \
	V(OptAsAlias) \
	V(Expr) \
	V(Operand) \
	V(CastExpr) \
	V(ScalarExpr) \
	V(UnaryExpr) \
	V(BinaryExpr) \
	V(LogicExpr) \
	V(InExpr) \
	V(CaseExpr) \
	V(BetweenExpr) \
	V(ExistsExpr) \
	V(FunctionExpr) \
	V(OptDistinct) \
	V(OptFilterClause) \
	V(OptOverClause) \
	V(CaseList) \
	V(CaseClause) \
	V(CompExpr) \
	V(ExtractExpr) \
	V(DatetimeField) \
	V(ArrayExpr) \
	V(ArrayIndex) \
	V(Literal) \
	V(StringLiteral) \
	V(BoolLiteral) \
	V(NumLiteral) \
	V(IntLiteral) \
	V(FloatLiteral) \
	V(OptColumn) \
	V(TriggerBody) \
	V(OptIfNotExist) \
	V(OptIfExist) \
	V(Identifier) \
	V(AsAlias) \
	V(TableName) \
	V(ColumnName) \
	V(OptIndexKeyword) \
	V(ViewName) \
	V(FunctionName) \
	V(BinaryOp) \
	V(OptNot) \
	V(Name) \
	V(TypeName) \
	V(CharacterType) \
	V(CharacterWithLength) \
	V(CharacterWithoutLength) \
	V(CharacterConflicta) \
	V(NumericType) \
	V(OptTableConstraintList) \
	V(TableConstraintList) \
	V(TableConstraint) \
	V(OptEnforced) \


#define ALLDATATYPE(V) \
	V(DataWhatever) \
	V(DataTableName) \
	V(DataColumnName) \
	V(DataViewName) \
	V(DataFunctionName) \
	V(DataPragmaKey) \
	V(DataPragmaValue) \
	V(DataTableSpaceName) \
	V(DataSequenceName) \
	V(DataExtensionName) \
	V(DataRoleName) \
	V(DataSchemaName) \
	V(DataDatabase) \
	V(DataTriggerName) \
	V(DataWindowName) \
	V(DataTriggerFunction) \
	V(DataDomainName) \
	V(DataAliasName) \



#define SWITCHSTART \
    switch(case_idx_){ 

#define SWITCHEND \
    default: \
        \
        assert(0); \
        \
    }

#define CASESTART(idx) \
    case CASE##idx: {\


#define CASEEND \
            break;\
        }

#define TRANSLATESTART \
    IR *res = NULL; 

#define GENERATESTART(len) \
    case_idx_ = rand() % len ;

#define GENERATEEND \
    return ;

#define TRANSLATEEND \
     v_ir_collector.push_back(res); \
        \
     return res; 

#define TRANSLATEENDNOPUSH \
     return res; 

#define SAFETRANSLATE(a) \
    (assert(a != NULL), a->translate(v_ir_collector))

#define SAFEDELETE(a) \
    if(a != NULL) a->deep_delete()

#define SAFEDELETELIST(a) \
    for(auto _i: a) \
        SAFEDELETE(_i)

#define OP1(a) \
    new IROperator(a) 

#define OP2(a, b) \
    new IROperator(a,b)

#define OP3(a,b,c) \
    new IROperator(a,b,c)

#define OPSTART(a) \
    new IROperator(a)

#define OPMID(a) \
new IROperator("", a, "")

#define OPEND(a) \
    new IROperator("", "", a)

#define OP0() \
    new IROperator()


#define TRANSLATELIST(t, a, b) \
    res = SAFETRANSLATE(a[0]); \
    res = new IR(t, OP0(), res) ; \
    v_ir_collector.push_back(res); \
    for(int i = 1; i < a.size(); i++){ \
        IR * tmp = SAFETRANSLATE(a[i]); \
        res = new IR(t, OPMID(b), res, tmp); \
        v_ir_collector.push_back(res); \
    }

#define PUSH(a) \
    v_ir_collector.push_back(a)

#define MUTATESTART \
    IR * res = NULL;       \
    auto randint = get_rand_int(3); \
    switch(randint) { \

#define DOLEFT \
    case 0:{ \

#define DORIGHT \
    break; \
    } \
    \
    case 1: { \
     
#define DOBOTH  \
    break; }  \
    case 2:{ \

#define MUTATEEND \
    } \
    } \
    \
    return res; \
    
#endif
