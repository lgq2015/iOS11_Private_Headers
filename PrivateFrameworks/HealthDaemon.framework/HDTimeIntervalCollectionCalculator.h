/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTimeIntervalCollectionCalculator : HDCollectionCalculator {
    NSMutableArray * _timePeriods;
}

- (void).cxx_destruct;
- (void)_shortenRangesConsideringPreferredSourceValue:(id)arg1 lesserRange:(id)arg2;
- (void)addTimePeriodWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)initForSingleStatistics;
- (double)totalDuration;

@end
