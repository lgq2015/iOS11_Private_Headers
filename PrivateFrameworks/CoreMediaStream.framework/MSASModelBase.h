/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASModelBase : NSObject {
    struct sqlite3 { } * _db;
    NSObject<OS_dispatch_queue> * _dbQueue;
    bool  _dbWasRecreated;
    NSString * _personID;
    NSObject<OS_dispatch_queue> * _statementQueue;
    struct __CFDictionary { } * _statements;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic, readonly) struct sqlite3 { }*dbQueueDB;
@property (nonatomic) bool dbWasRecreated;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statementQueue;
@property (nonatomic) struct __CFDictionary { }*statements;

- (void).cxx_destruct;
- (void)beginTransaction;
- (struct sqlite3 { }*)db;
- (id)dbQueue;
- (void)dbQueueBeginTransaction;
- (struct sqlite3 { }*)dbQueueDB;
- (void)dbQueueDeletePersistentValueWithKey:(id)arg1;
- (void)dbQueueEndTransaction;
- (void)dbQueueInitializeDatabasePath:(id)arg1 currentVersion:(int)arg2;
- (id)dbQueuePersistentDataForKey:(id)arg1;
- (id)dbQueuePersistentObjectForKey:(id)arg1;
- (id)dbQueuePersistentStringForKey:(id)arg1;
- (void)dbQueueRollbackTransaction;
- (void)dbQueueSetPersistentData:(id)arg1 forKey:(id)arg2;
- (void)dbQueueSetPersistentObject:(id)arg1 forKey:(id)arg2;
- (void)dbQueueSetPersistentString:(id)arg1 forKey:(id)arg2;
- (bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (bool)dbWasRecreated;
- (void)dealloc;
- (void)deletePersistentValueWithKey:(id)arg1;
- (void)endTransaction;
- (id)initWithPersonID:(id)arg1 databasePath:(id)arg2 currentVersion:(int)arg3;
- (id)persistentObjectForKey:(id)arg1;
- (id)persistentStringForKey:(id)arg1;
- (id)personID;
- (void)setDbWasRecreated:(bool)arg1;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2;
- (void)setPersistentString:(id)arg1 forKey:(id)arg2;
- (void)setStatementQueue:(id)arg1;
- (void)setStatements:(struct __CFDictionary { }*)arg1;
- (void)shutDownForDestruction:(bool)arg1 completionBlock:(id /* block */)arg2;
- (struct sqlite3_stmt { }*)statementForString:(id)arg1;
- (id)statementQueue;
- (struct __CFDictionary { }*)statements;

@end
