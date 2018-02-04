/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchBatchedRecordsOperation : CKDDatabaseOperation <CKDOperationPipelining> {
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    NSSet * _desiredAssetKeys;
    bool  _fetchAllChanges;
    NSObject<OS_dispatch_group> * _fetchRecordsGroup;
    bool  _forcePCSDecryptionAttempt;
    unsigned long long  _numRequestsSent;
    NSDictionary * _optionsByRecordZoneID;
    CKDRecordCache * _recordCache;
    CKDRecordFetchAggregator * _recordFetcher;
    NSArray * _recordZoneIDs;
    NSMutableArray * _requestInfos;
    bool  _shouldFetchAssetContents;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *desiredAssetKeys;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) bool forcePCSDecryptionAttempt;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numRequestsSent;
@property (nonatomic, retain) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (nonatomic, readonly) CKDRecordCache *recordCache;
@property (nonatomic, retain) CKDRecordFetchAggregator *recordFetcher;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSMutableArray *requestInfos;
@property (nonatomic) bool shouldFetchAssetContents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_handleRecordChange:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (void)_handleRecordDelete:(id)arg1 recordType:(id)arg2 perRequestSchedulerInfo:(id)arg3;
- (void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (void)_noteOperationBeginning;
- (void)_noteOperationEnding;
- (void)_noteOperationFinishedBlockEnd;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (id)_possiblyWrapError:(id)arg1 withCode:(long long)arg2 format:(id)arg3;
- (void)_sendFetchChangesRequestForZoneIDs:(id)arg1 withOptions:(id)arg2 previousRequestSchedulerInfo:(id)arg3;
- (id)activityCreate;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (id)desiredAssetKeys;
- (bool)fetchAllChanges;
- (id)fetchRecordsGroup;
- (bool)forcePCSDecryptionAttempt;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (unsigned long long)numRequestsSent;
- (id)optionsByRecordZoneID;
- (id)pipeliningDescription;
- (id)recordCache;
- (id)recordFetcher;
- (id)recordZoneIDs;
- (id)requestInfos;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setDesiredAssetKeys:(id)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchRecordsGroup:(id)arg1;
- (void)setForcePCSDecryptionAttempt:(bool)arg1;
- (void)setNumRequestsSent:(unsigned long long)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setRecordFetcher:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRequestInfos:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (bool)shouldFetchAssetContents;

@end
