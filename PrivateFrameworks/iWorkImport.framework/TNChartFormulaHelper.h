/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaHelper : NSObject {
    TNChartMediator * mChartMediator;
    bool  mCreateSpanningReferences;
}

@property (nonatomic, readonly) TNChartMediator *chartMediator;
@property (nonatomic) bool createSpanningReferences;

- (id)chartFormulaByAppendingRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1 toFormula:(id)arg2 andLocale:(id)arg3;
- (id)chartMediator;
- (bool)createSpanningReferences;
- (void)dealloc;
- (id)formulaStorageForChartGridDirection:(int)arg1;
- (id)initWithMediator:(id)arg1;
- (id)initWithMediator:(id)arg1 createSpanningReferences:(bool)arg2;
- (void)p_addFormulasOfType:(unsigned long long)arg1 rangeList:(id)arg2 byRow:(bool)arg3 toFormulaMap:(id)arg4;
- (void)p_addSeriesForRangeList:(id)arg1 rowLabelRangeList:(id)arg2 columnLabelRangeList:(id)arg3 rowLabels:(id)arg4 columnLabels:(id)arg5 toFormulaMap:(id)arg6;
- (void)p_addSeriesForRangeList:(id)arg1 rowLabelRangeList:(id)arg2 columnLabelRangeList:(id)arg3 toFormulaMap:(id)arg4;
- (void)p_addSeriesForTableModel:(id)arg1 seriesRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg2 rowLabelRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg3 columnLabelRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg4 toFormulaMap:(id)arg5;
- (void)p_addStringFormulasOfType:(unsigned long long)arg1 rangeList:(id)arg2 byRow:(bool)arg3 labels:(id)arg4 toFormulaMap:(id)arg5;
- (bool)p_extendExistingSeriesWithSeriesRangeList:(id*)arg1 rowLabelRangeList:(id*)arg2 columnLabelRangeList:(id*)arg3 toFormulaMap:(id)arg4 withLocale:(id)arg5;
- (bool)p_hasOneValuePerSeries;
- (id)p_labelsOfType:(unsigned long long)arg1 formulaMap:(id)arg2;
- (id)p_rangeListsForFormula:(id)arg1 argumentIndexes:(id)arg2 byRow:(bool)arg3 resolveSpanning:(bool)arg4;
- (void)p_rangeListsForFormula:(id)arg1 argumentIndexes:(id)arg2 byRow:(bool)arg3 resolveSpanning:(bool)arg4 orderedListOfOwnerIDs:(id)arg5 ownerIDToRangeList:(id)arg6;
- (id)p_rangeListsForFormulas:(id)arg1 byRow:(bool)arg2 resolveSpanning:(bool)arg3;
- (void)setCreateSpanningReferences:(bool)arg1;

@end
