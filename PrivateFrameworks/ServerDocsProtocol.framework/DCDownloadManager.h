/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCDownloadManager : NSObject {
    NSMutableDictionary * _downloadTasks;
    NSMutableDictionary * _downloads;
    DCService * _service;
    bool  _shouldRetryIfAuthError;
}

+ (id)downloadManagerForService:(id)arg1;

- (void).cxx_destruct;
- (void)_finishDownloadOfItemAtRelativePath:(id)arg1 responseContainer:(id)arg2 error:(id)arg3;
- (id)_handlersToCallForItemAtSubpath:(id)arg1;
- (id)_initWithService:(id)arg1;
- (bool)_isAuthError:(id)arg1;
- (bool)_needsToStartDownloadingItemAtSubpath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelAllDownloadTasks;
- (id)downloadTaskForItemAtPath:(id)arg1;
- (bool)isDownloadingDirectory:(id)arg1;
- (bool)isDownloadingFile:(id)arg1;
- (void)startDownloadingDirectory:(id)arg1 usingRemoteFileManager:(id)arg2 activityInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)startDownloadingFile:(id)arg1 usingRemoteFileManager:(id)arg2 activityInfo:(id)arg3 completionHandler:(id /* block */)arg4;

@end
