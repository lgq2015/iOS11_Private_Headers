/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUIAuthenticationInterface : NSObject <SUKeybagInterfaceObserver> {
    NSUserDefaults * _defaults;
    bool  _isController;
    bool  _isPasscodeLocked;
    SUKeybagInterface * _keybag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBlocked;
@property (nonatomic) bool isController;
@property (getter=_numberOfFailedAuthenticationAttempts, setter=_setNumberOfFailedAuthenticationAttempts:, nonatomic) unsigned long long numberOfFailedAuthenticationAttempts;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_currentFailedAttemptsCount;
- (void)_incrementFailedAttemptsCount;
- (unsigned long long)_numberOfFailedAuthenticationAttempts;
- (void)_setNumberOfFailedAuthenticationAttempts:(unsigned long long)arg1;
- (void)_setPasscodeLocked:(bool)arg1;
- (bool)attemptAuthentication:(id)arg1 outBlocked:(bool*)arg2;
- (id)init;
- (id)initWithKeybag:(id)arg1;
- (bool)isBlocked;
- (bool)isController;
- (void)keybagInterface:(id)arg1 passcodeLockedStateDidChange:(bool)arg2;
- (void)resetAttempts;
- (void)setIsController:(bool)arg1;

@end
