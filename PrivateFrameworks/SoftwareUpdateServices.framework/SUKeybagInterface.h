/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUKeybagInterface : NSObject {
    NSObject<OS_dispatch_queue> * _observerCalloutQueue;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasPasscodeSet;
    bool  _queue_isPasscodeLocked;
    NSHashTable * _queue_observers;
    int  _stateChangedNotifyToken;
}

@property (nonatomic, readonly) bool hasPasscodeSet;
@property (nonatomic, readonly) bool isPasscodeLocked;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

+ (id)sharedInstance;

- (id)_init;
- (int)_queue_fetchKeybagState;
- (bool)_queue_hasPasscodeSetFromLockState:(int)arg1;
- (bool)_queue_isPasscodeLockedFromLockState:(int)arg1;
- (void)_queue_refreshState;
- (void)_queue_setHasPasscodeSet:(bool)arg1;
- (void)_queue_setIsPasscodeLocked:(bool)arg1;
- (void)addObserver:(id)arg1;
- (bool)createInstallationKeybagForDescriptor:(id)arg1 withSecret:(id)arg2 forUnattendedInstall:(bool)arg3;
- (id)createPreventLockAssertionWithDuration:(double)arg1;
- (void)dealloc;
- (bool)disableKeybagStash;
- (bool)hasPasscodeSet;
- (id)init;
- (int)installationKeybagStateForDescriptor:(id)arg1;
- (bool)isPasscodeLocked;
- (bool)persistKeybagStash;
- (void)removeObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI

- (bool)authenticate:(id)arg1;
- (double)backOffTime;
- (void)lockDevice;

@end
