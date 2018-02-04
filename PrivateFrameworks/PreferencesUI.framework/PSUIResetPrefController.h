/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIResetPrefController : PSListController <BYClientDaemonCloudSyncProtocol, MBManagerDelegate, SBSHardwareButtonEventConsuming> {
    MBManager * _backupManager;
    double  _cloudBackupProgress;
    UIAlertController * _cloudProgressAlertController;
    UILabel * _cloudProgressAlertLabel;
    UIProgressView * _cloudProgressView;
    BYBuddyDaemonCloudSyncClient * _cloudSyncClient;
    double  _cloudSyncProgress;
    int  _codesEntered;
    int  _codesNeeded;
    PSSpecifier * _currentSpecifier;
    bool  _didFailBackup;
    bool  _didFailSync;
    NSDateComponentsFormatter * _durationFormatter;
    <BSInvalidatable> * _homeButtonEventConsumerToken;
    bool  _isOnPower;
    PSSpecifier * _locationSpecifier;
    long long  _locationSpecifierIndex;
    NSString * _passcode;
    NSNumberFormatter * _percentFormatter;
    struct __CFRunLoopSource { } * _powerSourcesChangedRunLoopSource;
    bool  _requirePasscode;
    bool  _requireRestrictionsCode;
    bool  _returningFromPINSheetWithSuccess;
    bool  _shouldEraseDataPlans;
    bool  _shouldEraseWithFMiP;
    bool  _shouldSkipCloudStatusCheck;
    bool  _shouldTryEraseAgainWithFMiP;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_disablePhoneLocatorAndErase;
- (void)_eraseSettingsAndContent;
- (bool)_networkConnectivityAvailable;
- (void)_resetWithMode:(int)arg1;
- (void)_showStockholmLocallyStoredValueOfflineWarningIfNeeded:(id /* block */)arg1;
- (void)changeAlertMessageIfNeeded:(bool)arg1;
- (void)cloudProcessesDidFail;
- (void)cloudProcessesDidSucceed;
- (void)confirmEraseCellularSettings;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)consumeAnyPressEventForButtonKind:(long long)arg1;
- (void)dealloc;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didAppear;
- (void)eraseCellularSettings;
- (void)eraseSettings:(id)arg1;
- (void)eraseSettingsAndContent:(id)arg1;
- (bool)hasWifi;
- (id)init;
- (void)locatorStateDidChange:(id)arg1;
- (void)manager:(id)arg1 didFailBackupWithError:(id)arg2;
- (void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;
- (void)managerDidFinishBackup:(id)arg1;
- (void)popupViewDidDisappear;
- (void)presentAlertForCloudStatus:(unsigned long long)arg1;
- (void)presentBackupAlertWithTitle:(id)arg1 message:(id)arg2 finishButtonTitle:(id)arg3 shouldSync:(bool)arg4;
- (void)presentSyncAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)presentSyncNeedsWiFiAlert;
- (void)profileNotification:(id)arg1;
- (void)reprovisionAccount;
- (void)resetAKey;
- (void)resetIconPositions:(id)arg1;
- (void)resetKeyboardDictionary:(id)arg1;
- (void)resetNetworkSettings:(id)arg1;
- (void)resetPrivacyWarnings:(id)arg1;
- (id)specifiers;
- (void)startSync:(bool)arg1 continueBackup:(bool)arg2;
- (unsigned long long)statusForCloudDataClasses:(unsigned long long)arg1 backupState:(int)arg2;
- (void)subscriberOptions:(id)arg1;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)syncProgress:(double)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateBackupProgress:(float)arg1 estimatedTimeRemaining:(unsigned long long)arg2;
- (void)updateCloudProgressAlertLabel:(id)arg1;
- (void)updateLocationResetSpecifier;
- (void)updateSyncProgress:(float)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
