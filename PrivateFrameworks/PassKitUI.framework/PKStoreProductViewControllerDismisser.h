/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKStoreProductViewControllerDismisser : NSObject <SKStoreProductViewControllerDelegate> {
    SKStoreProductViewController * _productViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)attachToProductViewController:(id)arg1;
- (void)dealloc;
- (void)productViewControllerDidFinish:(id)arg1;

@end
