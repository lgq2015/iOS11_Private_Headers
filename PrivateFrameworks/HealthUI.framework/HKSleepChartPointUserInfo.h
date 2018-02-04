/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData> {
    NSDate * _date;
    HKSleepDay * _sleepDay;
    NSArray * _titles;
    NSArray * _values;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, retain) HKSleepDay *sleepDay;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *titles;
@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (id)date;
- (long long)numberOfColumns;
- (void)setDate:(id)arg1;
- (void)setSleepDay:(id)arg1;
- (void)setTitles:(id)arg1;
- (void)setValues:(id)arg1;
- (id)sleepDay;
- (id)titles;
- (id)values;

@end
