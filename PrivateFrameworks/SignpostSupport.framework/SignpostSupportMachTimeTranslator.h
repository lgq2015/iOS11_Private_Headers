/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportMachTimeTranslator : NSObject {
    bool  _isMonitoringSleepWake;
    unsigned long long  _maxEntries;
    NSMutableArray * _startMachAbsoluteTimes;
    NSMutableArray * _startMachContinuousTimes;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
    NSMutableArray * _translationRanges;
}

@property (nonatomic, readonly) bool containsContinuousTimeJumps;
@property bool isMonitoringSleepWake;
@property (nonatomic) unsigned long long maxEntries;
@property (nonatomic, readonly) NSMutableArray *startMachAbsoluteTimes;
@property (nonatomic, readonly) NSMutableArray *startMachContinuousTimes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic, readonly) NSMutableArray *translationRanges;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

- (void).cxx_destruct;
- (void)addTimestampPairWithMachAbsoluteTime:(unsigned long long)arg1 machContinuousTime:(unsigned long long)arg2;
- (bool)containsContinuousTimeJumps;
- (id)dataRepresentation;
- (id)init;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMonitoringSleepWake;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1;
- (unsigned long long)maxEntries;
- (id)serializableDictionaryRepresentation;
- (void)setIsMonitoringSleepWake:(bool)arg1;
- (void)setMaxEntries:(unsigned long long)arg1;
- (void)setSynchronizationQueue:(id)arg1;
- (id)startMachAbsoluteTimes;
- (id)startMachContinuousTimes;
- (id)synchronizationQueue;
- (id)translationRanges;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

+ (void)_addListeningTimeTranslator:(id)arg1;
+ (id)_globalNotificationDispatchQueue;
+ (void)_processPowerNotificationOfType:(unsigned int)arg1 withNotificationID:(long long)arg2;
+ (void)_removeListeningTimeTranslator:(id)arg1;
+ (void)_snapshotMachTimesForAllListeners;
+ (id)_timeTranslationLog;

- (void)_grabMachTimesSnapshot;
- (id)dataRepresentationDuringMonitoring;
- (id)initWithMaxEntries:(unsigned long long)arg1;
- (void)startMonitoringSleepWake;
- (void)stopMonitoringSleepWake;

@end
