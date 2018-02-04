/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCameraViewControllerContainerView : UIView {
    UIView * _additionalContentView;
    UIView * _customOverlayView;
    UIView * _viewfinderView;
}

@property (nonatomic, retain) UIView *additionalContentView;
@property (nonatomic, retain) UIView *customOverlayView;
@property (nonatomic, retain) UIView *viewfinderView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_commonCAMCameraViewControllerContainerViewInitialization;
- (id)additionalContentView;
- (id)customOverlayView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAdditionalContentView:(id)arg1;
- (void)setCustomOverlayView:(id)arg1;
- (void)setViewfinderView:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)verifyViewOrdering;
- (id)viewfinderView;

@end
