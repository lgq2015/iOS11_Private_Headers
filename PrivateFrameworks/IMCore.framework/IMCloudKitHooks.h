/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitHooks : NSObject

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)sharedInstance;

- (void)_didAttemptToDisableAllDevicesResult:(bool)arg1;
- (void)_didAttemptToSetEnabledTo:(bool)arg1 result:(bool)arg2;
- (void)_didPerformAdditionalStorageRequiredCheckWithSuccess:(bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;
- (void)_updateCloudKitState;
- (void)_updateCloudKitStateWithDictionary:(id)arg1;
- (void)clearChatZoneSyncToken;
- (void)clearDataFromCloudKit;
- (void)clearLocalSyncState;
- (void)clearTombStoneMessagesTable;
- (void)createAttachmentZone;
- (void)createChatZone;
- (void)deleteAttachmentZone;
- (void)deleteChatZone;
- (void)deleteExitRecord;
- (void)deleteMessagesZone;
- (void)deleteSalt;
- (void)downloadAttachmentAssets;
- (bool)eligibleForTruthZone;
- (void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1;
- (void)fetchExitRecord;
- (void)fetchLatestRampState;
- (void)fetchLatestSalt;
- (void)fetchSyncStateStatistics;
- (id)init;
- (void)initiatePeriodicSync;
- (void)initiateSync;
- (long long)isChangingEnabledState;
- (bool)isDisablingDevices;
- (bool)isEnabled;
- (bool)isInExitState;
- (bool)isStartingSync;
- (bool)isSyncing;
- (id)lastSyncDate;
- (id)lastSyncErrors;
- (void)loadDeletedMessagesWithLimit:(long long)arg1;
- (void)loadDirtyMessagesWithLimit:(long long)arg1;
- (void)markAllChatsAsDirty;
- (void)metricAttachments:(long long)arg1;
- (void)performAdditionalStorageRequiredCheck;
- (void)printCachedRampState;
- (void)printCachedSalt;
- (void)purgeAttachments:(long long)arg1;
- (bool)rampedIntoTruthZone;
- (void)removePathFromiCloudBackups:(id)arg1;
- (bool)removedFromiCloudBackup;
- (void)setEnabled:(bool)arg1;
- (void)setShouldOptimizeAttachmentStorage:(bool)arg1;
- (void)setiCloudBackupsDisabled:(bool)arg1;
- (void)setupIMCloudKitHooks;
- (bool)shouldOptimizeAttachmentStorage;
- (bool)shouldShowCloudKitUI;
- (void)syncAttachments;
- (void)syncChats;
- (void)syncDeletesToCloudKit;
- (void)syncMessages;
- (id)syncStateDictionary;
- (void)toggleiCloudBackupsIfNeeded;
- (void)tryToDisableAllDevices;
- (void)writeAttachments;
- (void)writeCloudKitSyncCounts:(id)arg1;
- (void)writeDirtyChats;
- (void)writeDirtyMessages;
- (void)writeExitRecord;

@end
