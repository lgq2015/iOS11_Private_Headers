/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFDeviceLockOutController : NSObject <BSDescriptionProviding, SBFLockOutStatusProvider, SBFPrivateAuthenticationObserver, SBFThermalConditionObserver> {
    SBFUserAuthenticationController * _authenticationController;
    bool  _lockedOutCached;
    <SBFThermalBlockProvider> * _thermalProvider;
}

@property (getter=_authenticationController, setter=_setAuthenticationController:, nonatomic, retain) SBFUserAuthenticationController *authenticationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isLockedOutCached, setter=_setLockedOutCached:, nonatomic) bool lockedOutCached;
@property (readonly) Class superclass;
@property (getter=_thermalProvider, setter=_setThermalProvider:, nonatomic, retain) <SBFThermalBlockProvider> *thermalProvider;

- (void).cxx_destruct;
- (id)_authenticationController;
- (bool)_isLockedOutCached;
- (void)_noteLockedOutReasonsMayHaveChanged;
- (void)_noteLockedOutStateMayHaveChanged:(bool)arg1;
- (void)_setAuthenticationController:(id)arg1;
- (void)_setLockedOutCached:(bool)arg1;
- (void)_setThermalProvider:(id)arg1;
- (id)_thermalProvider;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)deviceBlockStatus;
- (id)initWithThermalController:(id)arg1 authenticationController:(id)arg2;
- (bool)isBlocked;
- (bool)isLockedOut;
- (bool)isPermanentlyBlocked;
- (bool)isTemporarilyBlocked;
- (bool)isThermallyBlocked;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)temporaryBlockStatusChanged;
- (void)thermalBlockStatusChanged:(id)arg1;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;

@end
