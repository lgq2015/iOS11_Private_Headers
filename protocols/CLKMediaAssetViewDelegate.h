/* made by EzioChiu.
 */

@protocol CLKMediaAssetViewDelegate <NSObject>

@required

- (void)mediaAssetViewDidBeginPlaying:(CLKMediaAssetView *)arg1;
- (void)mediaAssetViewDidEndPlaying:(CLKMediaAssetView *)arg1;

@end
