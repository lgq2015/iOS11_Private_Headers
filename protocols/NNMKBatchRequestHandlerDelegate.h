/* made by EzioChiu.
 */

@protocol NNMKBatchRequestHandlerDelegate <NNMKDeviceRegistryHolder>

@required

- (void)batchRequestHandlerDidTimeoutFetchRequest:(NNMKBatchRequestHandler *)arg1;

@end
