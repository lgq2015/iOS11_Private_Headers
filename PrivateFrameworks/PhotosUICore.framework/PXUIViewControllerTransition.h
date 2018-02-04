/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    id  __pauseToken;
    UIPercentDrivenInteractiveTransition * _interactionController;
    bool  _interactive;
    UIViewController * _internalDetailViewController;
    UIViewController * _internalMasterViewController;
    PXRegionOfInterest * _masterRegionOfInterest;
    long long  _state;
    bool  _supportsEdgeSwipeBackGesture;
    id /* block */  _transitionAnimationCompletionHandler;
    id /* block */  _transitionAnimationStartHandler;
    bool  _transitioningToDetail;
}

@property (setter=_setPauseToken:, nonatomic, retain) id _pauseToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIViewController *detailViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPercentDrivenInteractiveTransition *interactionController;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic, retain) PXRegionOfInterest *masterRegionOfInterest;
@property (nonatomic, readonly) UIViewController *masterViewController;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsEdgeSwipeBackGesture;
@property (getter=isTransitioningToDetail, nonatomic) bool transitioningToDetail;

+ (bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;

- (void).cxx_destruct;
- (id)_pauseToken;
- (void)_setPauseToken:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)detailViewController;
- (void)didEndTransition;
- (id)init;
- (id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
- (void)installTransitionAnimationCompletionHandler:(id /* block */)arg1;
- (void)installTransitionAnimationStartHandler:(id /* block */)arg1;
- (id)interactionController;
- (bool)isInteractive;
- (bool)isTransitioningToDetail;
- (id)masterRegionOfInterest;
- (id)masterViewController;
- (void)setMasterRegionOfInterest:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTransitioningToDetail:(bool)arg1;
- (long long)state;
- (bool)supportsEdgeSwipeBackGesture;
- (double)transitionDuration:(id)arg1;
- (void)willEndTransition;
- (void)willStartTransition;

@end
