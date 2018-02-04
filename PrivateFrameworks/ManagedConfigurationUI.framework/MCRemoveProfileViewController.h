/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCRemoveProfileViewController : MCInstallProfileViewController <MCInteractionDelegate, MCProfileViewControllerDelegate, PSStateRestoration, UIActionSheetDelegate, UITextFieldDelegate> {
    bool  _actionButtonHidden;
    UIAlertView * _activeAlert;
    struct { 
        unsigned int installedThisLaunch : 1; 
        unsigned int profileSuggestsReboot : 1; 
    }  _configurationFlags;
    UITextField * _passwordField;
    bool  _profileWantsToReEnroll;
    MCProfile * _updatingProfile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *passwordField;
@property (readonly) Class superclass;
@property (nonatomic, retain) MCProfile *updatingProfile;

- (void).cxx_destruct;
- (void)_cancelActiveAlert:(bool)arg1;
- (void)_cancelActiveAlertController:(bool)arg1;
- (void)_clearCachedTableCells;
- (void)_hideProgressIndicatorWithSuccess:(bool)arg1 showButtons:(bool)arg2;
- (void)_leaveRemoteManagementAndErase;
- (id)_mdmProfileRemovalAlertBody;
- (void)_performReEnroll;
- (void)_performReEnrollAfterPINVerification;
- (void)_profileListChanged:(id)arg1;
- (void)_profileRemovalDidFinish;
- (void)_removeProfile;
- (void)_resetWithMode:(int)arg1;
- (void)_showEraseDeviceAlert;
- (void)_showLeaveRemoteManagementAlert;
- (void)_showProgressIndicator;
- (void)_showRemovalWarningActionSheet;
- (void)_showRemovalWarningAfterPINVerification;
- (void)_showRemovalWarningAlert;
- (void)_showWrongRemovalPasswordAlert;
- (bool)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2;
- (void)_updateProfile;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)didReceiveMemoryWarning;
- (id)initWithProfile:(id)arg1;
- (id)passwordField;
- (void)performRemoveAfterFinalVerification;
- (void)profileViewControllerDidSelectRemoveProfile:(id)arg1;
- (void)profileViewControllerDidSelectUpdateProfile:(id)arg1;
- (void)setInstallState:(int)arg1 animated:(bool)arg2;
- (void)setPasswordField:(id)arg1;
- (void)setUpdatingProfile:(id)arg1;
- (void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(bool)arg2;
- (void)updateTitleForProfileInstallationState:(int)arg1;
- (id)updatingProfile;

@end
