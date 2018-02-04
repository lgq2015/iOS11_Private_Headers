/* made by EzioChiu.
 */

@protocol QLItemViewControllerPresentingDelegate

@required

- (bool)isPresentingPreviewItemViewController:(QLItemViewController *)arg1;
- (QLItemPresenterViewController *)itemPresenterViewController;
- (void)previewItemViewController:(QLItemViewController *)arg1 didFailWithError:(NSError *)arg2;

@end
