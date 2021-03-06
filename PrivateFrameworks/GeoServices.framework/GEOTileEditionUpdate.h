/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileEditionUpdate : NSObject {
    NSMutableArray * _entries;
    bool  _flushEverything;
    bool  _invalidateEverything;
}

@property (nonatomic) bool flushEverything;
@property (nonatomic) bool invalidateEverything;

- (void).cxx_destruct;
- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(bool)arg4;
- (bool)flushEverything;
- (id)init;
- (bool)invalidateEverything;
- (void)setFlushEverything:(bool)arg1;
- (void)setInvalidateEverything:(bool)arg1;
- (void)tileset:(unsigned int*)arg1 edition:(unsigned int*)arg2 provider:(unsigned int*)arg3 invalidateOnly:(bool*)arg4 atIndex:(unsigned long long)arg5;
- (unsigned long long)tilesetCount;

@end
