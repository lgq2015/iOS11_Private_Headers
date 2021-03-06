/* made by EzioChiu.
 */

@protocol PKSelectionDelegate

@required

- (void)applyCommand:(PKModifyStrokesCommand *)arg1 toDrawing:(PKDrawing *)arg2;
- (struct CGPoint { double x1; double x2; })closestPointForPastedSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withDrawing:(id*)arg2;
- (bool)containsDrawingUUID:(NSUUID *)arg1;
- (void)didBeginDraggingSelection;
- (PKDrawing *)drawingForLiveAttachment;
- (PKDrawing *)drawingForSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (PKDrawing *)drawingForUUID:(NSUUID *)arg1;
- (SEL)drawingUndoSelector;
- (id)drawingUndoTarget;
- (PKInternalDrawingView *)drawingView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageTransform;
- (bool)isValidDropPointForStrokes:(struct CGPoint { double x1; double x2; })arg1;
- (bool)liveDrawingIsAtEndOfDocument;
- (struct CGPoint { double x1; double x2; })pointInStrokeSpace:(struct CGPoint { double x1; double x2; })arg1 inDrawing:(PKDrawing *)arg2;
- (void)resetSelectedStrokeStateForRenderer;
- (void)scrollContent:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })selectionDrawingTransform;
- (struct CGPoint { double x1; double x2; })selectionOffsetForDrawing:(PKDrawing *)arg1;
- (void)selectionRefreshWithChangeToDrawings:(NSArray *)arg1;
- (UIView *)selectionTopView;
- (void)toggleSelectedStrokes:(NSArray *)arg1 hide:(bool)arg2 inDrawing:(PKDrawing *)arg3;
- (NSUndoManager *)undoManager;

@end
