/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController {
    PKPaymentSetupVerificationMethodTableController * _methodTableController;
    PKPaymentProvisioningController * _provisioningController;
    NSString * _stepIdentifier;
    PKPaymentVerificationController * _verificationController;
    long long  _verificationStatus;
}

@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, copy) NSString *stepIdentifier;
@property (nonatomic, readonly) PKPaymentVerificationController *verificationController;

- (void).cxx_destruct;
- (void)_configure;
- (void)_handleVerificationFinished;
- (void)_loadVerificationOptions;
- (id)_newVerificationRequest;
- (id)_requestErrorAlertController:(id)arg1;
- (id)_setupAssistantVerificationAlert;
- (void)_terminateSetupFlow;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithVerificationController:(id)arg1;
- (id)initWithVerificationController:(id)arg1 fieldsModel:(id)arg2;
- (id)initWithVerificationController:(id)arg1 verificationChannels:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)provisioningController;
- (void)setProvisioningController:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (id)stepIdentifier;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)verificationController;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end
