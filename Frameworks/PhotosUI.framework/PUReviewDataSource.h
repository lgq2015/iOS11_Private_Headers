/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUReviewDataSource : NSObject {
    NSMutableArray * __assetIdentifiers;
    NSMutableDictionary * __assetsByIdentifier;
    NSMutableDictionary * __enqueuedBurstAssetIdentifiersByBurstIdentifier;
    NSMutableDictionary * __enqueuedBurstAssetsByAssetIdentifier;
    long long  __nestedPerformChanges;
    NSHashTable * __observers;
    NSMutableDictionary * __representativeAssetsByBurstIdentifier;
    NSMutableSet * __updatedAssetIdentifiers;
}

@property (nonatomic, readonly) NSMutableArray *_assetIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *_assetsByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstAssetIdentifiersByBurstIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstAssetsByAssetIdentifier;
@property (setter=_setNestedPerformChanges:, nonatomic) long long _nestedPerformChanges;
@property (nonatomic, readonly) NSHashTable *_observers;
@property (nonatomic, readonly) NSMutableDictionary *_representativeAssetsByBurstIdentifier;
@property (nonatomic, readonly) NSMutableSet *_updatedAssetIdentifiers;

- (void).cxx_destruct;
- (id)_assetIdentifiers;
- (id)_assetsByIdentifier;
- (id)_enqueuedBurstAssetIdentifiersByBurstIdentifier;
- (id)_enqueuedBurstAssetsByAssetIdentifier;
- (long long)_nestedPerformChanges;
- (id)_observers;
- (id)_representativeAssetsByBurstIdentifier;
- (void)_setNestedPerformChanges:(long long)arg1;
- (id)_updatedAssetIdentifiers;
- (id)assetsByIdentifier;
- (id)description;
- (void)enqueuePendingBurstAsset:(id)arg1;
- (id)existingAssetForIdentifier:(id)arg1;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)arg1;
- (id)init;
- (void)insertAsset:(id)arg1;
- (void)insertAssets:(id)arg1;
- (id)orderedIdentifiers;
- (void)performChanges:(id /* block */)arg1;
- (void)processPendingBurstAssets;
- (void)registerChangeObserver:(id)arg1;
- (void)removeAllAssets;
- (void)removeAssetWithIdentifier:(id)arg1;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)arg1;
- (void)replaceAsset:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;

@end
