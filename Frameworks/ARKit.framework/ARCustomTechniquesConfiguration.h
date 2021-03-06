/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCustomTechniquesConfiguration : ARConfiguration {
    NSArray * _techniques;
}

@property (nonatomic, copy) NSArray *techniques;

+ (id)new;

- (void).cxx_destruct;
- (void)configureRecordingTechnique;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setCustomSensors:(id)arg1;
- (void)setTechniques:(id)arg1;
- (id)techniques;

@end
