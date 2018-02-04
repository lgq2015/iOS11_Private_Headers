/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheUsageMonitor : NSObject {
    NSLock * _lock;
    NSMutableDictionary * _tileSetStyleToHits;
    NSMutableDictionary * _tileSetStyleToMisses;
    NSObject<OS_dispatch_source> * _timer;
    NSMutableDictionary * _typeToHits;
    NSMutableDictionary * _typeToMisses;
}

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_startTimerIfNecessary;
- (void)dealloc;
- (void)flush;
- (id)init;
- (void)recordCacheHitForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)recordCacheHitForType:(int)arg1;
- (void)recordCacheMissForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)recordCacheMissForType:(int)arg1;

@end
