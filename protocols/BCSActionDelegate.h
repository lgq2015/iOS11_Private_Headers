/* made by EzioChiu.
 */

@protocol BCSActionDelegate <NSObject>

@optional

- (NSArray *)actionPickerItemsForAction:(id <BCSAction>)arg1 proposedItems:(NSArray *)arg2;
- (UIViewController *)presentingViewControllerForAction:(id <BCSAction>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRectForPopoverActionPicker:(id <BCSAction>)arg1;

@end
