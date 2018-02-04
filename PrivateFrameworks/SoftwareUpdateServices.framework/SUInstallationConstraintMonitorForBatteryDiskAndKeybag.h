/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUInstallationConstraintMonitorForBatteryDiskAndKeybag : SUInstallationConstraintMonitorBase <SUKeybagInterfaceObserver> {
    bool  _queue_batterySatisfied;
    unsigned long long  _queue_deltaSpaceNeeded;
    bool  _queue_diskSatisfied;
    SUKeybagInterface * _queue_keybag;
    bool  _queue_keybagSatisfied;
    bool  _queue_passcodeSatisfied;
    BSTimer * _queue_timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long deltaSpaceNeeded;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_queue_evaluateBattery;
- (bool)_queue_evaluateDisk;
- (bool)_queue_evaluateKeybag;
- (bool)_queue_evaluatePasscodeLocked;
- (void)_queue_pollSatisfied;
- (void)dealloc;
- (unsigned long long)deltaSpaceNeeded;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 pollDuration:(double)arg3 keybag:(id)arg4;
- (void)keybagInterface:(id)arg1 hasPasscodeSetDidChange:(bool)arg2;
- (void)keybagInterface:(id)arg1 passcodeLockedStateDidChange:(bool)arg2;
- (void)refreshConstraints;
- (unsigned long long)unsatisfiedConstraints;

@end
