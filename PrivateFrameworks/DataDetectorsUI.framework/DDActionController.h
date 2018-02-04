/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDActionController : NSObject <DDActionDelegate, UIPopoverPresentationControllerDelegate> {
    UIAlertController * _alertController;
    UIView * _baseView;
    DDAction * _currentAction;
    UIViewController * _currentBaseViewController;
    NSString * _idsListenerID;
    <DDDetectionControllerInteractionDelegate> * _interactionDelegate;
    UIWindow * _originalWindow;
    UIViewController * _presentedViewController;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, retain) UIView *baseView;
@property (retain) DDAction *currentAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <DDDetectionControllerInteractionDelegate> *interactionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_didDismissActionViewController;
- (void)_dismissCurrentViewControllerOurselves;
- (void)_presentController:(id)arg1;
- (void)_presentCurrentViewControllerOurselves;
- (void)_willPresentViewController;
- (void)action:(id)arg1 becameCancellable:(bool)arg2;
- (void)action:(id)arg1 viewControllerReady:(id)arg2;
- (void)actionDidFinish:(id)arg1;
- (bool)actionIsCancellable;
- (id)actionsForURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (id)actionsForURL:(id)arg1 result:(struct __DDResult { }*)arg2 enclosingResult:(struct __DDResult { }*)arg3 context:(id)arg4;
- (id)alertController;
- (id)baseView;
- (void)cancelAction;
- (id)currentAction;
- (void)dealloc;
- (id)defaultActionForURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (void)dismissCurrentController;
- (bool)facetimeAvailable;
- (void)failedToPrepareViewControllerForAction:(id)arg1;
- (id)init;
- (id)interactionDelegate;
- (bool)isPerformingAction;
- (bool)isPresentingInPopover;
- (void)performAction:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)setAlertController:(id)arg1;
- (void)setBaseView:(id)arg1;
- (void)setCurrentAction:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)tellDelegateActionDidFinish;
- (void)viewControllerRequiresModalInPopover:(bool)arg1;

@end
