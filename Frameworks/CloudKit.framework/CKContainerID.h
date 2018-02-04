/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerIdentifier;
    long long  _environment;
}

@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) long long environment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)environment;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
