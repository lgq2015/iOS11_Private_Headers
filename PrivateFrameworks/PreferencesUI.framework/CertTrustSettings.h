/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface CertTrustSettings : PSListController {
    id  _profileListChangedNotificationObserver;
}

@property (nonatomic, retain) id profileListChangedNotificationObserver;

- (void).cxx_destruct;
- (id)isFullTrustEnabled:(id)arg1;
- (id)profileListChangedNotificationObserver;
- (void)setFullTrustEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setProfileListChangedNotificationObserver:(id)arg1;
- (id)specifierForTrustSettings:(struct __SecCertificate { }*)arg1 isRestricted:(bool)arg2;
- (id)specifiers;
- (id)trustVersionString:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
