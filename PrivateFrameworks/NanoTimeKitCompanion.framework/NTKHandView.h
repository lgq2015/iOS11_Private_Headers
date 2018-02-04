/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKHandView : NTKColoringImageView {
    UIColor * _inlayColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _inlayInsets;
    NTKColoringImageView * _inlayView;
    double  _scale;
    UIImage * _shadowImage;
    UIImageView * _shadowImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _shadowInsets;
    bool  _shadowsHidden;
    double  _zRotation;
}

@property (nonatomic, retain) UIColor *inlayColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } inlayInsets;
@property (nonatomic, readonly) NTKColoringImageView *inlayView;
@property (nonatomic) double scale;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } shadowInsets;
@property (nonatomic) bool shadowsHidden;
@property (nonatomic) double zRotation;

+ (id)_resizableInlayImage;

- (void).cxx_destruct;
- (void)_updateShadows;
- (void)_updateTransform;
- (id)initWithImage:(id)arg1;
- (id)inlayColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inlayInsets;
- (id)inlayView;
- (void)layoutSubviews;
- (double)scale;
- (void)setInlayColor:(id)arg1;
- (void)setInlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScale:(double)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setShadowInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShadowsHidden:(bool)arg1;
- (void)setZRotation:(double)arg1;
- (id)shadowImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })shadowInsets;
- (bool)shadowsHidden;
- (double)zRotation;

@end
