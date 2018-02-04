/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateBatchedSaveRecordsOperation : FCOperation {
    FCCKPrivateDatabase * _database;
    bool  _handleIdentityLoss;
    NSArray * _recordsToSave;
    NSMutableArray * _remainingBatchesOfRecordsToSave;
    NSMutableDictionary * _resultErrorsByRecordID;
    NSMutableArray * _resultSavedRecords;
    long long  _savePolicy;
    id /* block */  _saveRecordsCompletionBlock;
    bool  _skipPreflight;
}

@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic) bool handleIdentityLoss;
@property (nonatomic, copy) NSArray *recordsToSave;
@property (nonatomic, retain) NSMutableArray *remainingBatchesOfRecordsToSave;
@property (nonatomic, retain) NSMutableDictionary *resultErrorsByRecordID;
@property (nonatomic, retain) NSMutableArray *resultSavedRecords;
@property (nonatomic) long long savePolicy;
@property (nonatomic, copy) id /* block */ saveRecordsCompletionBlock;
@property (nonatomic) bool skipPreflight;

- (void).cxx_destruct;
- (void)_continueModifying;
- (void)_subdivideRemainingBatches;
- (id)database;
- (bool)handleIdentityLoss;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordsToSave;
- (id)remainingBatchesOfRecordsToSave;
- (void)resetForRetry;
- (id)resultErrorsByRecordID;
- (id)resultSavedRecords;
- (long long)savePolicy;
- (id /* block */)saveRecordsCompletionBlock;
- (void)setDatabase:(id)arg1;
- (void)setHandleIdentityLoss:(bool)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setRemainingBatchesOfRecordsToSave:(id)arg1;
- (void)setResultErrorsByRecordID:(id)arg1;
- (void)setResultSavedRecords:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setSaveRecordsCompletionBlock:(id /* block */)arg1;
- (void)setSkipPreflight:(bool)arg1;
- (bool)skipPreflight;
- (bool)validateOperation;

@end
