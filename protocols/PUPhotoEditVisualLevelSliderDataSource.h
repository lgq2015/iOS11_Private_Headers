/* made by EzioChiu.
 */

@protocol PUPhotoEditVisualLevelSliderDataSource <NSObject>

@required

- (UIImage *)visualLevelSlider:(PUPhotoEditVisualLevelSlider *)arg1 imageForIntensityIndex:(long long)arg2;
- (long long)visualLevelSliderNumberOfThumbnails:(PUPhotoEditVisualLevelSlider *)arg1;

@end
