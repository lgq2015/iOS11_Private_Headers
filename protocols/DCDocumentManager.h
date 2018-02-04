/* made by EzioChiu.
 */

@protocol DCDocumentManager

@required

+ (void)_deleteAllContent;
+ (DCDocumentManager *)documentManagerForService:(DCService *)arg1;
+ (void)setPurposeIdentifier:(NSString *)arg1;

- (void)allPendingUploadsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)attributesOfItemAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSDictionary *, NSError *, void*
- (void)cancelDownloadingItemAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelUploadingItemAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSObject<OS_dispatch_queue> *)completionHandlerQueue;
- (bool)connectionStatus;
- (void)contentsOfDirectoryAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSArray *, NSError *, void*
- (void)contentsOfFileAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSURL *, NSError *, void*
- (void)createDirectoryAtPath:(void *)arg1 attributes:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<DCDocumentManagerDelegate> *)delegateForFilterPath:(NSString *)arg1;
- (bool)deleteAllLocalData;
- (NSURLSessionDownloadTask *)downloadTaskForItemAtPath:(NSString *)arg1;
- (void)evictItemAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSURL *)fileURLOfItemAtPath:(NSString *)arg1 error:(id*)arg2;
- (void)handleEventsForBackgroundURLSession:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)hasPendingUploads;
- (NSSet *)pathsOfItemAtURL:(NSURL *)arg1 error:(id*)arg2;
- (void)preflightWriteToNewFileAtPath:(void *)arg1 source:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rebuildDatabaseWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeDelegate:(id <DCDocumentManagerDelegate>)arg1;
- (void)removeDelegateForFilterPath:(NSString *)arg1;
- (void)removePreflightedWriteToNewFileAtPath:(NSString *)arg1;
- (void)resetCachedItemManagerForService:(DCService *)arg1;
- (void)restartUploads;
- (DCService *)service;
- (void)setCompletionHandlerQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setDelegate:(id <DCDocumentManagerDelegate>)arg1 forFilterPath:(NSString *)arg2;
- (void)setDelegate:(id <DCDocumentManagerDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 forFilterPath:(NSString *)arg3;
- (void)startDownloadingItemAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startUploadingItemAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)thumbnailOfItemAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSURL *, NSError *, void*
- (DCManagedUpload *)uploadForItemAtPath:(NSString *)arg1;
- (void)writeToFileAtPath:(void *)arg1 source:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
