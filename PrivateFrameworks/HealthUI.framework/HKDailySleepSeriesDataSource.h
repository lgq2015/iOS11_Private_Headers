/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDailySleepSeriesDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_chartPointFromQueryResult:(id)arg1;
- (id)_dailyChartPointsFromQueryResults:(id)arg1;
- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(id /* block */)arg5;
- (id)_monthlyChartPointsFromQueryResults:(id)arg1 intervalComponents:(id)arg2 startDate:(id)arg3;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (id /* block */)userInfoCreationBlock;

@end
