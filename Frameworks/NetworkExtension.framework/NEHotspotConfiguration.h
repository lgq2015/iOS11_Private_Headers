/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHotspotConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _SSID;
    NEHotspotEAPSettings * _eapSettings;
    NEHotspotHS20Settings * _hs20Settings;
    bool  _joinOnce;
    NSNumber * _lifeTimeInDays;
    NSString * _passphrase;
    long long  _securityType;
}

@property (readonly) NSString *SSID;
@property (copy) NEHotspotEAPSettings *eapSettings;
@property (copy) NEHotspotHS20Settings *hs20Settings;
@property bool joinOnce;
@property (copy) NSNumber *lifeTimeInDays;
@property (copy) NSString *passphrase;
@property long long securityType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SSID;
- (void)buildClientTrustChainReference:(struct __SecIdentity { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eapSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)hs20Settings;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHS20Settings:(id)arg1 eapSettings:(id)arg2;
- (id)initWithSSID:(id)arg1;
- (id)initWithSSID:(id)arg1 eapSettings:(id)arg2;
- (id)initWithSSID:(id)arg1 passphrase:(id)arg2 isWEP:(bool)arg3;
- (bool)isWEPPassphraseValid;
- (bool)joinOnce;
- (id)lifeTimeInDays;
- (id)passphrase;
- (long long)securityType;
- (void)setEapSettings:(id)arg1;
- (void)setHs20Settings:(id)arg1;
- (void)setJoinOnce:(bool)arg1;
- (void)setLifeTimeInDays:(id)arg1;
- (void)setPassphrase:(id)arg1;
- (void)setSecurityType:(long long)arg1;
- (long long)validate;
- (bool)validateClientTrustChainReference;
- (bool)validateEAPSettings;
- (bool)validateSecIdentityReference:(bool)arg1;
- (bool)validateTrustedServerCertificateReferences;

@end
