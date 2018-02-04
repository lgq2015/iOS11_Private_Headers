/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFRSAEncryptionOperation : NSObject <_SFEncryptionOperation> {
    id  _rsaEncryptionOperationInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) _SFRSAKeySpecifier *encryptionKeySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_defaultEncryptionOperation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)encryptionKeySpecifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (void)setEncryptionKeySpecifier:(id)arg1;

@end
