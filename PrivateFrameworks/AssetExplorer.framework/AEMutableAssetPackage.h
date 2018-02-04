/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEMutableAssetPackage : AEAssetPackage

- (id)_copyMetadataFromDisplayAsset:(id)arg1;
- (void)addSidecarEntriesFromDictionary:(id)arg1;
- (void)beginSupressingLivePhoto;
- (void)endSuppressingLivePhoto;
- (void)expressURLForType:(id)arg1;
- (id)initWithAssetIdentifier:(id)arg1;
- (void)removeSidecarObjectForKey:(id)arg1;
- (void)removeURLForType:(id)arg1;
- (void)setMediaOrigin:(long long)arg1;
- (void)setSidecarObject:(id)arg1 forKey:(id)arg2;
- (void)storeMetadataFromPHAsset:(id)arg1 imageURL:(id)arg2 adjustmentURL:(id)arg3;
- (void)storeMetadataFromReviewAsset:(id)arg1;
- (void)storeURL:(id)arg1 forType:(id)arg2;
- (void)suppressURLForType:(id)arg1;

@end
