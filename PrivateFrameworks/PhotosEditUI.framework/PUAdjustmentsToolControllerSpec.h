/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUAdjustmentsToolControllerSpec : PUPhotoEditToolControllerSpec

@property (nonatomic, readonly) long long visualSliderThumbnailCount;
@property (nonatomic, readonly) double visualSliderThumbnailLongSide;
@property (nonatomic, readonly) double visualSliderThumbnailShortSide;

- (id)newModeBarView;
- (double)standardBottomBarHeight;
- (long long)visualSliderThumbnailCount;
- (double)visualSliderThumbnailLongSide;
- (double)visualSliderThumbnailShortSide;

@end
