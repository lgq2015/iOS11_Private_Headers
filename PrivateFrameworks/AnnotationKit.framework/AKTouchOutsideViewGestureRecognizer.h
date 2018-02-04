/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    NSMutableSet * mTargets;
    UIView * mWatchView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *watchView;

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 watchView:(id)arg3;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setWatchView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)watchView;

@end
