/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDGatherLogsRequest : ASDEphemeralRequest {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    ASDGatherLogsRequestOptions * _options;
}

+ (long long)requestType;

- (void).cxx_destruct;
- (id)_appstoredContainerPath;
- (id)_combineAllLogs;
- (void)_combineLogs:(id)arg1 toDir:(id)arg2;
- (void)_copyDB:(id)arg1 fullSourcePath:(id)arg2 toDir:(id)arg3 datbaseBase:(id)arg4;
- (id)_createCombinedHarFile;
- (void)_sendGatherRequestWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_sendHarFileRequestWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_sendRequestWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)_zippedDataForURL:(id)arg1;
- (void)createHarFileArchiveWithCompletionBlock:(id /* block */)arg1;
- (void)createLogFileArchiveWithCompletionBlock:(id /* block */)arg1;
- (void)gatherLogsWithCompletionBlock:(id /* block */)arg1;
- (id)initWithOptions:(id)arg1;

@end
