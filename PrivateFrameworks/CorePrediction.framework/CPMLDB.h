/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLDB : NSObject {
    NSDictionary * _cInfo;
    NSString * _dbFileName;
    NSObject<OS_dispatch_queue> * _dispatch_queue;
    int  _openCPMLDBOptions;
    <CPMLAlgorithmProtocol> * _thedelegate;
    NSString * _trainingFile;
    NSString * _trainingModelFileAndPath;
    double * cardinality;
    unsigned int  commitCountMax;
    CPMLSchema * cpSchema;
    unsigned int  currentCommitCount;
    double  currentTimeInterval;
    struct sqlite3 { } * db;
    NSMutableString * dbTableName;
    NSMutableArray * indexer;
    double * max;
    unsigned long long  maxFieldCount;
    double * mean;
    double * min;
    double  minTimeToLogIndex;
    unsigned long long * repFields;
    unsigned int  rowCount;
    double * sigma;
    double * sumOfX;
    double * sumOfXX;
    NSMutableDictionary * vectorListCardinality;
}

@property (readonly) CPMLSchema *cpSchema;
@property (nonatomic, readonly) struct sqlite3 { }*db;
@property (readonly) NSString *dbFileName;

+ (id)getConfigurationFromPlist:(id)arg1;

- (void).cxx_destruct;
- (void)addColumnToTable:(id)arg1 withNewColumn:(id)arg2;
- (id)addValues:(int)arg1;
- (double)columnQueryFor:(unsigned int)arg1 withQuery:(id)arg2;
- (id)cpSchema;
- (void)createTable:(id)arg1 withSchema:(id)arg2 withExistingTable:(bool)arg3;
- (struct sqlite3 { }*)db;
- (id)dbFileName;
- (void)dealloc;
- (void)deleteAllRows:(id)arg1;
- (void)deleteRow:(id)arg1 whereMatch:(id)arg2;
- (void)doInitCommon:(id)arg1 withDict:(id)arg2 withFileExists:(bool*)arg3 withWriteOptions:(int)arg4;
- (void)doInitialize:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3;
- (void)doInitializeWithDataFile:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4;
- (void)dropCommands:(id)arg1;
- (void)execSQLCommand:(id)arg1;
- (id)extractRow:(id)arg1;
- (id)fileProtectionClassRequest:(id)arg1;
- (void)flushDB;
- (unsigned long long)getCardinality:(unsigned int)arg1;
- (unsigned long long)getColumnCount;
- (id)getColumnName:(unsigned long long)arg1;
- (unsigned long long)getCombinedRemapTableCardinality:(unsigned int)arg1;
- (id)getDelegate;
- (id)getDispatchQueue;
- (double)getMaxFor:(unsigned int)arg1;
- (double)getMeanFor:(unsigned int)arg1;
- (double)getMinFor:(unsigned int)arg1;
- (id)getRemapTable;
- (unsigned long long)getRowCount;
- (int)getSchemaType:(unsigned long long)arg1;
- (double)getStdDevFor:(unsigned int)arg1;
- (int)getVectorContent:(unsigned long long)arg1;
- (int)getYColumnPosition;
- (void)indexTable:(id)arg1 withColumn:(id)arg2;
- (void)initMaxSizeStatistics:(unsigned long long)arg1;
- (void)initStatisticsTable;
- (id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4;
- (id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withPlistPath:(id)arg3 withWriteOptions:(int)arg4;
- (id)initWithDBName:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3;
- (id)initWithDBName:(id)arg1 withPlistPath:(id)arg2 withWriteOptions:(int)arg3;
- (void)insertIntoTable:(id)arg1 withTuple:(id)arg2;
- (bool)isColumnContinousData:(unsigned int)arg1;
- (bool)loadStatisticTable;
- (void)loadTables;
- (bool)logBatchNSArray:(id)arg1;
- (bool)logBatchNSDictionary:(id)arg1;
- (bool)logCTypesV:(void*)arg1;
- (bool)logNSArray:(id)arg1;
- (bool)logNSDataDouble:(id)arg1;
- (bool)logNSDataFloat:(id)arg1;
- (bool)logNSDictionary:(id)arg1;
- (bool)logNSObjectV:(id)arg1;
- (id)prepInsertStatementForMainTable;
- (void)printFormat:(id)arg1;
- (void)queryDatabase:(id)arg1 whereMatch:(id)arg2;
- (void)removeTrainingRow:(id)arg1;
- (void)removeTrainingRowData:(double)arg1;
- (bool)reset;
- (void)restart;
- (void)setCPMLAlgorithm:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)updateStatistics;
- (void)updateStatisticsReal:(double)arg1 colPosition:(unsigned long long)arg2;
- (double)updateStatisticsString:(id)arg1 colPosition:(unsigned long long)arg2;
- (void)updateTable:(id)arg1 withAttribute:(id)arg2 whereMatch:(id)arg3;

@end
