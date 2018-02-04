/* made by EzioChiu.
 */

@protocol PDPeerPaymentServiceExportedInterface <PDXPCServiceExportedInterface>

@required

- (void)accountWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPeerPaymentAccount *, void*
- (void)balanceForPass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCurrencyAmount *, void*
- (void)cloudStoreStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKAccountInfo *, bool, NSError *, void*
- (void)deleteAccountWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)downloadPassIfNecessaryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)noteAccountDeletedWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentIdentityVerificationFlowWithResponseData:(void *)arg1 orientation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(void *)arg1 termsIdentifier:(void *)arg2 orientation:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentRegistrationFlowWithAccount:(void *)arg1 amount:(void *)arg2 state:(void *)arg3 orientation:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: PKPeerPaymentAccount *, PKCurrencyAmount *, unsigned long long, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)registerDeviceWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registrationStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setSharedPeerPaymentWebServiceContext:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 6: PKPeerPaymentWebServiceContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sharedPeerPaymentWebServiceContextWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPeerPaymentWebServiceContext *, void*
- (void)unregisterDeviceWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateAccountWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPeerPaymentAccount *, void*
- (void)updateMemo:(void *)arg1 forTransactionWithIdentifier:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateMockAccountBalanceByAddingAmount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDecimalNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPeerPaymentAccount *, void*

@end
