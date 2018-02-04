/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPowerSavingModeManager : NSObject {
    bool  _inActiveSession;
    bool  _powerSavingModeEnabled;
    NSObject<OS_dispatch_queue> * _queue;
    RadiosPreferences * _radioPrefs;
}

- (void).cxx_destruct;
- (void)_powerSavingModeDidChange;
- (void)_queue_disablePowerSavingIfNeeded;
- (void)_queue_enablePowerSavingIfNeeded;
- (void)_queue_powerSavingModeDidChange;
- (void)_startObservingPowerSavingModeSetting;
- (void)_stopObservingPowerSavingModeSetting;
- (void)dealloc;
- (id)init;
- (void)workoutPausedOrEnded;
- (void)workoutStartedOrResumed;

@end
