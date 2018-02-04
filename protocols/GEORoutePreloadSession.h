/* made by EzioChiu.
 */

@protocol GEORoutePreloadSession <NSObject>

@required

- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (void)beginLoading;
- (<GEORoutePreloadSessionDelegate> *)delegate;
- (bool)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(struct { double x1; double x2; }*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
- (bool)isSufficientlyLoaded;
- (bool)loggingEnabled;
- (bool)minimalDebuggingEnabled;
- (unsigned long long)networkQuality;
- (int)preloadStateForTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (NSObject<OS_os_log> *)preloaderLog;
- (GEOComposedRoute *)route;
- (void)setDelegate:(id <GEORoutePreloadSessionDelegate>)arg1;
- (void)setNetworkQuality:(unsigned long long)arg1;
- (void)setTraits:(GEOMapServiceTraits *)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;

@end
