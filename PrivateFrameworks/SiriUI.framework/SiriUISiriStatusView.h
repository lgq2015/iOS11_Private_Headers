/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, SiriUISiriStatusViewProtocol, UIGestureRecognizerDelegate> {
    <SiriUISiriStatusViewAnimationDelegate> * _animationDelegate;
    UIButton * _button;
    SiriUIConfiguration * _configuration;
    int  _deferredFlamesViewState;
    <SiriUISiriStatusViewDelegate> * _delegate;
    double  _disabledMicOpacity;
    UIView * _flamesContainerView;
    SUICFlamesView * _flamesView;
    bool  _flamesViewDeferred;
    double  _flamesViewWidth;
    AVPlayerLayer * _glyphLayer;
    AVPlayerLooper * _glyphPlayerLooper;
    AVQueuePlayer * _glyphQueuePlayer;
    UIView * _glyphView;
    bool  _inUITrackingMode;
    AVPlayerItem * _itemToLoop;
    double  _lastStateChangeTime;
    UILongPressGestureRecognizer * _longPressRecognizer;
    long long  _mode;
    bool  _paused;
    UIScreen * _screen;
}

@property (nonatomic) <SiriUISiriStatusViewAnimationDelegate> *animationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUISiriStatusViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double disabledMicOpacity;
@property (nonatomic, readonly) UIView *flamesContainerView;
@property (nonatomic) bool flamesViewDeferred;
@property (nonatomic) double flamesViewWidth;
@property (readonly) unsigned long long hash;
@property (getter=isInUITrackingMode, nonatomic) bool inUITrackingMode;
@property (nonatomic) long long mode;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) double statusViewHeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedInsetRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_animateSiriGlyphHidden:(bool)arg1;
- (void)_attachFlamesViewIfNeeded;
- (void)_createLooperIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_flamesFrame;
- (id)_flamesView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_flamesViewFrame;
- (void)_handleKeyboardDidShowNotification:(id)arg1;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_layoutFlamesViewIfNeeded;
- (void)_micButtonHeld:(id)arg1;
- (void)_micButtonTapped:(id)arg1;
- (void)_setFlamesViewState:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_siriGlyphTappableRect;
- (id)animationDelegate;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (double)disabledMicOpacity;
- (void)fadeOutCurrentAura;
- (id)flamesContainerView;
- (bool)flamesViewDeferred;
- (double)flamesViewWidth;
- (void)forceMicVisible:(bool)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screen:(id)arg2 textInputEnabled:(bool)arg3 configuration:(id)arg4;
- (bool)isInUITrackingMode;
- (void)layoutSubviews;
- (long long)mode;
- (bool)paused;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (void)setAnimationDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledMicOpacity:(double)arg1;
- (void)setFlamesViewDeferred:(bool)arg1;
- (void)setFlamesViewWidth:(double)arg1;
- (void)setInUITrackingMode:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)statusViewHeight;

@end