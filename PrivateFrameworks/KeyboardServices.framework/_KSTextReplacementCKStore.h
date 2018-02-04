/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementCKStore : NSObject <_KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol> {
    bool  _ckMigrationStatusOnCloud;
    _KSCloudKitManager * _cloudKitManager;
    _KSTextReplacementCoreDataStore * _coreDataStore;
    NSObject<OS_dispatch_queue> * _dataQueue;
    bool  _didRequestFirstPullForAccount;
    unsigned long long  _numPullRequests;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic) bool ckMigrationStatusOnCloud;
@property (nonatomic, retain) _KSCloudKitManager *cloudKitManager;
@property (nonatomic, retain) _KSTextReplacementCoreDataStore *coreDataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRequestFirstPullForAccount;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numPullRequests;
@property (readonly) Class superclass;

+ (bool)isMigrationCompleted;

- (void).cxx_destruct;
- (void)_requestSync:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)_updateSyncCount:(unsigned long long)arg1 success:(bool)arg2;
- (void)accountDidChange:(id)arg1;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)ckMigrationStatusOnCloud;
- (id)cloudEntriesFromLocalEntries:(id)arg1;
- (id)cloudKitManager;
- (id)cloudRecordIDsForLocalEntries:(id)arg1;
- (id)coreDataStore;
- (unsigned long long)countLocalEntriesToBeSynced;
- (void)dealloc;
- (unsigned long long)decayedSyncCountForTime:(id)arg1;
- (bool)didRequestFirstPullForAccount;
- (unsigned long long)getSyncCount;
- (unsigned long long)getSyncCountThresholdHalfLifeHours;
- (unsigned long long)getSyncCountThrottleThreshold;
- (void)importSampleShortcutsIfNecessary;
- (id)initWithDirectoryPath:(id)arg1;
- (bool)isAccountAvailable;
- (id)localEntriesFromCloudEntries:(id)arg1;
- (unsigned long long)numPullRequests;
- (void)pullRemoteDataWithPriority:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)pushAllLocalData;
- (void)pushLocalChangesWithPriority:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)pushMigrationStatusToCloud:(bool)arg1;
- (void)queryCloudIfFirstPullOrAccountChanged;
- (id)queryDeletedEntries;
- (void)queryMigrationStatusOnCloudWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(id /* block */)arg2;
- (id)queryUpdatedLocalEntries;
- (void)recordSyncStatus;
- (void)removeAllEntries;
- (void)removeAllEntriesWithCompletionHandler:(id /* block */)arg1;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)requestSyncIfPendingLocalChanges;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)setCkMigrationStatusOnCloud:(bool)arg1;
- (void)setCloudKitManager:(id)arg1;
- (void)setCoreDataStore:(id)arg1;
- (void)setDidRequestFirstPullForAccount:(bool)arg1;
- (void)setNumPullRequests:(unsigned long long)arg1;
- (id)textReplacementEntries;
- (unsigned long long)totalPullRequestsUntilNow;
- (void)userDidDeleteRecordZone:(id)arg1;
- (id)userIdentity;

@end
