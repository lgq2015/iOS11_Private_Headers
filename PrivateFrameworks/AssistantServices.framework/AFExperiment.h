/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFExperiment : NSObject <AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, NSCopying, NSSecureCoding> {
    NSString * _configurationIdentifier;
    NSString * _configurationVersion;
    NSString * _deploymentGroupIdentifier;
    NSDictionary * _deploymentGroupProperties;
    long long  _deploymentReason;
}

@property (nonatomic, readonly, copy) NSString *configurationIdentifier;
@property (nonatomic, readonly, copy) NSString *configurationVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *deploymentGroupIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *deploymentGroupProperties;
@property (nonatomic, readonly) long long deploymentReason;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool playsSessionInactiveSoundForSiriVOXSounds;
@property (nonatomic, readonly) bool playsSound;
@property (nonatomic, readonly) bool playsTwoShotSoundForSiriVOXSounds;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)builder;
- (id)configurationIdentifier;
- (id)configurationVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deploymentGroupIdentifier;
- (id)deploymentGroupProperties;
- (long long)deploymentReason;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationIdentifier:(id)arg1 configurationVersion:(id)arg2 deploymentGroupIdentifier:(id)arg3 deploymentGroupProperties:(id)arg4 deploymentReason:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (void)logExperimentExposureForSiriVOXSounds;
- (void)logExperimentExposureForTapToSiriBehavior;
- (bool)playsSessionInactiveSoundForSiriVOXSounds;
- (bool)playsSound;
- (bool)playsTwoShotSoundForSiriVOXSounds;

@end
