/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTransientDataSource : NSObject <PUTransientDataSource> {
    NSMutableArray * __assetUUIDs;
    NSMutableDictionary * __assetsByUUID;
    NSMutableDictionary * __enqueuedBurstAssetUUIDByBurstIdentifier;
    NSMutableDictionary * __enqueuedBurstConvertiblesByAssetUUID;
    long long  __nestedPerformChanges;
    NSHashTable * __observers;
    long long  __pendingChangeNotifications;
    NSMutableDictionary * __representativeAssetsByBurstIdentifier;
}

@property (nonatomic, readonly) NSMutableArray *_assetUUIDs;
@property (nonatomic, readonly) NSMutableDictionary *_assetsByUUID;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstAssetUUIDByBurstIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstConvertiblesByAssetUUID;
@property (setter=_setNestedPerformChanges:, nonatomic) long long _nestedPerformChanges;
@property (nonatomic, readonly) NSHashTable *_observers;
@property (setter=_setPendingChangeNotifications:, nonatomic) long long _pendingChangeNotifications;
@property (nonatomic, readonly) NSMutableDictionary *_representativeAssetsByBurstIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetUUIDs;
- (id)_assetsByUUID;
- (id)_enqueuedBurstAssetUUIDByBurstIdentifier;
- (id)_enqueuedBurstConvertiblesByAssetUUID;
- (long long)_nestedPerformChanges;
- (void)_notifyObserversOfDataSourceChange;
- (id)_observers;
- (long long)_pendingChangeNotifications;
- (bool)_removeAssetWithUUID:(id)arg1;
- (id)_representativeAssetsByBurstIdentifier;
- (void)_setNestedPerformChanges:(long long)arg1;
- (void)_setPendingChangeNotifications:(long long)arg1;
- (id)description;
- (void)enqueuePendingBurstAssetWithConvertible:(id)arg1;
- (id)existingAssetForUUID:(id)arg1;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)arg1;
- (id)init;
- (id)insertAssetWithConvertible:(id)arg1;
- (void)performChanges:(id /* block */)arg1;
- (void)processPendingBurstAssets;
- (void)registerChangeObserver:(id)arg1;
- (void)removeAllAssets;
- (void)removeAssetWithUUID:(id)arg1;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)arg1;
- (id)transientAssetMapping;
- (id)transientBurstMapping;
- (void)unregisterChangeObserver:(id)arg1;
- (void)updateAssetWithConvertible:(id)arg1;
- (id)uuids;

@end
