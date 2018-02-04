/* made by EzioChiu.
 */

@protocol MFDropTargetDelegate <NSObject>

@optional

- (bool)dropTarget:(MFDropTarget *)arg1 canDropDraggedItemsAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (long long)dropTarget:(MFDropTarget *)arg1 dataOwnerForSession:(id <UIDropSession>)arg2;
- (void)dropTarget:(MFDropTarget *)arg1 didDropDragItems:(NSArray *)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)dropTarget:(MFDropTarget *)arg1 dragDidMoveToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)dropTarget:(MFDropTarget *)arg1 dragEnteredAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)dropTargetDragExited:(MFDropTarget *)arg1;

@end
