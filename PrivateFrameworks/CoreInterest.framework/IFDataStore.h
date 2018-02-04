/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFDataStore : NSObject {
    struct sqlite3 { } * _database;
    NSURL * _path;
    unsigned long long  _schemaVersion;
}

@property (nonatomic, readonly) struct sqlite3 { }*database;
@property (nonatomic, readonly, copy) NSURL *path;
@property (nonatomic, readonly) long long version;

+ (id)migrationPlan;

- (void).cxx_destruct;
- (void)_dropAllOfType:(id)arg1;
- (bool)_reset;
- (void)_runQuery:(id)arg1 preparation:(id /* block */)arg2 step:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)clear;
- (void)clearAll;
- (long long)configureDatabase;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (long long)migrate;
- (long long)migrateToVersion:(unsigned long long)arg1 withMigrationPlan:(id)arg2;
- (id)path;
- (long long)runMigrationPlan:(id)arg1 toVersion:(unsigned long long)arg2;
- (void)runQuery:(id)arg1;
- (void)runQuery:(id)arg1 inTransaction:(bool)arg2;
- (void)updateSchemaVersionNumberTo:(long long)arg1;
- (long long)version;

@end
