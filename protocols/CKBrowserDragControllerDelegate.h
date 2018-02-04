/* made by EzioChiu.
 */

@protocol CKBrowserDragControllerDelegate <NSObject>

@required

- (bool)dragManager:(CKBrowserDragManager *)arg1 canPeelItem:(id)arg2;
- (bool)dragManager:(CKBrowserDragManager *)arg1 canRotateItem:(id)arg2;
- (bool)dragManager:(CKBrowserDragManager *)arg1 canScaleItem:(id)arg2;
- (void)dragManager:(CKBrowserDragManager *)arg1 didDragItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3;
- (void)dragManager:(CKBrowserDragManager *)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4;
- (bool)dragManager:(CKBrowserDragManager *)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4;

@optional

- (id /* block */)commitBlockForItem:(void *)arg1; // needs 1 arg types, found 8: id /* block */, struct CGPoint { double x1; double x2; }, double, double, void*, id, SEL, UIView<CKBrowserItem> *
- (void)dragManager:(CKBrowserDragManager *)arg1 didBeginDraggingItem:(id)arg2;
- (void)dragManager:(CKBrowserDragManager *)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4 wasCancelled:(bool*)arg5;

@end
