/* made by EzioChiu.
 */

@protocol WLCardViewDelegate <NSObject>

@optional

- (bool)passView:(PKPassView *)arg1 deleteButtonEnabledForPass:(PKPass *)arg2;
- (void)passView:(PKPassView *)arg1 deleteButtonPressedForPass:(PKPass *)arg2;
- (void)passView:(PKPassView *)arg1 didPresentPassDetailsViewController:(PKBarcodePassDetailViewController *)arg2;
- (void)passView:(PKPassView *)arg1 resizeButtonPressedForPass:(PKPass *)arg2 withBarcode:(bool)arg3;
- (void)passView:(PKPassView *)arg1 willPresentPassDetailsViewController:(PKBarcodePassDetailViewController *)arg2;
- (void)passViewDidBeginAuthenticating:(PKPassView *)arg1;
- (void)passViewDidEndAuthenticating:(PKPassView *)arg1;
- (void)passViewDidResize:(PKPassView *)arg1 animated:(bool)arg2;
- (bool)passViewShouldResize:(PKPassView *)arg1;
- (void)passViewTapped:(PKPassView *)arg1;

@end
