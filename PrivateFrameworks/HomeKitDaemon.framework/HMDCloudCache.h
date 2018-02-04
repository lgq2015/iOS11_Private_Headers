/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudCache : HMFObject {
    HMDBackingStore * _backingStore;
    HMDCloudHomeManagerZone * _homeManagerZone;
    NSMutableDictionary * _homeZones;
    HMDCloudLegacyZone * _legacyZone;
    HMDCloudMetadataZone * _metadataZone;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMDBackingStore *backingStore;
@property (nonatomic, readonly) HMDCloudHomeManagerZone *homeManagerZone;
@property (nonatomic, retain) NSMutableDictionary *homeZones;
@property (nonatomic, readonly) HMDCloudLegacyZone *legacyZone;
@property (nonatomic, readonly) HMDCloudMetadataZone *metadataZone;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_createZones:(id)arg1 completion:(id /* block */)arg2;
- (id)_findStoreCacheZone:(id)arg1 byName:(id)arg2;
- (id)allHomeZones;
- (id)backingStore;
- (void)createAndFetchZonesFromBackingStore:(id /* block */)arg1;
- (void)deleteAllZones;
- (void)deleteHomeZoneWithName:(id)arg1;
- (id)homeManagerZone;
- (bool)homeZoneExists:(id)arg1;
- (void)homeZoneWithName:(id)arg1 owner:(id)arg2 completion:(id /* block */)arg3;
- (id)homeZones;
- (id)init;
- (id)initWithBackingStore:(id)arg1 workQueue:(id)arg2;
- (id)legacyZone;
- (id)metadataZone;
- (void)setBackingStore:(id)arg1;
- (void)setHomeZones:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
