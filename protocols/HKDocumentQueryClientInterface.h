/* made by EzioChiu.
 */

@protocol HKDocumentQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverDocument:(HKDocumentSample *)arg1 query:(NSUUID *)arg2;

@end
