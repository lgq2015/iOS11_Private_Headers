/* made by EzioChiu.
 */

@protocol NNMKSyncStateManagerDelegate <NSObject>

@required

- (void)syncStateManager:(void *)arg1 didAcknowledgeNotificationPayload:(void *)arg2 forRecordId:(void *)arg3; // needs 3 arg types, found 7: <NNMKSyncStateManager> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, NSString *
- (void)syncStateManagerDidBeginSyncSession:(id <NNMKSyncStateManager>)arg1 syncSessionType:(NSString *)arg2 syncSessionIdentifier:(NSString *)arg3;
- (void)syncStateManagerDidChangePairedDevice:(id <NNMKSyncStateManager>)arg1;
- (void)syncStateManagerDidInvalidateSyncSession:(id <NNMKSyncStateManager>)arg1 syncSessionIdentifier:(NSString *)arg2;
- (void)syncStateManagerDidUnpair:(id <NNMKSyncStateManager>)arg1;

@end
