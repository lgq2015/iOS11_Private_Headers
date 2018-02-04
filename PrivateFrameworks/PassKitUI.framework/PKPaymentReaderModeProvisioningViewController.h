/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentReaderModeProvisioningViewController : UIViewController <PKContactlessCardIngesterDelegate> {
    PKContactlessCardIngester * _cardIngester;
    NSTimer * _cardNotFoundTimer;
    NSString * _cardSessionToken;
    long long  _context;
    id  _currentNextActionBlock;
    UILabel * _debugStateLabel;
    NSMutableDictionary * _durations;
    PKPaymentSetupFieldsModel * _fieldsModel;
    bool  _idleTimerDisabled;
    bool  _isGoodState;
    NSString * _lastProvisioningStateName;
    PKPaymentContactlessProductCredential * _paymentCredential;
    PKPaymentPass * _paymentPass;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    PKReaderModeProvisioningView * _provisioningView;
    UIScrollView * _scrollView;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    unsigned long long  _startTime;
    unsigned long long  _state;
    unsigned long long  _stateOnRetry;
    PKPaymentWebService * _webService;
}

@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPaymentSetupFieldsModel *fieldsModel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentSetupProduct *product;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_hideBackButton:(bool)arg1;
- (void)_invalidateCardNotFoundTimer;
- (void)_logAndAggDDurations;
- (void)_performEligibilityWithCompletion:(id /* block */)arg1;
- (void)_performFinishWithCompletion:(id /* block */)arg1;
- (void)_performProvisionWithCompletion:(id /* block */)arg1;
- (void)_removePassIfNecessary;
- (void)_resetProvisioningState;
- (void)_setIdleTimerDisabled:(bool)arg1;
- (void)_setupCardIngester;
- (void)_showError:(id)arg1 retry:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_startAppletProvisioning;
- (void)_startCardNotFoundTimer;
- (void)_startIngestion;
- (void)_startReadingCard;
- (void)_startTransferringCard;
- (void)_tearDownCardIngester;
- (void)_triggerNextActionLoop;
- (void)_updateDebugStateLabel:(id)arg1 isGoodState:(bool)arg2;
- (void)_updateDebugStateLabel:(id)arg1 isGoodState:(bool)arg2 showTiming:(bool)arg3;
- (void)_updateToUIState:(unsigned long long)arg1;
- (void)acceptTerms;
- (void)cardNotFoundTimerFired:(id)arg1;
- (void)contactlessCardIngester:(id)arg1 didFailToIngestCardWithError:(id)arg2 resetProvisioning:(bool)arg3 isRecoverable:(bool)arg4;
- (void)contactlessCardIngester:(id)arg1 didUpdateCardIngestionStatus:(unsigned long long)arg2;
- (long long)context;
- (void)dealloc;
- (id)fieldsModel;
- (void)handleNextActionWithCompletion:(id /* block */)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 fieldsModel:(id)arg4 product:(id)arg5;
- (void)loadView;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentProvisioningRequest;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(id /* block */)arg2;
- (id)product;
- (id)provisioningController;
- (void)setContext:(long long)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (void)showEligibilityIssueWithReason:(long long)arg1 learnMoreURL:(id)arg2 completion:(id /* block */)arg3;
- (void)showProvisioningError:(id)arg1 completion:(id /* block */)arg2;
- (void)showReaderModeError:(id)arg1 isRecoverable:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webService;

@end
