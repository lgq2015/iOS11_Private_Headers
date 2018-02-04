/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIConfirmationHUDTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (readonly) Class superclass;

- (void)animateTransition:(id)arg1;
- (bool)isPresenting;
- (void)setPresenting:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
