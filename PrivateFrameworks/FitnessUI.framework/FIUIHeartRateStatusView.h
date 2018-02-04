/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHeartRateStatusView : UIView {
    FIUIAnimatingSpriteImageView * _animatingImageView;
    bool  _animationsSuspended;
    double  _beatsPerMinute;
    bool  _delayedStartMeasuringAnimation;
    UIImageView * _fullHeartImageView;
    long long  _heartSpriteImageColumnCount;
    long long  _heartSpriteImageFrameCount;
    NSString * _heartSpriteImageName;
    bool  _isBeatingHeart;
    UIImageView * _reloadArrowView;
    UIImageView * _reloadOutlineView;
    NSBundle * _resourceBundle;
    unsigned long long  _state;
}

@property (nonatomic, retain) FIUIAnimatingSpriteImageView *animatingImageView;
@property (nonatomic) bool animationsSuspended;
@property (nonatomic, retain) UIImageView *fullHeartImageView;
@property (nonatomic, retain) UIImageView *reloadArrowView;
@property (nonatomic, retain) UIImageView *reloadOutlineView;

- (void).cxx_destruct;
- (void)_beatFullHeartOnce;
- (void)_finishedHeartbeat;
- (id)_loadHeartMeasuringImage;
- (void)_resumeAnimations;
- (void)_startBeatingHeart;
- (void)_startMeasuringAnimationAnimated:(bool)arg1;
- (void)_suspendAnimations;
- (id)animatingImageView;
- (bool)animationsSuspended;
- (id)fullHeartImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 heartFilledImageName:(id)arg2 heartSpriteImageName:(id)arg3 spriteFrameCount:(long long)arg4 spriteColumnCount:(long long)arg5 resourceBundle:(id)arg6;
- (void)layoutSubviews;
- (id)reloadArrowView;
- (id)reloadOutlineView;
- (void)setAnimatingImageView:(id)arg1;
- (void)setAnimationsSuspended:(bool)arg1;
- (void)setBeatsPerMinute:(double)arg1;
- (void)setFullHeartImageView:(id)arg1;
- (void)setReloadArrowImage:(id)arg1;
- (void)setReloadArrowView:(id)arg1;
- (void)setReloadHeartOutlineImage:(id)arg1;
- (void)setReloadOutlineView:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)unloadAnimationAssets;

@end
