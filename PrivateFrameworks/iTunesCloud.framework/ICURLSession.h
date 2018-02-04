/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableSet * _activeRequests;
    NSMutableDictionary * _completionHandlers;
    unsigned long long  _maxConcurrentRequests;
    NSObject<OS_dispatch_queue> * _operationQueue;
    bool  _paused;
    NSMutableOrderedSet * _pendingRequests;
    NSObject<OS_dispatch_source> * _requestTimeoutTimer;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURLSession *urlSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didReceiveAVAssetDownloadToken:(unsigned long long)arg3;
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_checkRequestTimeouts;
- (void)_enqueueRequest:(id)arg1;
- (void)_finishRequest:(id)arg1;
- (id)_newResponseForRequest:(id)arg1;
- (void)_processPendingRequests;
- (void)_processRequest:(id)arg1;
- (id)_requestForTask:(id)arg1;
- (void)_scheduleNextRequestTimeoutCheck;
- (double)_timeoutForRequest:(id)arg1;
- (void)_updateProgressForRequest:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)cancelRequest:(id)arg1;
- (void)cancelRequest:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (void)enqueueAVDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)enqueueAVDownloadRequest:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)enqueueDataRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)enqueueDownloadRequest:(id)arg1 toDestination:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)enqueueDownloadRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)enqueueUploadRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2;
- (id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2 qualityOfService:(long long)arg3;
- (void)pause;
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)resume;
- (id)urlSession;

@end
