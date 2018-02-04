/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUISignInOperationManager : NSObject <ACUIAccountOperationsDelegate> {
    ACUIAccountOperationsHelper * _accountOperationsHelper;
    <AAUISignInOperationDelegate> * _delegate;
    UIViewController * _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISignInOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertControllerForPicker:(id)arg1;
- (id)_dataclassMergeActionPickerFromPicker:(id)arg1;
- (void)_delegate_signInOperationManagerDidSaveAccount:(id)arg1 error:(id)arg2;
- (void)_disableDataclasses:(id)arg1 forAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)_mainQueue_dataclassActionsForPicker:(id)arg1 completion:(id /* block */)arg2;
- (void)_refreshEnabledDataclassesForAccount:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithPresentingViewController:(id)arg1;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (id)presentingViewController;
- (void)setDelegate:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)signInAccount:(id)arg1 enablingDataclasses:(bool)arg2;

@end
