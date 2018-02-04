/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_asyncPlaceDataRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 handler:(id /* block */)arg4;
- (long long)_invalidationDataHasExpired:(id)arg1;
- (bool)_invalidationDataHasExpiredByVersion:(unsigned int)arg1 domains:(id)arg2;
- (long long)_invalidationStateForTTL:(double)arg1 timestamp:(double)arg2 version:(unsigned int)arg3 versionDomains:(id)arg4;
- (bool)_isKey:(id)arg1 subsetOf:(id)arg2;
- (id)_syncPlaceDataRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3;
- (id)_syncedPlaceRefineMapItem:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3 auditToken:(id)arg4;
- (id)_syncedRevGeoCoordinate:(struct { double x1; double x2; })arg1 traits:(id)arg2 auditToken:(id)arg3;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (long long)invalidationStateForComponent:(id)arg1;
- (long long)invalidationStateForPlace:(id)arg1;
- (void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(id /* block */)arg5;
- (void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(id /* block */)arg5;
- (void)snapshotWithFilePathArray:(id)arg1 handler:(id /* block */)arg2;
- (void)versionsForDomains:(id)arg1 handler:(id /* block */)arg2;

@end
