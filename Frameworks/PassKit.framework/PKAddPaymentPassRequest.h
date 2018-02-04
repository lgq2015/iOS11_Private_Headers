/* made by EzioChiu
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAddPaymentPassRequest : NSObject <NSSecureCoding> {
    NSData * _FPInfo;
    NSData * _activationData;
    NSData * _encryptedPassData;
    NSString * _encryptionVersion;
    NSData * _ephemeralPublicKey;
    NSString * _hostApplicationIdentifier;
    NSString * _hostApplicationVersion;
    NSString * _issuerIdentifier;
    NSData * _nonce;
    NSData * _publicKeyHash;
    NSData * _wrappedKey;
}

@property (nonatomic, copy) NSData *FPInfo;
@property (nonatomic, copy) NSData *activationData;
@property (nonatomic, copy) NSData *encryptedPassData;
@property (nonatomic, copy) NSString *encryptionVersion;
@property (nonatomic, copy) NSData *ephemeralPublicKey;
@property (nonatomic, copy) NSString *hostApplicationIdentifier;
@property (nonatomic, copy) NSString *hostApplicationVersion;
@property (nonatomic, copy) NSString *issuerIdentifier;
@property (nonatomic, copy) NSData *nonce;
@property (nonatomic, copy) NSData *publicKeyHash;
@property (nonatomic, copy) NSData *wrappedKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FPInfo;
- (bool)_hasRequiredFields:(bool)arg1;
- (bool)_hasRequiredThirdPartyFields:(bool)arg1;
- (id)activationData;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPassData;
- (id)encryptionVersion;
- (id)ephemeralPublicKey;
- (id)hostApplicationIdentifier;
- (id)hostApplicationVersion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)issuerIdentifier;
- (id)nonce;
- (id)publicKeyHash;
- (void)setActivationData:(id)arg1;
- (void)setEncryptedPassData:(id)arg1;
- (void)setEncryptionVersion:(id)arg1;
- (void)setEphemeralPublicKey:(id)arg1;
- (void)setFPInfo:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setHostApplicationVersion:(id)arg1;
- (void)setIssuerIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setWrappedKey:(id)arg1;
- (id)wrappedKey;

@end
