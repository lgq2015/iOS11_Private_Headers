/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHeartRateHistogramDataSource : HKHealthQueryChartCacheDataSource {
    long long  _heartRateContextStyle;
    NSDate * _specificEndDate;
    NSDate * _specificStartDate;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, readonly) long long heartRateContextStyle;
@property (nonatomic, readonly) NSDate *specificEndDate;
@property (nonatomic, readonly) NSDate *specificStartDate;
@property (nonatomic, readonly) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_dataBlockFromHistograms:(id)arg1;
- (id)_quickDate:(id)arg1;
- (long long)heartRateContextStyle;
- (id)initWithHealthStore:(id)arg1 heartRateContextStyle:(long long)arg2 baseDisplayType:(id)arg3 specificStartDate:(id)arg4 specificEndDate:(id)arg5 userInfoCreationBlock:(id /* block */)arg6;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)specificEndDate;
- (id)specificStartDate;
- (id /* block */)userInfoCreationBlock;

@end
