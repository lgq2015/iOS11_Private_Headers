/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODiskSpaceManager : NSObject <GEODiskSpaceProvider> {
    NSString * _cacheDeleteID;
    unsigned long long  _cachedPurgableSpace;
    double  _cachedPurgableTime;
    NSMutableArray * _diskSpaceProviders;
    bool  _freePurgableInProgress;
    double  _lastSignificantUpdate;
}

@property (readonly, copy) NSString *cacheDeleteID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_registerCacheDeleteCallbacks;
- (id)_validVolume:(id)arg1;
- (void)addDiskSpaceProvider:(id)arg1;
- (id)cacheDeleteID;
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;
- (id)initWithCacheDeleteID:(id)arg1;
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;
- (void)reportSignificantPurgableDiskSpaceUpdate;
- (bool)shouldIncreaseCacheSizeBy:(unsigned long long)arg1 urgency:(int)arg2;

@end
