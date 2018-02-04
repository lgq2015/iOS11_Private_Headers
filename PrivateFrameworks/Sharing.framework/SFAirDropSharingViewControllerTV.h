/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropSharingViewControllerTV : UIViewController <SFAirDropActivityViewControllerDelegate, UIViewControllerTransitioningDelegate> {
    SFAirDropActivityViewController * _airDropActivityControllerViewController;
    NSArray * _itemsToShare;
    id /* block */  completionHandler;
}

@property (nonatomic, retain) SFAirDropActivityViewController *airDropActivityControllerViewController;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *itemsToShare;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callCompletionHandlerWithError:(id)arg1;
- (void)_handleMenuButton:(id)arg1;
- (id)airDropActivityControllerViewController;
- (void)airDropActivityDidFailToStartTransfer;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityDoneButtonPressed;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(id /* block */)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id /* block */)completionHandler;
- (id)initWithSharingItems:(id)arg1;
- (id)itemsToShare;
- (id)preferredFocusEnvironments;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setAirDropActivityControllerViewController:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setItemsToShare:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
