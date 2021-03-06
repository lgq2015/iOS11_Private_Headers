/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupFlowController : NSObject {
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    PKPaymentProvisioningController * _provisioningController;
    long long  _setupContext;
}

@property (nonatomic, readonly) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, readonly) long long setupContext;

- (void).cxx_destruct;
- (id)_paymentSetupViewControllerForAssociatedCredential:(id)arg1 product:(id)arg2 allowsManualEntry:(bool)arg3;
- (id)delegate;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (id)intialPaymentSetupViewControllerForMode:(long long)arg1 allowsManualEntry:(bool)arg2;
- (id)manualEntryPaymentSetupViewControllerForProduct:(id)arg1;
- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 allowsManualEntry:(bool)arg2;
- (id)paymentSetupViewControllerForAssociatedCredentials:(id)arg1 product:(id)arg2 allowsManualEntry:(bool)arg3;
- (id)provisioningController;
- (void)pushQueuedCredentialViewController:(id)arg1 ontoNavigationController:(id)arg2 pruningHierarchy:(bool)arg3 animated:(bool)arg4;
- (long long)setupContext;

@end
