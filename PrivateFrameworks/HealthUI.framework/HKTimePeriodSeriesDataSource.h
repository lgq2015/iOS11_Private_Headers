/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource {
    NSPredicate * _queryPredicate;
    HKSampleType * _sampleType;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, retain) NSPredicate *queryPredicate;
@property (nonatomic, retain) HKSampleType *sampleType;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_calculateTotalDurationFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 interval:(id)arg4 intervalOut:(id*)arg5 intervelCountsOut:(id*)arg6;
- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(id /* block */)arg5;
- (id /* block */)_startOfDayTransform;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)queryPredicate;
- (id)sampleType;
- (void)setQueryPredicate:(id)arg1;
- (void)setSampleType:(id)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (id /* block */)userInfoCreationBlock;

@end
