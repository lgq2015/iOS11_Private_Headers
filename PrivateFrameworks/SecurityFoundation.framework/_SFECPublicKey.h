/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFECPublicKey : _SFPublicKey {
    id  _ecPublicKeyInternal;
}

@property (nonatomic, readonly, copy) _SFECKeySpecifier *keySpecifier;
@property (readonly) NSData *x963Data;

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey { }*)arg1;

- (void).cxx_destruct;
- (id)performWithCCKey:(id /* block */)arg1;
- (id)x963Data;

@end
