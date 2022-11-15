#pragma once
#ifndef __DEFINE_H__
#define __DEFINE_H__

#define ALLTYPE(V) \
    V(kIR) \
    V(kIROperator) \
    V(kNode) \
    V(kOpt) \
    V(kOptString) \
    V(kProgram) \
    V(kStatement) \
    V(kOptionalHints) \
    V(kPrepareStatement) \
    V(kPreparableStatement) \
    V(kShowStatement) \
    V(kHint) \
    V(kHintList) \
    V(kPrepareTargetQuery) \
    V(kSelectStatement) \
    V(kImportStatement) \
    V(kCreateStatement) \
    V(kInsertStatement) \
    V(kDeleteStatement) \
    V(kUpdateStatement) \
    V(kDropStatement) \
    V(kExecuteStatement) \
    V(kImportFileType) \
    V(kFilePath) \
    V(kOptNotExists) \
    V(kColumnDefCommaList) \
    V(kColumnDef) \
    V(kColumnType) \
    V(kOptColumnNullable) \
    V(kOptExists) \
    V(kOptColumnList) \
    V(kUpdateClauseCommalist) \
    V(kUpdateClause) \
    V(kSelectWithParen) \
    V(kSelectParenOrClause) \
    V(kSelectNoParen) \
    V(kSetOperator) \
    V(kSetType) \
    V(kOptAll) \
    V(kSelectClause) \
    V(kOptDistinct) \
    V(kSelectList) \
    V(kFromClause) \
    V(kOptFromClause) \
    V(kOptWhere) \
    V(kOptGroup) \
    V(kOptHaving) \
    V(kOptOrder) \
    V(kOrderList) \
    V(kOrderDesc) \
    V(kOptOrderType) \
    V(kOptTop) \
    V(kOptLimit) \
    V(kExprList) \
    V(kLiteralList) \
    V(kOptLiteralList) \
    V(kExprAlias) \
    V(kExpr) \
    V(kOperand) \
    V(kBetweenExpr) \
    V(kLogicExpr) \
    V(kExistsExpr) \
    V(kInExpr) \
    V(kArrayIndex) \
    V(kScalarExpr) \
    V(kUnaryExpr) \
    V(kBinaryExpr) \
    V(kCaseExpr) \
    V(kFunctionExpr) \
    V(kExtractExpr) \
    V(kArrayExpr) \
    V(kCaseClause) \
    V(kCaseList) \
    V(kDatetimeField) \
    V(kColumnName) \
    V(kLiteral) \
    V(kStringLiteral) \
    V(kBoolLiteral) \
    V(kNumLiteral) \
    V(kIntLiteral) \
    V(kNullLiteral) \
    V(kParamExpr) \
    V(kIdentifier) \
    V(kTableRef) \
    V(kTableRefCommaList) \
    V(kTableRefAtomic) \
    V(kNonjoinTableRefAtomic) \
    V(kTableRefName) \
    V(kTableRefNameNoAlias) \
    V(kTableName) \
    V(kTableAlias) \
    V(kOptTableAlias) \
    V(kAlias) \
    V(kOptAlias) \
    V(kWithClause) \
    V(kOptWithClause) \
    V(kWithDescriptionList) \
    V(kWithDescription) \
    V(kJoinClause) \
    V(kOptJoinType) \
    V(kJoinCondition) \
    V(kOptSemicolon) \
    V(kIdentCommaList) \
    V(kFloatLiteral) \
    V(kInit) \
    V(kStatementList) \
    V(kCompExpr) \
    V(kUnknown)  \
    V(kEmpty)   \
    V(kCmdPragma) \
    V(kPragmaKey) \
    V(kPragmaName) \
    V(kPragmaValue) \
    V(kSchemaName) \
    V(kOptColumnArglist) \
	V(kColumnArglist) \
	V(kColumnArg) \
	V(kOptOnConflict) \
	V(kResolveType) \
	V(kOptAutoinc) \
	V(kOptUnique) \
	V(kIndexName) \
	V(kTriggerDeclare) \
	V(kOptTmp) \
	V(kTriggerName) \
	V(kOptTriggerTime) \
	V(kTriggerEvent) \
	V(kOptOfColumnList) \
	V(kOptForEach) \
	V(kOptWhen) \
	V(kTriggerCmdList) \
	V(kTriggerCmd) \
	V(kModuleName) \
	V(kOptOverClause) \
	V(kOptFilterClause) \
	V(kWindowClause) \
	V(kWindowDefnList) \
	V(kWindowDefn) \
	V(kWindow) \
	V(kOptBaseWindowName) \
	V(kOptFrame) \
	V(kRangeOrRows) \
	V(kFrameBoundS) \
	V(kFrameBoundE) \
	V(kFrameBound) \
	V(kOptFrameExclude) \
	V(kFrameExclude) \
    V(kInsertType) \
    V(kCmd) \
    V(kCmdAttach) \
    V(kCmdDetach) \
    V(kCmdReindex) \
    V(kCmdAnalyze) \
    V(kSuperList)  \
    V(kTablePrefix) \
    V(kOptOn) \
    V(kOptUsing) \
    V(kOptIndex) \
    V(kJoinOp)   \
    V(kJoinKw)   \
    V(kCastExpr) \
    V(kAlterStatement) \
    V(kOptColumn) \
    V(kCmdRelease)  \
    V(kSavepointName) \
    V(kVacuumStatement) \
    V(kOptSchemaName) \
    V(kRollbackStatement) \
    V(kOptTransaction) \
    V(kOptToSavepoint) \
    V(kBeginStatement) \
    V(kCommitStatement) \
    V(kUpsertClause) \
    V(kIndexedColumnList) \
    V(kIndexedColumn) \
    V(kOptCollate) \
    V(kAssignList) \
    V(kOptNull) \
    V(kAssignClause) \
    V(kColumnNameList) \
    V(kCollationName) \
    V(kOptUpsertClause)

#define ALLCLASS(V) \
    V(IR) \
    V(IROperator) \
    V(Node) \
    V(Opt) \
    V(OptString) \
    V(Program) \
    V(Statement) \
    V(OptionalHints) \
    V(PrepareStatement) \
    V(PreparableStatement) \
    V(ShowStatement) \
    V(Hint) \
    V(HintList) \
    V(PrepareTargetQuery) \
    V(SelectStatement) \
    V(ImportStatement) \
    V(CreateStatement) \
    V(InsertStatement) \
    V(DeleteStatement) \
    V(UpdateStatement) \
    V(DropStatement) \
    V(ExecuteStatement) \
    V(ImportFileType) \
    V(FilePath) \
    V(OptNotExists) \
    V(ColumnDefCommaList) \
    V(ColumnDef) \
    V(ColumnType) \
    V(OptColumnNullable) \
    V(OptExists) \
    V(OptColumnList) \
    V(UpdateClauseCommalist) \
    V(UpdateClause) \
    V(SelectWithParen) \
    V(SelectParenOrClause) \
    V(SelectNoParen) \
    V(SetOperator) \
    V(SetType) \
    V(OptAll) \
    V(SelectClause) \
    V(OptDistinct) \
    V(SelectList) \
    V(FromClause) \
    V(OptFromClause) \
    V(OptWhere) \
    V(OptGroup) \
    V(OptHaving) \
    V(OptOrder) \
    V(OrderList) \
    V(OrderDesc) \
    V(OptOrderType) \
    V(OptTop) \
    V(OptLimit) \
    V(ExprList) \
    V(LiteralList) \
    V(OptLiteralList) \
    V(ExprAlias) \
    V(Expr) \
    V(Operand) \
    V(BetweenExpr) \
    V(LogicExpr) \
    V(ExistsExpr) \
    V(InExpr) \
    V(ArrayIndex) \
    V(ScalarExpr) \
    V(UnaryExpr) \
    V(BinaryExpr) \
    V(CaseExpr) \
    V(FunctionExpr) \
    V(ExtractExpr) \
    V(ArrayExpr) \
    V(CaseClause) \
    V(CaseList) \
    V(DatetimeField) \
    V(ColumnName) \
    V(Literal) \
    V(StringLiteral) \
    V(BoolLiteral) \
    V(NumLiteral) \
    V(IntLiteral) \
    V(NullLiteral) \
    V(ParamExpr) \
    V(Identifier) \
    V(TableRefCommaList) \
    V(TableRefAtomic) \
    V(NonjoinTableRefAtomic) \
    V(TableRefName) \
    V(TableRefNameNoAlias) \
    V(TableName) \
    V(TableAlias) \
    V(OptTableAlias) \
    V(Alias) \
    V(OptAlias) \
    V(WithClause) \
    V(OptWithClause) \
    V(WithDescriptionList) \
    V(WithDescription) \
    V(JoinClause) \
    V(OptJoinType) \
    V(JoinCondition) \
    V(OptSemicolon) \
    V(IdentCommaList) \
    V(FloatLiteral) \
    V(Init) \
    V(StatementList) \
    V(CompExpr) \
    V(Unknown) \
    V(Empty)    \
    V(CmdPragma) \
    V(PragmaKey) \
    V(PragmaName) \
    V(PragmaValue) \
    V(SchemaName) \
    V(OptColumnArglist) \
	V(ColumnArglist) \
	V(ColumnArg) \
	V(OptOnConflict) \
	V(ResolveType) \
	V(OptAutoinc) \
	V(OptUnique) \
	V(IndexName) \
	V(TriggerDeclare) \
	V(OptTmp) \
	V(TriggerName) \
	V(OptTriggerTime) \
	V(TriggerEvent) \
	V(OptOfColumnList) \
	V(OptForEach) \
	V(OptWhen) \
	V(TriggerCmdList) \
	V(TriggerCmd) \
	V(ModuleName) \
	V(OptOverClause) \
	V(OptFilterClause) \
	V(WindowClause) \
	V(WindowDefnList) \
	V(WindowDefn) \
	V(Window) \
	V(OptBaseWindowName) \
	V(OptFrame) \
	V(RangeOrRows) \
	V(FrameBoundS) \
	V(FrameBoundE) \
	V(FrameBound) \
	V(OptFrameExclude) \
	V(FrameExclude) \
    V(InsertType)\
    V(Cmd) \
    V(CmdAttach) \
    V(CmdDetach) \
    V(CmdReindex) \
    V(CmdAnalyze) \
    V(SuperList) \
    V(TablePrefix) \
    V(OptOn) \
    V(OptUsing) \
    V(OptIndex) \
    V(CastExpr) \
    V(AlterStatement) \
    V(OptColumn) \
    V(CmdRelease) \
    V(SavepointName) \
    V(VacuumStatement) \
    V(OptSchemaName) \
    V(RollbackStatement) \
    V(OptTransaction) \
    V(OptToSavepoint) \
    V(BeginStatement) \
    V(CommitStatement) \
    V(JoinOp)   \
    V(JoinKw)   \
    V(TableRef) \
    V(UpsertClause) \
    V(IndexedColumnList) \
    V(IndexedColumn) \
    V(OptCollate) \
    V(AssignList) \
    V(OptNull) \
    V(AssignClause) \
    V(ColumnNameList) \
    V(CollationName) \
    V(OptUpsertClause)

#define SWITCHSTART \
    switch(sub_type_){ 

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
    IR *res = NULL; \


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
    IR * res;       \
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
