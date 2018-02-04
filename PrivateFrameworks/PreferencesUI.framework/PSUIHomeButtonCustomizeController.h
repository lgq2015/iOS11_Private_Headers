/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIHomeButtonCustomizeController : UIViewController <PSUICircleSegmentedControlDelegate, SBSHardwareButtonEventConsuming> {
    <PSUIHomeButtonCustomizeControllerDelegate> * _delegate;
    <BSInvalidatable> * _eventConsumerToken;
    bool  _forceFeelValueChanged;
    BFFPaneHeaderView * _headerView;
    UITapGestureRecognizer * _menuButtonRecognizer;
    bool  _reachabilityEnabled;
    PSUICircleSegmentedControl * _segmentedControl;
    bool  _usesDoneButton;
    bool  _visible;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSUIHomeButtonCustomizeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool usesDoneButton;

- (void).cxx_destruct;
- (void)_makeConstraints;
- (void)_updateDetailText;
- (void)barButtonTapped;
- (void)consumeDoublePressDownForButtonKind:(long long)arg1;
- (void)consumeTriplePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)getForceFeel;
- (id)init;
- (void)loadView;
- (void)segmentedControl:(id)arg1 didSelectSegmentAtIndex:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForceFeel:(unsigned long long)arg1;
- (void)setListeningForHomeButtonPresses:(bool)arg1;
- (void)setUsesDoneButton:(bool)arg1;
- (bool)usesDoneButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willBecomeActive;
- (void)willResignActive;

@end
