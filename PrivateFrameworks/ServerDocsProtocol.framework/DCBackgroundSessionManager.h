/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCBackgroundSessionManager : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    id /* block */  _backgroundEventsCompletionHandler;
    NSURLSession * _backgroundSession;
    NSString * _bundleIdentifier;
    NSMutableDictionary * _currentTasks;
    id /* block */  _serverRequestResponseHandler;
    DCService * _service;
    NSOperationQueue * _sessionQueue;
}

@property (nonatomic, readonly) HTTPSASLClientSessionManager *HTTPSASLClientSessionManager;
@property (nonatomic, copy) id /* block */ backgroundEventsCompletionHandler;
@property (nonatomic, retain) NSURLSession *backgroundSession;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSMutableDictionary *currentTasks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ serverRequestResponseHandler;
@property (nonatomic, retain) DCService *service;
@property (nonatomic, readonly) NSOperationQueue *sessionQueue;
@property (readonly) Class superclass;

+ (id)backgroundSessionManagerForService:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)bundleIdentifierFromBackgroundSessionIdentifier:(id)arg1;
+ (void)removeInvalidatedSessionForService:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)serviceIdentifierFromBackgroundSessionIdentifier:(id)arg1;
+ (id)sessionIdentifierForService:(id)arg1 bundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)HTTPSASLClientSessionManager;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id /* block */)backgroundEventsCompletionHandler;
- (id)backgroundSession;
- (id)bundleIdentifier;
- (void)callBackgroundEventsCompletionHandler:(id)arg1;
- (bool)cancelTaskIfNecessary:(id)arg1;
- (void)cancelUpload:(id)arg1;
- (void)cancelUploadWithTaskIdentifier:(long long)arg1 sessionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)currentTasks;
- (id)database;
- (void)dealloc;
- (void)handleEventsForBackgroundURLSessionWithServerRequestResponseHandler:(id /* block */)arg1;
- (id)initWithService:(id)arg1 bundleIdentifier:(id)arg2;
- (id)serverRequestForTaskIdentifier:(long long)arg1;
- (id /* block */)serverRequestResponseHandler;
- (id)service;
- (id)sessionQueue;
- (void)setBackgroundEventsCompletionHandler:(id /* block */)arg1;
- (void)setBackgroundSession:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCurrentTasks:(id)arg1;
- (void)setServerRequest:(id)arg1 forTaskIdentifier:(long long)arg2;
- (void)setServerRequestResponseHandler:(id /* block */)arg1;
- (void)setService:(id)arg1;

@end
