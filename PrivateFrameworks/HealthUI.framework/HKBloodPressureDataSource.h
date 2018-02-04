/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (void)_callCompletionWithSystolicResults:(id)arg1 diastolicResults:(id)arg2 statisticsOptions:(unsigned long long)arg3 blockStart:(id)arg4 blockEnd:(id)arg5 completion:(id /* block */)arg6;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (id /* block */)userInfoCreationBlock;

@end
