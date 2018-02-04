/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCMigrationQueryOperation : BRCSyncDownOperation {
    CKQueryCursor * _continuationCursor;
    NSString * _migrationKey;
    NSMutableArray * _recordsWithShareID;
    NSMutableArray * _sharedIDsToFetch;
    NSMutableArray * _shares;
}

+ (id)allMigrationKeysOrdered;
+ (id)sharesMigrationKey;

- (void).cxx_destruct;
- (void)_performAfterFetchShares:(id /* block */)arg1;
- (void)_performAfterQueryingForShareIDs:(id /* block */)arg1;
- (void)_performQuery:(id)arg1 recordFetchedBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_saveQueryRecords:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
