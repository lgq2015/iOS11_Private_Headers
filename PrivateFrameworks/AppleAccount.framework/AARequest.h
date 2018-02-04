/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AARequest : NSObject <NSURLSessionDataDelegate> {
    struct OpaqueCFHTTPCookieStorage { } * _cookieStorage;
    NSDictionary * _customHeaders;
    bool  _flushCache;
    id /* block */  _handler;
    NSString * _initialURLString;
    NSString * _machineId;
    NSString * _oneTimePassword;
}

@property (nonatomic, copy) NSDictionary *customHeaders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool flushCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSURLRequest *urlRequest;

+ (id)protocolVersion;
+ (Class)responseClass;

- (void).cxx_destruct;
- (void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)bodyDictionary;
- (id)customHeaders;
- (void)dealloc;
- (bool)flushCache;
- (id)initWithURLString:(id)arg1;
- (void)performRequestWithHandler:(id /* block */)arg1;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)setCustomHeaders:(id)arg1;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (void)setFlushCache:(bool)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;

@end
