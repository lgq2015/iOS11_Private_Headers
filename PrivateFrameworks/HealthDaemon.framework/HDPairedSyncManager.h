/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPairedSyncManager : NSObject <HDDiagnosticObject, PSYSyncCoordinatorDelegate> {
    PSYSyncCoordinator * _pairedSyncCoordinator;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _unfinishedSyncSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSYSyncCoordinator *pairedSyncCoordinator;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly) PSYSyncCoordinator *syncCoordinator;
@property (nonatomic, retain) NSHashTable *unfinishedSyncSessions;

+ (id)syncCoordinatorWithServiceName:(id)arg1;

- (void).cxx_destruct;
- (void)_queue_didFinishRestoreForSession:(id)arg1 error:(id)arg2;
- (void)_queue_didSendRestoreMessagesForSession:(id)arg1 error:(id)arg2;
- (void)_queue_pairedSyncDidStartWithSession:(id)arg1;
- (id)_syncRestrictionString;
- (id)_typeStringForSyncSession:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1 queue:(id)arg2;
- (id)pairedSyncCoordinator;
- (bool)permitSynchronization;
- (id)profile;
- (id)queue;
- (void)setPairedSyncCoordinator:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUnfinishedSyncSessions:(id)arg1;
- (id)syncCoordinator;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (id)unfinishedSyncSessions;

@end
