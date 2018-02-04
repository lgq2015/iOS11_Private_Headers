/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSyntheticClickTapGestureRecognizer : UITapGestureRecognizer {
    SEL  _gestureRecognizedAction;
    id  _gestureRecognizedTarget;
    SEL  _resetAction;
    id  _resetTarget;
}

- (void)reset;
- (void)setGestureRecognizedTarget:(id)arg1 action:(SEL)arg2;
- (void)setResetTarget:(id)arg1 action:(SEL)arg2;
- (void)setState:(long long)arg1;

@end
