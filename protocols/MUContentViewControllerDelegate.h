/* made by EzioChiu.
 */

@protocol MUContentViewControllerDelegate <NSObject>

@required

- (NSArray *)annotationControllerOfContentViewController:(MUContentViewController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forContentViewController:(MUContentViewController *)arg2;
- (void)positionSketchOverlay:(UIView *)arg1 forContentViewController:(MUContentViewController *)arg2;
- (NSUndoManager *)undoManagerForContentViewController:(MUContentViewController *)arg1;

@optional

- (bool)contentViewController:(MUPDFContentViewController *)arg1 shouldHandleURL:(NSURL *)arg2;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (UIViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;

@end
