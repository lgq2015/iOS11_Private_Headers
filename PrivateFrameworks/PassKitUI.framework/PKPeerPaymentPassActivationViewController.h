/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentPassActivationViewController : UIViewController <AAUIDeviceToDeviceEncryptionHelperDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupViewControllerDelegate, RemoteUIControllerDelegate> {
    PKPeerPaymentCredential * _credential;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    PKTableHeaderView * _headerView;
    UIImage * _passSnapShot;
    PKPeerPaymentWebService * _peerPaymentWebService;
    bool  _presentedDeviceToDeviceEncryptionFlow;
    PKPaymentProvisioningController * _provisioningController;
    long long  _setupContext;
    unsigned long long  _state;
    RemoteUIController * _termsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool presentedDeviceToDeviceEncryptionFlow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginSetup;
- (void)_checkCloudStoreState;
- (void)_handleError:(id)arg1;
- (void)_handleNextStep;
- (bool)_hasDebitCard;
- (void)_presentActivationFailedErrorAlert;
- (void)_presentAlertControllerForError:(id)arg1;
- (void)_presentDeviceToDeviceEncryptionFlow;
- (void)_presentIdentityVerificationWithError:(id)arg1;
- (void)_presentSetupWillCompleteLaterAlertController;
- (void)_presentTermsAndConditionsWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)_provisionPeerPaymentPass;
- (void)_setShowCheckmark:(bool)arg1;
- (void)_setShowSpinner:(bool)arg1;
- (void)_setState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (void)_terminateSetupFlow;
- (id)_titleStringForState;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)arg2;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 passSnapShot:(id)arg5;
- (bool)presentedDeviceToDeviceEncryptionFlow;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)setPresentedDeviceToDeviceEncryptionFlow:(bool)arg1;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
