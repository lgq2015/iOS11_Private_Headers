/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUITouchIDPasscodeController : PSUIBiometricController <BiometricKitDelegate, UIPopoverControllerDelegate> {
    BiometricKit * _highlightMatcher;
    NSObject<OS_dispatch_queue> * _highlightQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BiometricKit *highlightMatcher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *highlightQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelMatching;
- (id)_fingerprintSpecifierForIdentity:(id)arg1;
- (void)_setupMatching;
- (void)addEnrollment:(id)arg1;
- (void)backgrounded:(id)arg1;
- (id)biometricLogo;
- (void)dealloc;
- (void)enrollBiometric;
- (void)enrollResult:(int)arg1 identity:(id)arg2;
- (void)enrollmentControllerDidDismiss;
- (id)fingerprintSpecifiers;
- (id)headerForUseBiometricSection;
- (void)highlightFingerprintSpecifier:(id)arg1;
- (id)highlightMatcher;
- (id)highlightQueue;
- (id)init;
- (void)matchResult:(id)arg1;
- (void)setHighlightMatcher:(id)arg1;
- (void)setHighlightQueue:(id)arg1;
- (id)specifiers;
- (void)statusMessage:(unsigned int)arg1;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1;
- (void)updateAddFingerprintSpecifier;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
