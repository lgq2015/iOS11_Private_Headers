/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStackedValueAxis : TSCHChartValueAxis

- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (double)interceptForAxis:(id)arg1;
- (id)p_orthogonalAxisForSeries:(id)arg1;
- (bool)supportsReferenceLines;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (double*)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 min:(double)arg3 max:(double)arg4;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;

@end
