/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCollectionCalculator : NSObject {
    bool  _bucketSetup;
    HKStatisticsCollection * _collection;
    unsigned long long  _currentBucket;
    double  _currentEndDate;
    long long  _currentPeriodIndex;
    double  _currentStartDate;
    bool  _detailBySource;
    bool  _firstValueAdded;
    bool  _shouldComputeEndDate;
}

@property (nonatomic, readonly) unsigned long long currentBucket;
@property (nonatomic, readonly) double currentEndDate;
@property (nonatomic, readonly) double currentStartDate;
@property (nonatomic) bool detailBySource;
@property (nonatomic, readonly) bool firstValueAdded;

- (void).cxx_destruct;
- (void)_didAddFirstValue;
- (void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4;
- (bool)advanceBucket;
- (unsigned long long)currentBucket;
- (double)currentEndDate;
- (double)currentStartDate;
- (bool)detailBySource;
- (double)endDateForBucket:(unsigned long long)arg1;
- (bool)firstValueAdded;
- (bool)hasData;
- (id)initForSingleStatistics;
- (id)initWithStatisticsCollection:(id)arg1;
- (void)setDetailBySource:(bool)arg1;
- (void)setStartTime:(double)arg1 endTime:(double)arg2;
- (double)startDateForBucket:(unsigned long long)arg1;

@end
