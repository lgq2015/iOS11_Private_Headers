/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSQLiteDB : NSObject {
    NSURL * _databaseFileURL;
    struct sqlite3 { } * _db;
    bool  _didEncounterExternalResourceErrorInTransaction;
    union { 
        struct atomic_flag { 
            bool _Value; 
        } flag; 
        int dummy; 
    }  _didTearDown;
    NSMutableArray * _externalFilesActiveChannels;
    NSObject<OS_dispatch_group> * _externalFilesGroup;
    NSObject<OS_dispatch_queue> * _externalFilesQueue;
    NSMutableArray * _filesAddedDuringTransaction;
    NSMutableArray * _filesDeletedDuringTransaction;
    bool  _isInTransaction;
    bool  _isTemporaryInMemoryDatabase;
    NSError * _lastError;
    NSObject<OS_os_log> * _log;
    NSDictionary * _pragmas;
    NSMapTable * _preparedStatements;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _setupBlock;
    int  _sqliteFlags;
    NSMapTable * _virtualTables;
}

@property (nonatomic, readonly) NSString *dbFilePath;
@property (nonatomic, readonly) bool isDBReady;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *isolationQueue;
@property (nonatomic, readonly) NSError *lastError;
@property (nonatomic, readonly) NSDictionary *pragmas;
@property (nonatomic, readonly) struct sqlite3 { }*sqliteDB;

+ (id)defaultPragmas;

- (void).cxx_destruct;
- (id)UUIDForColumn:(int)arg1 inStatment:(struct sqlite3_stmt { }*)arg2;
- (bool)_bindParameter:(const char *)arg1 inStatement:(struct sqlite3_stmt { }*)arg2 error:(id*)arg3 withBinder:(id /* block */)arg4;
- (id)_blobForColumn:(int)arg1 inStatment:(struct sqlite3_stmt { }*)arg2 noCopy:(bool)arg3;
- (void)_channelCleanupFailedWithError:(int)arg1;
- (void)_channelEncounteredError:(int)arg1;
- (void)_closeDB;
- (void)_createParentDirectory;
- (void)_debug_lockDB:(id)arg1;
- (void)_debug_unlockDB:(id)arg1;
- (bool)_deleteAllDatabaseFilesIfCorrupt:(int)arg1;
- (void)_deleteAndReopenDatabaseIfCorrupt:(int)arg1;
- (void)_doneWritingToChannel:(id)arg1;
- (void)_execute:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (int)_openAndConfigure;
- (bool)_openAndConfigureWithRetryIfCorrupt;
- (int)_openDatabaseFile;
- (int)_setPragmas;
- (bool)_waitForAllTransactionExternalResources;
- (void)_writeTransactionExternalResourceWithData:(id)arg1 toURL:(id)arg2;
- (bool)bindBlobNoCopyParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (bool)bindBlobParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (bool)bindInt64Parameter:(const char *)arg1 toValue:(long long)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (bool)bindIntParameter:(const char *)arg1 toValue:(int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (bool)bindParameter:(const char *)arg1 toUUID:(id)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (bool)bindRealParameter:(const char *)arg1 toValue:(double)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (bool)bindTextParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (bool)bindZeroBlobParameter:(const char *)arg1 length:(unsigned long long)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (id)blobForColumn:(int)arg1 inStatment:(struct sqlite3_stmt { }*)arg2;
- (void)clearStatement:(id)arg1;
- (bool)createTable:(const char *)arg1 withDrop:(const char *)arg2;
- (id)dbFilePath;
- (void)dealloc;
- (bool)deleteExternalResourceAtURL:(id)arg1 error:(id*)arg2;
- (id)description;
- (double)doubleForColumn:(int)arg1 inStatment:(struct sqlite3_stmt { }*)arg2;
- (void)executeAsync:(id /* block */)arg1;
- (void)executeAsync:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (bool)executeInTransaction:(id /* block */)arg1;
- (bool)executeStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (bool)executeStatement:(id)arg1 statementBlock:(id /* block */)arg2;
- (void)executeSync:(id /* block */)arg1;
- (void)executeSync:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)initWithQueueName:(const char *)arg1 log:(id)arg2 databaseFileURL:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(id /* block */)arg6;
- (id)initWithQueueName:(const char *)arg1 logFacility:(const char *)arg2 dbFilePath:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(id /* block */)arg6;
- (long long)int64ForColumn:(int)arg1 inStatment:(struct sqlite3_stmt { }*)arg2;
- (int)intForColumn:(int)arg1 inStatment:(struct sqlite3_stmt { }*)arg2;
- (bool)isDBReady;
- (id)isolationQueue;
- (id)lastError;
- (long long)lastInsertRowID;
- (id)noCopyBlobForColumn:(int)arg1 inStatment:(struct sqlite3_stmt { }*)arg2;
- (id)pragmas;
- (bool)prepareStatement:(const char *)arg1 forKey:(id)arg2;
- (bool)registerVirtualTable:(id)arg1;
- (bool)reportSQLiteErrorCode:(int)arg1 method:(id)arg2 error:(id*)arg3;
- (bool)setup;
- (struct sqlite3 { }*)sqliteDB;
- (struct sqlite3_stmt { }*)statementForKey:(id)arg1;
- (bool)statementForKey:(id)arg1 statementBlock:(id /* block */)arg2;
- (id)stringForColumn:(int)arg1 inStatment:(struct sqlite3_stmt { }*)arg2;
- (void)tearDown;
- (bool)unregisterVirtualTable:(id)arg1;
- (bool)writeBlobData:(id)arg1 toTable:(const char *)arg2 column:(const char *)arg3 rowID:(long long)arg4 error:(id*)arg5;
- (bool)writeExternalResourceWithData:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

@end
