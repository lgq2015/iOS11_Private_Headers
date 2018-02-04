/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepAnalysisDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id /* block */)_mappingFunctionForConsistencyChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForDurationChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForEfficiencyChartWithContext:(id)arg1;
- (id /* block */)mappingFunctionForContext:(id)arg1;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (id /* block */)userInfoCreationBlock;

@end
