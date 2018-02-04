/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKZoomSliderView : UIView {
    bool  _active;
    UIView * _knob;
    NSLayoutConstraint * _knobCenterYConstraint;
    double  _lastTrackShadowImageScale;
    UIImageView * _shadowImageView;
    double  _zoomFraction;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) double zoomFraction;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setZoomFraction:(double)arg1;
- (void)updateConstraints;
- (double)zoomFraction;

@end
