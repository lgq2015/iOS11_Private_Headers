/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKHeartRateHistogramQueryServerConfiguration : HKQueryServerConfiguration <NSSecureCoding> {
    NSDate * _anchorDate;
    long long  _contextStyle;
    NSDate * _endDate;
    HKQuantity * _histogramAnchor;
    HKQuantity * _histogramBucketSize;
    NSDateComponents * _intervalComponents;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *anchorDate;
@property (nonatomic) long long contextStyle;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) HKQuantity *histogramAnchor;
@property (nonatomic, retain) HKQuantity *histogramBucketSize;
@property (nonatomic, retain) NSDateComponents *intervalComponents;
@property (nonatomic, retain) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorDate;
- (long long)contextStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)histogramAnchor;
- (id)histogramBucketSize;
- (id)initWithCoder:(id)arg1;
- (id)intervalComponents;
- (void)setAnchorDate:(id)arg1;
- (void)setContextStyle:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setHistogramAnchor:(id)arg1;
- (void)setHistogramBucketSize:(id)arg1;
- (void)setIntervalComponents:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
