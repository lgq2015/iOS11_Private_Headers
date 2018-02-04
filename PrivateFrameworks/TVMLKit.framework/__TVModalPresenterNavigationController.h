/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface __TVModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing> {
    id /* block */  _dismissalBlock;
    bool  _isModalNavVisisble;
    NSMapTable * _popCompletionBlocks;
    NSArray * _previousViewControllers;
    NSMapTable * _pushCompletionBlocks;
    UIViewController * _rootViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, retain) NSArray *previousViewControllers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissForLastViewController;
- (void)_dismissForLastViewController:(bool)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (id /* block */)dismissalBlock;
- (id)initWithRootViewController:(id)arg1;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)popViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)previousViewControllers;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)pushViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)reset;
- (void)setDismissalBlock:(id /* block */)arg1;
- (void)setPreviousViewControllers:(id)arg1;
- (bool)shouldAutorotate;
- (void)updatePreferredFocusedViewStateForFocus:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
