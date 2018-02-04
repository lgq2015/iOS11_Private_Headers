/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSetupController : PSRootController {
    UIViewController<PSController> * _parentController;
    PSRootController * _parentRootController;
    NSDictionary * _rootInfo;
}

- (void).cxx_destruct;
- (id)controller;
- (void)dismiss;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (void)handleURL:(id)arg1;
- (id)init;
- (id)parentController;
- (void)popControllerOnParent;
- (bool)popupStyleIsModal;
- (void)pushControllerOnParentWithSpecifier:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setupController;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (void)statusBarWillChangeHeight:(id)arg1;
- (bool)usePopupStyle;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
