/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKSelectionController : NSObject <UIDropInteractionDelegate_Private> {
    PKStrokeSelection * _currentStrokeSelection;
    UIDropInteraction * _dropInteraction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dropPosition;
    bool  _hasCurrentSelection;
    NSUUID * _previousDrawingUUIDForSelection;
    <PKSelectionDelegate> * _selectionDelegate;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _selectionTransform;
    PKSelectionView * _selectionView;
    int  _selectionViewCount;
}

@property (nonatomic, retain) PKStrokeSelection *currentStrokeSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCurrentSelection;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKSelectionDelegate> *selectionDelegate;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } selectionTransform;
@property (nonatomic, retain) PKSelectionView *selectionView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 removeStrokesFromSource:(bool)arg3;
- (void)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 removeStrokesFromSource:(bool)arg3 createSelection:(bool)arg4;
- (void)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 removeStrokesFromSource:(bool)arg3 createSelection:(bool)arg4 withCompletion:(id /* block */)arg5;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(bool)arg2;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(bool)arg2 withStrokeSelection:(id)arg3;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_moveCurrentStrokeSelectionForDrop:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 offsetInTouchView:(struct CGPoint { double x1; double x2; })arg3;
- (void)_pasteStrokeSelection:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inDrawing:(id)arg3;
- (void)_removeSelectionView;
- (void)_removeSelectionViewWithCompletion:(id /* block */)arg1;
- (id)_rotateImageIfNecessary:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_selectionTransformForStrokes:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 dragOffsetInDragView:(struct CGPoint { double x1; double x2; })arg3 constrainSelection:(bool)arg4 inDrawing:(id)arg5;
- (void)addItemsToPasteboard;
- (void)addViewForStrokeSelection:(id)arg1 isDragSource:(bool)arg2 drawing:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)clearSelectionIfNecessary;
- (void)clearSelectionIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)copy:(id)arg1;
- (id)currentStrokeSelection;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)didSelect:(id)arg1 withLassoStroke:(id)arg2;
- (void)didSelect:(id)arg1 withLassoStroke:(id)arg2 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)didSelect:(id)arg1 withLassoStroke:(id)arg2 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 drawing:(id)arg4;
- (void)didSelectStrokesNotification:(id)arg1;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)duplicate:(id)arg1;
- (void)eraseSelection;
- (bool)hasCurrentSelection;
- (id)initWithSelectionDelegate:(id)arg1;
- (void)moveSelectionViewBasedOnStrokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 drawing:(id)arg2;
- (void)moveStrokeSelectionToLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)newStrokesForSelection:(id)arg1 toDrawing:(id)arg2;
- (void)paste:(id)arg1;
- (void)registerCommandWithUndoManager:(id)arg1;
- (void)resetStrokesAndClearSelectionForceRefresh:(bool)arg1;
- (id)rotateUIImage:(id)arg1 clockwise:(bool)arg2;
- (id)selectionDelegate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })selectionTransform;
- (id)selectionView;
- (void)setCurrentStrokeSelection:(id)arg1;
- (void)setHasCurrentSelection:(bool)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)setSelectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setSelectionView:(id)arg1;
- (struct CGSize { double x1; double x2; })viewSizeForStrokeSelection:(id)arg1;

@end
