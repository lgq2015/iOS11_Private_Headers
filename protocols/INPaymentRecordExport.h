/* made by EzioChiu.
 */

@protocol INPaymentRecordExport <NSObject, JSExport>

@required

- (INCurrencyAmount *)currencyAmount;
- (id)init;
- (NSString *)note;
- (INPerson *)payee;
- (INPerson *)payer;
- (INPaymentMethod *)paymentMethod;
- (void)setCurrencyAmount:(INCurrencyAmount *)arg1;
- (void)setNote:(NSString *)arg1;
- (void)setPayee:(INPerson *)arg1;
- (void)setPayer:(INPerson *)arg1;
- (void)setPaymentMethod:(INPaymentMethod *)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
