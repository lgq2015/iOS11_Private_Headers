/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController {
    CDPRecoveryKeyEntryViewModel * _context;
    CDPRecoveryKeyCreateHeaderView * _headerView;
    NSString * _recoveryCode;
}

- (void).cxx_destruct;
- (void)_handleRecoveryKeyValidationWithSuccess:(bool)arg1 error:(id)arg2;
- (void)cancelFlow:(id)arg1;
- (void)continueFlow:(id)arg1;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (id)footerActionButton;
- (id)footerTextLabel;
- (id)headerView;
- (bool)hidesNextButton;
- (id)initWithRecoveryContext:(id)arg1;
- (id)placeholderText;
- (id)specifiers;
- (id)textEntryCell;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
