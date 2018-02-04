/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSleepReportBuilder : NSObject {
    NSCalendar * _calendar;
    NSMutableDictionary * _inBedSamplesBySource;
    NSDateInterval * _resultInterval;
}

- (void).cxx_destruct;
- (id)_categorySampleBufferForSource:(id)arg1;
- (void)addSleepSamples:(id)arg1;
- (id)calculateResult;
- (id)initWithResultInterval:(id)arg1 calendar:(id)arg2;

@end
