/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMShutterButtonRingView : UIView {
    UIColor * _color;
    bool  _showContrastBorder;
    struct CAMShutterButtonSpec { 
        double outerRingDiameter; 
        double outerRingStrokeWidth; 
        double stopSquareSideLength; 
        double stopSquareCornerRadius; 
        double interRingSpacing; 
    }  _spec;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool showContrastBorder;
@property (nonatomic) struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; } spec;

- (void).cxx_destruct;
- (id)color;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })arg1;
- (void)setColor:(id)arg1;
- (void)setShowContrastBorder:(bool)arg1;
- (void)setSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })arg1;
- (bool)showContrastBorder;
- (struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })spec;

@end
