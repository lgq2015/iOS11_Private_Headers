/* made by EzioChiu.
 */

@protocol HKQueryClientInterface <NSObject>

@required

- (void)client_deliverError:(NSError *)arg1 forQuery:(NSUUID *)arg2;

@end
