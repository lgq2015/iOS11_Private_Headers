/* made by EzioChiu.
 */

@protocol INSearchForBillsIntentExport <NSObject, JSExport>

@required

- (INBillPayee *)billPayee;
- (long long)billType;
- (INDateComponentsRange *)dueDateRange;
- (id)init;
- (INDateComponentsRange *)paymentDateRange;
- (void)setBillPayee:(INBillPayee *)arg1;
- (void)setBillType:(long long)arg1;
- (void)setDueDateRange:(INDateComponentsRange *)arg1;
- (void)setPaymentDateRange:(INDateComponentsRange *)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
