/* made by EzioChiu.
 */

@protocol SUClientInterfaceDelegate <NSObject>

@optional

- (void)clientInterface:(SUClientInterface *)arg1 exitStoreWithReason:(long long)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 hidePreviewOverlayAnimated:(bool)arg2;
- (void)clientInterface:(void *)arg1 overrideCreditCardPresentationFromViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SUClientInterface *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SUCreditCardReaderOutput *, void*
- (void)clientInterface:(SUClientInterface *)arg1 presentDialog:(ISDialog *)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 setStatusBarHidden:(bool)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(SUClientInterface *)arg1 setStatusBarStyle:(long long)arg2 animated:(bool)arg3;
- (void)clientInterface:(SUClientInterface *)arg1 showPreviewOverlayAnimated:(bool)arg2;
- (SUPreviewOverlayViewController *)previewOverlayForClientInterface:(SUClientInterface *)arg1;
- (void)returnToLibraryForClientInterface:(SUClientInterface *)arg1;
- (SUScriptInterface *)scriptInterfaceForClientInterface:(SUClientInterface *)arg1;
- (SUTabBarController *)tabBarControllerForClientInterface:(SUClientInterface *)arg1;

@end
