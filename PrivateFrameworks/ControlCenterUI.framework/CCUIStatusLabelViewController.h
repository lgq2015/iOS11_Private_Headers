/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIStatusLabelViewController : UIViewController {
    unsigned long long  _currentStatusLabelIndex;
    <CCUIStatusLabelViewControllerDelegate> * _delegate;
    unsigned long long  _presentationState;
    NSTimer * _presentationTimer;
    NSArray * _statusLabels;
    CCUIStatusUpdateQueue * _updateQueue;
}

@property (nonatomic) <CCUIStatusLabelViewControllerDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) unsigned long long verticalAlignment;

- (void).cxx_destruct;
- (void)_advancePresentationState;
- (unsigned long long)_advancePresentationStateFromFadeIn;
- (unsigned long long)_advancePresentationStateFromFadeOut;
- (unsigned long long)_advancePresentationStateFromPresenting;
- (unsigned long long)_advancePresentationStateFromReady;
- (void)_fadeInStatusLabel:(id)arg1;
- (void)_fadeOutStatusLabel:(id)arg1;
- (void)_notifyDelegateDidFinishStatusUpdates;
- (void)_notifyDelegateWillBeginStatusUpdates;
- (void)_resetPresentationStateAnimated:(bool)arg1;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVerticalAlignment:(unsigned long long)arg1;
- (unsigned long long)verticalAlignment;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
