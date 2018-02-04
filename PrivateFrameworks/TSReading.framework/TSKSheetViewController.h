/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKSheetViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    NSLayoutConstraint * _contentVerticalConstraint;
    UIViewController * _contentViewController;
    <TSKSheetViewControllerDelegate> * _delegate;
    bool  _isContentHidden;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TSKSheetViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animateDismissWithContext:(id)arg1;
- (void)animateShowWithContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)delegate;
- (void)didTapView;
- (void)dismissSheetAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithContentViewController:(id)arg1 allowTapsOutsideContentView:(bool)arg2;
- (bool)isShowingForTransitionContext:(id)arg1;
- (void)setContentHidden:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (double)transitionDuration:(id)arg1;

@end
