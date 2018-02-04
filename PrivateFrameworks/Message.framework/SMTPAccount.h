/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface SMTPAccount : DeliveryAccount {
    MFSMTPConnection * _connection;
    Class  _deliveryClass;
    long long  _lastTimerSetTime;
    unsigned int  _supportsOutboxCopy;
    unsigned int  _supportsPipelining;
    NSTimer * _timer;
    unsigned int  _useCellDataOnly;
}

+ (id)accountTypeString;
+ (unsigned int)defaultPortNumber;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (bool)isCommonPortNumber:(unsigned int)arg1;
+ (void*)legacyKeychainProtocol;
+ (id)newDefaultInstance;
+ (void)registerAppleServiceDeliveryHostname:(id)arg1;
+ (id)saslProfileName;

- (id)_defaultSettingsWithPort:(unsigned int)arg1 useSSL:(bool)arg2 directSSL:(bool)arg3;
- (bool)_isAppleServiceDeliveryHostname:(id)arg1;
- (bool)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)alternateConnectionSettings;
- (id)authenticatedConnection:(bool)arg1;
- (bool)canBeFallbackAccount;
- (id)certUIService;
- (void)checkInConnection:(id)arg1;
- (Class)connectionClass;
- (void)connectionExpired:(id)arg1;
- (struct __CFString { }*)connectionServiceType;
- (id)connectionSettingsForAuthentication:(bool)arg1 secure:(id)arg2 insecure:(id)arg3;
- (id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2;
- (void)dealloc;
- (Class)deliveryClass;
- (void)disconnect:(id)arg1;
- (id)errorForResponse:(id)arg1;
- (id)insecureConnectionSettings;
- (id)preferredAuthScheme;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (id)secureConnectionSettings;
- (id)serviceName;
- (void)setDeliveryClass:(Class)arg1;
- (void)setPreferredAuthScheme:(id)arg1;
- (void)setSupportsOutboxCopy:(bool)arg1;
- (void)setSupportsPipelining:(bool)arg1;
- (void)setTimer;
- (bool)supportsOutboxCopy;
- (bool)supportsPipelining;

@end
