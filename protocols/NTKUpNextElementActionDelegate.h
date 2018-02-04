/* made by EzioChiu.
 */

@protocol NTKUpNextElementActionDelegate <NSObject>

@required

- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 didFinishTask:(bool)arg2;
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 wantsToPerformTapActionForComplicationSlot:(NSString *)arg2;
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 wantsViewControllerDisplayed:(UIViewController *)arg2;

@end
