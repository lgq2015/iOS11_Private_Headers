/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLRequest : NSObject {
    OACredential * _OAuthCredential;
    ACAccount * _account;
    NSString * _applicationID;
    int  _callingPID;
    NSString * _contentType;
    NSString * _multiPartBoundary;
    NSMutableArray * _multiParts;
    unsigned long long  _networkServiceType;
    NSMutableDictionary * _parameters;
    NSData * _payload;
    long long  _requestMethod;
    SLService * _service;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) long long requestMethod;

+ (id)requestForServiceType:(id)arg1 requestMethod:(long long)arg2 URL:(id)arg3 parameters:(id)arg4;

- (void).cxx_destruct;
- (id)OAuthCredential;
- (id)URL;
- (id)_HTTPMethodName;
- (void)_addAuthenticationParameters:(id)arg1;
- (id)_allParameters;
- (void)_appendCoreSig1Signature;
- (id)_commandName;
- (id)_parameterString;
- (id)_preparedURL;
- (bool)_requiresAuthorization;
- (bool)_shouldAppendTencentWeiboParametersToRequest;
- (bool)_shouldRetryAfterCount:(int)arg1 delay:(float*)arg2;
- (id)_urlEncodedString:(id)arg1;
- (id)account;
- (void)addMultiPart:(id)arg1;
- (void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3 filename:(id)arg4;
- (int)callingPID;
- (id)completeMultiParts;
- (id)dictionaryRepresentationForJSONSerialization;
- (id)init;
- (id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4;
- (id)multiPartBodyData;
- (id)multiPartBoundary;
- (id)multiParts;
- (unsigned long long)networkServiceType;
- (id)parameterForKey:(id)arg1;
- (id)parameters;
- (void)performJSONRequestWithHandler:(id /* block */)arg1;
- (void)performJSONRequestWithHandler:(id /* block */)arg1 retryCount:(int)arg2;
- (void)performRequestWithHandler:(id /* block */)arg1;
- (id)preparedURLRequest;
- (void)removeParameterForKey:(id)arg1;
- (long long)requestMethod;
- (void)setAccount:(id)arg1;
- (void)setApplicationID:(id)arg1;
- (void)setCallingPID:(int)arg1;
- (void)setContentType:(id)arg1;
- (void)setMultiPartBoundary:(id)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setOAuthCredential:(id)arg1;
- (void)setParameterValue:(id)arg1 forKey:(id)arg2;
- (void)setPayload:(id)arg1;
- (bool)shouldIncludeParameterString;

@end
