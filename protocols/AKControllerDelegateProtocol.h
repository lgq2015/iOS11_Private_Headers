/* made by EzioChiu.
 */

@protocol AKControllerDelegateProtocol <NSObject>

@required

- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (void)installDrawingGestureRecognizer:(UIGestureRecognizer *)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (NSData *)newContentSnapshotPDFDataIncludingAdornments:(bool)arg1 atScale:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(AKController *)arg5;
- (UIViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;
- (NSUndoManager *)undoManagerForAnnotationController:(AKController *)arg1;
- (void)uninstallDrawingGestureRecognizer:(UIGestureRecognizer *)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (void)updateDrawingGestureRecognizer:(UIGestureRecognizer *)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(bool)arg3 forAnnotationController:(AKController *)arg4;

@optional

- (NSIndexSet *)characterIndexesForQuadPoints:(NSArray *)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (void)clearHighlightableSelectionForAnnotationController:(AKController *)arg1;
- (void)controller:(AKController *)arg1 didPlaceSingleShotAnnotation:(AKAnnotation *)arg2 onPageModelController:(AKPageModelController *)arg3;
- (void)controller:(AKController *)arg1 willPlaceSingleShotAnnotation:(AKAnnotation *)arg2 onProposedPageModelController:(id*)arg3;
- (NSArray *)controller:(AKController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)controllerDidEnterToolMode:(AKController *)arg1;
- (void)controllerDidExitToolMode:(AKController *)arg1;
- (bool)controllerShouldDetectFormElements:(AKController *)arg1;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillEnterToolMode:(AKController *)arg1;
- (void)controllerWillExitToolMode:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (bool)hasHighlightableSelectionForAnnotationController:(AKController *)arg1;
- (NSIndexSet *)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (CALayer *)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (void)placeAuxiliaryView:(UIView *)arg1 forAnnotationController:(AKController *)arg2;
- (void)positionSketchOverlay:(UIView *)arg1 forAnnotationController:(AKController *)arg2;
- (NSArray *)quadPointsForCharacterIndexes:(NSIndexSet *)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (void)removeAuxiliaryView:(UIView *)arg1 forAnnotationController:(AKController *)arg2;
- (void)setAllowsNativeRenderingOfHighlightableSelection:(bool)arg1 forAnnotationController:(AKController *)arg2;
- (bool)shouldPlaceFormElementAtPoint:(struct CGPoint { double x1; double x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (bool)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectOfOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;

@end
