/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStorePlatformRequestOperation : ICAsyncOperation {
    ICStorePlatformRequest * _platformRequest;
    id /* block */  _responseHandler;
    ICStorePlatformRequestOperation * _strongSelf;
}

@property (nonatomic, readonly, copy) ICStorePlatformRequest *platformRequest;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)_URLRequestWithBaseURL:(id)arg1;
- (void)_enqueueDataRequest:(id)arg1;
- (void)_executePersonalized;
- (void)_executeUnpersonalized;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (id)_requestContext;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)initWithPlatformRequest:(id)arg1;
- (id)platformRequest;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;

@end
