/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyWebSharingOperation : CKDDatabaseOperation {
    NSMutableSet * _fetchedRecordIDs;
    int  _numSaveAttempts;
    NSArray * _recordIDsToShare;
    NSArray * _recordIDsToShareReadWrite;
    NSArray * _recordIDsToUnshare;
    id /* block */  _recordWebSharedBlock;
    id /* block */  _recordWebUnsharedBlock;
    NSMutableDictionary * _recordsToSaveByID;
}

@property (nonatomic, retain) NSMutableSet *fetchedRecordIDs;
@property (nonatomic) int numSaveAttempts;
@property (nonatomic, retain) NSArray *recordIDsToShare;
@property (nonatomic, retain) NSArray *recordIDsToShareReadWrite;
@property (nonatomic, retain) NSArray *recordIDsToUnshare;
@property (nonatomic, copy) id /* block */ recordWebSharedBlock;
@property (nonatomic, copy) id /* block */ recordWebUnsharedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordsToSaveByID;

+ (long long)isPredominatelyDownload;

- (void).cxx_destruct;
- (struct _PCSIdentityData { }*)_copyShareProtectionFromRecord:(id)arg1 error:(id*)arg2;
- (void)_fetchRecords;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 error:(id)arg2;
- (void)_saveRecords;
- (id)activityCreate;
- (id)fetchedRecordIDs;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (int)numSaveAttempts;
- (id)recordIDsToShare;
- (id)recordIDsToShareReadWrite;
- (id)recordIDsToUnshare;
- (id /* block */)recordWebSharedBlock;
- (id /* block */)recordWebUnsharedBlock;
- (id)recordsToSaveByID;
- (void)setFetchedRecordIDs:(id)arg1;
- (void)setNumSaveAttempts:(int)arg1;
- (void)setRecordIDsToShare:(id)arg1;
- (void)setRecordIDsToShareReadWrite:(id)arg1;
- (void)setRecordIDsToUnshare:(id)arg1;
- (void)setRecordWebSharedBlock:(id /* block */)arg1;
- (void)setRecordWebUnsharedBlock:(id /* block */)arg1;
- (void)setRecordsToSaveByID:(id)arg1;

@end
