/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityPresentingViewController : UIViewController {
    UIWindow * _presentationWindow;
}

- (void).cxx_destruct;
- (void)_cleanUpPresentationWindow;
- (void)_voiceOverStatusChanged;
- (void)dealloc;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)loadView;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
