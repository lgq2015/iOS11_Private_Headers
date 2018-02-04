/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKComponentIdentity : NSObject <NSCopying, NSSecureCoding> {
    struct NSString { Class x1; } * _domain;
    struct NSString { Class x1; } * _identifier;
    struct NSSet { Class x1; } * _resources;
    struct NSString { Class x1; } * _type;
    DKCanonicalVersion * _version;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSSet *resources;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) DKCanonicalVersion *version;

+ (id)componentIdentityWithDomain:(struct NSString { Class x1; }*)arg1 version:(struct NSString { Class x1; }*)arg2 resources:(struct NSSet { Class x1; }*)arg3;
+ (id)componentIdentityWithType:(struct NSString { Class x1; }*)arg1 identifier:(struct NSString { Class x1; }*)arg2 version:(struct NSString { Class x1; }*)arg3 resources:(struct NSSet { Class x1; }*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct NSString { Class x1; }*)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (struct NSString { Class x1; }*)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(struct NSString { Class x1; }*)arg1 version:(struct NSString { Class x1; }*)arg2 resources:(struct NSSet { Class x1; }*)arg3;
- (id)initWithType:(struct NSString { Class x1; }*)arg1 identifier:(struct NSString { Class x1; }*)arg2 version:(struct NSString { Class x1; }*)arg3 resources:(struct NSSet { Class x1; }*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComponentIdentity:(id)arg1;
- (bool)isNewerThan:(id)arg1;
- (struct NSSet { Class x1; }*)resources;
- (struct NSString { Class x1; }*)type;
- (id)version;

@end
