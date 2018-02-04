/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AACertificatePinner : NSObject <NSURLConnectionDelegate, NSURLSessionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isValidCertificateTrust:(struct __SecTrust { }*)arg1 forPinningPolicy:(struct __SecPolicy { }*)arg2;
+ (bool)isSetupServiceHost:(id)arg1;
+ (bool)isValidCertificateTrust:(struct __SecTrust { }*)arg1 forSetupServiceHost:(id)arg2;
+ (id)sharedPinner;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;

@end
