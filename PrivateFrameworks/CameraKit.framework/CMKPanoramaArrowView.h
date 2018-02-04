/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKPanoramaArrowView : UIView {
    UIImageView * _arrowHead;
    UIView * _arrowTail;
    CAShapeLayer * _arrowTailPiecesLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _arrowTailRect;
    double  _currentNormalizedSpeed;
    struct CGPath { } * _currentTailPiecesPath;
    double  _tailBigDelta;
    double  _tailBiggestDelta;
    double  _tailMediumDelta;
    double  _tailSmallDelta;
}

- (void).cxx_destruct;
- (struct CGPath { }*)_newTailPiecesPathOfWidth:(double*)arg1;
- (void)_updateTailWithAnimationDuration:(double)arg1;
- (void)animateArrowSpeedWithNormalizedSpeed:(double)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)resetArrow;

@end
