/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer {
    NSSet * _currentTouches;
    bool  _triggered;
}

- (void).cxx_destruct;
- (void)_cancelOtherGestureRecognizersForTouches:(id)arg1;
- (void)_tryToCancelTouches;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
