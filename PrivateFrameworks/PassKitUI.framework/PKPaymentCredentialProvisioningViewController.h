/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupRequiresPreflightProtocol> {
    bool  _allowsManualEntry;
    unsigned long long  _credentialProvisioningType;
    unsigned long long  _displayType;
    PKPaymentCredentialMetadataTableController * _metadataController;
    UIImage * _passSnapshot;
    UIImage * _passSnapshotPlaceHolder;
    PKPaymentCredential * _paymentCredential;
    PKPaymentSetupProduct * _setupProduct;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(id /* block */)arg1;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
- (void)_performEligibilityWithCompletion:(id /* block */)arg1;
- (void)_performFinishWithCompletion:(id /* block */)arg1;
- (void)_performProvisionWithCompletion:(id /* block */)arg1;
- (void)_performRequirementsWithCompletion:(id /* block */)arg1;
- (void)_performTermsWithCompletion:(id /* block */)arg1;
- (void)_preflightCredentialFieldsWithCompletion:(id /* block */)arg1;
- (id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
- (void)_skipCard;
- (void)_terminateSetupFlow;
- (void)_updatePassSnapshotHeader;
- (void)addDifferentCard:(id)arg1;
- (void)dealloc;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5 allowsManualEntry:(bool)arg6;
- (bool)isComplete;
- (void)loadView;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentRequirementsRequest;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)readonlyFieldIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end
