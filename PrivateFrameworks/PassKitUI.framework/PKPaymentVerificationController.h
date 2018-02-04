/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentVerificationController : NSObject <UINavigationControllerDelegate> {
    bool  _bankAppNotFound;
    long long  _context;
    <PKPaymentVerificationControllerDelegate> * _delegate;
    NSNumber * _inStoreBankAppStoreID;
    NSString * _inStoreBankAppTitle;
    NSString * _installedBankAppBundleID;
    NSString * _installedBankAppTitle;
    PKPaymentPass * _pass;
    UIImage * _passSnapshot;
    PKPassView * _passView;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    long long  _verificationContext;
    PKVerificationRequestRecord * _verificationRecord;
    PKPaymentWebService * _webService;
}

@property (readonly) NSString *alternateMethodButtonTitle;
@property (nonatomic) long long context;
@property (readonly) NSString *continueVerificationButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentVerificationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPassView *passView;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) bool shouldDisabledVerificationButton;
@property (readonly) Class superclass;
@property (readonly) NSString *verificationBodyString;
@property (nonatomic) long long verificationContext;
@property (nonatomic, readonly) PKVerificationRequestRecord *verificationRecord;
@property (readonly) NSString *verificationTitleString;
@property (nonatomic, readonly) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (id)_bankAppName;
- (id)_bankAppStoreIDs;
- (unsigned long long)_channelType;
- (void)_completeVerificationUsingBankApp;
- (void)_completeVerificationUsingOutboundCall;
- (void)_didChangePresentation;
- (void)_downloadAndAddPassWithCompletion:(id /* block */)arg1;
- (bool)_isBankAppInstalled;
- (void)_launchBankApp;
- (id)_outboundCallPhoneNumber;
- (void)_performStoreLookupForBankApp;
- (void)_presentVerificationViewControllerForStepIdentifier:(id)arg1;
- (void)_presentVerificatonEntryCompletionViewController;
- (void)_requestDelegatePresentationOfViewController:(id)arg1;
- (id)_textMessageFormattedPhoneNumber:(id)arg1;
- (id)_voiceCallFormattedPhoneNumber:(id)arg1;
- (void)_wrapViewControllerAndRequestDelegatePresentationOfView:(id)arg1;
- (id)alternateMethodButtonTitle;
- (long long)context;
- (void)continueVerification;
- (id)continueVerificationButtonTitle;
- (void)dealloc;
- (id)delegate;
- (id)initWithPaymentPass:(id)arg1 passView:(id)arg2 webService:(id)arg3 context:(long long)arg4 delegate:(id)arg5 setupDelegate:(id)arg6 verificationContext:(long long)arg7;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)pass;
- (id)passSnapshot;
- (id)passView;
- (void)performVerificationOptionsRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)performVerificationUpdateRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)provisioningController;
- (void)selectOtherVerificationMethod;
- (void)setContext:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPassView:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setVerificationContext:(long long)arg1;
- (void)setVerificationRecord:(id)arg1;
- (id)setupDelegate;
- (void)sharedPaymentServiceChanged;
- (bool)shouldDisabledVerificationButton;
- (void)submitVerificationCode:(id)arg1 completion:(id /* block */)arg2;
- (id)verificationBodyString;
- (long long)verificationContext;
- (id)verificationRecord;
- (id)verificationTitleString;
- (id)webService;

@end
