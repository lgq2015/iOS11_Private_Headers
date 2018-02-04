/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartLogAxis : TSCHChartValueAxis

- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (double)interceptForAxis:(id)arg1;
- (id)p_orthogonalAxis;
- (bool)shouldAnalyzeAxisValue:(double)arg1;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (id)userMax;
- (id)userMin;
- (double)validateUserMaxForDouble:(double)arg1;
- (double)validateUserMinForDouble:(double)arg1;

@end
