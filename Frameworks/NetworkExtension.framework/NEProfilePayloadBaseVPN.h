/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase {
    NSString * _password;
    bool  _passwordRequired;
    NSString * _pin;
    bool  _pinRequired;
    NSString * _proxyPassword;
    bool  _proxyPasswordRequired;
    NSString * _proxyUserName;
    bool  _proxyUserNameRequired;
    NSString * _sharedSecret;
    bool  _sharedSecretRequired;
    NSString * _userName;
    bool  _userNameRequired;
}

@property (nonatomic, copy) NSString *password;
@property (nonatomic) bool passwordRequired;
@property (nonatomic, copy) NSString *pin;
@property (nonatomic) bool pinRequired;
@property (nonatomic, copy) NSString *proxyPassword;
@property (nonatomic) bool proxyPasswordRequired;
@property (nonatomic, copy) NSString *proxyUserName;
@property (nonatomic) bool proxyUserNameRequired;
@property (nonatomic, copy) NSString *sharedSecret;
@property (nonatomic) bool sharedSecretRequired;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic) bool userNameRequired;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)extractPayloadContents:(id)arg1;
- (void)extractPayloadContentsHTTPProxy:(id)arg1;
- (void)extractPayloadContentsPIN:(id)arg1;
- (void)extractPayloadContentsSharedSecret:(id)arg1;
- (void)extractPayloadContentsUserNamePassword:(id)arg1;
- (id)getPreprocessedPayloadContents;
- (id)initWithPayload:(id)arg1;
- (id)password;
- (bool)passwordRequired;
- (id)pin;
- (bool)pinRequired;
- (id)proxyPassword;
- (bool)proxyPasswordRequired;
- (id)proxyUserName;
- (bool)proxyUserNameRequired;
- (void)setPassword:(id)arg1;
- (void)setPasswordRequired:(bool)arg1;
- (void)setPin:(id)arg1;
- (void)setPinRequired:(bool)arg1;
- (bool)setPostprocessedPayloadContents:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (void)setProxyPasswordRequired:(bool)arg1;
- (void)setProxyUserName:(id)arg1;
- (void)setProxyUserNameRequired:(bool)arg1;
- (void)setSharedSecret:(id)arg1;
- (void)setSharedSecretRequired:(bool)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserNameRequired:(bool)arg1;
- (id)sharedSecret;
- (bool)sharedSecretRequired;
- (id)userName;
- (bool)userNameRequired;
- (id)validatePayload;

@end
