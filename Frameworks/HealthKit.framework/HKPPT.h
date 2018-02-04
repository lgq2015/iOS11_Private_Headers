/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKPPT : NSObject {
    <HKPPTInterface> * _pptInterface;
    NSObject<OS_dispatch_queue> * _pptQueue;
}

- (void).cxx_destruct;
- (id)_createStepSampleWithStepCount:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_dateComponentsFromString:(id)arg1;
- (void)_failedTest:(id)arg1;
- (void)_failedTest:(id)arg1 withResults:(id)arg2;
- (void)_finishedTest:(id)arg1;
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)_generateStepSamples:(long long)arg1;
- (void)_invalidParams:(id)arg1 forTest:(id)arg2;
- (unsigned long long)_randomNumberBetweenMin:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (void)_startedTest:(id)arg1;
- (id)init;
- (id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2;
- (bool)performDateRangeQueryPPTTest:(id)arg1;
- (bool)performJournalMergePPTTest:(id)arg1 healthDirectory:(id)arg2;
- (bool)performLatestSummaryQueryPPTTest:(id)arg1 date:(id)arg2;
- (bool)performPPTTest:(id)arg1 anchoredQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withLimit:(long long)arg5 anchor:(long long)arg6;
- (bool)performPPTTest:(id)arg1 collectionQueryForType:(id)arg2 anchorDate:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 dateIntervalsString:(id)arg6 separateBySource:(bool)arg7 average:(bool)arg8 minimum:(bool)arg9 maximum:(bool)arg10 sum:(bool)arg11;
- (bool)performPPTTest:(id)arg1 enumerateWorkoutRouteWithDatumCount:(long long)arg2;
- (bool)performPPTTest:(id)arg1 insertWorkoutRouteWithDatumCount:(long long)arg2 batched:(bool)arg3;
- (bool)performPPTTest:(id)arg1 preflightHealthDirectory:(id)arg2 sampleTypes:(id)arg3 killHealthd:(bool)arg4;
- (bool)performPPTTest:(id)arg1 sampleQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withLimit:(long long)arg5;
- (bool)performPPTTest:(id)arg1 saveDataWithCount:(long long)arg2;
- (bool)performPPTTest:(id)arg1 statisticsQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 separateBySource:(bool)arg5 average:(bool)arg6 minimum:(bool)arg7 maximum:(bool)arg8 sum:(bool)arg9;
- (bool)performSyntheticJournalMergePPTTest:(id)arg1 simulatedDuration:(double)arg2;
- (bool)runTest:(id)arg1 options:(id)arg2;

@end
