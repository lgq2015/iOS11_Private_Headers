/* made by EzioChiu.
 */

@protocol PKContinuityPaymentServiceExportedInterface

@required

- (void)didReceiveCancellationForRemotePaymentRequest:(PKRemotePaymentRequest *)arg1;
- (void)didReceivePayment:(PKPayment *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentClientUpdate:(PKPaymentClientUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentHostUpdate:(PKPaymentHostUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentResult:(PKPaymentAuthorizationResult *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceiveUpdatedPaymentDevices:(NSArray *)arg1;

@end
