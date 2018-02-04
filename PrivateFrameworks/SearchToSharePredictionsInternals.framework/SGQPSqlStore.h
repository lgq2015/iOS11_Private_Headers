/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPSqlStore : NSObject {
    _PASSqliteDatabase * _db;
    NSString * _dbPath;
    NSObject<_PASSqliteErrorHandlerProtocol> * _errorHandler;
    _PASDatabaseJournal * _journal;
    id  _lockStateNotificationToken;
}

+ (id)inMemoryStoreForTesting;
+ (id)inMemoryStoreForTestingWithErrorHandler:(id)arg1;
+ (id)storeWithPath:(id)arg1;
+ (id)storeWithPath:(id)arg1 errorHandler:(id)arg2;

- (void).cxx_destruct;
- (bool)_createDbIfUnlocked;
- (long long)_migrateTo:(id)arg1;
- (void)_registerJournalUnlockHandler;
- (bool)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned long long)arg2 inTransactionOnDb:(id)arg3;
- (void)_runQuery:(id)arg1 withValues:(id)arg2;
- (void)_setupJournalAndExecuteExistingJournalQueries;
- (bool)createSnapshot:(id)arg1;
- (id)dbForTesting;
- (void)dealloc;
- (void)deleteMessagesBeforeDate:(id)arg1;
- (void)deleteMessagesForConversation:(id)arg1;
- (void)deleteMessagesWithUniqueIdentifiers:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 errorHandler:(id)arg2;
- (id)loadMessagesForConversation:(id)arg1 limit:(long long)arg2;
- (void)migrateForTesting:(id)arg1;
- (void)startJournaling;
- (void)stopJournalingAndExecuteQueries;
- (void)storeMessageWithUid:(id)arg1 conversationId:(id)arg2 content:(id)arg3 createdAt:(id)arg4 senderIsAccountOwner:(bool)arg5;

@end
