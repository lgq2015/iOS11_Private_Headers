/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSceneSettings : PXSettings {
    bool  _showConfidenceOverlay;
}

@property (nonatomic) bool showConfidenceOverlay;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)setShowConfidenceOverlay:(bool)arg1;
- (bool)showConfidenceOverlay;

@end
