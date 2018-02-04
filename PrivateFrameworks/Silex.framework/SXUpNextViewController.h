/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXUpNextViewController : UIViewController <SXVideoControlItem> {
    UIActivityIndicatorView * _activityIndicator;
    SXVideoButton * _advanceButton;
    <SXUpNextViewControllerDelegate> * _delegate;
    double  _duration;
    SXUpNextItem * _item;
    SXVideoButton * _replayButton;
    SXSkipButton * _skipButton;
    double  _time;
    SXTimeline * _timeline;
    SXUpNextButton * _upNextButton;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) SXVideoButton *advanceButton;
@property (nonatomic, readonly) double autoAppearanceTimeInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXUpNextViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideable;
@property (nonatomic, retain) SXUpNextItem *item;
@property (nonatomic, retain) SXVideoButton *replayButton;
@property (nonatomic, retain) SXSkipButton *skipButton;
@property (readonly) Class superclass;
@property (nonatomic) double time;
@property (nonatomic, retain) SXTimeline *timeline;
@property (nonatomic, retain) SXUpNextButton *upNextButton;
@property (retain) SXUpNextView *view;

- (void).cxx_destruct;
- (id)accessoryViewsConfiguredForItem:(id)arg1;
- (id)activityIndicator;
- (id)advanceButton;
- (double)autoAppearanceTimeInterval;
- (id)delegate;
- (double)duration;
- (void)hide:(bool)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hideable;
- (id)init;
- (bool)isVisible;
- (id)item;
- (void)loadView;
- (void)populateWithItem:(id)arg1;
- (void)replay;
- (id)replayButton;
- (void)scheduleAutoAppearanceOfReplayButton;
- (void)scheduleSkipDurationUpdateWithSeconds:(long long)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setAdvanceButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setItem:(id)arg1;
- (void)setReplayButton:(id)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setTimeline:(id)arg1;
- (void)setUpNextButton:(id)arg1;
- (void)skip;
- (id)skipButton;
- (double)time;
- (id)timeline;
- (id)upNextButton;
- (void)viewDidLoad;

@end
