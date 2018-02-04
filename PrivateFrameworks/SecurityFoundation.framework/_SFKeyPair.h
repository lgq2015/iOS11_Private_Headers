/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFKeyPair : _SFKey {
    id  _keyPairInternal;
}

@property (nonatomic, readonly, copy) NSString *privateKeyDomain;
@property (nonatomic, readonly) _SFPublicKey *publicKey;
@property (getter=_secKey, nonatomic, readonly) struct __SecKey { }*secKey;

+ (Class)_attributesClass;
+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;

- (void).cxx_destruct;
- (struct __SecKey { }*)_secKey;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(struct NSString { Class x1; }*)arg2;
- (id)initWithAttributes:(id)arg1;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3;
- (id)initWithSecKey:(struct __SecKey { }*)arg1;
- (struct NSString { Class x1; }*)privateKeyDomain;
- (id)publicKey;

@end
