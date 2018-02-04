/* made by EzioChiu.
 */

@protocol PKPaymentAuthorizationViewControllerPrivateDelegate <NSObject>

@required

- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 willFinishWithError:(NSError *)arg2;

@optional

- (void)paymentAuthorizationViewController:(void *)arg1 didRequestMerchantSession:(void *)arg2; // needs 2 arg types, found 8: PKPaymentAuthorizationViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentMerchantSession *, NSError *, void*

@end
