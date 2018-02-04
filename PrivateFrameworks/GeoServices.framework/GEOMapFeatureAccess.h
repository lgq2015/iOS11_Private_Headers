/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureAccess : NSObject {
    bool  _allowNetworkTileLoad;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _flipNegativeTravelDirectionRoads;
    bool  _visitDoubleTravelDirectionRoadsTwice;
}

@property (nonatomic) bool allowNetworkTileLoad;
@property (nonatomic) bool flipNegativeTravelDirectionRoads;
@property (nonatomic) bool visitDoubleTravelDirectionRoadsTwice;

+ (unsigned long long)zoomLevelForStyle:(int)arg1 scale:(int)arg2;

- (void).cxx_destruct;
- (id)_findChildrenOfTransitPoint:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_findParentOfTransitPoint:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_findTransitPointsOfType:(unsigned long long)arg1 nearCoordinate:(struct { double x1; double x2; })arg2 radius:(double)arg3 handler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id /* block */)_openTileLoaderWithCompletionHandler:(id /* block */)arg1;
- (void)_preloadTilesNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 tileSetStyle:(int)arg3 tileSize:(int)arg4 tileScale:(int)arg5 completionHandler:(id /* block */)arg6;
- (bool)allowNetworkTileLoad;
- (id)findBuildingsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findRoadsFromJunction:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findRoadsFromNextIntersectionOf:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findRoadsFromPreviousIntersectionOf:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findRoadsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findRoadsToJunction:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findRoadsToNextIntersectionOf:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findRoadsToPreviousIntersectionOf:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitAccessPointsForStation:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitGeometryForPoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)findTransitHallForStop:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitHallsForStation:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitHallsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitLinksNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 pointHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitStationForHall:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitStationsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitStopsForHall:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitStopsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)flipNegativeTravelDirectionRoads;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)preloadBuildingTilesNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)preloadRoadTilesNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)preloadTransitTilesNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)setAllowNetworkTileLoad:(bool)arg1;
- (void)setFlipNegativeTravelDirectionRoads:(bool)arg1;
- (void)setVisitDoubleTravelDirectionRoadsTwice:(bool)arg1;
- (bool)visitDoubleTravelDirectionRoadsTwice;

@end
