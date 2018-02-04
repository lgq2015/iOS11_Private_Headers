/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowSettings : PXSettings {
    bool  _allowUserInteractivity;
    OKProducerPreset * _currentPreset;
    NSString * _currentPresetUniqueIdentifier;
    double  _interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
    double  _interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
    double  _interactiveTransitionFingerTrackingBoxRadiusMaxValue;
    double  _interactiveTransitionFingerTrackingBoxRadiusMinValue;
    double  _interactiveTransitionProgressThresholdDefaultValue;
    double  _interactiveTransitionProgressThresholdIncrementValue;
    double  _interactiveTransitionProgressThresholdMaxValue;
    double  _interactiveTransitionProgressThresholdMinValue;
    double  _interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
    double  _interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
    double  _interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
    double  _interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
    bool  _slideshowSettingsEnableFullscreenSupport;
}

@property (nonatomic) bool allowUserInteractivity;
@property (nonatomic, retain) OKProducerPreset *currentPreset;
@property (nonatomic, retain) NSString *currentPresetUniqueIdentifier;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMaxValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMinValue;
@property (nonatomic) double interactiveTransitionProgressThresholdDefaultValue;
@property (nonatomic) double interactiveTransitionProgressThresholdIncrementValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMaxValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMinValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
@property (nonatomic) bool slideshowSettingsEnableFullscreenSupport;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)allowUserInteractivity;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentPreset;
- (id)currentPresetUniqueIdentifier;
- (double)interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
- (double)interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
- (double)interactiveTransitionFingerTrackingBoxRadiusMaxValue;
- (double)interactiveTransitionFingerTrackingBoxRadiusMinValue;
- (double)interactiveTransitionProgressThresholdDefaultValue;
- (double)interactiveTransitionProgressThresholdIncrementValue;
- (double)interactiveTransitionProgressThresholdMaxValue;
- (double)interactiveTransitionProgressThresholdMinValue;
- (double)interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
- (double)interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
- (double)interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
- (double)interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)removeTransitionTimingCustomizationsFromUserDefaults;
- (void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
- (void)saveInteractiveSlideshowSettingsInUserDefaults;
- (void)setAllowUserInteractivity:(bool)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setCurrentPresetUniqueIdentifier:(id)arg1;
- (void)setDefaultPresetTransitionValues;
- (void)setDefaultValues;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusDefaultValue:(double)arg1;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusIncrementValue:(double)arg1;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusMaxValue:(double)arg1;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusMinValue:(double)arg1;
- (void)setInteractiveTransitionProgressThresholdDefaultValue:(double)arg1;
- (void)setInteractiveTransitionProgressThresholdIncrementValue:(double)arg1;
- (void)setInteractiveTransitionProgressThresholdMaxValue:(double)arg1;
- (void)setInteractiveTransitionProgressThresholdMinValue:(double)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue:(double)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue:(double)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMaxValue:(double)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMinValue:(double)arg1;
- (void)setSlideshowSettingsEnableFullscreenSupport:(bool)arg1;
- (bool)slideshowSettingsEnableFullscreenSupport;
- (bool)transitionSettingsAreDefaults;

@end
