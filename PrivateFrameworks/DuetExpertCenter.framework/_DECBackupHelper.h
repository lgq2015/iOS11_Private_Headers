/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECBackupHelper : NSObject {
    NSFileManager * _fm;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_currentBackupVersionPath;
- (bool)backupNewerThanCurrentState;
- (id)backupPathForExpert:(id)arg1;
- (bool)canBackup;
- (bool)canRestore;
- (bool)createBackupDirectoriesIfMissing;
- (bool)finishBackup;
- (void)fixupDataProtection;
- (id)init;
- (bool)isClassCLocked;
- (bool)markRestoreAsNotDone;
- (bool)markVersionOfBackupDirectoryAsCurrent;
- (bool)probePathAt:(id)arg1;
- (bool)restoreDone;
- (id)restorePathForExpert:(id)arg1;
- (bool)restoreStart;
- (bool)restoredAlready;

@end
