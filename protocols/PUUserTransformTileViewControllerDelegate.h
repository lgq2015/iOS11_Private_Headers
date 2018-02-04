/* made by EzioChiu.
 */

@protocol PUUserTransformTileViewControllerDelegate <NSObject>

@optional

- (void)userTransformTileViewController:(PUUserTransformTileViewController *)arg1 didChangeIsUserInteracting:(bool)arg2;
- (void)userTransformTileViewController:(PUUserTransformTileViewController *)arg1 didChangeModelTileTransform:(PUModelTileTransform *)arg2;
- (bool)userTransformTileViewController:(PUUserTransformTileViewController *)arg1 shouldReceiveTouchAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;

@end
