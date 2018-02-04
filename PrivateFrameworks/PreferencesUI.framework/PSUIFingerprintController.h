/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIFingerprintController : PSListController {
    id  _effectiveSettingsChangedNotificationObserver;
}

@property (nonatomic, retain) id effectiveSettingsChangedNotificationObserver;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (void)deleteFingerprint:(id)arg1;
- (id)effectiveSettingsChangedNotificationObserver;
- (id)fingerprintName;
- (id)passcodeController;
- (id)representedBiometricIdentity;
- (void)setEffectiveSettingsChangedNotificationObserver:(id)arg1;
- (void)setFingerprintName:(id)arg1;
- (bool)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
