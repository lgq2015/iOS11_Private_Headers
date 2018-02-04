/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController

@property (nonatomic) bool colorSamplingEnabled;

- (void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (long long)_preferredWhitePointAdaptivityStyle;
- (id)_wallPaperPreviewControllerForAsset:(id)arg1;
- (id)_wallPaperPreviewControllerForPhotoIrisAsset:(id)arg1;
- (bool)colorSamplingEnabled;
- (id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4;
- (id)initWithPhoto:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (id)initWithUIImage:(id)arg1 name:(id)arg2;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)setColorSamplingEnabled:(bool)arg1;
- (void)setWallpaperForLocations:(long long)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)wallpaperImage;

@end
