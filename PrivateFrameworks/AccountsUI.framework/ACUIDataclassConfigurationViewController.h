/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIDataclassConfigurationViewController : ACUIViewController {
    ACAccount * _account;
    NSString * _accountIdentifier;
    PSSpecifier * _accountSummaryCellSpecifier;
    NSMutableDictionary * _allDesiredDataclassActions;
    id /* block */  _configurationCompletion;
    PSSpecifier * _dataclassGroupSpecifier;
    NSArray * _dataclassSpecifiers;
    PSSpecifier * _deleteButtonSpecifier;
    bool  _didShowDataclassActionPickerDuringRemoval;
    NSMutableArray * _dirtyDataclassCells;
    bool  _firstTimeSetup;
    bool  _forceMailSetup;
    bool  _isMailSetupForced;
    bool  _isMergingSyncData;
    NSArray * _otherSpecifiers;
    NSArray * _preEnabledDataclasses;
    bool  _shouldEnableAccountSummaryCell;
    bool  _shouldEnableDeleteAccountButton;
    bool  _shouldShowDeleteAccountButton;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) id /* block */ configurationCompletion;
@property (nonatomic, retain) PSSpecifier *dataclassGroupSpecifier;
@property (nonatomic, readonly) PSSpecifier *deleteButtonSpecifier;
@property (getter=isFirstTimeSetup, nonatomic) bool firstTimeSetup;
@property (nonatomic) bool isMailSetupForced;
@property (nonatomic, copy) NSArray *preEnabledDataclasses;
@property (nonatomic) bool shouldEnableAccountSummaryCell;
@property (nonatomic) bool shouldEnableDeleteAccountButton;
@property (nonatomic) bool shouldShowDeleteAccountButton;

+ (bool)shouldPresentAsModalSheet;

- (void).cxx_destruct;
- (id)_accountIdentifier;
- (id)_activityInProgressTextForDataclass:(id)arg1 isBeingEnabled:(bool)arg2;
- (bool)_confirmDeleteLocalDataForDataclasses:(id)arg1;
- (bool)_confirmKeepLocalDataForDataclasses:(id)arg1;
- (bool)_confirmSyncDelete;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (bool)_isShowingDeleteAccountButton;
- (void)_markDataclassSwitchCellAsDirty:(id)arg1;
- (id)_navigationTitle;
- (void)_notifyOfAccountSetupCompletion;
- (id)_orderDataclassList:(id)arg1;
- (bool)_promptUserToConfirmAccountDeletion;
- (long long)_promptUserToConfirmAccountSyncDeletion;
- (void)_setDataclass:(id)arg1 enabled:(bool)arg2;
- (void)_showDelayedActivityInProgressUIWithMessage:(id)arg1;
- (id)_specifiersForDataclasses:(id)arg1;
- (id)account;
- (Class)accountInfoControllerClass;
- (void)appendDeleteAccountButton;
- (void)cancelButtonTapped:(id)arg1;
- (id /* block */)configurationCompletion;
- (id)dataclassGroupSpecifier;
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;
- (id)dataclassSwitchStateForSpecifier:(id)arg1;
- (long long)deleteButtonIndex;
- (id)deleteButtonSpecifier;
- (void)deleteButtonTapped:(id)arg1;
- (id)deviceMessage;
- (id)displayedAccountTypeString;
- (id)displayedShortAccountTypeString;
- (void)doneButtonTapped:(id)arg1;
- (void)forceMailSetup;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (id)init;
- (bool)isAppleMailAccount:(id)arg1;
- (bool)isFirstTimeSetup;
- (bool)isMailSetupForced;
- (id)messageForAccountDeletionProgressUI;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (bool)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
- (long long)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (id)otherSpecifiers;
- (id)preEnabledDataclasses;
- (void)reloadDynamicSpecifiersWithAnimation:(bool)arg1;
- (void)resetDirtyDataclassSwitchCells;
- (void)setAccount:(id)arg1;
- (void)setConfigurationCompletion:(id /* block */)arg1;
- (void)setDataclass:(id)arg1 enabled:(bool)arg2;
- (void)setDataclassGroupSpecifier:(id)arg1;
- (void)setFirstTimeSetup:(bool)arg1;
- (void)setIsMailSetupForced:(bool)arg1;
- (void)setPreEnabledDataclasses:(id)arg1;
- (void)setShouldEnableAccountSummaryCell:(bool)arg1;
- (void)setShouldEnableDeleteAccountButton:(bool)arg1;
- (void)setShouldShowDeleteAccountButton:(bool)arg1;
- (bool)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1;
- (bool)shouldEnableAccountSummaryCell;
- (bool)shouldEnableDeleteAccountButton;
- (bool)shouldShowDeleteAccountButton;
- (bool)shouldShowOtherSpecifiersDuringFirstSetup;
- (bool)shouldShowSpecifierForDataclass:(id)arg1;
- (bool)shouldVerifyBeforeAccountSave;
- (id)specifierForAccountSummaryCell;
- (id)specifierForDataclass:(id)arg1;
- (id)specifiers;
- (id)titleForDeleteButton;
- (id)valueForAccountSummaryCell;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
