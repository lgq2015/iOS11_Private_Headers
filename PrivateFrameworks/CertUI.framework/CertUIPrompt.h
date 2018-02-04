/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

@interface CertUIPrompt : NSObject {
    NSString * _connectionDisplayName;
    NSString * _host;
    id /* block */  _responseBlock;
    NSString * _service;
    struct __SecTrust { } * _trust;
}

@property (nonatomic, copy) NSString *connectionDisplayName;
@property (nonatomic, retain) NSString *host;
@property (nonatomic, retain) NSString *service;

+ (id)promptQueue;
+ (id)stringForResponse:(int)arg1;

- (void).cxx_destruct;
- (id)_copyPropertiesFromTrust:(struct __SecTrust { }*)arg1;
- (id)_digestFromTrust:(struct __SecTrust { }*)arg1;
- (id)_expirationFromTrust:(struct __SecTrust { }*)arg1;
- (void)_informConsumerOfResponse:(int)arg1;
- (bool)_isRootCertificateFromTrust:(struct __SecTrust { }*)arg1;
- (id)_issuerFromTrust:(struct __SecTrust { }*)arg1;
- (id)_messagingCenter;
- (id)_newUserInfoWithHostname:(id)arg1 trust:(struct __SecTrust { }*)arg2 options:(id)arg3;
- (id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3;
- (id)_purposeFromTrustProperties:(id)arg1;
- (int)_responseFromReplyDict:(id)arg1;
- (int)_sendRemoteMessage;
- (int)_sendRemoteMessageWithPromptOptions:(id)arg1;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust { }*)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (id)_subtitleFromTrust:(struct __SecTrust { }*)arg1;
- (id)_titleFromTrust:(struct __SecTrust { }*)arg1;
- (id)connectionDisplayName;
- (void)dealloc;
- (id)description;
- (id)host;
- (id)service;
- (void)setConnectionDisplayName:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setService:(id)arg1;
- (void)setTrust:(struct __SecTrust { }*)arg1;
- (int)showAndWaitForResponse;
- (void)showPromptWithOptions:(id)arg1 responseBlock:(id /* block */)arg2;
- (void)showPromptWithResponseBlock:(id /* block */)arg1;
- (struct __SecTrust { }*)trust;

@end
