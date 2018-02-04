/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate, WBSAsynchronousRequest> {
    NSURLConnection * _connection;
    NSMutableData * _data;
    id /* block */  _handler;
    id  _lifetimeExtender;
    NSOperationQueue * _queue;
    NSURLResponse * _response;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendRequest;

@end
