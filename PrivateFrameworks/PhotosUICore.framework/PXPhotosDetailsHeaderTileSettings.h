/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsHeaderTileSettings : PXSettings {
    double  _aspectRatio;
    double  _fakeMiroViewAspectRatio;
    bool  _fakeMiroViewController;
    double  _fakeMiroViewLoadingDuration;
    bool  _forceMiroCompelling;
    double  _maximumAbsoluteHeight;
    double  _maximumHeightRelativeToScreenHeight;
    double  _movieLessTVHeight;
    bool  _showAlways;
    bool  _showSlideshow;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) double fakeMiroViewAspectRatio;
@property (nonatomic) bool fakeMiroViewController;
@property (nonatomic) double fakeMiroViewLoadingDuration;
@property (nonatomic) bool forceMiroCompelling;
@property (nonatomic) double maximumAbsoluteHeight;
@property (nonatomic) double maximumHeightRelativeToScreenHeight;
@property (nonatomic) double movieLessTVHeight;
@property (nonatomic) bool showAlways;
@property (nonatomic) bool showSlideshow;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)aspectRatio;
- (double)fakeMiroViewAspectRatio;
- (bool)fakeMiroViewController;
- (double)fakeMiroViewLoadingDuration;
- (bool)forceMiroCompelling;
- (double)maximumAbsoluteHeight;
- (double)maximumHeightRelativeToScreenHeight;
- (double)movieLessTVHeight;
- (id)parentSettings;
- (void)setAspectRatio:(double)arg1;
- (void)setDefaultValues;
- (void)setFakeMiroViewAspectRatio:(double)arg1;
- (void)setFakeMiroViewController:(bool)arg1;
- (void)setFakeMiroViewLoadingDuration:(double)arg1;
- (void)setForceMiroCompelling:(bool)arg1;
- (void)setMaximumAbsoluteHeight:(double)arg1;
- (void)setMaximumHeightRelativeToScreenHeight:(double)arg1;
- (void)setMovieLessTVHeight:(double)arg1;
- (void)setShowAlways:(bool)arg1;
- (void)setShowSlideshow:(bool)arg1;
- (bool)showAlways;
- (bool)showSlideshow;

@end
