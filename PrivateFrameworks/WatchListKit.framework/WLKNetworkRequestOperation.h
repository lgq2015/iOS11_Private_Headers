/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKNetworkRequestOperation : NSOperation {
    NSDictionary * _additionalHeaderFields;
    bool  _allowAuthentication;
    NSURL * _baseURL;
    NSString * _callerOverride;
    <WLKNetworkRequestOperationDelegate> * _delegate;
    bool  _encodeQueryParams;
    NSString * _endpoint;
    NSError * _error;
    SSURLConnectionResponse * _fullResponse;
    NSString * _httpMethod;
    NSString * _identifier;
    unsigned long long  _numRetries;
    NSDictionary * _queryParameters;
    id /* block */  _requestCompletionBlock;
    bool  _requiresMescal;
    id  _response;
    NSString * _serverRouteKey;
    NSDictionary * _serverRouteReplacements;
    double  _timeout;
}

@property (nonatomic, retain) NSDictionary *additionalHeaderFields;
@property (nonatomic) bool allowAuthentication;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, retain) NSString *callerOverride;
@property (nonatomic, readonly, copy) NSURL *defaultBaseURL;
@property (nonatomic) <WLKNetworkRequestOperationDelegate> *delegate;
@property (nonatomic) bool encodeQueryParams;
@property (nonatomic, readonly, copy) NSString *endpoint;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, copy) SSURLConnectionResponse *fullResponse;
@property (nonatomic, readonly, copy) NSString *httpMethod;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *queryParameters;
@property (nonatomic, copy) id /* block */ requestCompletionBlock;
@property (nonatomic) bool requiresMescal;
@property (nonatomic, readonly) id response;
@property (nonatomic, readonly, copy) NSString *serverRouteKey;
@property (nonatomic, readonly, copy) NSDictionary *serverRouteReplacements;
@property (nonatomic, readonly) double timeout;

+ (id)_defaultBaseURL;
+ (unsigned long long)preferredCachePolicy;

- (void).cxx_destruct;
- (void)_didFailWithError:(id)arg1;
- (void)_didFinishWithResponse:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_finishWithResponse:(id)arg1;
- (id)_requestPropertiesWithAPIEndpoint:(id)arg1 baseURL:(id)arg2 queryParameters:(id)arg3 httpMethod:(id)arg4 additionalHeaderFields:(id)arg5;
- (id)_requestPropertiesWithServerRouteKey:(id)arg1 queryParameters:(id)arg2 additionalHeaderFields:(id)arg3;
- (id)_runNetworkOperationAndReturnError:(id*)arg1;
- (id)additionalHeaderFields;
- (bool)allowAuthentication;
- (id)baseURL;
- (id)callerOverride;
- (id)defaultBaseURL;
- (id)delegate;
- (void)didFail;
- (void)didFinish;
- (bool)encodeQueryParams;
- (id)endpoint;
- (id)error;
- (id)fullResponse;
- (id)httpMethod;
- (id)identifier;
- (id)init;
- (id)initWithEndpoint:(id)arg1 queryParameters:(id)arg2;
- (id)initWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3;
- (id)initWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 timeout:(double)arg4;
- (id)initWithServerRouteKey:(id)arg1;
- (id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2;
- (id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 queryParameters:(id)arg3;
- (id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 queryParameters:(id)arg3 timeout:(double)arg4;
- (void)main;
- (id)queryParameters;
- (id /* block */)requestCompletionBlock;
- (bool)requiresMescal;
- (id)response;
- (id)responseProcessor;
- (id)serverRouteKey;
- (id)serverRouteReplacements;
- (void)setAdditionalHeaderFields:(id)arg1;
- (void)setAllowAuthentication:(bool)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCallerOverride:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncodeQueryParams:(bool)arg1;
- (void)setRequestCompletionBlock:(id /* block */)arg1;
- (void)setRequiresMescal:(bool)arg1;
- (double)timeout;

@end
