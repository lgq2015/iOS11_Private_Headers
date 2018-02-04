/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUPinningView : UIView {
    UIView * _containerView;
    UIView * _contentView;
    CALayer * _effectivePinningSourceLayer;
    CALayer * _pinningSourceLayer;
    UIView * _pinningSourceView;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) CALayer *pinningSourceLayer;
@property (nonatomic, retain) UIView *pinningSourceView;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_configureMatchMoveAnimation;
- (void)_prepareForDefaultImageSnapshotNotification:(id)arg1;
- (void)_registerKVOObserversForLayer:(id)arg1;
- (void)_unregisterKVOObserversForLayer:(id)arg1;
- (bool)_updateEffectivePinningSourceView;
- (id)contentView;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pinningSourceLayer;
- (id)pinningSourceView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setContentView:(id)arg1;
- (void)setPinningSourceLayer:(id)arg1;
- (void)setPinningSourceView:(id)arg1;

@end
