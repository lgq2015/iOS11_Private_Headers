/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    long long  _diffieHellmanGroup;
    long long  _encryptionAlgorithm;
    long long  _integrityAlgorithm;
    int  _lifetimeMinutes;
}

@property long long diffieHellmanGroup;
@property long long encryptionAlgorithm;
@property long long integrityAlgorithm;
@property int lifetimeMinutes;

+ (bool)supportsSecureCoding;

- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (long long)diffieHellmanGroup;
- (void)encodeWithCoder:(id)arg1;
- (long long)encryptionAlgorithm;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)integrityAlgorithm;
- (int)lifetimeMinutes;
- (void)setDiffieHellmanGroup:(long long)arg1;
- (void)setEncryptionAlgorithm:(long long)arg1;
- (void)setIntegrityAlgorithm:(long long)arg1;
- (void)setLifetimeMinutes:(int)arg1;

@end
