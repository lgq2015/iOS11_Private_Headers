/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateFetchRecordZoneChangesOperation : FCCKPrivateDatabaseOperation {
    bool  _fetchAllChanges;
    id /* block */  _fetchRecordZoneChangesCompletionBlock;
    CKFetchRecordZoneChangesOptions * _options;
    CKRecordZoneID * _recordZoneID;
    NSArray * _resultChangedRecords;
    NSArray * _resultDeletedRecordIDs;
    bool  _resultMoreComing;
    CKServerChangeToken * _resultServerChangeToken;
}

@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchRecordZoneChangesCompletionBlock;
@property (nonatomic, copy) CKFetchRecordZoneChangesOptions *options;
@property (nonatomic, copy) CKRecordZoneID *recordZoneID;
@property (nonatomic, retain) NSArray *resultChangedRecords;
@property (nonatomic, retain) NSArray *resultDeletedRecordIDs;
@property (nonatomic) bool resultMoreComing;
@property (nonatomic, retain) CKServerChangeToken *resultServerChangeToken;

- (void).cxx_destruct;
- (bool)fetchAllChanges;
- (id /* block */)fetchRecordZoneChangesCompletionBlock;
- (void)operationWillFinishWithError:(id)arg1;
- (id)options;
- (void)performOperation;
- (id)recordZoneID;
- (id)resultChangedRecords;
- (id)resultDeletedRecordIDs;
- (bool)resultMoreComing;
- (id)resultServerChangeToken;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchRecordZoneChangesCompletionBlock:(id /* block */)arg1;
- (void)setOptions:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultChangedRecords:(id)arg1;
- (void)setResultDeletedRecordIDs:(id)arg1;
- (void)setResultMoreComing:(bool)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (bool)validateOperation;

@end
