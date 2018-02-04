/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUISignOutController : UINavigationController <AAUIDataclassPickerViewControllerDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSDictionary * _dataclassOptions;
}

@property (setter=_setAccountStore:, nonatomic, retain) ACAccountStore *_accountStore;
@property (setter=_setDataclassOptions:, nonatomic, copy) NSDictionary *_dataclassOptions;
@property (nonatomic, readonly) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISignOutControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountStore;
- (struct NSDictionary { Class x1; }*)_actionableDataclassOptions;
- (struct NSDictionary { Class x1; }*)_dataclassOptions;
- (id)_dataclassViewController;
- (void)_delegate_signOutControllerDidCancel;
- (void)_delegate_signOutControllerDidCompleteWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)_hasHealthData;
- (bool)_hasPaymentPasses;
- (void)_mainQueue_continueSignOutWithDataclassActions:(struct NSDictionary { Class x1; }*)arg1;
- (void)_mainQueue_presentSpinnerPageWithDataclassActions:(struct NSDictionary { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (void)_mainQueue_promptForConfirmationInViewController:(id)arg1 simplified:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_setAccountStore:(id)arg1;
- (void)_setDataclassOptions:(id)arg1;
- (id)_signOutMessageSimplified:(bool)arg1 withConfirmation:(bool)arg2;
- (id)_spinnerViewControllerForActions:(struct NSDictionary { Class x1; }*)arg1;
- (id)account;
- (void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(struct NSDictionary { Class x1; }*)arg2;
- (void)dataclassPickerViewControllerDidCancel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)footerTextForDataclassPickerViewController:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareInViewController:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
