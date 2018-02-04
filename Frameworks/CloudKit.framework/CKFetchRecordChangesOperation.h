/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordChangesOperation : CKDatabaseOperation {
    id /* block */  _changeTokensUpdatedBlock;
    NSArray * _desiredKeys;
    bool  _fetchAllChanges;
    id /* block */  _fetchRecordChangesCompletionBlock;
    CKServerChangeToken * _previousServerChangeToken;
    id /* block */  _recordChangedBlock;
    NSMutableDictionary * _recordErrors;
    id /* block */  _recordWithIDWasDeletedBlock;
    CKRecordZoneID * _recordZoneID;
    NSData * _resultClientChangeTokenData;
    CKServerChangeToken * _resultServerChangeToken;
    unsigned long long  _resultsLimit;
    id /* block */  _serverChangeTokenFetchedBlock;
    bool  _shouldFetchAssetContents;
    long long  _status;
}

@property (nonatomic, copy) id /* block */ changeTokensUpdatedBlock;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchRecordChangesCompletionBlock;
@property (nonatomic, readonly) bool moreComing;
@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, copy) id /* block */ recordWithIDWasDeletedBlock;
@property (nonatomic, copy) CKRecordZoneID *recordZoneID;
@property (nonatomic, retain) NSData *resultClientChangeTokenData;
@property (nonatomic, retain) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, copy) id /* block */ serverChangeTokenFetchedBlock;
@property (nonatomic) bool shouldFetchAssetContents;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id /* block */)changeTokensUpdatedBlock;
- (long long)changeTypesFromSetCallbacks;
- (id)desiredKeys;
- (bool)fetchAllChanges;
- (id /* block */)fetchRecordChangesCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordZoneID:(id)arg1 previousServerChangeToken:(id)arg2;
- (bool)moreComing;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (id)previousServerChangeToken;
- (id /* block */)recordChangedBlock;
- (id)recordErrors;
- (id /* block */)recordWithIDWasDeletedBlock;
- (id)recordZoneID;
- (id)resultClientChangeTokenData;
- (id)resultServerChangeToken;
- (unsigned long long)resultsLimit;
- (id /* block */)serverChangeTokenFetchedBlock;
- (void)setChangeTokensUpdatedBlock:(id /* block */)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchRecordChangesCompletionBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeTokenFetchedBlock:(id /* block */)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (bool)shouldFetchAssetContents;
- (long long)status;

@end
