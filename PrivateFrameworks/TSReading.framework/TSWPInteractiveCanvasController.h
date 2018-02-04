/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPInteractiveCanvasController : TSDInteractiveCanvasController <TSDGestureTarget> {
    bool  _isTearingDown;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool handleHyperlinksWithTextGRs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEditingText;
@property (nonatomic, readonly) bool isTearingDown;
@property (nonatomic, readonly) bool shouldRespondToTextHyperlinks;
@property (readonly) Class superclass;

- (id)_repsForStorage:(id)arg1;
- (id)beginEditingRepForInfo:(id)arg1;
- (bool)canHandleGesture:(id)arg1;
- (bool)cellCommentsAllowedForTableInfo:(id)arg1;
- (void)closeHyperlinkPopover;
- (id)closestRepToPoint:(struct CGPoint { double x1; double x2; })arg1 forStorage:(id)arg2;
- (void)dealloc;
- (void)didBeginEditingText;
- (void)gestureSequenceDidEnd;
- (void)gestureSequenceWillBegin;
- (bool)handleGesture:(id)arg1;
- (bool)handleHyperlinksWithTextGRs;
- (bool)hyperlinkPopoverIsShown;
- (id)infosToHideForCanvas:(id)arg1;
- (bool)isEditingText;
- (bool)isTearingDown;
- (id)p_beginEditingPossibleContainedRep:(id*)arg1;
- (void)p_recursivelyAddRep:(id)arg1 forStorage:(id)arg2 toSet:(id)arg3;
- (id)p_repsForStorage:(id)arg1;
- (void)resumeEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2;
- (void)setShowsComments:(bool)arg1;
- (bool)shouldRespondToTextHyperlinks;
- (void)showHyperlinkInfoForField:(id)arg1 inRep:(id)arg2 openInEditMode:(bool)arg3;
- (bool)showsComments;
- (bool)suppressDoubleTapForSelection;
- (void)teardown;
- (bool)textRepsShouldTileAggressively;
- (void)willEndEditingText;
- (void)withLayoutForModel:(id)arg1 withSelection:(id)arg2 performBlock:(id /* block */)arg3;
- (bool)zoomColumnAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
