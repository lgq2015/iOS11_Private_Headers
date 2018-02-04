/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface BirthdayCalendarManager : NSObject {
    bool  _abSyncActive;
    void * _addressBook;
    bool  _calSyncActive;
    unsigned long long  _failedAlarmUpdateAttempts;
    unsigned long long  _failedPopulateAttempts;
    bool  _isAlarmUpdatePending;
    bool  _isPopulatePending;
    NSOperationQueue * _queue;
    bool  _running;
    NSTimer * _syncTimer;
    NSTimer * _throttleTimer;
    bool  _wantsUpdatedWhileThrottled;
}

+ (void)setStateInPrefs:(int)arg1 withLastABSequence:(int)arg2;

- (void).cxx_destruct;
- (void)_killSyncTimer;
- (void)_killThrottleTimer;
- (void)_startThrottleTimer;
- (void)_throttleTimerFired:(id)arg1;
- (void)_updateIfNeeded;
- (void)abSyncDidEnd;
- (void)abSyncDidStart;
- (void)calSyncDidEnd;
- (void)calSyncDidStart;
- (void)dealloc;
- (void)killSyncTimer;
- (void)maybeUpdateAfterSyncEnd;
- (void)populate;
- (void)rebuild;
- (void)resetSyncTimer;
- (void)start;
- (void)stop;
- (void)syncTimerFired:(id)arg1;
- (void)updateAlarms;

@end
