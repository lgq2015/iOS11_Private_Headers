/* made by EzioChiu.
 */

@protocol VKTileProviderClient <NSObject>

@required

- (void)didStopLoadingTilesWithError:(NSError *)arg1;
- (void)tileProviderNeedsUpdate:(VKTileProvider *)arg1;
- (long long)tileSource:(VKTileSource *)arg1 overrideForMaximumZoomLevel:(long long)arg2;
- (void)willStartLoadingTiles;

@end
