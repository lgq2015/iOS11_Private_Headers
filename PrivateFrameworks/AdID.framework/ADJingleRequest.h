/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADJingleRequest : NSObject {
    NSString * _DSID;
    NSString * _bagKey;
    id /* block */  _completionHandler;
    NSError * _error;
    NSData * _requestBody;
    NSMutableDictionary * _requestHeaders;
    NSData * _responseBody;
    NSDictionary * _responseHeaders;
    NSNumber * _token;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, retain) NSString *bagKey;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) NSData *requestBody;
@property (nonatomic, retain) NSMutableDictionary *requestHeaders;
@property (nonatomic, retain) NSData *responseBody;
@property (nonatomic, retain) NSDictionary *responseHeaders;
@property (nonatomic, retain) NSNumber *token;

+ (id)incrementToken;

- (void).cxx_destruct;
- (id)DSID;
- (id)bagKey;
- (id /* block */)completionHandler;
- (id)error;
- (id)init:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)requestBody;
- (void)requestCompleted:(id)arg1 responseHeaders:(id)arg2 error:(id)arg3;
- (id)requestHeaders;
- (id)responseBody;
- (id)responseHeaders;
- (void)send;
- (void)sendJingleRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setBagKey:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDSID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRequestBody:(id)arg1;
- (void)setRequestHeaders:(id)arg1;
- (void)setResponseBody:(id)arg1;
- (void)setResponseHeaders:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
