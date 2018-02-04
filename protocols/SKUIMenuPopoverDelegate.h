/* made by EzioChiu.
 */

@protocol SKUIMenuPopoverDelegate <NSObject>

@optional

- (void)menuPopover:(SKUIMenuPopoverController *)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopover:(SKUIMenuPopoverController *)arg1 willRepositionToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)menuPopoverDidCancel:(SKUIMenuPopoverController *)arg1;

@end
