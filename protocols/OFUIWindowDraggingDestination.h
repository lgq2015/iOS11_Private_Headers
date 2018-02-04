/* made by EzioChiu.
 */

@protocol OFUIWindowDraggingDestination <NSObject>

@required

- (unsigned long long)draggingDestinationEntered:(OFUIWindowDraggingSession *)arg1;

@optional

- (void)concludeDragOperation:(OFUIWindowDraggingSession *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })draggingDestination:(OFUIWindowDraggingSession *)arg1 originalFrameForItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingDestinationEnded:(OFUIWindowDraggingSession *)arg1 cancelled:(bool)arg2;
- (void)draggingDestinationExited:(OFUIWindowDraggingSession *)arg1;
- (unsigned long long)draggingDestinationUpdated:(OFUIWindowDraggingSession *)arg1;
- (void)draggingDestinationWillEnd:(OFUIWindowDraggingSession *)arg1 cancelled:(bool)arg2;
- (bool)performDragOperation:(OFUIWindowDraggingSession *)arg1;
- (bool)prepareForDragOperation:(OFUIWindowDraggingSession *)arg1;

@end
