/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolIPSec : NEVPNProtocol {
    long long  _authenticationMethod;
    bool  _extendedAuthPasswordPrompt;
    NSArray * _legacyExchangeMode;
    NSArray * _legacyProposals;
    NSString * _localIdentifier;
    NSString * _remoteIdentifier;
    NEKeychainItem * _sharedSecretKeychainItem;
    NSData * _sharedSecretReference;
    bool  _useExtendedAuthentication;
}

@property long long authenticationMethod;
@property bool extendedAuthPasswordPrompt;
@property (copy) NSArray *legacyExchangeMode;
@property (copy) NSArray *legacyProposals;
@property (copy) NSString *localIdentifier;
@property (copy) NSString *remoteIdentifier;
@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSData *sharedSecretReference;
@property bool useExtendedAuthentication;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authenticationMethod;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __SCNetworkInterface { }*)createInterface;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)extendedAuthPasswordPrompt;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)legacyExchangeMode;
- (id)legacyProposals;
- (id)localIdentifier;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { }*)arg1;
- (bool)needToUpdateKeychain;
- (id)remoteIdentifier;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(bool)arg2;
- (void)setAuthenticationMethod:(long long)arg1;
- (void)setExtendedAuthPasswordPrompt:(bool)arg1;
- (void)setLegacyExchangeMode:(id)arg1;
- (void)setLegacyProposals:(id)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (void)setRemoteIdentifier:(id)arg1;
- (void)setSharedSecretKeychainItem:(id)arg1;
- (void)setSharedSecretReference:(id)arg1;
- (void)setUseExtendedAuthentication:(bool)arg1;
- (id)sharedSecretKeychainItem;
- (id)sharedSecretReference;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (bool)useExtendedAuthentication;

@end
