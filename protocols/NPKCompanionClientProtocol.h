/* made by EzioChiu.
 */

@protocol NPKCompanionClientProtocol <NSObject>

@required

- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;

@end
