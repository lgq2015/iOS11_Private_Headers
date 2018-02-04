/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKQuantityTypeDataSourceValue : NSObject {
    HKQuantity * _averageQuantity;
    NSDate * _endDate;
    HKQuantity * _maxQuantity;
    HKQuantity * _minQuantity;
    HKQuantityType * _quantityType;
    long long  _recordCount;
    NSDate * _startDate;
    NSDateComponents * _statisticsInterval;
    HKQuantity * _sumQuantity;
}

@property (nonatomic, retain) HKQuantity *averageQuantity;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) HKQuantity *maxQuantity;
@property (nonatomic, retain) HKQuantity *minQuantity;
@property (nonatomic, retain) HKQuantityType *quantityType;
@property (nonatomic) long long recordCount;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDateComponents *statisticsInterval;
@property (nonatomic, retain) HKQuantity *sumQuantity;

- (void).cxx_destruct;
- (id)averageQuantity;
- (id)endDate;
- (id)maxQuantity;
- (id)minQuantity;
- (id)quantityType;
- (long long)recordCount;
- (void)setAverageQuantity:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setMaxQuantity:(id)arg1;
- (void)setMinQuantity:(id)arg1;
- (void)setQuantityType:(id)arg1;
- (void)setRecordCount:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStatisticsInterval:(id)arg1;
- (void)setSumQuantity:(id)arg1;
- (id)startDate;
- (id)statisticsInterval;
- (id)sumQuantity;

@end
