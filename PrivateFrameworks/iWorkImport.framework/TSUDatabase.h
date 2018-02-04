/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUDatabase : NSObject {
    struct sqlite3_stmt { } * _beginTransactionStatement;
    struct sqlite3_stmt { } * _commitTransactionStatement;
    struct sqlite3 { } * _db;
    bool  _readonly;
    struct sqlite3_stmt { } * _rollbackTransactionStatement;
}

@property (nonatomic, readonly) struct sqlite3 { }*_sqliteDatabase;
@property (nonatomic, readonly) bool readonly;

- (id)_initWithPath:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (struct sqlite3 { }*)_sqliteDatabase;
- (bool)_upgradeSchemaWithError:(id*)arg1;
- (bool)beginTransactionWithError:(id*)arg1;
- (bool)closeWithError:(id*)arg1;
- (bool)commitTransactionWithError:(id*)arg1;
- (bool)compactWithError:(id*)arg1;
- (void)dealloc;
- (bool)endSingleResultQuery:(struct sqlite3_stmt { }*)arg1 shouldFinalize:(bool)arg2 error:(id*)arg3;
- (bool)executeUpdate:(struct sqlite3_stmt { }*)arg1 shouldFinalize:(bool)arg2 error:(id*)arg3;
- (bool)executeUpdateWithSql:(const char *)arg1 error:(id*)arg2;
- (id)initReadonlyWithPath:(id)arg1 error:(id*)arg2;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (bool)needsUpgradeFromSchemaVersion:(int)arg1;
- (bool)prepareStatement:(struct sqlite3_stmt {}**)arg1 sql:(const char *)arg2 error:(id*)arg3;
- (bool)readonly;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (bool)setSchemaVersion:(int)arg1 error:(id*)arg2;
- (bool)startSingleResultQuery:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (bool)upgradeFromSchemaVersion:(int)arg1 error:(id*)arg2;

@end
