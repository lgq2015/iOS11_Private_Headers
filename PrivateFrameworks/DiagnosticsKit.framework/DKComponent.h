/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKComponent : NSObject <NSCopying, NSSecureCoding> {
    struct NSDictionary { Class x1; } * _attributes;
    DKComponentIdentity * _identity;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) DKComponentIdentity *identity;

+ (id)componentWithIdentity:(id)arg1 attributes:(struct NSDictionary { Class x1; }*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct NSDictionary { Class x1; }*)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryForJSON;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1 attributes:(struct NSDictionary { Class x1; }*)arg2;

@end
