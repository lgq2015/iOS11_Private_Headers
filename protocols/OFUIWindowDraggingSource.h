/* made by EzioChiu.
 */

@protocol OFUIWindowDraggingSource <NSObject>

@optional

- (struct CGPoint { double x1; double x2; })draggingSource:(OFUIWindowDraggingSession *)arg1 badgeCenterForItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 cleanupItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 didAddItem:(OFUIWindowDraggingItem *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })draggingSource:(OFUIWindowDraggingSession *)arg1 originalFrameForItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 prepareItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 updateItem:(OFUIWindowDraggingItem *)arg2;
- (bool)draggingSource:(OFUIWindowDraggingSession *)arg1 willAddItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSourceDidBegin:(OFUIWindowDraggingSession *)arg1;
- (void)draggingSourceDidEnd:(OFUIWindowDraggingSession *)arg1 cancelled:(bool)arg2;
- (void)draggingSourceDidMove:(OFUIWindowDraggingSession *)arg1;
- (unsigned long long)draggingSourceWillBegin:(OFUIWindowDraggingSession *)arg1;

@end
