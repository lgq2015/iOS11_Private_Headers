/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKNFCPayload : NSObject <NSCopying, NSSecureCoding> {
    NSData * _encryptionPublicKeyData;
    NSString * _message;
}

@property (nonatomic, copy) NSData *encryptionPublicKeyData;
@property (nonatomic, copy) NSString *message;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionPublicKeyData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNFCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPKNFCPayload:(id)arg1;
- (id)message;
- (void)setEncryptionPublicKeyData:(id)arg1;
- (void)setMessage:(id)arg1;

@end
