/* made by EzioChiu.
 */

@protocol _CNDRemoteExtensionContextProtocol <NSObject>

@required

- (void)redonateAllValuesWithReason:(unsigned long long)arg1;
- (void)renewExpirationDateForDonatedValue:(void *)arg1 acknowledgementHandler:(void *)arg2; // needs 2 arg types, found 8: CNDonationValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*

@end
