/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResourcesTileRequester : GEOTileRequester {
    NSMutableArray * _loaders;
}

+ (unsigned char)tileProviderIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (void)start;

@end
