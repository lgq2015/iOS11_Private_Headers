/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFKey : NSObject {
    id  _keyInternal;
}

@property (nonatomic, readonly, copy) NSString *keyDomain;
@property (nonatomic, readonly, copy) _SFKeySpecifier *keySpecifier;

+ (Class)_attributesClass;
+ (id)_specifierForSecKey:(struct __SecKey { }*)arg1;

- (void).cxx_destruct;
- (id)initRandomKeyWithSpecifier:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3;
- (struct NSString { Class x1; }*)keyDomain;
- (id)keySpecifier;

@end