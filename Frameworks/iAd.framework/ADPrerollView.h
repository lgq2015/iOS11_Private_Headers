/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollView : UIView <ADPrerollBottomBarDelegate, ADPrerollTopBarDelegate, UIGestureRecognizerDelegate> {
    double  _accumulatedViewingTime;
    bool  _barsVisible;
    ADPrerollBottomBar * _bottomBar;
    <ADPrerollViewDelegate> * _delegate;
    bool  _hasAction;
    NSTimer * _passiveWatchingTimer;
    ADPrivacyButton * _privacyButton;
    bool  _skipButtonCountingDown;
    UIImageView * _swooshView;
    ADPrerollTopBar * _topBar;
}

@property (nonatomic) double accumulatedViewingTime;
@property (nonatomic) bool barsVisible;
@property (nonatomic, retain) ADPrerollBottomBar *bottomBar;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADPrerollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *passiveWatchingTimer;
@property (nonatomic, retain) ADPrivacyButton *privacyButton;
@property (nonatomic) bool skipButtonCountingDown;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *swooshView;
@property (nonatomic, retain) ADPrerollTopBar *topBar;

+ (Class)layerClass;

- (void)_firePassiveWatchingTimer:(id)arg1;
- (bool)_layoutForExpandedSize;
- (void)_privacyButtonWasTapped;
- (void)_restartPassiveWatchingTimer;
- (void)_singleTapGestureRecognized:(id)arg1;
- (bool)accessibilityPerformEscape;
- (double)accumulatedViewingTime;
- (void)attachToAVPlayer:(id)arg1 showiAdBrandingSwoosh:(bool)arg2;
- (bool)barsVisible;
- (void)beginCountdown:(double)arg1;
- (id)bottomBar;
- (void)bottomBarActionButtonTapped:(id)arg1;
- (void)bottomBarPauseButtonTapped:(id)arg1;
- (void)bottomBarPlayButtonTapped:(id)arg1;
- (void)bottomBarSkipButtonTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)displayAsPaused:(bool)arg1;
- (void)enablePrivacyButton;
- (void)fadeToBlackWithCompletion:(id /* block */)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)passiveWatchingTimer;
- (id)privacyButton;
- (void)setAccumulatedViewingTime:(double)arg1;
- (void)setBarsVisible:(bool)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)setHasAction:(bool)arg1;
- (void)setPassiveWatchingTimer:(id)arg1;
- (void)setPrivacyButton:(id)arg1;
- (void)setSkipButtonCountingDown:(bool)arg1;
- (void)setSwooshView:(id)arg1;
- (void)setTopBar:(id)arg1;
- (void)shutdown;
- (bool)skipButtonCountingDown;
- (id)swooshView;
- (id)topBar;
- (void)topBarDoneButtonTapped:(id)arg1;
- (void)topBarScaleToFill:(id)arg1;
- (void)topBarScaleToFit:(id)arg1;

@end
