/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFConnectionSettings : NSObject <NSCopying> {
    NSString * _accountIdentifier;
    bool  _allowsTrustPrompt;
    NSString * _certUIService;
    NSArray * _clientCertificates;
    struct __CFString { } * _connectionServiceType;
    NSString * _hostname;
    unsigned int  _portNumber;
    NSString * _serviceName;
    NSString * _sourceApplicationBundleIdentifier;
    bool  _tryDirectSSLConnection;
    bool  _usesOpportunisticSockets;
    bool  _usesSSL;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) bool allowsTrustPrompt;
@property (nonatomic, copy) NSString *certUIService;
@property (nonatomic, copy) NSArray *clientCertificates;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic) unsigned int portNumber;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic) bool tryDirectSSL;
@property (nonatomic) bool usesOpportunisticSockets;
@property (nonatomic) bool usesSSL;

- (id)accountIdentifier;
- (bool)allowsTrustPrompt;
- (id)certUIService;
- (id)clientCertificates;
- (struct __CFString { }*)connectionServiceType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)hostname;
- (unsigned int)portNumber;
- (id)serviceName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAllowsTrustPrompt:(bool)arg1;
- (void)setCertUIService:(id)arg1;
- (void)setClientCertificates:(id)arg1;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (void)setHostname:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setTryDirectSSL:(bool)arg1;
- (void)setUsesOpportunisticSockets:(bool)arg1;
- (void)setUsesSSL:(bool)arg1;
- (id)sourceApplicationBundleIdentifier;
- (bool)tryDirectSSL;
- (bool)usesOpportunisticSockets;
- (bool)usesSSL;

@end
