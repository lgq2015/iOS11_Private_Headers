/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSleepMetrics : NSObject {
    <MTAlarmStorage> * _alarmStorage;
    HKHealthStore * _healthStore;
    <NAScheduler> * _serializer;
}

@property (nonatomic, readonly) <MTAlarmStorage> *alarmStorage;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, retain) <NAScheduler> *serializer;

+ (id)_sharedPublicMetrics;
+ (id)inBedSampleWithInterval:(id)arg1 metadata:(id)arg2;
+ (id)sleepDataForPastWeek;
+ (id)sleepDataForRange:(id)arg1;
+ (id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2;

- (void).cxx_destruct;
- (bool)_queue_hasUnprocessedIntervals;
- (void)_queue_setUnprocessedInBedIntervals:(id)arg1;
- (id)_queue_unprocessedInBedIntervals;
- (void)_saveTimeInBedSampleToHealthStore;
- (id)alarmStorage;
- (void)deviceFirstUnlocked;
- (id)healthStore;
- (id)initWithAlarmStorage:(id)arg1;
- (void)logUserWentToBed:(id)arg1;
- (void)logUserWokeUp:(id)arg1;
- (void)saveTimeInBed;
- (id)serializer;
- (void)setSerializer:(id)arg1;
- (id)sleepDataForPastWeek;
- (id)sleepDataForRange:(id)arg1;
- (id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2;

@end
