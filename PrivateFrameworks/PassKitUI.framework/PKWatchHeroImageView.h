/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKWatchHeroImageView : UIView <PKHeroImageView> {
    UIImageView * _bridgeWallpaperImageView;
    UIImageView * _watchView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCompactWatch;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bridgeHeroImage;
- (id)_bridgeWallpaperImage;
- (struct CGSize { double x1; double x2; })_heroBackgroundImageSize;
- (struct CGSize { double x1; double x2; })_heroWatchImageSize;
- (id)_resizeImage:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_watchDeviceImage;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCompactWatch;
- (void)layoutSubviews;

@end
