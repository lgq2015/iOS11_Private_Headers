/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCDocumentManager : NSObject <DCConnectivityTrackerDelegate, DCDocumentManager> {
    NSObject<OS_dispatch_queue> * _completionHandlerQueue;
    DCConnectivityTracker * _connectivityTracker;
    NSMutableDictionary * _delegateStates;
    SDFDispatchQueue * _queue;
    DCService * _service;
    bool  _synchronousContentsOfDirectory;
    NSDictionary * _watchedDocumentIdentifiersAndVersionIdentifiers;
}

@property (retain) NSObject<OS_dispatch_queue> *completionHandlerQueue;
@property (readonly, retain) DCService *service;

+ (void)_deleteAllContent;
+ (bool)_synchronouslyRemoveItemAtURL:(id)arg1 withFileCoordinator:(id)arg2;
+ (void)deleteAllDataIfNecessary;
+ (id)documentManagerForService:(id)arg1;
+ (void)setPurposeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_activityInfoForItem:(id)arg1;
- (void)_adjustFetchingUpdatesIfNecessary;
- (void)_contentsOfDirectoryAtPath:(id)arg1 downloadIfNecessary:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_continueContentsOfFile:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_continuePreviewOfItem:(id)arg1 preview:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_dictionaryMappingDocumentIdentifiersToParentContentsMetadataForDirectory:(id)arg1;
- (id)_dictionaryMappingNamesToParentContentsMetadataForDirectory:(id)arg1;
- (bool)_didDownloadChangedItem:(id)arg1 downloadedMetadata:(id)arg2;
- (void)_didUpdateVersionIdentifier:(id)arg1 forDocumentIdentifier:(id)arg2;
- (void)_dispatchMaybeCallSelector:(SEL)arg1 path:(id)arg2 function:(const char *)arg3 line:(unsigned int)arg4 block:(id /* block */)arg5;
- (void)_downloadItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_downloadStaleDirectory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_downloadStaleFile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchDirectoryHierarchyOfDirectory:(id)arg1;
- (void)_finishFetchingUpdates;
- (void)_finishUploadFile:(id)arg1 container:(id)arg2 error:(id)arg3;
- (void)_finishUploadFileForTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2 responseContainer:(id)arg3 error:(id)arg4;
- (id)_initWithService:(id)arg1;
- (bool)_isWatchedAndUpToDateItem:(id)arg1;
- (id)_localItemsInDirectory:(id)arg1;
- (void)_logFunction:(const char *)arg1 path:(id)arg2 item:(id)arg3 relativePath:(id)arg4;
- (bool)_needsToCallDelegateForPath:(id)arg1;
- (bool)_performPreOperationChecksWithPath:(id)arg1 itemClass:(Class)arg2 itemMustBeKnown:(bool)arg3 item:(id*)arg4 relativePath:(id*)arg5 error:(id*)arg6;
- (void)_processDirectoryChangesWithDirectory:(id)arg1 currentContents:(id)arg2 previousContents:(id)arg3 fetchingForChild:(id)arg4 remoteMetadata:(id*)arg5;
- (bool)_rebuildItemWithRelativePath:(id)arg1 parentDirectoryMetadata:(id)arg2;
- (bool)_shouldCallDelegate:(id)arg1 forPath:(id)arg2;
- (void)_startDownloadItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_startFetchingUpdates;
- (void)_startUploadingFile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_synchronousNextContentsOfDirectory;
- (id)_synthesizedMetadataForItem:(id)arg1 parentContentsMetadata:(id)arg2;
- (void)_updateFreshlyDownloadedDirectory:(id)arg1 downloadedDirectory:(id)arg2;
- (void)_updateFreshlyDownloadedDirectory:(id)arg1 downloadedDirectory:(id)arg2 fetchingForChild:(id)arg3 remoteMetadata:(id*)arg4;
- (void)_updateFreshlyDownloadedFile:(id)arg1 downloadedFile:(id)arg2;
- (void)_uploadItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)allPendingUploadsWithCompletionHandler:(id /* block */)arg1;
- (void)attributesOfItemAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelDownloadingItemAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelUploadingItemAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)completionHandlerQueue;
- (bool)connectionStatus;
- (void)connectivityTracker:(id)arg1 didUpdateConnectionStatus:(bool)arg2;
- (void)contentsOfDirectoryAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)contentsOfFileAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)delegateForFilterPath:(id)arg1;
- (bool)deleteAllLocalData;
- (id)downloadTaskForItemAtPath:(id)arg1;
- (void)evictItemAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fileURLOfItemAtPath:(id)arg1 error:(id*)arg2;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasPendingUploads;
- (bool)isConnected;
- (id)pathsOfItemAtURL:(id)arg1 error:(id*)arg2;
- (void)preflightWriteToNewFileAtPath:(id)arg1 source:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)rebuildDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegateForFilterPath:(id)arg1;
- (void)removePreflightedWriteToNewFileAtPath:(id)arg1;
- (void)resetCachedItemManagerForService:(id)arg1;
- (void)restartUploads;
- (id)service;
- (void)setCompletionHandlerQueue:(id)arg1;
- (void)setDelegate:(id)arg1 forFilterPath:(id)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2 forFilterPath:(id)arg3;
- (void)startDownloadingItemAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startUploadingItemAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)thumbnailOfItemAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uploadForItemAtPath:(id)arg1;
- (void)writeToFileAtPath:(id)arg1 source:(id)arg2 completionHandler:(id /* block */)arg3;

@end
