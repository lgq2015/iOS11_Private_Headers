/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKComposedImageBrush : GKImageBrush {
    UIImage * _backgroundImage;
    UIImage * _maskImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _maskInsets;
    UIImage * _overlayImage;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIImage *maskImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } maskInsets;
@property (nonatomic, retain) UIImage *overlayImage;

- (id)backgroundImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)maskImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })maskInsets;
- (id)overlayImage;
- (double)scaleForInput:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setMaskImage:(id)arg1;
- (void)setMaskInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOverlayImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;

@end
