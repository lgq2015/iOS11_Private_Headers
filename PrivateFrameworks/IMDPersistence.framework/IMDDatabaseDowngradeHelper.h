/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDDatabaseDowngradeHelper : NSObject {
    NSArray * _createIndexesSQL;
    NSArray * _createTablesSQL;
    NSArray * _createTriggersSQL;
    struct sqlite3 { } * _database;
    long long  _downgradesToVersion;
    bool  _inTransaction;
    NSString * _path;
    NSArray * _tableNames;
}

@property (nonatomic, retain) NSArray *createIndexesSQL;
@property (nonatomic, retain) NSArray *createTablesSQL;
@property (nonatomic, retain) NSArray *createTriggersSQL;
@property (nonatomic, readonly) struct sqlite3 { }*database;
@property (nonatomic, readonly) long long downgradesToVersion;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSArray *tableNames;

- (bool)_readIntegerFromQuery:(id)arg1 resultBlock:(id /* block */)arg2;
- (bool)beginTransaction:(id /* block */)arg1;
- (bool)cloneTableContents:(id)arg1 withOperation:(struct IMDSqlOperation { void *x1; void *x2; struct __CFString {} *x3; void *x4; struct IMDSqlStatement { void *x_5_1_1; int x_5_1_2; struct __CFString {} *x_5_1_3; struct sqlite3 {} *x_5_1_4; int x_5_1_5; int x_5_1_6; int x_5_1_7; struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x_1_3_1; char *x_1_3_2; char *x_1_3_3; char *x_1_3_4; int x_1_3_5; } x_8_2_1; unsigned long long x_8_2_2; unsigned long long x_8_2_3; struct __CFString {} *x_8_2_4; double x_8_2_5; double x_8_2_6; double x_8_2_7; } x_5_1_8; } x5; struct __CFError {} *x6; }*)arg2 resultBlock:(id /* block */)arg3;
- (bool)close:(id /* block */)arg1;
- (bool)commitTransaction:(id /* block */)arg1;
- (bool)createIndexes:(id /* block */)arg1;
- (id)createIndexesSQL;
- (bool)createTables:(id /* block */)arg1;
- (id)createTablesSQL;
- (bool)createTriggers:(id /* block */)arg1;
- (id)createTriggersSQL;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (long long)downgradesToVersion;
- (id)errorFromResult:(int)arg1 query:(id)arg2;
- (bool)importDataFromWhitetailDatabaseWithSqlOperation:(struct IMDSqlOperation { void *x1; void *x2; struct __CFString {} *x3; void *x4; struct IMDSqlStatement { void *x_5_1_1; int x_5_1_2; struct __CFString {} *x_5_1_3; struct sqlite3 {} *x_5_1_4; int x_5_1_5; int x_5_1_6; int x_5_1_7; struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x_1_3_1; char *x_1_3_2; char *x_1_3_3; char *x_1_3_4; int x_1_3_5; } x_8_2_1; unsigned long long x_8_2_2; unsigned long long x_8_2_3; struct __CFString {} *x_8_2_4; double x_8_2_5; double x_8_2_6; double x_8_2_7; } x_5_1_8; } x5; struct __CFError {} *x6; }*)arg1 resultBlock:(id /* block */)arg2;
- (id)initWithPath:(id)arg1 tableNames:(id)arg2 createTablesSQL:(id)arg3 createIndexesSQL:(id)arg4 createTriggersSQL:(id)arg5 downgradesToVersion:(long long)arg6;
- (bool)isOpen;
- (bool)open:(id /* block */)arg1;
- (id)path;
- (bool)readDatabaseVersion:(id /* block */)arg1;
- (bool)readRowCountForTable:(id)arg1 resultBlock:(id /* block */)arg2;
- (bool)revertTransaction:(id /* block */)arg1;
- (bool)runArrayOfQueries:(id)arg1 resultBlock:(id /* block */)arg2;
- (bool)runSimpleQuery:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)setCreateIndexesSQL:(id)arg1;
- (void)setCreateTablesSQL:(id)arg1;
- (void)setCreateTriggersSQL:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setTableNames:(id)arg1;
- (id)tableNames;
- (bool)writeDatabaseVersion:(long long)arg1 resultBlock:(id /* block */)arg2;

@end
