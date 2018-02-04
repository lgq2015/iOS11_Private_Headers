/* made by EzioChiu.
 */

@protocol CAStateControllerDelegate

@optional

- (void)stateController:(CAStateController *)arg1 didSetStateOfLayer:(CALayer *)arg2;
- (void)stateController:(CAStateController *)arg1 transitionDidStart:(CAStateTransition *)arg2 speed:(float)arg3;
- (void)stateController:(CAStateController *)arg1 transitionDidStop:(CAStateTransition *)arg2 completed:(bool)arg3;

@end
