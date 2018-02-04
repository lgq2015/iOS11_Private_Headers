/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKStatistics : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity * _averageQuantity;
    NSDictionary * _averageQuantityBySource;
    unsigned long long  _dataCount;
    NSDictionary * _dataCountBySource;
    NSDate * _endDate;
    HKQuantity * _maximumQuantity;
    NSDictionary * _maximumQuantityBySource;
    HKQuantity * _minimumQuantity;
    NSDictionary * _minimumQuantityBySource;
    HKQuantityType * _quantityType;
    NSArray * _sources;
    NSDate * _startDate;
    HKQuantity * _sumQuantity;
    NSDictionary * _sumQuantityBySource;
    NSDictionary * _sumQuantityBySourceID;
}

@property (nonatomic, retain) HKQuantity *averageQuantity;
@property (nonatomic, retain) NSDictionary *averageQuantityBySource;
@property (nonatomic) unsigned long long dataCount;
@property (nonatomic, retain) NSDictionary *dataCountBySource;
@property (readonly) NSDate *endDate;
@property (nonatomic, retain) HKQuantity *maximumQuantity;
@property (nonatomic, retain) NSDictionary *maximumQuantityBySource;
@property (nonatomic, retain) HKQuantity *minimumQuantity;
@property (nonatomic, retain) NSDictionary *minimumQuantityBySource;
@property (readonly) HKQuantityType *quantityType;
@property (readonly) NSArray *sources;
@property (readonly) NSDate *startDate;
@property (nonatomic, retain) HKQuantity *sumQuantity;
@property (nonatomic, retain) NSDictionary *sumQuantityBySource;
@property (nonatomic, retain) NSDictionary *sumQuantityBySourceID;

+ (void)_validateOptions:(unsigned long long)arg1 forDataType:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initAsCopyOf:(id)arg1;
- (id)_initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_setEndDate:(id)arg1;
- (void)_setSources:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (id)averageQuantity;
- (id)averageQuantityBySource;
- (id)averageQuantityForSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataCount;
- (id)dataCountBySource;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)maximumQuantity;
- (id)maximumQuantityBySource;
- (id)maximumQuantityForSource:(id)arg1;
- (id)minimumQuantity;
- (id)minimumQuantityBySource;
- (id)minimumQuantityForSource:(id)arg1;
- (id)quantityType;
- (void)setAverageQuantity:(id)arg1;
- (void)setAverageQuantityBySource:(id)arg1;
- (void)setDataCount:(unsigned long long)arg1;
- (void)setDataCountBySource:(id)arg1;
- (void)setMaximumQuantity:(id)arg1;
- (void)setMaximumQuantityBySource:(id)arg1;
- (void)setMinimumQuantity:(id)arg1;
- (void)setMinimumQuantityBySource:(id)arg1;
- (void)setSumQuantity:(id)arg1;
- (void)setSumQuantityBySource:(id)arg1;
- (void)setSumQuantityBySourceID:(id)arg1;
- (id)sources;
- (id)startDate;
- (id)sumQuantity;
- (id)sumQuantityBySource;
- (id)sumQuantityBySourceID;
- (id)sumQuantityForSource:(id)arg1;

@end
