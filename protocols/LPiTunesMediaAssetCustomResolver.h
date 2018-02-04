/* made by EzioChiu.
 */

@protocol LPiTunesMediaAssetCustomResolver <NSObject, _LPResolvable, _LPResolver>

@required

- (LPiTunesMediaAsset *)originatingAsset;
- (void)setOriginatingAsset:(LPiTunesMediaAsset *)arg1;

@end
