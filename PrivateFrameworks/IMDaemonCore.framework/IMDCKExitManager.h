/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKExitManager : IMDCKAbstractSyncController {
    NSObject<OS_dispatch_queue> * _ckQueue;
    IMDCKDatabaseManager * _databaseManager;
    NSError * _errorFetchingExitDate;
    CKOperationConfiguration * _exitConfigurtation;
    NSDate * _exitRecordDate;
    CKRecordID * _exitRecordID;
    bool  _fetchedExitDateOnLaunch;
    IMDRecordZoneManager * _recordZoneManager;
    NSNumber * _saltZoneCreatedOverride;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic, retain) IMDCKDatabaseManager *databaseManager;
@property (nonatomic, retain) NSError *errorFetchingExitDate;
@property (nonatomic, retain) CKOperationConfiguration *exitConfigurtation;
@property (nonatomic, retain) NSDate *exitRecordDate;
@property (nonatomic, retain) CKRecordID *exitRecordID;
@property (nonatomic) bool fetchedExitDateOnLaunch;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic, retain) NSNumber *saltZoneCreatedOverride;

+ (id)sharedInstance;

- (void)_fetchExitRecordDateWithCompletion:(id /* block */)arg1;
- (bool)_saltZoneCreated;
- (void)_scheduleOperation:(id)arg1;
- (bool)_serverAllowsMetricSubmission;
- (void)_setUpSubscription;
- (id)ckQueue;
- (id)databaseManager;
- (void)dealloc;
- (void)deleteExitRecordWithCompletion:(id /* block */)arg1;
- (id)errorFetchingExitDate;
- (id)exitConfigurtation;
- (id)exitRecordDate;
- (void)exitRecordDateWithCompletion:(id /* block */)arg1;
- (id)exitRecordID;
- (bool)fetchedExitDateOnLaunch;
- (void)handleNotificationForSubscriptionID:(id)arg1;
- (id)init;
- (id)initRecordZoneManager:(id)arg1 databaseManager:(id)arg2;
- (id)recordZoneManager;
- (id)saltZoneCreatedOverride;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
- (void)setDatabaseManager:(id)arg1;
- (void)setErrorFetchingExitDate:(id)arg1;
- (void)setExitConfigurtation:(id)arg1;
- (void)setExitRecordDate:(id)arg1;
- (void)setExitRecordID:(id)arg1;
- (void)setFetchedExitDateOnLaunch:(bool)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setSaltZoneCreatedOverride:(id)arg1;
- (void)submitCloudKitMetricWithData:(id)arg1 operationGroupName:(id)arg2 completion:(id /* block */)arg3;
- (void)submitCloudKitMetricWithOperationGroupName:(id)arg1;
- (id)syncCompleteRecordID;
- (void)writeExitRecordWithDate:(id)arg1 completion:(id /* block */)arg2;
- (void)writeInitialSyncCompletedRecordIfNeeded;
- (void)writeSyncCompletedRecordWithDate:(id)arg1 completion:(id /* block */)arg2;

@end
