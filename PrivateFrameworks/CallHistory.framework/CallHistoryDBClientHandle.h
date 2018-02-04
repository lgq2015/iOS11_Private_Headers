/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {
    id  _observerCallRecordRef;
    id  _observerCallTimersRef;
    NSObject<OS_dispatch_queue> * _recentCallQueue;
    CallHistoryDBHandle * dbStoreHandle;
}

@property (nonatomic, readonly) CallHistoryDBHandle *dbStoreHandle;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recentCallQueue;

+ (id)createForClient;
+ (id)createForServer;

- (void).cxx_destruct;
- (id)convertToCHRecentCalls_sync:(id)arg1;
- (bool)createCallRecord:(id)arg1;
- (bool)createCallRecord:(id)arg1 error:(id*)arg2;
- (bool)createCallRecord:(id)arg1 error:(id*)arg2 save:(bool)arg3;
- (bool)createCallRecords:(id)arg1;
- (bool)createCallRecords:(id)arg1 error:(id*)arg2;
- (id)dbStoreHandle;
- (void)dealloc;
- (bool)deleteAll;
- (bool)deleteAll:(id*)arg1;
- (bool)deleteObjectWithUniqueId:(id)arg1;
- (bool)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2;
- (bool)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 save:(bool)arg3;
- (bool)deleteObjectsWithUniqueIds:(id)arg1;
- (bool)deleteObjectsWithUniqueIds:(id)arg1 error:(id*)arg2;
- (id)deleteWithPredicate:(id)arg1;
- (id)fetchAll;
- (id)fetchAllNoLimit;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (unsigned int)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3;
- (void)handleCallRecordSave_sync:(id)arg1;
- (void)handleCallTimersSave_sync:(id)arg1;
- (id)init;
- (id)init:(bool)arg1;
- (id)manager;
- (bool)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (void)parseCallStatus_sync:(unsigned int)arg1 isAnswered:(bool*)arg2 isOriginated:(bool*)arg3;
- (id)recentCallQueue;
- (void)registerForNotifications;
- (bool)resetAllTimers;
- (void)resetTimers;
- (bool)saveDatabase:(id*)arg1;
- (void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2;
- (void)setRecentCallQueue:(id)arg1;
- (void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2;
- (id)timerIncoming;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (id)updateAllCallRecords:(id)arg1;
- (id)updateAllCallRecords:(id)arg1 error:(id*)arg2;
- (id)updateAllCallRecords_sync:(id)arg1 error:(id*)arg2;
- (bool)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2;
- (id)updateCallRecords:(id)arg1;
- (id)updateCallRecords:(id)arg1 error:(id*)arg2;
- (id)updateCallRecords:(id)arg1 error:(id*)arg2 save:(bool)arg3;
- (id)updateCallRecords_sync:(id)arg1 error:(id*)arg2 save:(bool)arg3;
- (bool)willHandleNotification_sync:(id)arg1;

@end
