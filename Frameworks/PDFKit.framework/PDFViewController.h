/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFViewController : NSObject {
    PDFViewControllerPrivate * _private;
}

- (void).cxx_destruct;
- (id)_annotationAtGesture:(id)arg1;
- (id)_annotationFollowing:(id)arg1 wrapAround:(bool)arg2;
- (id)_annotationPreceding:(id)arg1 wrapAround:(bool)arg2;
- (int)_canLollipopDrag:(id)arg1;
- (bool)_canWordDrag:(id)arg1;
- (void)_clearSelection;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPageView:(id)arg2;
- (id)_getPagePoint:(struct CGPoint { double x1; double x2; }*)arg1 forGesture:(id)arg2;
- (void)_handleAnnotation:(id)arg1;
- (void)_hideTextSelectionMenu;
- (void)_postAnnotationNotification:(id)arg1;
- (bool)_shouldHandleAnnotation:(id)arg1;
- (void)_showTextSelectionMenu;
- (void)_updateLollipopDrag:(id)arg1;
- (void)_updateState:(int)arg1 forGesture:(id)arg2;
- (void)_updateWordDrag:(id)arg1;
- (void)activateNextAnnotation:(bool)arg1;
- (void)clearSelection;
- (void)dealloc;
- (void)handleGesture:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (bool)isDraggingLollipop;
- (bool)isTouchingLollipop:(id)arg1;
- (void)setActiveSelection:(id)arg1;
- (void)showTextSelectionMenu:(bool)arg1;

@end
