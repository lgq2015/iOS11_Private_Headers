/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTIconSettings : _UISettings {
    double  _alphaStrength;
    bool  _on;
    double  _radiusStrength;
}

@property (nonatomic) double alphaStrength;
@property (nonatomic) bool on;
@property (nonatomic) double radiusStrength;

+ (id)archivedSettingsGroup;

- (double)alphaStrength;
- (bool)on;
- (double)radiusStrength;
- (void)setAlphaStrength:(double)arg1;
- (void)setDefaultValues;
- (void)setOn:(bool)arg1;
- (void)setRadiusStrength:(double)arg1;
- (id)settingsHUDConfiguration;
- (void)settingsResetByHUD;

@end
