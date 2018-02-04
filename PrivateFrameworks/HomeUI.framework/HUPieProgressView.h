/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPieProgressView : UIView {
    <HUPieProgressViewDelegate> * _delegate;
    bool  _hidesWhenStopped;
    double  _indeterminateExpectedDuration;
    double  _indeterminateMaxProgress;
    bool  _isAnimating;
    CAShapeLayer * _outlineLayer;
    CAShapeLayer * _progressLayer;
    double  _progressLineWidth;
    long long  _style;
}

@property (nonatomic) <HUPieProgressViewDelegate> *delegate;
@property (nonatomic) bool hidesWhenStopped;
@property (nonatomic) double indeterminateExpectedDuration;
@property (nonatomic) double indeterminateMaxProgress;
@property (nonatomic) bool isAnimating;
@property (nonatomic, retain) CAShapeLayer *outlineLayer;
@property (nonatomic) double outlineLineWidth;
@property (nonatomic) double progress;
@property (nonatomic, retain) CAShapeLayer *progressLayer;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)_fadeIn;
- (void)_fadeOut;
- (void)_setDefaults;
- (id)_setupOutlineLayer;
- (id)_setupProgressLayer;
- (void)_updateLayerPaths;
- (void)_updateProgressLayerLineWidth;
- (id)delegate;
- (bool)hidesWhenStopped;
- (double)indeterminateExpectedDuration;
- (double)indeterminateMaxProgress;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (id)outlineLayer;
- (double)outlineLineWidth;
- (double)progress;
- (id)progressLayer;
- (double)progressLineWidth;
- (void)resetProgress;
- (void)setDelegate:(id)arg1;
- (void)setHidesWhenStopped:(bool)arg1;
- (void)setIndeterminateExpectedDuration:(double)arg1;
- (void)setIndeterminateMaxProgress:(double)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setOutlineLayer:(id)arg1;
- (void)setOutlineLineWidth:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressLayer:(id)arg1;
- (void)setProgressLineWidth:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)startWithFuture:(id)arg1;
- (long long)style;
- (void)tintColorDidChange;

@end
