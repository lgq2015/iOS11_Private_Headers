/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKCalloutBackgroundMaskView : UIView {
    UIMotionEffect * _arrowMotionEffect;
    UIView * _baseView;
    UIImageView * _bottomArrow;
    UIView * _currentArrowContainer;
    UIImageView * _leftArrow;
    UIImageView * _rightArrow;
    UIImageView * _topArrow;
}

@property (nonatomic, copy) UIMotionEffect *arrowMotionEffect;
@property (nonatomic, readonly) UIView *baseView;
@property (nonatomic, readonly) UIImageView *bottomArrow;
@property (nonatomic, readonly) UIView *currentArrowContainer;
@property (nonatomic, readonly) UIImageView *leftArrow;
@property (nonatomic, readonly) UIImageView *rightArrow;
@property (nonatomic, readonly) UIImageView *topArrow;

- (void).cxx_destruct;
- (void)_removeArrows;
- (void)_setupViews;
- (id)arrowMotionEffect;
- (id)baseView;
- (id)bottomArrow;
- (id)currentArrowContainer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftArrow;
- (id)rightArrow;
- (void)setArrowMotionEffect:(id)arg1;
- (id)topArrow;

@end
