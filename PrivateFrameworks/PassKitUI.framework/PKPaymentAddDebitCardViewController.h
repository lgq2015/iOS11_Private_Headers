/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAddDebitCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupDelegate> {
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    UIImage * _passSnapShot;
    PKPaymentProvisioningController * _provisioningController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleNextStep;
- (void)_handleProvisioningError:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)_presentPaymentSetupController;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)_setViewEnabledState:(bool)arg1;
- (void)_setupLater;
- (void)_terminateSetupFlow;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 passSnapshot:(id)arg4;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)viewDidLoad;

@end
