/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDProfile : NSObject {
    HDAuthorizationManager * _authorizationManager;
    HDAWDSubmissionManager * _awdSubmissionManager;
    HDDaemon * _daemon;
    HDDataManager * _dataManager;
    HDDataProvenanceManager * _dataProvenanceManager;
    HDDatabase * _database;
    HDDatabasePruningManager * _databasePruningManager;
    HDDeviceManager * _deviceManager;
    NSString * _directoryPath;
    HDMedicalIDDataManager * _medicalIDDataManager;
    NSString * _medicalIDDirectoryPath;
    HDMetadataManager * _metadataManager;
    HDMigrationManager * _migrationManager;
    long long  _profileType;
    HDSourceManager * _sourceManager;
    HDSourceOrderManager * _sourceOrderManager;
    HDDaemonSyncEngine * _syncEngine;
    HDUnitPreferencesManager * _unitPreferencesManager;
    HDUserCharacteristicsManager * _userCharacteristicsManager;
}

@property (nonatomic, readonly) HDAppSubscriptionManager *appSubscriptionManager;
@property (nonatomic, readonly) HDAuthorizationManager *authorizationManager;
@property (nonatomic, readonly) HDAWDSubmissionManager *awdSubmissionManager;
@property (nonatomic, readonly) HDCloudSyncManager *cloudSyncManager;
@property (nonatomic, readonly) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
@property (nonatomic, readonly) HDDaemon *daemon;
@property (nonatomic, readonly) HDDataCollectionManager *dataCollectionManager;
@property (nonatomic, readonly) HDDataManager *dataManager;
@property (nonatomic, readonly) HDDataProvenanceManager *dataProvenanceManager;
@property (nonatomic, readonly) HDDatabase *database;
@property (nonatomic, readonly) HDDatabasePruningManager *databasePruningManager;
@property (nonatomic, readonly) HDDeviceManager *deviceManager;
@property (nonatomic, readonly, copy) NSString *directoryPath;
@property (nonatomic, readonly, copy) NSURL *directoryURL;
@property (nonatomic, readonly) HDFitnessMachineManager *fitnessMachineManager;
@property (nonatomic, readonly) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, readonly) <HDHealthDatabase> *healthDatabase;
@property (nonatomic, readonly) HDMedicalIDDataManager *medicalIDDataManager;
@property (nonatomic, readonly, copy) NSString *medicalIDDirectoryPath;
@property (nonatomic, readonly) HDMetadataManager *metadataManager;
@property (nonatomic, readonly) HDMigrationManager *migrationManager;
@property (nonatomic, readonly) HDNanoSyncManager *nanoSyncManager;
@property (nonatomic, readonly) HDNotificationManager *notificationManager;
@property (nonatomic, readonly) long long profileType;
@property (nonatomic, readonly) HDServiceConnectionManager *serviceConnectionManager;
@property (nonatomic, readonly) HDHealthServiceManager *serviceManager;
@property (nonatomic, readonly) HDSourceManager *sourceManager;
@property (nonatomic, readonly) HDSourceOrderManager *sourceOrderManager;
@property (nonatomic, readonly) <HDSyncEngine> *syncEngine;
@property (nonatomic, readonly) HDUnitPreferencesManager *unitPreferencesManager;
@property (nonatomic, readonly) HDUserCharacteristicsManager *userCharacteristicsManager;
@property (nonatomic, readonly) HDWorkoutManager *workoutManager;

- (void).cxx_destruct;
- (id)_newAWDSubmissionManager;
- (id)_newUserCharacteristicsManager;
- (id)appSubscriptionManager;
- (id)authorizationManager;
- (id)awdSubmissionManager;
- (id)cloudSyncManager;
- (id)currentActivitySummaryHelper;
- (id)daemon;
- (id)dataCollectionManager;
- (id)dataManager;
- (id)dataProvenanceManager;
- (id)database;
- (id)databasePruningManager;
- (id)description;
- (id)deviceManager;
- (id)directoryPath;
- (id)directoryURL;
- (id)displayNameWithError:(id*)arg1;
- (id)fitnessMachineManager;
- (id)healthDaemon;
- (id)healthDatabase;
- (id)healthDeviceManager;
- (id)healthSourceManager;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3 profileType:(long long)arg4;
- (void)invalidateAndWait;
- (id)medicalIDDataManager;
- (id)medicalIDDirectoryPath;
- (id)metadataManager;
- (id)migrationManager;
- (id)nanoSyncManager;
- (id)notificationManager;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)obliterateWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (long long)profileType;
- (id)serviceConnectionManager;
- (id)serviceManager;
- (bool)setDisplayName:(id)arg1 error:(id*)arg2;
- (id)sourceManager;
- (id)sourceOrderManager;
- (id)syncEngine;
- (void)terminationCleanup;
- (id)unitPreferencesManager;
- (id)userCharacteristicsManager;
- (id)workoutManager;

@end
