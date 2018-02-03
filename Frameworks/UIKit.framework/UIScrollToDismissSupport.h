/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollToDismissSupport : UIKeyboardMotionSupport <UIScrollViewIntersectionDelegate> {
    bool  _disableInterfaceAutorotation;
    UIScrollView * _scrollViewForTransition;
    UIInputViewSetNotificationInfo * _scrollViewNotificationInfo;
    bool  _scrollViewShowsHorizontalScrollIndicator;
    bool  _scrollViewTransitionFinishing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollViewTransitionPreviousPoint;
}

- (id)cancelNotificationsForMode:(unsigned long long)arg1;
- (void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2;
- (void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)dealloc;
- (void)finishScrollViewTransition;
- (void)finishScrollViewTransitionForController:(id)arg1;
- (void)hideScrollViewHorizontalScrollIndicator:(bool)arg1;
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)setInterfaceAutorotationDisabled:(bool)arg1 forController:(id)arg2;
- (void)updateScrollViewContentInsetBottom:(double)arg1;

@end