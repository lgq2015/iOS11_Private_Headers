/* made by EzioChiu.
 */

@protocol PXMemoriesFeedViewControllerHelperDelegate <NSObject>

@optional

- (void)memoriesFeedViewControllerHelper:(PXMemoriesFeedViewControllerHelper *)arg1 configureMetrics:(PXMemoriesFeedLayoutMetrics *)arg2;
- (bool)memoriesFeedViewControllerHelperFeedIsVisible:(PXMemoriesFeedViewControllerHelper *)arg1;
- (NSIndexSet *)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(PXMemoriesFeedViewControllerHelper *)arg1;

@end
