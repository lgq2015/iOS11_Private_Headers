/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCredentialsViewController : PKPaymentSetupTableViewController <PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {
    bool  _allowsManualEntry;
    double  _cachedHeaderViewWidth;
    NSMutableArray * _credentialCaches;
    bool  _hideSetupLaterButton;
    unsigned long long  _maximumNumberOfSelectableCredentials;
    UIImage * _placeHolder;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPaymentCredentialTableViewCell * _sizingCell;
    PKPaymentSetupFooterView * _tableFooter;
    PKTableHeaderView * _tableHeader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSetupLaterButton;
@property (nonatomic, retain) PKPaymentSetupProduct *product;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)_numberOfSelectedCredentials;
- (void)_presentManualAddController;
- (void)_presentViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_setPassSnapshotOnCell:(id)arg1 cell:(id)arg2;
- (void)_setUserInteractionEnabled:(bool)arg1;
- (void)_startProvisioningForSelectedCards;
- (void)_terminateSetupFlow;
- (void)_updateForSelectionCount;
- (void)_updateMaximumSelectableCredentials;
- (void)_updateRemoteCredentialCache;
- (void)_updateTableHeaderViewSubtitle;
- (void)dealloc;
- (bool)hideSetupLaterButton;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 credentials:(id)arg4 allowsManualEntry:(bool)arg5;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (id)product;
- (void)setHideSetupLaterButton:(bool)arg1;
- (void)setProduct:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end