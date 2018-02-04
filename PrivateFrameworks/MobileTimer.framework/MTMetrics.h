/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTMetrics : NSObject {
    unsigned long long  _operationStartTime;
    <NAScheduler> * _serializer;
}

@property (nonatomic) unsigned long long operationStartTime;
@property (nonatomic, retain) <NAScheduler> *serializer;

+ (id)_sharedPublicMetrics;

- (void).cxx_destruct;
- (id)init;
- (void)logAlarmAdded:(bool)arg1;
- (void)logAlarmDeleted:(bool)arg1;
- (void)logAlarmDismissAction:(unsigned long long)arg1;
- (void)logAlarmSnoozeAction:(unsigned long long)arg1;
- (void)logAlarmUpdated:(bool)arg1;
- (void)logSyncingDisabled;
- (void)logSyncingEnabled;
- (void)logTimerAdded;
- (void)logTimerDeleted;
- (void)logTimerDismissed;
- (void)logTimerRepeated;
- (void)logTimerUpdated;
- (unsigned long long)operationStartTime;
- (id)serializer;
- (void)service:(id)arg1 didBeginSyncOperation:(id)arg2;
- (void)service:(id)arg1 didCompleteSyncOperation:(id)arg2;
- (void)service:(id)arg1 didFailSyncOperation:(id)arg2 withError:(id)arg3;
- (void)service:(id)arg1 didRequestSyncOperation:(id)arg2;
- (void)service:(id)arg1 didScheduleRetryOfSyncOperation:(id)arg2 forError:(id)arg3;
- (void)setOperationStartTime:(unsigned long long)arg1;
- (void)setSerializer:(id)arg1;

@end
