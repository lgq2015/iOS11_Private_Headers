/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUProgressIndicatorView : UIView {
    long long  __currentState;
    double  __timestampBeganShowing;
    _UIBackdropView * _backgroundView;
    NSArray * _backgroundViewConstraints;
    id /* block */  _completionHandler;
    double  _currentProgress;
    bool  _isDeterminate;
    NSArray * _labelAndPieProgressConstraints;
    NSArray * _labelAndSpinnerConstraints;
    NSString * _localizedMessage;
    UILabel * _messageLabel;
    NSArray * _messageLabelConstraints;
    PLRoundProgressView * _pieProgressView;
    NSArray * _pieProgressViewConstraints;
    bool  _showsBackground;
    UIActivityIndicatorView * _spinnerView;
    NSArray * _spinnerViewConstraints;
    long long  _style;
    bool  _wantsAnimatedHide;
    bool  _wantsImmediateHide;
}

@property (setter=_setCurrentState:, nonatomic) long long _currentState;
@property (setter=_setTimestampBeganShowing:, nonatomic) double _timestampBeganShowing;
@property (nonatomic) double currentProgress;
@property (setter=setDeterminate:, nonatomic) bool isDeterminate;
@property (nonatomic, copy) NSString *localizedMessage;
@property (getter=isShowingProgress, nonatomic, readonly) bool showingProgress;
@property (nonatomic) bool showsBackground;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (long long)_currentState;
- (void)_endShowingProgressIfReady;
- (void)_handleBeginShowingAnimated:(bool)arg1 wasImmediate:(bool)arg2;
- (id)_newBackdropBackgroundView;
- (void)_setCurrentState:(long long)arg1;
- (void)_setTimestampBeganShowing:(double)arg1;
- (double)_timestampBeganShowing;
- (void)_updatePieProgress;
- (void)_updateProgressViewsAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_updateProgressViewsWithAnimation:(long long)arg1 completion:(id /* block */)arg2;
- (void)_updateSubviewsOrdering;
- (void)beginShowingProgressImmediately:(bool)arg1 animated:(bool)arg2;
- (double)currentProgress;
- (void)endShowingProgressImmediately:(bool)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDeterminate;
- (bool)isShowingProgress;
- (id)localizedMessage;
- (void)setCurrentProgress:(double)arg1;
- (void)setDeterminate:(bool)arg1;
- (void)setLocalizedMessage:(id)arg1;
- (void)setShowsBackground:(bool)arg1;
- (bool)showsBackground;
- (long long)style;
- (void)updateConstraints;

@end
