/* made by EzioChiu.
 */

@protocol NPKQuickPaymentSessionDelegate <NSObject>

@optional

- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didActivatePass:(PKPass *)arg2;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didCompleteForReason:(unsigned long long)arg2 withTransactionContext:(PKContactlessInterfaceTransactionContext *)arg3;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didFailTransactionForPass:(PKPass *)arg2 withValueAddedServiceTransactions:(NSArray *)arg3 forValueAddedServicePasses:(NSArray *)arg4;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didMakePassCurrent:(PKPass *)arg2;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 willActivatePass:(PKPass *)arg2;
- (void)paymentSessionDidEnterField:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidExitField:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidReceiveActivityTimeout:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidReceiveCredential:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidReceiveStartTransaction:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidSelectPayment:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidSelectValueAddedService:(NPKQuickPaymentSession *)arg1;

@end
