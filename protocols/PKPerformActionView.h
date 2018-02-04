/* made by EzioChiu.
 */

@protocol PKPerformActionView <NSObject>

@required

- (UITextField *)amountTextField;
- (<PKPerformActionViewDelegate> *)delegate;
- (id)initWithPass:(PKPass *)arg1 action:(PKPaymentPassAction *)arg2 paymentDataProvider:(id <PKPaymentDataProvider>)arg3;
- (PKPass *)pass;
- (void)saveLastInputValues;
- (NSDictionary *)serviceProviderData;
- (void)setDelegate:(id <PKPerformActionViewDelegate>)arg1;
- (NSDecimalNumber *)transactionAmount;
- (NSString *)transactionCurrency;

@optional

- (void)willDismissViewController;

@end
