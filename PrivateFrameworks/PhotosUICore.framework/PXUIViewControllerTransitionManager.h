/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIViewControllerTransitionManager : NSObject <PXVerticalSwipeGestureRecognizerHelperDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    NSMapTable * __lastViewControllerTransitions;
    NSMapTable * __pinchGestureRecognizers;
    NSMutableSet * __pinchTransitions;
    NSMapTable * _panGestureRecognizers;
    PXVerticalSwipeGestureRecognizerHelper * _swipeDownGestureRecognizerHelper;
    NSMutableSet * _swipeDownTransitions;
}

@property (nonatomic, readonly) NSMapTable *_lastViewControllerTransitions;
@property (nonatomic, readonly) NSMapTable *_pinchGestureRecognizers;
@property (nonatomic, readonly) NSMutableSet *_pinchTransitions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *panGestureRecognizers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXVerticalSwipeGestureRecognizerHelper *swipeDownGestureRecognizerHelper;
@property (nonatomic, readonly) NSMutableSet *swipeDownTransitions;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_deepestDescendantOfViewController:(id)arg1 atLocationOfGestureRecognizer:(id)arg2;
- (bool)_getMasterViewController:(out id*)arg1 detailViewController:(out id*)arg2 forPopAtLocationOfGestureRecognizer:(id)arg3;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handlePinchGestureRecognizer:(id)arg1;
- (id)_lastViewControllerTransitions;
- (id)_navigationControllerAtLocationOfGestureRecognizer:(id)arg1;
- (bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)_panGestureRecognizerForViewController:(id)arg1;
- (id)_pinchGestureRecognizerForViewController:(id)arg1;
- (id)_pinchGestureRecognizers;
- (id)_pinchTransitionForGestureRecognizer:(id)arg1;
- (id)_pinchTransitions;
- (id)_swipeDownTransitionForGestureRecognizer:(id)arg1;
- (id)_windowForViewController:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)lastTransitionForViewController:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)panGestureRecognizers;
- (void)setLastTransition:(id)arg1 forViewController:(id)arg2;
- (id)swipeDownGestureRecognizerHelper;
- (id)swipeDownTransitions;
- (bool)verticalSwipeGestureRecognizerHelper:(id)arg1 shouldRecognizeSwipeDownGestureRecognizer:(id)arg2;

@end