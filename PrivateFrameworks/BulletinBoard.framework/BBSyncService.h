/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSyncService : NSObject <IDSServiceDelegate> {
    <BBSyncServiceDelegate> * _delegate;
    NSMutableArray * _pendingDismissalDictionaries;
    NSMutableArray * _pendingDismissalIDs;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _queuedFeed;
    NSString * _queuedSectionID;
    NSString * _queuedUniversalSectionID;
    IDSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BBSyncServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pairedDeviceCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dismissalDictionaryForBulletin:(id)arg1;
- (bool)_hasDestination;
- (void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)_sendSyncMessage:(id)arg1;
- (id)_syncAccount;
- (bool)_syncHasDefaultPairedDevice;
- (id)_syncLocalDevices;
- (id)delegate;
- (id)dismissalSectionIdentifierForIncomingMessage:(id)arg1;
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)initWithQueue:(id)arg1;
- (unsigned long long)pairedDeviceCount;
- (void)sendPendingSyncedRemovals;
- (void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
