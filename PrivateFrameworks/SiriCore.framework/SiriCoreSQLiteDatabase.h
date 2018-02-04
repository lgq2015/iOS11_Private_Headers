/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteDatabase : NSObject {
    NSCache * _cachedSQLiteStatementsByQueryString;
    long long  _dataProtectionClass;
    struct sqlite3 { } * _handle;
    long long  _options;
    NSString * _path;
}

@property (nonatomic, readonly) long long dataProtectionClass;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly, copy) NSString *path;

- (void).cxx_destruct;
- (bool)alterTableWithName:(id)arg1 addColumn:(id)arg2 error:(id*)arg3;
- (bool)alterTableWithName:(id)arg1 renameTo:(id)arg2 error:(id*)arg3;
- (bool)beginTransactionWithError:(id*)arg1;
- (bool)closeWithError:(id*)arg1;
- (bool)commitTransactionWithError:(id*)arg1;
- (unsigned long long)countValuesInTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 range:(id)arg5 error:(id*)arg6;
- (bool)createIndex:(id)arg1 error:(id*)arg2;
- (bool)createTable:(id)arg1 error:(id*)arg2;
- (long long)dataProtectionClass;
- (bool)deleteFromTableWithName:(id)arg1 criterion:(id)arg2 error:(id*)arg3;
- (bool)dropIndexWithName:(id)arg1 error:(id*)arg2;
- (bool)dropTableWithName:(id)arg1 error:(id*)arg2;
- (id)executeQuery:(id)arg1;
- (bool)executeQuery:(id)arg1 error:(id*)arg2;
- (bool)executeQueryString:(id)arg1 error:(id*)arg2;
- (id)fetchTableNamesWithError:(id*)arg1;
- (id)fetchTableWithName:(id)arg1 error:(id*)arg2;
- (id)initWithPath:(id)arg1 dataProtectionClass:(long long)arg2 options:(long long)arg3;
- (bool)insertIntoTableWithName:(id)arg1 valueMap:(id)arg2 error:(id*)arg3;
- (bool)openWithError:(id*)arg1;
- (long long)options;
- (id)path;
- (bool)performForeignKeyCheckWithError:(id*)arg1;
- (bool)performIntegrityCheckWithError:(id*)arg1;
- (bool)performQuickCheckWithError:(id*)arg1;
- (bool)releaseSavepointWithName:(id)arg1 error:(id*)arg2;
- (bool)rollbackToSavepointWithName:(id)arg1 error:(id*)arg2;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (bool)savepointWithName:(id)arg1 error:(id*)arg2;
- (id)selectValueMapsFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id*)arg7;
- (id)selectValueTuplesFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id*)arg7;
- (id)selectValuesFromTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id*)arg7;
- (bool)updateTableWithName:(id)arg1 valueMap:(id)arg2 criterion:(id)arg3 error:(id*)arg4;
- (bool)vacuumWithError:(id*)arg1;

@end
