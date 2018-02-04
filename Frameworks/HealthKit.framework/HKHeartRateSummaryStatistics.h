/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRateSummaryStatistics : NSObject <NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSDate * _earliestReadingDate;
    NSArray * _highlightedReadings;
    NSDate * _latestReadingDate;
    long long  _numberOfBuckets;
    long long  _numberOfReadings;
    NSUUID * _sessionUUID;
    NSMutableArray * _sortedBuckets;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (setter=_setHighlightedReadings:, nonatomic, retain) NSArray *highlightedReadings;
@property (nonatomic, readonly) long long numberOfBuckets;
@property (nonatomic, readonly) long long numberOfReadings;
@property (nonatomic, readonly) NSDateInterval *readingsDateInterval;
@property (nonatomic, readonly) NSUUID *sessionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bucketAtIndex:(long long)arg1 createdIfNeeded:(bool)arg2;
- (id)_bucketsDescription;
- (id)_dictionaryRepresentation;
- (void)_setHighlightedReadings:(id)arg1;
- (void)addHeartRateInBeatsPerMinute:(double)arg1 forDate:(id)arg2;
- (id)bucketAtIndex:(long long)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBucketsWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)highlightedReadings;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 sessionUUID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)numberOfBuckets;
- (long long)numberOfReadings;
- (id)readingsDateInterval;
- (id)sessionUUID;

@end
