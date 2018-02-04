/* made by EzioChiu.
 */

@protocol INPaymentMethodExport <NSObject, JSExport>

@required

- (INImage *)icon;
- (NSString *)identificationHint;
- (id)init;
- (NSString *)name;
- (void)setIcon:(INImage *)arg1;
- (void)setIdentificationHint:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
