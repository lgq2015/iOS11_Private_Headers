/* made by EzioChiu.
 */

@protocol SXUpNextViewControllerDelegate <NSObject>

@required

- (void)upNextViewControllerWantsToReplay:(SXUpNextViewController *)arg1;
- (void)upNextViewControllerWantsToSkip:(SXUpNextViewController *)arg1;

@end
