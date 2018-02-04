/* made by EzioChiu.
 */

@protocol INTransferMoneyIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INPaymentAccount *)fromAccount;
- (void)setFromAccount:(INPaymentAccount *)arg1;
- (void)setToAccount:(INPaymentAccount *)arg1;
- (void)setTransactionAmount:(INPaymentAmount *)arg1;
- (void)setTransactionNote:(NSString *)arg1;
- (void)setTransactionScheduledDate:(INDateComponentsRange *)arg1;
- (void)setTransferFee:(INCurrencyAmount *)arg1;
- (INPaymentAccount *)toAccount;
- (INPaymentAmount *)transactionAmount;
- (NSString *)transactionNote;
- (INDateComponentsRange *)transactionScheduledDate;
- (INCurrencyAmount *)transferFee;

@end
