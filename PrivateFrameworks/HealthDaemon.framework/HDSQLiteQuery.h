/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteQuery : NSObject {
    HDSQLiteDatabase * _database;
    HDSQLiteQueryDescriptor * _descriptor;
}

@property (readonly) HDSQLiteDatabase *database;
@property (readonly) HDSQLiteQueryDescriptor *queryDescriptor;

- (void).cxx_destruct;
- (void)bindToSelectStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copySelectSQLWithProperties:(id)arg1;
- (id)database;
- (bool)deleteAllEntitiesWithError:(id*)arg1;
- (void)enumerateEntitiesUsingBlock:(id /* block */)arg1;
- (bool)enumeratePersistentIDsAndProperties:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (bool)enumerateProperties:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;
- (id)queryDescriptor;

@end
