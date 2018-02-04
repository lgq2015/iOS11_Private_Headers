/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKOverlayTileSource : VKTileSource {
    NSMutableArray * _overlays;
    VKTileSource * _tileSourceToMatch;
}

@property (nonatomic, readonly) NSArray *overlays;

- (void)_overlayBoundingMapRegionChanged:(id)arg1;
- (void)addOverlay:(id)arg1;
- (bool)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)matchTilesFromSource:(id)arg1;
- (unsigned int)maximumDownloadZoomLevel;
- (long long)maximumZoomLevel;
- (bool)maximumZoomLevelBoundsCamera;
- (long long)maximumZoomLevelWithoutOverride;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)minimumZoomLevel;
- (bool)minimumZoomLevelBoundsCamera;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })nativeKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)overlays;
- (void)removeOverlay:(id)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForDownloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (long long)tileSize;
- (long long)zEquivalenceClass;

@end
