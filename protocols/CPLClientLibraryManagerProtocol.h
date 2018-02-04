/* made by EzioChiu.
 */

@protocol CPLClientLibraryManagerProtocol <NSObject>

@required

- (void)backgroundDownloadDidFailForResource:(CPLResource *)arg1;
- (void)backgroundDownloadDidFinishForResource:(CPLResource *)arg1;
- (void)downloadDidFinishForResourceTransferTask:(NSString *)arg1 finalResource:(CPLResource *)arg2 withError:(NSError *)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(NSString *)arg2;
- (void)downloadDidStartForResourceTransferTask:(NSString *)arg1;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(NSString *)arg1 data:(NSData *)arg2 withError:(NSError *)arg3;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)libraryManagerDidUpdateStatusWithProperties:(NSDictionary *)arg1;
- (void)libraryManagerHasChangesToPull;
- (void)libraryManagerHasStatusChanges;
- (void)uploadDidStartForResource:(CPLResource *)arg1 withResourceTransferTask:(NSString *)arg2;
- (void)uploadOfResource:(CPLResource *)arg1 didFinishForResourceTransferTask:(NSString *)arg2 withError:(NSError *)arg3;
- (void)uploadOfResource:(CPLResource *)arg1 didProgress:(float)arg2 forResourceTransferTask:(NSString *)arg3;

@end
