/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPearlCrossHairsView : UIView {
    UIImageView * _arrowView;
    PSPearlCrossHairsRenderingView * _renderingView;
}

- (void).cxx_destruct;
- (void)_setPitch:(double)arg1 yaw:(double)arg2 animated:(bool)arg3;
- (double)angleFromDirection:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)nudgeCrossHairsAtAngle:(double)arg1 completion:(id /* block */)arg2;
- (void)nudgeInDirection:(unsigned long long)arg1 smallNudgePeak:(id /* block */)arg2 largeNudgePeak:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)setPitch:(double)arg1 yaw:(double)arg2;

@end
