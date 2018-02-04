/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUIrisSettings : PXSettings {
    bool  _shouldAlwaysBadge;
    bool  _showStatusBorder;
    bool  _vitalityAllowed;
}

@property (nonatomic) bool shouldAlwaysBadge;
@property (getter=showStatusBorder, nonatomic) bool showStatusBorder;
@property (getter=isVitalityAllowed, nonatomic) bool vitalityAllowed;

+ (id)_photosPlayerRootSettings;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)isVitalityAllowed;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)restoreDefaultValues;
- (void)setDefaultValues;
- (void)setShouldAlwaysBadge:(bool)arg1;
- (void)setShowStatusBorder:(bool)arg1;
- (void)setVitalityAllowed:(bool)arg1;
- (bool)shouldAlwaysBadge;
- (bool)showStatusBorder;

@end
