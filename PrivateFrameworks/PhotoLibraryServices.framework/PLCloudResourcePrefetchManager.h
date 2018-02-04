/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResourcePrefetchManager : NSObject {
    PLCloudPhotoLibraryManager * _cplManager;
    long long  _defaultPrefetchMode;
    bool  _enqueuedCheckCPLBGDownload;
    NSMutableSet * _inflightResources;
    NSDate * _lastCheckCPLBGDownloadDate;
    PLPhotoLibrary * _photoLibrary;
    PLCloudResourcePruneManager * _pruneManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)_orderedPrefetchConditionStringsOnAssets;
+ (id)_originalResourceTypes;
+ (id)_originalResourceTypesForAsset;
+ (id)_originalResourceTypesForMaster;

- (id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
- (bool)_canPrefetch;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)_cleanupInflightResources;
- (void)_handlePrefetchError:(id)arg1 forPLCloudResourceWithObjectID:(id)arg2;
- (id)_identifierForResourceDownload:(id)arg1;
- (void)_incrementPrefetchCountForPLCloudResources:(id)arg1;
- (id)_irisConditionString;
- (id)_lastCompletePrefetchDate;
- (id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
- (id)_missingLocalOriginalConditionString;
- (id)_missingThumbnailConditionString;
- (id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
- (id)_predicateForKeyFacePrefetching;
- (id)_predicateForMaxFilesize:(long long)arg1;
- (id)_predicateForResourceCreatedAfterDate:(id)arg1;
- (id)_predicateToPrefetchMemories:(id)arg1;
- (id)_predicatesForNonThumbnails;
- (id)_predicatesForThumbnails;
- (id)_prefetchResourceForAsset:(id)arg1 inResourceTypes:(id)arg2;
- (void)_prefetchResources:(id)arg1 shouldAutoPefetchNextBatch:(bool)arg2;
- (void)_reloadDefaultDownload;
- (void)_reloadDownloadOriginalsSetting;
- (id)_resourcePredicateForCPLResourceType:(unsigned long long)arg1 additionalResourcePredicates:(id)arg2;
- (id)_resourcesToPrefetchForAsset:(id)arg1;
- (void)_resourcesToPrefetchWithPredicates:(id)arg1 budget:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_resourcesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (bool)_shouldPrefetchMediums;
- (void)_startPrefetchNextBatch;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (void)dealloc;
- (long long)diskSpaceBudgetForNonThumbnails;
- (long long)diskSpaceBudgetForThumbnails;
- (id)init;
- (id)initWithCPLManager:(id)arg1 pruneManager:(id)arg2;
- (void)prefetchResource:(unsigned long long)arg1 forAssetsWithObjectIDs:(id)arg2;
- (void)prefetchResourcesWithPredicates:(id)arg1;
- (id)prefetchStatusForDebug:(bool)arg1;
- (void)startAutomaticPrefetch;
- (void)stop;

@end
