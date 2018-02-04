/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSQLiteConnection : NSObject {
    NSMutableDictionary * _cachedPreparedStatementsBySQLPattern;
    struct sqlite3 { } * _db;
    NSObject<OS_dispatch_queue> * _dbQueue;
    bool  _isInTransaction;
}

@property (nonatomic, retain) NSMutableDictionary *cachedPreparedStatementsBySQLPattern;
@property (nonatomic) struct sqlite3 { }*db;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic) bool isInTransaction;

+ (bool)errorCodeMeansCorruptedDatabase:(int)arg1;

- (void).cxx_destruct;
- (void)_closeDatabase;
- (int)_executeSQL:(id)arg1;
- (int)_lastErrorCode;
- (id)_lastErrorMessage;
- (bool)_openDatabaseWithPath:(id)arg1 protectData:(bool)arg2 errorCode:(int*)arg3;
- (struct sqlite3_stmt { }*)_preparedStatementForPattern:(id)arg1 cacheStatement:(bool)arg2;
- (int)_runRetryingIfNeeded:(id /* block */)arg1;
- (int)_stepPreparedStatement:(struct sqlite3_stmt { }*)arg1;
- (bool)beginTransaction;
- (id)cachedPreparedStatementsBySQLPattern;
- (bool)commitTransaction;
- (struct sqlite3 { }*)db;
- (id)dbQueue;
- (void)dealloc;
- (int)executeSQL:(id)arg1;
- (id)initWithPath:(id)arg1 protectData:(bool)arg2 errorCode:(int*)arg3;
- (bool)isInTransaction;
- (int)lastErrorCode;
- (id)lastErrorMessage;
- (struct sqlite3_stmt { }*)preparedStatementForPattern:(id)arg1;
- (struct sqlite3_stmt { }*)preparedStatementForPattern:(id)arg1 cacheStatement:(bool)arg2;
- (bool)rollbackTransaction;
- (void)setCachedPreparedStatementsBySQLPattern:(id)arg1;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setDbQueue:(id)arg1;
- (void)setIsInTransaction:(bool)arg1;
- (int)stepPreparedStatement:(struct sqlite3_stmt { }*)arg1;
- (bool)tableExists:(id)arg1 inDatabase:(id)arg2;

@end
