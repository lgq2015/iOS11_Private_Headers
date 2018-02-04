/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFPublicKey : _SFKey {
    id  _publicKeyInternal;
}

@property (getter=_secKey, nonatomic, readonly) struct __SecKey { }*secKey;

+ (Class)_attributesClass;
+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;

- (void).cxx_destruct;
- (struct __SecKey { }*)_secKey;
- (id)initWithAttributes:(id)arg1;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3;
- (id)initWithSecKey:(struct __SecKey { }*)arg1;

@end
