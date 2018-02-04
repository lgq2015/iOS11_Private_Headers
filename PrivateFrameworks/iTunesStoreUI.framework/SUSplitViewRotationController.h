/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSplitViewRotationController : SURotationController {
    SURotationController * _firstRotationController;
    UIViewController * _firstViewController;
    SURotationController * _secondRotationController;
    UIViewController * _secondViewController;
}

- (id)_firstRotationController;
- (id)_secondRotationController;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;

@end
