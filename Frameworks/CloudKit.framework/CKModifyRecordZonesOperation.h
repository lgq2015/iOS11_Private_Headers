/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordZonesOperation : CKDatabaseOperation <MSPCloudRequest> {
    NSMutableArray * _deletedRecordZoneIDs;
    bool  _markZonesAsUserPurged;
    id /* block */  _modifyRecordZonesCompletionBlock;
    NSMutableDictionary * _recordZoneErrors;
    NSArray * _recordZoneIDsToDelete;
    NSMutableDictionary * _recordZonesByZoneIDs;
    NSArray * _recordZonesToSave;
    NSMutableArray * _savedRecordZones;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deletedRecordZoneIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool markZonesAsUserPurged;
@property (nonatomic, copy) id /* block */ modifyRecordZonesCompletionBlock;
@property (nonatomic, retain) NSMutableDictionary *recordZoneErrors;
@property (nonatomic, copy) NSArray *recordZoneIDsToDelete;
@property (nonatomic, retain) NSMutableDictionary *recordZonesByZoneIDs;
@property (nonatomic, copy) NSArray *recordZonesToSave;
@property (nonatomic, retain) NSMutableArray *savedRecordZones;
@property (nonatomic, readonly) bool shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)deletedRecordZoneIDs;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (bool)markZonesAsUserPurged;
- (id /* block */)modifyRecordZonesCompletionBlock;
- (void)performCKOperation;
- (id)recordZoneErrors;
- (id)recordZoneIDsToDelete;
- (id)recordZonesByZoneIDs;
- (id)recordZonesToSave;
- (id)savedRecordZones;
- (void)setDeletedRecordZoneIDs:(id)arg1;
- (void)setMarkZonesAsUserPurged:(bool)arg1;
- (void)setModifyRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setRecordZoneErrors:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesByZoneIDs:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (void)setSavedRecordZones:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (void)addCloudAccessCompletionBlock:(id /* block */)arg1;

@end
