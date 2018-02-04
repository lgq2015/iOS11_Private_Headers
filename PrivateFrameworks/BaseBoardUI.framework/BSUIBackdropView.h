/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIBackdropView : _UIBackdropView {
    double  _finalScale;
    double  _initialScale;
    double  _rasterizationScale;
    double  _scaleForNoBlur;
    double  _transitionProgress;
}

@property (nonatomic) double rasterizationScale;
@property (nonatomic) double scaleForNoBlur;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

- (void)applySettings:(id)arg1;
- (double)rasterizationScale;
- (double)scaleForNoBlur;
- (void)setRasterizationScale:(double)arg1;
- (void)setScaleForNoBlur:(double)arg1;
- (void)transitionComplete;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

+ (id)sb_backdropViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 privateStyle:(long long)arg2;
+ (id)sb_backdropViewWithPrivateStyle:(long long)arg1;

@end
