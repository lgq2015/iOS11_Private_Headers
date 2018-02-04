/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/FindMyDeviceUI
 */

@interface FMDUIFMIPiCloudSettingsViewController : PSListController {
    ACAccount * _account;
    bool  _activityInProgress;
    bool  _firstTimeSetup;
    PSSpecifier * _fmipSpecifier;
    UIProgressHUD * _hud;
    RemoteUIController * _ruiController;
    PSSpecifier * _sendLastLocationSpecifier;
    bool  _togglingFMIPSwitch;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool activityInProgress;
@property (nonatomic) bool firstTimeSetup;
@property (nonatomic, retain) PSSpecifier *fmipSpecifier;
@property (nonatomic, retain) UIProgressHUD *hud;
@property (nonatomic, retain) RemoteUIController *ruiController;
@property (nonatomic, retain) PSSpecifier *sendLastLocationSpecifier;
@property (nonatomic) bool togglingFMIPSwitch;

- (void).cxx_destruct;
- (id)_clientInfoHeader;
- (void)_disableFMIP;
- (void)_enableFMIP;
- (void)_fmipSettingsCacheDidUpdate:(id)arg1;
- (id)_fmipSwitchOnForSpecifier:(id)arg1;
- (id)_groupSpecifierForFMIP;
- (id)_groupSpecifierForSendLastLocation;
- (void)_reloadSpecifiersOnMainQueue;
- (id)_sendLastLocationSwitchOnForSpecifier:(id)arg1;
- (void)_setFMIPSwitchOn:(id)arg1 forSpecifier:(id)arg2;
- (void)_setSendLastLocationSwitchOn:(id)arg1 forSpecifier:(id)arg2;
- (void)_showFMIPPrivacyPage;
- (id)_specifierForFMIP;
- (id)_specifierForSendLastLocation;
- (id)_userAgentHeader;
- (id)account;
- (bool)activityInProgress;
- (bool)firstTimeSetup;
- (id)fmipSpecifier;
- (void)hideActivityInProgressUI;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (id)hud;
- (bool)isShowingActivityInProgressUI;
- (id)ruiController;
- (id)sendLastLocationSpecifier;
- (void)setAccount:(id)arg1;
- (void)setActivityInProgress:(bool)arg1;
- (void)setFirstTimeSetup:(bool)arg1;
- (void)setFmipSpecifier:(id)arg1;
- (void)setHud:(id)arg1;
- (void)setRuiController:(id)arg1;
- (void)setSendLastLocationSpecifier:(id)arg1;
- (void)setTogglingFMIPSwitch:(bool)arg1;
- (void)showActivityInProgressUIWithMessage:(id)arg1;
- (id)specifiers;
- (bool)togglingFMIPSwitch;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
