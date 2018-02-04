/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKImageWell : UIButton {
    UIView * __containerView;
    NSMutableArray * __dimmingViewQueue;
    UIImageView * __maskImageView;
    UIImageView * __thumbnailImageView;
    NSString * __uuid;
    long long  _cameraOrientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) NSMutableArray *_dimmingViewQueue;
@property (nonatomic, readonly) UIImageView *_maskImageView;
@property (nonatomic, readonly) UIImageView *_thumbnailImageView;
@property (setter=_setUuid:, nonatomic, retain) NSString *_uuid;
@property (nonatomic) long long cameraOrientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_affineTransformForImageOrientation:(long long)arg1;
- (void)_commonCMKImageWellInitialization;
- (id)_containerView;
- (id)_dimmingViewQueue;
- (id)_maskImage;
- (id)_maskImageView;
- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_removeFirstDimmingView;
- (void)_setUuid:(id)arg1;
- (id)_thumbnailImageView;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (id)_uuid;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (long long)cameraOrientation;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)prepareForThumbnailUpdateFromCapture;
- (void)recoverFromFailedThumbnailUpdate;
- (void)setCameraOrientation:(long long)arg1;
- (void)setCameraOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setThumbnailImage:(id)arg1 animated:(bool)arg2;
- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(bool)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

@end
