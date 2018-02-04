/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol> {
    _KSTextReplacementCKStore * _ckStore;
    <_KSMigrationDelegate> * _delegate;
    bool  _deviceDidMigrateOnCloud;
    bool  _didCheckMigrationOnCloud;
    bool  _didMigrateForCurrentAccount;
    NSString * _directoryPath;
    _KSTextReplacementLegacyStore * _legacyStore;
    NSObject<OS_dispatch_queue> * _migrationQueue;
    bool  _pendingMigration;
    NSObject<_KSTextReplacementStoreProtocol> * _textReplacementStore;
}

@property (nonatomic, retain) _KSTextReplacementCKStore *ckStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_KSMigrationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deviceDidMigrateOnCloud;
@property (nonatomic) bool didCheckMigrationOnCloud;
@property (nonatomic) bool didMigrateForCurrentAccount;
@property (nonatomic, copy) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _KSTextReplacementLegacyStore *legacyStore;
@property (nonatomic) bool pendingMigration;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<_KSTextReplacementStoreProtocol> *textReplacementStore;

+ (id)textReplacementStoreWithTestDirectory:(id)arg1 withDelegate:(id)arg2 forceMigration:(bool)arg3 forceCloudKitSync:(bool)arg4;

- (void).cxx_destruct;
- (void)_migrateDevice;
- (void)_migrateEntriesSinceDate:(id)arg1 repeatCount:(unsigned long long)arg2;
- (void)accountDidChange:(id)arg1;
- (void)checkForMigration;
- (id)ckStore;
- (void)dealloc;
- (id)delegate;
- (bool)deviceDidMigrate;
- (bool)deviceDidMigrateOnCloud;
- (bool)didCheckMigrationOnCloud;
- (bool)didMigrateForCurrentAccount;
- (id)directoryPath;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithDirectoryPath:(id)arg1;
- (id)initWithDirectoryPath:(id)arg1 ignoreMigrationBatchCheck:(bool)arg2 forceCloudKitSync:(bool)arg3;
- (id)legacyStore;
- (void)migrateLegacyStore;
- (void)migrateLocallyCheckCompatibility:(bool)arg1;
- (double)minimumUptimeRemaining;
- (void)notifyTextReplacementDidChange;
- (bool)pendingMigration;
- (void)pullMigrationSettings;
- (void)pushAllLocalRecordsOnceIfNeeded;
- (void)recordSyncStatus;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)resetMigrationState;
- (void)respondToMigrationCompatibilityChange:(id)arg1;
- (void)respondToMigrationCompletion;
- (void)setCkStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceDidMigrateOnCloud:(bool)arg1;
- (void)setDidCheckMigrationOnCloud:(bool)arg1;
- (void)setDidMigrateForCurrentAccount:(bool)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setLegacyStore:(id)arg1;
- (void)setPendingMigration:(bool)arg1;
- (void)setTextReplacementStore:(id)arg1;
- (bool)shouldMigrateToCloudKit;
- (id)textReplacementStore;

@end
