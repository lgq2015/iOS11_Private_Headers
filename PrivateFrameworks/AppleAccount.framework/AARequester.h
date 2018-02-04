/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AARequester : NSOperation <NSURLConnectionDelegate> {
    AKAppleIDSession * _appleIDSession;
    bool  _canceled;
    NSMutableData * _data;
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSHTTPURLResponse * _httpResponse;
    bool  _isCanceled;
    bool  _isExecuting;
    bool  _isFinished;
    AARequest * _request;
    AAResponse * _response;
    Class  _responseClass;
    bool  _shouldRetry;
    NSURLConnection * _urlConnection;
}

@property (getter=isCanceled) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished) bool finished;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (getter=isExecuting, nonatomic) bool isExecuting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__unsafe_callHandler;
- (void)_callHandler;
- (void)_kickOffRequest:(id)arg1;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)handlerQueue;
- (id)initWithRequest:(id)arg1 handler:(id /* block */)arg2;
- (bool)isCanceled;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setCanceled:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)start;

@end
