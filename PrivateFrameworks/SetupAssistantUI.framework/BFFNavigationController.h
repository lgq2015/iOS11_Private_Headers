/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFNavigationController : PSRootController {
    bool  _animating;
    NSMutableDictionary * _appearanceHandlers;
    UIColor * _backgroundColor;
    NSMutableArray * _observers;
    long long  _pendingShowOperation;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic, retain) UIColor *backgroundColor;

- (void).cxx_destruct;
- (bool)_canShowTextServices;
- (void)_reapObservers;
- (bool)_usesTransitionController;
- (void)addDelegateObserver:(id)arg1;
- (id)backgroundColor;
- (id)init;
- (bool)isAnimating;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)pushViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)removeDelegateObserver:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;

@end
