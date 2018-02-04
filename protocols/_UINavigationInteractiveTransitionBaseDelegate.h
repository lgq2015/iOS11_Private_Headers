/* made by EzioChiu.
 */

@protocol _UINavigationInteractiveTransitionBaseDelegate <NSObject>

@required

- (UIPanGestureRecognizer *)gestureRecognizerForInteractiveTransition:(_UINavigationInteractiveTransitionBase *)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (bool)interactiveTransition:(_UINavigationInteractiveTransitionBase *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;
- (bool)interactiveTransition:(_UINavigationInteractiveTransitionBase *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg3;
- (bool)shouldBeginInteractiveTransition:(_UINavigationInteractiveTransitionBase *)arg1;
- (void)startInteractiveTransition:(_UINavigationInteractiveTransitionBase *)arg1;

@end
