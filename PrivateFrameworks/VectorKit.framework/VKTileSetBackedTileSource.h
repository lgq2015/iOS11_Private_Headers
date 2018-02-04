/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileSetBackedTileSource : VKTileSource {
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    }  _downloadTemplate;
    VKTimer * _expirationTimer;
    VKTilePool * _expiredTilePool;
    unsigned int  _maximumDownloadZoomLevel;
    unsigned int  _minimumDownloadZoomLevel;
    GEOActiveTileSet * _tileSet;
    _VKTileSetBackedTileSourceTimerTarget * _timerTarget;
    struct ZoomRange { 
        float min; 
        float max; 
    }  _zoomLevelRange;
}

@property (nonatomic, retain) GEOActiveTileSet *tileSet;

- (double)_expirationInterval;
- (void)_expireTilesList:(id)arg1;
- (double)_nextTileExpirationDate;
- (void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(bool)arg2;
- (bool)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)clearCaches;
- (void)dealloc;
- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (void)expireTiles;
- (bool)expires;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)forceExpireTile:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)forceExpireTiles;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg5;
- (unsigned char)mapLayerForZoomLevelRange;
- (unsigned int)maximumDownloadZoomLevel;
- (long long)maximumZoomLevel;
- (long long)maximumZoomLevelWithoutOverride;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)minimumZoomLevel;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)setClient:(id)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setTileSet:(id)arg1;
- (bool)shouldObeyHybridUnavailableRegions;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)tileSet;
- (long long)tileSize;

@end
