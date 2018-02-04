/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentExplanationViewController : PKExplanationViewController <AAUIDeviceToDeviceEncryptionHelperDelegate, PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPaymentSelectPassesViewControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, RemoteUIControllerDelegate> {
    bool  _allowsManualEntry;
    PKPeerPaymentCredential * _credential;
    bool  _hidesSetupLater;
    UIImage * _passSnapShot;
    PKPeerPaymentWebService * _peerPaymentWebService;
    bool  _presentedDeviceToDeviceEncryptionFlow;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    RemoteUIController * _termsController;
}

@property (nonatomic) bool allowsManualEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDifferentCard;
- (void)_continuePressed;
- (void)_displayTermsWithCompletionHandler:(id /* block */)arg1;
- (void)_handleNextStep;
- (void)_presentAlertControllerForError:(id)arg1;
- (void)_presentDeviceToDeviceEncryptionFlow;
- (void)_presentNextViewController;
- (void)_presentSetupWillCompleteLaterAlertController;
- (void)_showSpinner:(bool)arg1;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (void)_terminateSetupFlow;
- (bool)allowsManualEntry;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)arg2;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)selectPassesViewController:(id)arg1 didSelectPasses:(id)arg2 completion:(id /* block */)arg3;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setHideSetupLaterButton:(bool)arg1;
- (void)viewDidLoad;

@end
