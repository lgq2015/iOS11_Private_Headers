/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXViewControllerPinchTransitionSettings : PXSettings {
    bool  _allowPinchTransitions;
    double  _backgroundParallax;
    double  _backgroundScale;
    double  _dimmingOpacity;
    double  _dimmingWhite;
    double  _shadowOpacity;
    double  _shadowRadius;
    double  _transitionDuration;
}

@property (nonatomic) bool allowPinchTransitions;
@property (nonatomic) double backgroundParallax;
@property (nonatomic) double backgroundScale;
@property (nonatomic) double dimmingOpacity;
@property (nonatomic) double dimmingWhite;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double transitionDuration;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowPinchTransitions;
- (double)backgroundParallax;
- (double)backgroundScale;
- (double)dimmingOpacity;
- (double)dimmingWhite;
- (id)parentSettings;
- (void)setAllowPinchTransitions:(bool)arg1;
- (void)setBackgroundParallax:(double)arg1;
- (void)setBackgroundScale:(double)arg1;
- (void)setDefaultValues;
- (void)setDimmingOpacity:(double)arg1;
- (void)setDimmingWhite:(double)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setTransitionDuration:(double)arg1;
- (double)shadowOpacity;
- (double)shadowRadius;
- (double)transitionDuration;

@end
