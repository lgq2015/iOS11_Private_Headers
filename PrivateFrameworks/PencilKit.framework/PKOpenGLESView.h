/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKOpenGLESView : UIView {
    PKInternalDrawingView * _drawingView;
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedPixelSize;
    bool  _isFixedPixelSize;
    bool  _isWideGamut;
}

@property (nonatomic) PKInternalDrawingView *drawingView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fixedPixelSize;
@property (nonatomic, readonly) CAEAGLLayer *glLayer;
@property (nonatomic, readonly) bool isFixedPixelSize;
@property (nonatomic, readonly) bool isWideGamut;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)drawingView;
- (struct CGSize { double x1; double x2; })fixedPixelSize;
- (id)glLayer;
- (void)initLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andPixelSize:(struct CGSize { double x1; double x2; })arg2 isWideGamut:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isWideGamut:(bool)arg2;
- (bool)isAccessibilityElement;
- (bool)isFixedPixelSize;
- (bool)isWideGamut;
- (id)pkaxScrollHint;
- (void)setDrawingView:(id)arg1;

@end
