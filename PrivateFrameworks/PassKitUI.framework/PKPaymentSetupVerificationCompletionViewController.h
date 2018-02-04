/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <PKPaymentVerificationObserverDelegate, UITextFieldDelegate> {
    UIColor * _editableTextFieldColor;
    long long  _mode;
    PKPaymentProvisioningController * _provisioningController;
    bool  _resignedResponder;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPaymentSetupFooterView * _tableFooter;
    PKTableHeaderView * _tableHeader;
    bool  _verificationCodeAccepted;
    PKActivityTableCell * _verificationCodeCell;
    PKPaymentVerificationController * _verificationController;
    PKPaymentVerificationObserver * _verificationObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentVerificationController *verificationController;

- (void).cxx_destruct;
- (void)_disableUI;
- (void)_enableUI;
- (void)_handleNextStep;
- (void)_handlePassVerifiedNotification:(id)arg1;
- (void)_performAddToWatchFlow;
- (void)_showActivationError:(id)arg1;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_showCompletedUIForPass:(id)arg1;
- (void)_showCompletedUIWithNextHandler:(id /* block */)arg1;
- (void)_submitVerificationCode;
- (void)_terminateFlow;
- (void)dealloc;
- (id)initWithVerificationController:(id)arg1 mode:(long long)arg2;
- (void)loadView;
- (void)next:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)provisioningController;
- (void)setProvisioningController:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)verificationController;
- (void)verificationObserver:(id)arg1 didObserveVerificationCode:(id)arg2;
- (void)verificationObserverDidTimeout:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
