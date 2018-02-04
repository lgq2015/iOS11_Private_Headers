/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteAccountPageViewController : _UIRemoteViewController <SKUIClientAccountPageViewController> {
    SKAccountPageViewController * _accountPageViewController;
}

@property (nonatomic) SKAccountPageViewController *accountPageViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)accountPageViewController;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(id /* block */)arg1;
- (void)overrideRedeemCameraWithCompletion:(id /* block */)arg1;
- (void)setAccountPageViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
