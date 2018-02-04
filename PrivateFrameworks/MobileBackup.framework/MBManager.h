/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBManager : NSObject {
    id  _delegate;
}

@property (nonatomic) NSObject<MBManagerDelegate> *delegate;

- (id)_init;
- (bool)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6;
- (bool)allowiTunesBackup;
- (bool)archiveLogsTo:(id)arg1 error:(id*)arg2;
- (id)backgroundRestoreInfo;
- (id)backupDeviceUDID;
- (id)backupDeviceUUID;
- (id)backupList;
- (id)backupState;
- (void)cancel;
- (bool)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2;
- (void)cancelRestore;
- (void)clearRestoreSession;
- (bool)countCameraRollQuota;
- (bool)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2;
- (id)dateOfLastBackup;
- (id)dateOfNextScheduledBackup;
- (id)delegate;
- (bool)deleteBackupUDID:(id)arg1 error:(id*)arg2;
- (bool)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5;
- (bool)discountCameraRollQuota;
- (bool)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (id)domainInfoForName:(id)arg1;
- (id)domainInfoList;
- (bool)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6;
- (id)filesForSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (void)finishRestore;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (id)getAppleIDsMapForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4;
- (id)getBackupListWithError:(id*)arg1;
- (id)getBackupListWithFiltering:(bool)arg1 error:(id*)arg2;
- (id)getBuddyDataStashForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;
- (void)insufficientFreeSpaceToRestore;
- (bool)isBackupEnabled;
- (bool)isBackupEnabledForDomainName:(id)arg1;
- (bool)isLocalBackupPasswordSetWithError:(id*)arg1;
- (id)journalForBackupUUID:(id)arg1 error:(id*)arg2;
- (bool)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id*)arg3;
- (unsigned long long)nextBackupSize;
- (id)nextBackupSizeInfo;
- (bool)pinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (bool)prepareForBackgroundRestoreWithError:(id*)arg1;
- (void)prioritizeRestoreFileWithPath:(id)arg1;
- (void)rebootDevice;
- (bool)recordRestoreFailure:(id)arg1 error:(id*)arg2;
- (bool)removeDomainName:(id)arg1 error:(id*)arg2;
- (id)reservedBackupSizeListWithError:(id*)arg1;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 context:(id)arg3 error:(id*)arg4;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 error:(id*)arg3;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 withQOS:(long long)arg3 context:(id)arg4 error:(id*)arg5;
- (bool)restoreBookWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreBookWithPath:(id)arg1 error:(id*)arg2;
- (bool)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2;
- (id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)restoreFileExistsWithPath:(id)arg1;
- (void)restoreFileWithPath:(id)arg1;
- (bool)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreFileWithPath:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(bool)arg3 error:(id*)arg4;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(bool)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 error:(id*)arg5;
- (bool)restoreFilesWithPaths:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreFilesWithPaths:(id)arg1 error:(id*)arg2;
- (id)restoreInfo;
- (id)restoreState;
- (bool)restoreSupportsBatching;
- (bool)saveKeybagsForBackupUDID:(id)arg1 withError:(id*)arg2;
- (void)setAllowiTunesBackup:(bool)arg1;
- (void)setBackupEnabled:(bool)arg1;
- (void)setBackupEnabled:(bool)arg1 forDomainName:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setRestoreQualityOfService:(long long)arg1;
- (void)setRestoreQualityOfService:(long long)arg1 context:(id)arg2;
- (void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2;
- (void)setSupportsiTunes:(bool)arg1;
- (bool)setupBackupWithPasscode:(id)arg1 error:(id*)arg2;
- (void)startBackup;
- (bool)startBackupWithError:(id*)arg1;
- (void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2;
- (bool)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (bool)startScanForBundleIDs:(id)arg1 error:(id*)arg2;
- (bool)startScanWithError:(id*)arg1;
- (void)syncBackupEnabled;
- (bool)unpinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (bool)unsetLocalBackupPasswordWithError:(id*)arg1;

@end
