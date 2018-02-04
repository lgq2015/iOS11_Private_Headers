/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    <UIViewControllerContextTransitioning> * _context;
    UIPanGestureRecognizer * _gestureRecognizer;
    bool  _interactive;
    UIView * _presentedView;
    bool  _reversed;
}

@property (nonatomic, retain) <UIViewControllerContextTransitioning> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPanGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool interactive;
@property (nonatomic, retain) UIView *presentedView;
@property bool reversed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)context;
- (id)gestureRecognizer;
- (bool)interactive;
- (id)presentedView;
- (bool)reversed;
- (void)setContext:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setPresentedView:(id)arg1;
- (void)setReversed:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
