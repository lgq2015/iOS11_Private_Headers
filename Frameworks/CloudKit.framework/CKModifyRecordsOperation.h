/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordsOperation : CKDatabaseOperation <MSPCloudRequest> {
    NSMutableDictionary * _assetsByRecordIDAndRecordKey;
    bool  _atomic;
    NSData * _clientChangeTokenData;
    NSDictionary * _conflictLosersToResolveByRecordID;
    NSMutableArray * _deletedRecordIDs;
    id /* block */  _modifyRecordsCompletionBlock;
    NSMutableSet * _packagesToDestroy;
    id /* block */  _perRecordCompletionBlock;
    id /* block */  _perRecordProgressBlock;
    NSDictionary * _pluginFieldsForRecordDeletesByID;
    NSMutableDictionary * _recordErrors;
    NSArray * _recordIDsToDelete;
    NSDictionary * _recordIDsToDeleteToEtags;
    NSMutableDictionary * _recordsByRecordIDs;
    id /* block */  _recordsInFlightBlock;
    NSArray * _recordsToSave;
    long long  _savePolicy;
    NSMutableArray * _savedRecords;
    bool  _shouldOnlySaveAssetContent;
    bool  _shouldReportRecordsInFlight;
}

@property (nonatomic, retain) NSMutableDictionary *assetsByRecordIDAndRecordKey;
@property (nonatomic) bool atomic;
@property (nonatomic, copy) NSData *clientChangeTokenData;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deletedRecordIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ modifyRecordsCompletionBlock;
@property (nonatomic, retain) NSMutableSet *packagesToDestroy;
@property (nonatomic, copy) id /* block */ perRecordCompletionBlock;
@property (nonatomic, copy) id /* block */ perRecordProgressBlock;
@property (nonatomic, copy) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, copy) NSArray *recordIDsToDelete;
@property (nonatomic, copy) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, retain) NSMutableDictionary *recordsByRecordIDs;
@property (nonatomic, copy) id /* block */ recordsInFlightBlock;
@property (nonatomic, copy) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (nonatomic, retain) NSMutableArray *savedRecords;
@property (nonatomic, readonly) bool shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
@property (nonatomic) bool shouldOnlySaveAssetContent;
@property (nonatomic) bool shouldReportRecordsInFlight;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_trackAssetsToUpload;
- (id)activityCreate;
- (id)assetsByRecordIDAndRecordKey;
- (bool)atomic;
- (bool)claimPackagesInRecord:(id)arg1 error:(id*)arg2;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (id)deletedRecordIDs;
- (void)destroyPackages:(id)arg1;
- (void)destroyPackagesInRecords:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (id /* block */)modifyRecordsCompletionBlock;
- (id)packagesToDestroy;
- (id /* block */)perRecordCompletionBlock;
- (id /* block */)perRecordProgressBlock;
- (void)performCKOperation;
- (id)pluginFieldsForRecordDeletesByID;
- (id)recordErrors;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordsByRecordIDs;
- (id /* block */)recordsInFlightBlock;
- (id)recordsToSave;
- (long long)savePolicy;
- (id)savedRecords;
- (void)setAssetsByRecordIDAndRecordKey:(id)arg1;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setDeletedRecordIDs:(id)arg1;
- (void)setModifyRecordsCompletionBlock:(id /* block */)arg1;
- (void)setPackagesToDestroy:(id)arg1;
- (void)setPerRecordCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordProgressBlock:(id /* block */)arg1;
- (void)setPluginFieldsForRecordDeletesByID:(id)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsByRecordIDs:(id)arg1;
- (void)setRecordsInFlightBlock:(id /* block */)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setSavedRecords:(id)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (void)setShouldReportRecordsInFlight:(bool)arg1;
- (bool)shouldOnlySaveAssetContent;
- (bool)shouldReportRecordsInFlight;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (void)addCloudAccessCompletionBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)ic_removeAllCompletionBlocks;

@end
