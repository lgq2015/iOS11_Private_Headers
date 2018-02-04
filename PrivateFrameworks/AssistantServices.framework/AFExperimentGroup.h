/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFExperimentGroup : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _allocation;
    NSString * _identifier;
    NSDictionary * _properties;
}

@property (nonatomic, readonly) unsigned long long allocation;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)allocation;
- (id)builder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 allocation:(unsigned long long)arg2 properties:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)properties;

@end