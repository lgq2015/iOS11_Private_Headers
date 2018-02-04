/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFExperimentConfiguration : NSObject <NSCopying, NSSecureCoding> {
    AFExperimentGroup * _controlGroup;
    NSArray * _experimentGroups;
    NSString * _identifier;
    NSString * _salt;
    long long  _type;
    NSString * _version;
}

@property (nonatomic, readonly, copy) AFExperimentGroup *controlGroup;
@property (nonatomic, readonly, copy) NSArray *experimentGroups;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *salt;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)builder;
- (id)controlGroup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentGroups;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 version:(id)arg3 controlGroup:(id)arg4 experimentGroups:(id)arg5 salt:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)salt;
- (long long)type;
- (id)version;

@end
