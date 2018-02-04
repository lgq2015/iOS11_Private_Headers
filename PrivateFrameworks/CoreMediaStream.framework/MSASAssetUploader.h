/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetUploader : MSASAssetTransferer {
    NSMutableDictionary * _assetCollectionGUIDToRequestorContext;
    NSMutableDictionary * _assetCollectionsToItemInFlightMap;
    NSMutableSet * _assetCollectionsWithAuthorizationError;
    NSMutableDictionary * _assetToAssetCollectionMap;
    bool  _didEncounterNetworkConditionError;
    NSMutableArray * _finishedAssetCollections;
    NSMutableArray * _itemsInFlight;
    int  _state;
}

@property (nonatomic, retain) NSMutableDictionary *assetCollectionGUIDToRequestorContext;
@property (nonatomic, retain) NSMutableDictionary *assetCollectionsToItemInFlightMap;
@property (nonatomic, retain) NSMutableSet *assetCollectionsWithAuthorizationError;
@property (nonatomic, retain) NSMutableDictionary *assetToAssetCollectionMap;
@property (nonatomic) <MSASAssetUploaderDelegate> *delegate;
@property (nonatomic) bool didEncounterNetworkConditionError;
@property (nonatomic, retain) NSMutableArray *finishedAssetCollections;
@property (nonatomic, retain) NSMutableArray *itemsInFlight;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (id)_orphanedAssetCollectionError;
- (id)_pathForPersonID:(id)arg1;
- (void)_workQueueStop;
- (id)assetCollectionGUIDToRequestorContext;
- (id)assetCollectionsToItemInFlightMap;
- (id)assetCollectionsWithAuthorizationError;
- (id)assetToAssetCollectionMap;
- (void)cancelAssetCollections:(id)arg1;
- (bool)didEncounterNetworkConditionError;
- (void)didFinishGettingAllAssets;
- (void)didFinishPuttingAllAssets;
- (id)finishedAssetCollections;
- (id)itemsInFlight;
- (void)registerAssetCollections:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setAssetCollectionGUIDToRequestorContext:(id)arg1;
- (void)setAssetCollectionsToItemInFlightMap:(id)arg1;
- (void)setAssetCollectionsWithAuthorizationError:(id)arg1;
- (void)setAssetToAssetCollectionMap:(id)arg1;
- (void)setDidEncounterNetworkConditionError:(bool)arg1;
- (void)setFinishedAssetCollections:(id)arg1;
- (void)setItemsInFlight:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)unregisterAssetCollections:(id)arg1;
- (void)unregisterAssetCollections:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)workQueueCancel;
- (void)workQueueCancelAssetCollections:(id)arg1;
- (void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (void)workQueueGoIdle;
- (void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned long long)arg2 results:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)workQueueRegisterAssets:(id)arg1 index:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)workQueueRetryOutstandingActivities;
- (void)workQueueShutDownCompletionBlock:(id /* block */)arg1;
- (void)workQueueStop;
- (void)workQueueStopTrackingItem:(id)arg1;
- (void)workQueueUploadNextBatch;

@end
