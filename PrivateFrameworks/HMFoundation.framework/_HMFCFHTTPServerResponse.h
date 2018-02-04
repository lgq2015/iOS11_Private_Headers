/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface _HMFCFHTTPServerResponse : HMFHTTPResponseInternal {
    id /* block */  _completionHandler;
    _HMFCFHTTPServerRequest * _request;
    _HMFCFHTTPMessage * _response;
    struct _CFHTTPServerResponse { } * _responseRef;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) _HMFCFHTTPServerRequest *request;
@property (nonatomic, readonly) _HMFCFHTTPMessage *response;
@property (nonatomic, readonly) struct _CFHTTPServerResponse { }*responseRef;

- (void).cxx_destruct;
- (id)body;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)headerFields;
- (id)initWithRequest:(id)arg1 statusCode:(long long)arg2;
- (id)request;
- (id)response;
- (struct _CFHTTPServerResponse { }*)responseRef;
- (void)setBody:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;

@end
