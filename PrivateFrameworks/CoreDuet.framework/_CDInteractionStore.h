/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionStore : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {
    <_DKLocationHistorian> * _locationHistorian;
    _CDInteractionStoreNotifier * _notifier;
    _DKCoreDataStorage * _storage;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain) <_DKLocationHistorian> *locationHistorian;

+ (id)defaultDatabaseDirectory;
+ (id)storeWithDirectory:(id)arg1 readOnly:(bool)arg2;

- (void).cxx_destruct;
- (void)anonymizeContactsWithSalt:(id)arg1;
- (void)anonymizeInteractionsWithSalt:(id)arg1;
- (void)anonymizeKeywordsWithSalt:(id)arg1;
- (void)anonymizeWithSalt:(id)arg1;
- (id)anonymizedCopyToDirectory:(id)arg1 salt:(id)arg2;
- (id)batchFetchExistingContactRecords:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)batchFetchExistingInteractionsWithUUIDs:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)batchFetchExistingKeywordRecords:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (void)closeStorage;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id*)arg2;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2;
- (id)createInteractionFromRecord:(id)arg1;
- (id)createInteractionRecord:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)createInteractionRecord:(id)arg1 context:(id)arg2 keywordCache:(id)arg3 contactCache:(id)arg4 error:(id*)arg5;
- (id)createKeywordFromRecord:(id)arg1;
- (id)dateFromTimeIntervalSinceRef:(double)arg1;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)deleteInteractionsOlderThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id*)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
- (unsigned long long)deleteOldInteractionsIfNeededToLimitTotalNumber:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (bool)deleteStorage;
- (unsigned long long)deleteUnreferencedContacts;
- (unsigned long long)deleteUnreferencedKeywords;
- (id)errorForException:(id)arg1;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (void)fillWithoutRelationshipsInteractionRecord:(id)arg1 fromInteraction:(id)arg2;
- (id)getContactForRecord:(id)arg1;
- (id)histogramContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 inDirectory:(id)arg2;
- (id)initWithDirectory:(id)arg1 readOnly:(bool)arg2;
- (id)locationHistorian;
- (unsigned long long)numberOfContactsMatchingPredicate:(id)arg1;
- (unsigned long long)numberOfInteractionsMatchingPredicate:(id)arg1;
- (bool)openAndCheckIfReadable;
- (id)queryContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2 error:(id*)arg3;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (long long)queryVersionNumber;
- (bool)recordInteraction:(id)arg1;
- (bool)recordInteractions:(id)arg1;
- (void)recordInteractions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)recordInteractions:(id)arg1 error:(id*)arg2;
- (bool)recordInteractionsBatch:(id)arg1 error:(id*)arg2;
- (bool)recordVersionNumber:(long long)arg1;
- (void)setLocationHistorian:(id)arg1;
- (void)updateCachedStatsForContactRecord:(id)arg1 isSender:(bool)arg2 withInteraction:(id)arg3;

@end
