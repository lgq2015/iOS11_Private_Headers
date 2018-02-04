/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKAbstractSyncController : NSObject {
    bool  _isSyncing;
}

@property (nonatomic) bool isSyncing;

- (void)addSyncDebuggingInfoToDictionary:(id)arg1;
- (id)ckUtilities;
- (bool)isSyncing;
- (id)prefsWriter;
- (bool)readPersistentBoolForKey:(id)arg1;
- (id)readPersistentValueForKey:(id)arg1;
- (void)setIsSyncing:(bool)arg1;
- (id)syncStateDebuggingInfo:(id)arg1;
- (void)writePersistentBool:(bool)arg1 forKey:(id)arg2;
- (void)writePersistentValue:(id)arg1 forKey:(id)arg2;

@end
