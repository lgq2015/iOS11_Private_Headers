/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPairedSyncCoordinator : NSObject <PSYInitialSyncStateObserverDelegate, PSYSyncCoordinatorDelegate, PSYSyncSessionObserverDelegate> {
    bool  _clientSyncComplete;
    PSYInitialSyncStateObserver * _pairedInitialSyncObserver;
    PSYSyncCoordinator * _pairedSyncCoordinator;
    PSYSyncSessionObserver * _pairedSyncObserver;
}

@property (nonatomic) bool clientSyncComplete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSYInitialSyncStateObserver *pairedInitialSyncObserver;
@property (nonatomic, retain) PSYSyncCoordinator *pairedSyncCoordinator;
@property (nonatomic, retain) PSYSyncSessionObserver *pairedSyncObserver;
@property (readonly) Class superclass;

+ (void)reportProgress:(double)arg1;
+ (void)syncDidComplete;
+ (id)syncState;

- (void).cxx_destruct;
- (void)_initInitialSyncStateComplete;
- (void)_reportProgress:(double)arg1;
- (void)_syncDidComplete;
- (bool)clientSyncComplete;
- (id)init;
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2;
- (id)pairedInitialSyncObserver;
- (id)pairedSyncCoordinator;
- (id)pairedSyncObserver;
- (void)setClientSyncComplete:(bool)arg1;
- (void)setPairedInitialSyncObserver:(id)arg1;
- (void)setPairedSyncCoordinator:(id)arg1;
- (void)setPairedSyncObserver:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;

@end
