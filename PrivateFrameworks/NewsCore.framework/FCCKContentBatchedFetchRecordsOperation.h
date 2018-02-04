/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    NSMutableDictionary * _errorsByRecordID;
    id /* block */  _fetchRecordsCompletionBlock;
    NSError * _operationError;
    NSArray * _recordIDs;
    NSMutableDictionary * _recordsByRecordID;
    NSMutableArray * _remainingRecordIDBatches;
}

@property (nonatomic, retain) FCCKContentDatabase *database;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, retain) NSMutableDictionary *errorsByRecordID;
@property (nonatomic, copy) id /* block */ fetchRecordsCompletionBlock;
@property (nonatomic, retain) NSError *operationError;
@property (nonatomic, copy) NSArray *recordIDs;
@property (nonatomic, retain) NSMutableDictionary *recordsByRecordID;
@property (nonatomic, retain) NSMutableArray *remainingRecordIDBatches;

- (void).cxx_destruct;
- (void)_continueRefreshing;
- (id)database;
- (id)desiredKeys;
- (id)errorsByRecordID;
- (id /* block */)fetchRecordsCompletionBlock;
- (id)init;
- (id)operationError;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordIDs;
- (id)recordsByRecordID;
- (id)remainingRecordIDBatches;
- (void)resetForRetry;
- (void)setDatabase:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setErrorsByRecordID:(id)arg1;
- (void)setFetchRecordsCompletionBlock:(id /* block */)arg1;
- (void)setOperationError:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordsByRecordID:(id)arg1;
- (void)setRemainingRecordIDBatches:(id)arg1;
- (bool)validateOperation;

@end
