/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUCropToolControllerSpec : PUPhotoEditToolControllerSpec

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } cropActionButtonSize;
@property (nonatomic, readonly) double cropHandleViewLineMargin;
@property (nonatomic, readonly) double cropHandleViewLineThickness;
@property (nonatomic, readonly) double cropRectMargin;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumCropHandleViewSize;
@property (nonatomic, readonly) double minimumCropInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumCropSize;
@property (nonatomic, readonly) double standardBottomBarWidth;
@property (nonatomic, readonly) double standardSideBarHeight;

- (struct CGSize { double x1; double x2; })cropActionButtonSize;
- (double)cropHandleViewLineMargin;
- (double)cropHandleViewLineThickness;
- (double)cropRectMargin;
- (struct CGSize { double x1; double x2; })minimumCropHandleViewSize;
- (double)minimumCropInset;
- (struct CGSize { double x1; double x2; })minimumCropSize;
- (double)standardBottomBarHeight;
- (double)standardBottomBarWidth;
- (double)standardSideBarHeight;
- (double)standardSideBarWidth;

@end
