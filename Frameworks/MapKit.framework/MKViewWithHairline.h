/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKViewWithHairline : UIView {
    UIView * _bottomHairline;
    UIColor * _hairlineColor;
    double  _leftHairlineInset;
    double  _rightHairlineInset;
    UIView * _topHairline;
}

@property (getter=isBottomHairlineHidden, nonatomic) bool bottomHairlineHidden;
@property (nonatomic, retain) UIColor *hairlineColor;
@property (nonatomic) double leftHairlineInset;
@property (nonatomic) double rightHairlineInset;
@property (getter=isTopHairlineHidden, nonatomic) bool topHairlineHidden;

- (void).cxx_destruct;
- (id)hairlineColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBottomHairlineHidden;
- (bool)isTopHairlineHidden;
- (void)layoutSubviews;
- (double)leftHairlineInset;
- (double)rightHairlineInset;
- (void)setBottomHairlineHidden:(bool)arg1;
- (void)setHairlineColor:(id)arg1;
- (void)setLeftHairlineInset:(double)arg1;
- (void)setRightHairlineInset:(double)arg1;
- (void)setTopHairlineHidden:(bool)arg1;

@end
