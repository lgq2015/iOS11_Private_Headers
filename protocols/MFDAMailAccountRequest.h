/* made by EzioChiu.
 */

@protocol MFDAMailAccountRequest

@required

- (MFOfflineCacheOperation<MFDAOfflineCacheOperation> *)deferredOperation;
- (unsigned long long)generationNumber;
- (bool)isUserRequested;
- (bool)shouldSend;

@end
