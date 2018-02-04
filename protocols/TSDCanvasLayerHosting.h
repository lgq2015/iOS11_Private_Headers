/* made by EzioChiu.
 */

@protocol TSDCanvasLayerHosting <NSObject, TSDErrorPresenter, TSDModalOperationPresenter, TSDMovieCompatibilityAlertPresenter, TSDLayerAndSubviewHosting>

@required

- (bool)becomeFirstResponder;
- (void)canvasDidUpdateRepsFromLayouts;
- (TSDCanvasLayer *)canvasLayer;
- (TSDCanvasView *)canvasView;
- (CALayer *)clippingLayer;
- (TSDInteractiveCanvasController *)interactiveCanvasController;
- (bool)isInFocusedContainer;
- (bool)isViewLoaded;
- (CALayer *)layer;
- (bool)resignFirstResponder;
- (void)setInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (void)teardown;
- (NSUndoManager *)undoManager;
- (void)viewDidLoad;

@optional

- (TSDMacCanvasViewController *)asMacCVC;
- (TSDiOSCanvasViewController *)asiOSCVC;
- (UIViewController *)viewController;

@end
