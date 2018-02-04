/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemStateCenter : NSObject <ASDJobManagerObserver, BLDownloadQueueObserving, SSDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BOOL  _appInstallRestricted;
    ASDSoftwareUpdatesStore * _appstoredUpdatesStore;
    BOOL  _canAccessAppUpdates;
    BOOL  _canAccessPurchaseHistory;
    SSDownloadManager * _downloadManager;
    NSMutableArray * _finishLoadBlocks;
    long long  _gratisState;
    NSDate * _gratisStateLastUpdate;
    NSMutableDictionary * _itemStates;
    ASDJobManager * _jobManager;
    long long  _loadCount;
    NSMutableArray * _mediaLibraries;
    NSObject<OS_dispatch_queue> * _mediaLibraryQueue;
    NSCountedSet * _observedLibraryItems;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    long long  _parentalControlsRank;
    SSAppPurchaseHistoryDatabase * _purchaseHistoryDatabase;
    SKUIStoreItemRelationshipCounsellor * _relationshipCouncellor;
    BOOL  _runningInStoreDemoMode;
}

@property (readonly) SSSoftwareUpdatesStore *appUpdatesStore;
@property (getter=isApplicationInstallRestricted, readonly) bool applicationInstallRestricted;
@property (readonly) ASDSoftwareUpdatesStore *appstoredUpdatesStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGratisEligible, nonatomic, readonly) bool gratisEligible;
@property (readonly) unsigned long long hash;
@property (readonly) long long parentalControlsRank;
@property (getter=isRunningInStoreDemoMode, readonly) bool runningInStoreDemoMode;
@property (readonly) Class superclass;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)_addState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;
- (id)_appstoredUpdatesStore;
- (void)_appstoredUpdatesStoreChangeNotification:(id)arg1;
- (id)_copyItemsStatesForLibraryItems:(id)arg1;
- (id)_downloadPhaseForJobPhase:(long long)arg1;
- (void)_enumerateAvailableItemsForLibraryItems:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_fireFinishLoadBlocksIfNecessary;
- (bool)_gratisStateIsValid;
- (bool)_isPurchaseForOffDeviceContent:(id)arg1;
- (id)_jobManager;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)_newPurchaseWithItem:(id)arg1 offer:(id)arg2;
- (id)_newPurchasesForSoftwareWithBundleItem:(id)arg1 bundleOffer:(id)arg2;
- (id)_newPurchasesWithBundleItem:(id)arg1 bundleOffer:(id)arg2;
- (id)_newPurchasesWithItems:(id)arg1;
- (id)_newSoftwarePurchaseWithItem:(id)arg1 offer:(id)arg2;
- (void)_notifyObserversOfMediaLibraryChange;
- (void)_notifyObserversOfPurchasesResponses:(id)arg1;
- (void)_notifyObserversOfRestrictionsChange;
- (void)_notifyObserversOfSoftwarePurchasesResponses:(id)arg1;
- (void)_notifyObserversOfStateChange:(id)arg1;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)_performPurchases:(id)arg1 hasBundlePurchase:(bool)arg2 withClientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_performSoftwarePurchases:(id)arg1 withClientContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)_purchaseHistoryDatabase;
- (void)_reloadAppUpdatesStore;
- (void)_reloadDownloadManager;
- (void)_reloadJobManager;
- (void)_reloadMediaLibraryStateForItems:(id)arg1;
- (void)_reloadPurchaseHistory;
- (void)_reloadSoftwareLibrary;
- (void)_reloadStateForObservedMediaLibraryItems;
- (void)_removePurchasingItemsForPurchases:(id)arg1;
- (id)_removeState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;
- (void)_replacePurchasingItem:(id)arg1 withDownloadIDs:(id)arg2;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_setAvailableAppstoredUpdatesWithUpdates:(id)arg1 decrementLoadCount:(bool)arg2;
- (void)_setDownloads:(id)arg1;
- (void)_setFirstPartyRemovableItemsIdentifiers:(id)arg1;
- (void)_setGratisIdentifiers:(id)arg1 error:(id)arg2;
- (void)_setInstalledItems:(id)arg1;
- (void)_setJobs:(id)arg1;
- (void)_setPurchaseHistoryItemsWithIdentifiers:(id)arg1;
- (void)_setPurchaseHistoryVPPItemsWithIdentifiers:(id)arg1;
- (id)_setStateFlag:(unsigned long long)arg1 forItemsWithIdentifiers:(id)arg2 sendNotification:(bool)arg3;
- (id)_setStateFlag:(unsigned long long)arg1 forOnlyItemsWithIdentifiers:(id)arg2 sendNotification:(bool)arg3;
- (void)_storefrontDidChangeNotification:(id)arg1;
- (void)_updatesSoftwarePurchasingItemsForPurchases:(id)arg1 purchaseWasSuccessful:(bool)arg2;
- (void)_updatesStoreChangeNotification:(id)arg1;
- (void)addDownloads:(id)arg1;
- (void)addManifestDownloadWithURL:(id)arg1 placeholderMetadata:(id)arg2;
- (void)addMediaLibrary:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addRelationshipForParentAdamId:(id)arg1 withChildAdamIds:(id)arg2;
- (id)appUpdatesStore;
- (id)appstoredUpdatesStore;
- (void)beginObservingLibraryItems:(id)arg1;
- (void)cancelDownloadForItemWithIdentifier:(long long)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
- (void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)endObservingLibraryItems:(id)arg1;
- (void)evaluatePurchaseResponseForRentals:(id)arg1;
- (void)findLibraryItemsForContentIdentifiers:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)finishLoadingWithCompletionBlock:(id /* block */)arg1;
- (void)getSoftwareUpdatesWithCompletionBlock:(id /* block */)arg1;
- (void)getUpdatesWithCompletionBlock:(id /* block */)arg1;
- (id)gratisEligibleItemIdentifiers;
- (id)init;
- (bool)isApplicationInstallRestricted;
- (bool)isGratisEligible;
- (bool)isItemRestrictedWithParentalControlsRank:(long long)arg1;
- (bool)isRunningInStoreDemoMode;
- (void)jobManager:(id)arg1 changedJobs:(id)arg2;
- (void)jobManager:(id)arg1 completedJobs:(id)arg2;
- (void)jobManager:(id)arg1 updatedProgressOfJobs:(id)arg2;
- (void)jobManager:(id)arg1 updatedStateOfJobs:(id)arg2;
- (id)metricsActionTypeForItem:(id)arg1;
- (long long)parentalControlsRank;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)performActionForItem:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)performActionForLibraryItem:(id)arg1;
- (id)performActionForSoftwareItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)purchaseItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)purchaseItems:(id)arg1 withClientContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)purchaseItems:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)purchaseSoftwareItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)purchaseTone:(id)arg1 withProperties:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)reloadFromServer;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)arg1;
- (void)reloadGratisEligibilityWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (void)reloadMediaLibrary:(id)arg1;
- (void)reloadSoftwareUpdatesFromServerWithCompletionBlock:(id /* block */)arg1;
- (void)removeMediaLibrary:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeRelationshipsForParentAdamId:(id)arg1;
- (id)stateForItemWithIdentifier:(long long)arg1;
- (id)stateForItemWithStoreIdentifier:(id)arg1;

@end
