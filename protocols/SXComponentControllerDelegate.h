/* made by EzioChiu.
 */

@protocol SXComponentControllerDelegate <NSObject>

@required

- (void)componentController:(SXComponentController *)arg1 didInvalidateBlueprint:(SXLayoutBlueprint *)arg2 attributes:(SXPresentationAttributes *)arg3;

@optional

- (void)componentController:(SXComponentController *)arg1 didPresentBlueprint:(SXLayoutBlueprint *)arg2;
- (void)componentController:(SXComponentController *)arg1 willPresentBlueprint:(SXLayoutBlueprint *)arg2;

@end
