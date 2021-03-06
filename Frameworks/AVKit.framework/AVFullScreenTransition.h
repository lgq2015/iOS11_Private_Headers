/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVFullScreenTransition : AVTransition {
    AVFullScreenViewController * _fullScreenViewController;
    bool  _prefersBlackBarsDuringTransition;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameOfPlayerViewControllerWithinContainerView;
@property (nonatomic, readonly) AVFullScreenViewController *fullScreenViewController;
@property (nonatomic) bool prefersBlackBarsDuringTransition;

- (void).cxx_destruct;
- (id)backgroundView;
- (void)completeTransition:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPlayerViewControllerWithinContainerView;
- (id)fullScreenViewController;
- (bool)prefersBlackBarsDuringTransition;
- (void)setPrefersBlackBarsDuringTransition:(bool)arg1;
- (bool)shouldRemovePresentingView;
- (void)transitionWillBegin;

@end
