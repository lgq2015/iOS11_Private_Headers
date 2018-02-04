/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIViewController : PSListController <ACUIAccountOperationsDelegate, UIActionSheetDelegate> {
    <ACUIViewControllerAccountChangeObserver> * _accountChangeObserver;
    ACUIAccountOperationsHelper * _accountOperationsHelper;
    ACAccountStore * _accountStore;
    bool  _activityInProgress;
    bool  _addedToTaskList;
    UIBarButtonItem * _cancelButton;
    id /* block */  _confirmationViewCompletion;
    UIBarButtonItem * _doneButton;
    UIProgressHUD * _hud;
    NSTimer * _idleJiggleTimer;
    void * _powerAssertion;
    bool  _validationInProgress;
}

@property (nonatomic) <ACUIViewControllerAccountChangeObserver> *accountChangeObserver;
@property (nonatomic, retain) ACUIAccountOperationsHelper *accountOperationsHelper;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool validationInProgress;

+ (id)acuiAccountStore;
+ (bool)shouldPresentAsModalSheet;

- (void).cxx_destruct;
- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(bool)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;
- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;
- (id)_effectiveParentController;
- (void)_jiggleIdleTimerFired;
- (void)_preventSleepAndDimming:(bool)arg1;
- (id)accountChangeObserver;
- (id)accountOperationsHelper;
- (id)accountStore;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)cancelButton;
- (void)cancelButtonTapped:(id)arg1;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (id)doneButton;
- (void)doneButtonTapped:(id)arg1;
- (void)hideActivityInProgressUI;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (id)init;
- (bool)isPresentedAsModalSheet;
- (bool)isShowingActivityInProgressUI;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void)reloadAllParentSpecifiers;
- (void)reloadAllParentSpecifiersAnimated:(bool)arg1;
- (void)reloadParentSpecifier;
- (void)removeParentSpecifier;
- (void)setAccountChangeObserver:(id)arg1;
- (void)setAccountOperationsHelper:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCellsChecked:(bool)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setTaskCompletionAssertionEnabled:(bool)arg1;
- (void)setValidationInProgress:(bool)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (void)showActivityInProgressUIWithMessage:(id)arg1;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(id /* block */)arg7;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 context:(id)arg5 completion:(id /* block */)arg6;
- (id)showConfirmationViewForDeletingAccount:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(id /* block */)arg7;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 forceAlert:(bool)arg7 completion:(id /* block */)arg8;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 context:(id)arg5 completion:(id /* block */)arg6;
- (id)specifiers;
- (void)startValidationWithPrompt:(id)arg1;
- (void)startValidationWithPrompt:(id)arg1 userInteraction:(bool)arg2;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(bool)arg2;
- (void)updateValidationPrompt:(id)arg1;
- (bool)validationInProgress;
- (void)viewDidLoad;

@end
