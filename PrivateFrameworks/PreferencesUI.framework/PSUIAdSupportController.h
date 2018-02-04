/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAdSupportController : PSListController <ADPrivacyViewControllerDelegate> {
    ADPrivacyViewController * _adPrivacyController;
    id  _effectiveSettingsChangedObserver;
    UITableViewCell * _limitAdTrackingCell;
    long long  _optInStatus;
    UIView * _originalAccessoryView;
    id  _restrictionsChangedObserver;
}

@property (nonatomic, retain) ADPrivacyViewController *adPrivacyController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) id effectiveSettingsChangedObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITableViewCell *limitAdTrackingCell;
@property (nonatomic) long long optInStatus;
@property (nonatomic, retain) UIView *originalAccessoryView;
@property (nonatomic, retain) id restrictionsChangedObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adPrivacyController;
- (void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (bool)canChangeLimitAdTracking;
- (void)dealloc;
- (id)effectiveSettingsChangedObserver;
- (id)limitAdTrackingCell;
- (id)limitAdTrackingEnabled:(id)arg1;
- (long long)optInStatus;
- (id)originalAccessoryView;
- (void)refreshOptInStatus;
- (void)reloadLimitAdTrackingSpecifier;
- (void)resetAdID;
- (id)restrictionsChangedObserver;
- (void)setAdPrivacyController:(id)arg1;
- (void)setEffectiveSettingsChangedObserver:(id)arg1;
- (void)setLimitAdTrackingCell:(id)arg1;
- (void)setLimitAdTrackingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setOptInStatus:(long long)arg1;
- (void)setOriginalAccessoryView:(id)arg1;
- (void)setRestrictionsChangedObserver:(id)arg1;
- (id)specifiers;
- (void)userDidTapAdPreferences:(id)arg1;
- (void)userDidTapDoneButton:(id)arg1;
- (void)userDidTapLearnMoreLink:(id)arg1;
- (void)viewDidLoad;

@end
