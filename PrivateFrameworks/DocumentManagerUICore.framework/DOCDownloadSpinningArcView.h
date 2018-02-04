/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCDownloadSpinningArcView : UIView {
    DOCDownloadCircleView * _circleView;
    double  _emptyAngle;
    bool  _isSpinning;
    double  _lineWidth;
    double  _spinDuration;
}

@property (nonatomic) DOCDownloadCircleView *circleView;
@property (nonatomic) double emptyAngle;
@property (nonatomic) bool isSpinning;
@property (nonatomic) double lineWidth;
@property (nonatomic) double spinDuration;

- (void).cxx_destruct;
- (void)addRotationAnimationWithDuration:(double)arg1;
- (id)circleView;
- (double)emptyAngle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isSpinning;
- (double)lineWidth;
- (void)removeRotationAnimation;
- (void)setCircleView:(id)arg1;
- (void)setEmptyAngle:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsSpinning:(bool)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setSpinDuration:(double)arg1;
- (void)setupCirclePendingView;
- (double)spinDuration;
- (void)startSpinning;
- (void)stopSpinning;

@end
