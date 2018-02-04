/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation {
    CKRecordID * _canaryRecordID;
    NSDictionary * _changeTagsByRecordID;
    bool  _checkForDeletions;
    FCCKContentDatabase * _database;
    NSMutableSet * _deletedRecordIDs;
    NSArray * _desiredKeys;
    NSMutableDictionary * _errorsByRecordID;
    NSError * _operationError;
    NSArray * _recordIDs;
    id /* block */  _refreshRecordsCompletionBlock;
    NSMutableSet * _refreshedRecordIDs;
    NSMutableArray * _remainingRecordIDBatches;
    NSMutableDictionary * _updatedRecordsByRecordID;
}

@property (nonatomic, copy) CKRecordID *canaryRecordID;
@property (nonatomic, copy) NSDictionary *changeTagsByRecordID;
@property (nonatomic) bool checkForDeletions;
@property (nonatomic, retain) FCCKContentDatabase *database;
@property (nonatomic, retain) NSMutableSet *deletedRecordIDs;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, retain) NSMutableDictionary *errorsByRecordID;
@property (nonatomic, retain) NSError *operationError;
@property (nonatomic, copy) NSArray *recordIDs;
@property (nonatomic, copy) id /* block */ refreshRecordsCompletionBlock;
@property (nonatomic, retain) NSMutableSet *refreshedRecordIDs;
@property (nonatomic, retain) NSMutableArray *remainingRecordIDBatches;
@property (nonatomic, retain) NSMutableDictionary *updatedRecordsByRecordID;

- (void).cxx_destruct;
- (void)_continueRefreshing;
- (id)canaryRecordID;
- (id)changeTagsByRecordID;
- (bool)checkForDeletions;
- (id)database;
- (id)deletedRecordIDs;
- (id)desiredKeys;
- (id)errorsByRecordID;
- (id)init;
- (id)operationError;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)recordIDs;
- (id /* block */)refreshRecordsCompletionBlock;
- (id)refreshedRecordIDs;
- (id)remainingRecordIDBatches;
- (void)resetForRetry;
- (void)setCanaryRecordID:(id)arg1;
- (void)setChangeTagsByRecordID:(id)arg1;
- (void)setCheckForDeletions:(bool)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDeletedRecordIDs:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setErrorsByRecordID:(id)arg1;
- (void)setOperationError:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRefreshRecordsCompletionBlock:(id /* block */)arg1;
- (void)setRefreshedRecordIDs:(id)arg1;
- (void)setRemainingRecordIDBatches:(id)arg1;
- (void)setUpdatedRecordsByRecordID:(id)arg1;
- (id)updatedRecordsByRecordID;
- (bool)validateOperation;

@end
