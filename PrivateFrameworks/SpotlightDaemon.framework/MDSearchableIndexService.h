/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface MDSearchableIndexService : NSObject <CSSearchableIndexInterface, CSSearchableIndexServiceInterface> {
    CSIndexingQueue * _activityQueue;
    NSString * _clientBundleID;
    NSObject<OS_xpc_object> * _clientConnection;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned int  _clientUID;
    NSObject<MDIndexer> * _indexer;
    bool  _isInternal;
    NSString * _protectionClass;
    bool  _quotaDisabled;
    bool  _searchInternal;
}

@property (nonatomic, readonly) CSIndexingQueue *activityQueue;
@property (nonatomic, copy) NSString *clientBundleID;
@property (nonatomic, retain) NSObject<OS_xpc_object> *clientConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned int clientUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<MDIndexer> *indexer;
@property (nonatomic) bool isInternal;
@property (nonatomic, readonly) NSString *processDescription;
@property (nonatomic, copy) NSString *protectionClass;
@property (nonatomic) bool quotaDisabled;
@property (nonatomic) bool searchInternal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canProcessIndexDataForBundle:(id)arg1 itemsDecoder:(id)arg2 deletesDecoder:(id)arg3 clientState:(id)arg4 clientStateName:(id)arg5 outError:(id*)arg6;
- (id)_checkBundleIDHelper:(id)arg1;
- (id)_checkItems:(id)arg1 identifiers:(id)arg2 protectionClass:(id)arg3 bundleID:(id)arg4 allowedOnH4:(bool)arg5;
- (void)_deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(bool)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (bool)_deleteInteractions:(id)arg1 forGroup:(bool)arg2;
- (void)_dispatchActivities:(id)arg1 flush:(bool)arg2;
- (void)_dispatchToReceiversWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 deletes:(id)arg7;
- (void)_forceAppWithBundleID:(id)arg1 toPerformJob:(id)arg2;
- (void)_issueCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_jobForIndex:(long long)arg1;
- (void)_makeActivityQueueIfNecessary;
- (void)_performIndexJob:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)_processIndexDataForBundle:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 clientState:(id)arg6 clientStateName:(id)arg7 deletes:(id)arg8 completionHandler:(id /* block */)arg9;
- (id)activityQueue;
- (bool)addInteraction:(id)arg1;
- (void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
- (bool)changeState:(id)arg1;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6;
- (bool)checkIn:(id)arg1;
- (void)checkInWithProtectionClass:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clientBundleID;
- (id)clientConnection;
- (id)clientQueue;
- (unsigned int)clientUID;
- (bool)dataMigration:(id)arg1;
- (bool)deleteAllInteractions:(id)arg1;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)deleteBundle:(id)arg1;
- (bool)deleteDomains:(id)arg1;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (bool)deleteSinceDate:(id)arg1;
- (bool)fetchClientState:(id)arg1;
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)flushUserActivities;
- (bool)handleCommand:(const char *)arg1 info:(id)arg2;
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(id /* block */)arg10;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(id /* block */)arg8;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(id /* block */)arg7;
- (id)indexer;
- (bool)isInternal;
- (bool)issueCommand:(id)arg1;
- (void)performDataMigrationWithTimeout:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performIndexJob:(id)arg1;
- (void)performIndexJob:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (bool)processActivities:(id)arg1;
- (id)processDescription;
- (bool)processIndexData:(id)arg1;
- (id)protectionClass;
- (void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)quotaDisabled;
- (bool)searchInternal;
- (void)setClientBundleID:(id)arg1;
- (void)setClientConnection:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setClientUID:(unsigned int)arg1;
- (void)setIndexer:(id)arg1;
- (void)setIsInternal:(bool)arg1;
- (void)setProtectionClass:(id)arg1;
- (void)setQuotaDisabled:(bool)arg1;
- (void)setSearchInternal:(bool)arg1;
- (void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3;
- (bool)willModify:(id)arg1;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;

@end
