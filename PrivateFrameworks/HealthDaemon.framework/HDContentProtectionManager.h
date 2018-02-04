/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDContentProtectionManager : NSObject <HDDiagnosticObject> {
    double  _beganObservingTime;
    int  _contentProtectionState;
    double  _lastNotificationTime;
    double  _lastRecheckTime;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _observationQueue;
    NSMapTable * _observers;
    int  _shouldIgnoreUnlockedState;
    int  _unlockedSinceBoot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldIgnoreUnlockedState;
@property (readonly) Class superclass;

+ (bool)isProtectedDataAvailableWithState:(long long)arg1;

- (void).cxx_destruct;
- (long long)_keyBagLockState;
- (void)_observationQueue_adjustContentProtectionStateWithBlock:(id /* block */)arg1;
- (void)addContentProtectionObserver:(id)arg1 withQueue:(id)arg2;
- (void)dealloc;
- (bool)deviceUnlockedSinceBoot;
- (id)diagnosticDescription;
- (id)init;
- (id)initWithNotifications:(bool)arg1 initialState:(long long)arg2 unlockedSinceBoot:(bool)arg3;
- (bool)isProtectedDataAvailable;
- (long long)observedState;
- (void)recheckContentProtectionState;
- (void)removeContentProtectionObserver:(id)arg1;
- (void)setContentProtectionState:(long long)arg1;
- (void)setShouldIgnoreUnlockedState:(bool)arg1;
- (bool)shouldIgnoreUnlockedState;

@end