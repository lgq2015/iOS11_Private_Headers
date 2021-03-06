/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCServerRequest : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    DCConnectivityTracker * _connectivityTracker;
    NSHTTPURLResponse * _httpResponse;
    NSMutableURLRequest * _request;
    NSMutableData * _responseData;
    id /* block */  _responseHandler;
    DCService * _service;
    NSURLSession * _session;
    NSOperationQueue * _sessionQueue;
    bool  _usingBackgroundSession;
}

@property (nonatomic, readonly) HTTPSASLClientSessionManager *HTTPSASLClientSessionManager;
@property (nonatomic, retain) DCConnectivityTracker *connectivityTracker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHTTPURLResponse *httpResponse;
@property (nonatomic, retain) NSMutableURLRequest *request;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) DCService *service;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic, retain) NSOperationQueue *sessionQueue;
@property (readonly) Class superclass;
@property (nonatomic) bool usingBackgroundSession;

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
- (id)_requestForMethod:(id)arg1 URI:(id)arg2 queryItems:(id)arg3 headers:(id)arg4 body:(id)arg5 timeoutInterval:(double)arg6;
- (bool)_shouldClearAuthCookieAndTrustedCertDataForError:(id)arg1;
- (bool)addAuthenticationHeadersToRequest:(id)arg1 error:(id*)arg2;
- (void)callResponseHandlerWithAuthError:(id)arg1;
- (void)clearAuthCookieAndTrustedCertData;
- (id)connectivityTracker;
- (void)continueUploadForBackgroundURLSessionWithService:(id)arg1 session:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)description;
- (id)httpResponse;
- (id)newDefaultSession;
- (id)request;
- (id)responseData;
- (id /* block */)responseHandler;
- (id)service;
- (id)session;
- (id)sessionQueue;
- (void)setConnectivityTracker:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setService:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionQueue:(id)arg1;
- (void)setUsingBackgroundSession:(bool)arg1;
- (id)startBothloadTaskWithURI:(id)arg1 queryItems:(id)arg2 service:(id)arg3 headers:(id)arg4 body:(id)arg5 responseHandler:(id /* block */)arg6;
- (id)startDownloadTaskWithURI:(id)arg1 queryItems:(id)arg2 service:(id)arg3 headers:(id)arg4 body:(id)arg5 responseHandler:(id /* block */)arg6;
- (id)startUploadTaskWithFile:(id)arg1 URI:(id)arg2 queryItems:(id)arg3 service:(id)arg4 headers:(id)arg5 responseHandler:(id /* block */)arg6;
- (bool)usingBackgroundSession;

@end
