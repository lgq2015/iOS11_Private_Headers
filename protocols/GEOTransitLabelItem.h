/* made by EzioChiu.
 */

@protocol GEOTransitLabelItem <NSObject>

@required

- (<GEOTransitArtworkDataSource> *)labelArtwork;
- (NSString *)labelString;
- (long long)type;

@end
