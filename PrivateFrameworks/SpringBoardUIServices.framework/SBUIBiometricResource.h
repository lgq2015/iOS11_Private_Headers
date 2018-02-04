/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIBiometricResource : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver, SBUIBiometricResource, _SBUIBiometricKitInterfaceDelegate> {
    <SBUIBiometricAuthenticationPolicy> * _authPolicy;
    <SBUIBiometricAuthenticationPolicy> * _authenticationPolicy;
    _SBUIBiometricKitInterface * _biometricInterface;
    NSMutableOrderedSet * _fingerDetectAssertions;
    bool  _hasMesaHardware;
    bool  _hasPearlHardware;
    bool  _isAuthenticated;
    bool  _isFingerDetectionAllowed;
    bool  _isFingerDetectionEnabled;
    bool  _isFingerDetectionEnabledThroughHIDChannel;
    bool  _isMatchingAllowed;
    bool  _isMatchingEnabled;
    SBFMobileKeyBag * _keybag;
    unsigned long long  _lastEvent;
    NSMutableOrderedSet * _matchAssertions;
    NSHashTable * _observers;
    MCProfileConnection * _profileConnection;
    bool  _screenIsOn;
    bool  _shouldSendFingerOffNotification;
    SBFCredentialSet * _unlockCredentialSet;
    bool  _wasMatchingBeforeKeybagStateChangeOccurred;
}

@property (nonatomic, retain) <SBUIBiometricAuthenticationPolicy> *authenticationPolicy;
@property (getter=_biometricKitInterface, setter=_setBiometricKitInterface:, nonatomic, retain) _SBUIBiometricKitInterface *biometricKitInterface;
@property (nonatomic, readonly) unsigned long long biometricLockoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFingerDetectEnabled, nonatomic, readonly) bool fingerDetectEnabled;
@property (getter=isFingerOn, nonatomic, readonly) bool fingerOn;
@property (nonatomic, readonly) bool hasBiometricAuthenticationCapabilityEnabled;
@property (nonatomic, readonly) bool hasEnrolledIdentities;
@property (nonatomic, readonly) bool hasPearlSupport;
@property (readonly) unsigned long long hash;
@property (getter=_keybagInterface, setter=_setKeybagInterface:, nonatomic, retain) SBFMobileKeyBag *keybagInterface;
@property (getter=isMatchingAllowed, nonatomic, readonly) bool matchingAllowed;
@property (getter=isMatchingEnabled, nonatomic, readonly) bool matchingEnabled;
@property (getter=isPearlDetectEnabled, nonatomic, readonly) bool pearlDetectEnabled;
@property (getter=_profileConnection, setter=_setProfileConnection:, nonatomic, retain) MCProfileConnection *profileConnection;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFCredentialSet *unlockCredentialSet;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activateFingerDetectAssertion:(id)arg1;
- (void)_activateMatchAssertion:(id)arg1;
- (void)_addFingerDetectionWantedAssertion:(id)arg1;
- (void)_addMatchingAssertion:(id)arg1;
- (id)_biometricKitInterface;
- (void)_deactivateAssertion:(id)arg1;
- (void)_deviceWillWake;
- (void)_fingerDetectAllowedStateMayHaveChangedForReason:(id)arg1;
- (id)_keybagInterface;
- (void)_matchingAllowedStateMayHaveChangedForReason:(id)arg1;
- (void)_notifyObserversOfEvent:(unsigned long long)arg1;
- (id)_profileConnection;
- (void)_profileSettingsChanged:(id)arg1;
- (void)_reallySetAuthenticated:(bool)arg1 keybagState:(id)arg2;
- (void)_reevaluateFingerDetection;
- (void)_reevaluateMatching;
- (void)_removeFingerDetectionWantedAssertion:(id)arg1;
- (void)_removeMatchingAssertion:(id)arg1;
- (void)_setAuthenticated:(bool)arg1;
- (void)_setBiometricKitInterface:(id)arg1;
- (void)_setKeybagInterface:(id)arg1;
- (void)_setProfileConnection:(id)arg1;
- (void)_updateHandlersForEvent:(unsigned long long)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)authenticationPolicy;
- (void)biometricKitInterface:(id)arg1 enrolledIdentitiesDidChange:(bool)arg2;
- (void)biometricKitInterface:(id)arg1 handleEvent:(unsigned long long)arg2;
- (unsigned long long)biometricLockoutState;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasBiometricAuthenticationCapabilityEnabled;
- (bool)hasEnrolledIdentities;
- (bool)hasPearlSupport;
- (id)init;
- (id)initWithBiometricKitInterface:(id)arg1;
- (bool)isFingerDetectEnabled;
- (bool)isFingerOn;
- (bool)isMatchingAllowed;
- (bool)isMatchingEnabled;
- (bool)isPearlDetectEnabled;
- (void)keybag:(id)arg1 extendedStateDidChange:(id)arg2;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOff;
- (void)noteScreenWillTurnOn;
- (void)refreshMatchMode;
- (void)removeObserver:(id)arg1;
- (void)restartMatchingIfNeededForAssertion:(id)arg1;
- (void)setAuthenticationPolicy:(id)arg1;
- (void)setUnlockCredentialSet:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unlockCredentialSet;

@end
