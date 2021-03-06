/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFExperimentContext : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _experimentsByConfigurationIdentifier;
}

@property (nonatomic, readonly) AFExperiment<AFExperimentForSiriVOXSounds> *experimentForSiriVOXSounds;
@property (nonatomic, readonly) AFExperiment<AFExperimentForSiriVOXTapToSiriBehavior> *experimentForSiriVOXTapToSiriBehavior;
@property (nonatomic, readonly, copy) NSDictionary *experimentsByConfigurationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)builder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentForSiriVOXSounds;
- (id)experimentForSiriVOXTapToSiriBehavior;
- (id)experimentsByConfigurationIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperimentsByConfigurationIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
