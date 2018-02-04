/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMImageWell : UIButton <UIGestureRecognizerDelegate> {
    UIView * __containerView;
    NSMutableArray * __dimmingViewQueue;
    UIImage * __placeholderImage;
    UIImage * __thumbnailImage;
    UIImageView * __thumbnailImageView;
    NSString * __uuid;
    long long  _cameraOrientation;
    long long  _layoutStyle;
    bool  _scaledForInteraction;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
    bool  _thumbnailImageHidden;
}

@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) NSMutableArray *_dimmingViewQueue;
@property (setter=_setPlaceholderImage:, nonatomic, retain) UIImage *_placeholderImage;
@property (setter=_setThumbnailImage:, nonatomic, retain) UIImage *_thumbnailImage;
@property (nonatomic, readonly) UIImageView *_thumbnailImageView;
@property (setter=_setUuid:, nonatomic, retain) NSString *_uuid;
@property (nonatomic) long long cameraOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (getter=isScaledForInteraction, nonatomic) bool scaledForInteraction;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (getter=isThumbnailImageHidden, nonatomic) bool thumbnailImageHidden;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_affineTransformForImageOrientation:(long long)arg1;
- (void)_commonCAMImageWellInitializationWithLayoutStyle:(long long)arg1;
- (id)_containerView;
- (double)_cornerRadiusForLayoutStyle:(long long)arg1;
- (id)_dimmingViewQueue;
- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)_placeholderImage;
- (id)_placeholderImageForLayoutStyle:(long long)arg1;
- (void)_removeFirstDimmingView;
- (void)_setPlaceholderImage:(id)arg1;
- (void)_setThumbnailImage:(id)arg1;
- (void)_setUuid:(id)arg1;
- (id)_thumbnailImage;
- (id)_thumbnailImageView;
- (void)_updateForLayoutStyle;
- (void)_updateThumbnailImageAnimated:(bool)arg1;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (id)_uuid;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scaledForInteraction:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (long long)cameraOrientation;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isScaledForInteraction;
- (bool)isThumbnailImageHidden;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (void)prepareForThumbnailUpdateFromCapture;
- (void)recoverFromFailedThumbnailUpdate;
- (void)setCameraOrientation:(long long)arg1;
- (void)setCameraOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setLayoutStyle:(long long)arg1;
- (void)setScaledForInteraction:(bool)arg1;
- (void)setScaledForInteraction:(bool)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setThumbnailImage:(id)arg1 animated:(bool)arg2;
- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(bool)arg3;
- (void)setThumbnailImageHidden:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (id)thumbnailImage;

@end
