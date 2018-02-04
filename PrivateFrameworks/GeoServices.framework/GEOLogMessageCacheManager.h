/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMessageCacheManager : NSObject {
    NSString * _adaptorId;
    long long  _cacheCountFlushThreshold;
    unsigned long long  _encryptionType;
    bool  _fromLogFrameworkAdaptor;
    long long  _logMessageCacheEndIterator;
    NSString * _logMessageCacheFilePath;
    long long  _logMessageCacheIterator;
    long long  _logMessagesOverflowPurgeSize;
    GEOLogMsgCacheDBInfo * _logMsgCacheDBInfo;
    long long  _maxNumberOfLogMessagesAllowedInCache;
    long long  _numberOfLogMessagesInCache;
    NSDate * _oldestLogMessageInCache;
    NSString * _policyIdentifier;
    bool  _realtimeAdaptor;
    NSMutableArray * _retrivedLogMessageCacheIds;
    int  _supportedLogMessageType;
}

@property (nonatomic) unsigned long long encryptionType;
@property (nonatomic) NSDate *oldestLogMessageInCache;

+ (id)logMsgCacheDatabaseObjectForPolicyIdentity:(id)arg1;

- (void).cxx_destruct;
- (void)_addRetryCountColumnToTable;
- (void)_beginLogMessageCacheTransaction;
- (void)_cleanupLogMessageCacheDatabase;
- (void)_cleanupPartiallyCreatedLogMessageCacheDBFile;
- (void)_commitLogMessageCacheTransaction;
- (void)_createTables;
- (int)_deleteAllExpiredLogMessages:(double)arg1;
- (void)_deleteExpiredLogMessageCacheDBFile:(double)arg1;
- (int)_deleteFixedNumberOfOlderLogMessages:(long long)arg1;
- (bool)_encryptionEnabled;
- (bool)_executeSQL:(id)arg1;
- (long long)_getNumberOfLogMessagesInCache;
- (id)_groupIDOfNextPendingLogMessage;
- (bool)_logMessageCacheFileExists;
- (void)_migrateDatabaseIfNeeded;
- (void)_migrateLogMessageCacheTableFromOldDatabase:(id)arg1;
- (void)_openCreateLogMessageCacheDBFile;
- (void)_openLogMessageCacheDBFile;
- (long long)_queryLogMessageCacheDBUserVersion;
- (id)_retrieveBatchOfLogMessagesLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (long long)_retrieveEndLogMessageCacheIterator;
- (void)_rollbackLogMessageCacheTransaction;
- (void)_setLogMessageCacheDBJournalMode;
- (void)_setupWithLogMsgCacheFilePath:(id)arg1 policyIdentifier:(id)arg2 maxNumberOfLogMessagesAllowedInCache:(long long)arg3 logMessagesOverflowPurgeSize:(long long)arg4 encryptionType:(unsigned long long)arg5 realtimeAdaptor:(bool)arg6 cacheCountFlushThreshold:(long long)arg7 adaptorId:(id)arg8 supportedLogMessageType:(int)arg9 fromLogFrameworkAdaptor:(bool)arg10;
- (int)_sqlite3_open_protection_flag;
- (void)_startLogMessageCacheTransactionTimer;
- (void)_stopLogMessageCacheTransactionTimer;
- (void)_updateLogMessageCacheDBUserVersion;
- (id)_updatedSQLQueryFromQuery:(id)arg1;
- (bool)_usingInMemoryLogMessageCacheFile;
- (void)beginLogMessageCacheTransaction;
- (void)closeLogMessageCache;
- (void)commitLogMessageCacheTransaction;
- (void)dealloc;
- (unsigned long long)encryptionType;
- (id)initWithLogMessageCacheDBInfo:(id)arg1 logMessageCacheFilePath:(id)arg2 policyIdentifier:(id)arg3 maxNumberOfLogMessagesAllowedInCache:(long long)arg4 logMessagesOverflowPurgeSize:(long long)arg5 encryptionType:(unsigned long long)arg6 realtimeAdaptor:(bool)arg7 cacheCountFlushThreshold:(long long)arg8 adaptorId:(id)arg9 supportedLogMessageType:(int)arg10 fromLogFrameworkAdaptor:(bool)arg11;
- (id)initWithLogMessageCacheFilePath:(id)arg1 policyIdentifier:(id)arg2 maxNumberOfLogMessagesAllowedInCache:(long long)arg3 logMessagesOverflowPurgeSize:(long long)arg4 encryptionType:(unsigned long long)arg5 realtimeAdaptor:(bool)arg6 cacheCountFlushThreshold:(long long)arg7 adaptorId:(id)arg8 supportedLogMessageType:(int)arg9 fromLogFrameworkAdaptor:(bool)arg10;
- (void)insertLogMessageIntoCache:(id)arg1;
- (bool)isLogMessageCacheEmpty;
- (id)oldestLogMessageInCache;
- (void)openCreateLogMessageCache;
- (void)openLogMessageCache;
- (void)purgeAllLogMessagesFromCache;
- (void)purgeCurrentlyRetrievedLogMessagesFromCache;
- (void)purgeExpiredLogMessagesFromCache:(double)arg1;
- (void)resetLogMessageCacheIterator;
- (id)retrieveFirstBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (id)retrieveNextBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (void)rollbackLogMessageCacheTransaction;
- (void)setEncryptionType:(unsigned long long)arg1;
- (void)setOldestLogMessageInCache:(id)arg1;
- (bool)shouldFlushLogMessageCache;
- (void)updateCurrentlyRetrievedLogMessagesRetryCount;

@end
