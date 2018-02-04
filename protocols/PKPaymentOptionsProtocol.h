/* made by EzioChiu.
 */

@protocol PKPaymentOptionsProtocol <NSObject>

@required

- (CNContact *)defaultBillingAddressForPaymentPass:(PKPaymentPass *)arg1;
- (CNContact *)defaultBillingAddressForRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1;
- (NSDictionary *)defaultBillingAddresses;
- (CNContact *)defaultContactEmail;
- (CNContact *)defaultContactName;
- (CNContact *)defaultContactPhone;
- (CNContact *)defaultShippingAddress;
- (void)setDefaultBillingAddress:(CNContact *)arg1 forPaymentPass:(PKPaymentPass *)arg2;
- (void)setDefaultBillingAddress:(CNContact *)arg1 forRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg2;
- (void)setDefaultContactEmail:(CNContact *)arg1;
- (void)setDefaultContactName:(CNContact *)arg1;
- (void)setDefaultContactPhone:(CNContact *)arg1;
- (void)setDefaultShippingAddress:(CNContact *)arg1;

@end
