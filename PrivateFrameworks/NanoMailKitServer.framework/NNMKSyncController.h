/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncController : NSObject {
    <NNMKDeviceRegistryHolder> * _delegate;
}

@property (nonatomic) <NNMKDeviceRegistryHolder> *delegate;

- (void).cxx_destruct;
- (bool)_validateMessage:(id)arg1;
- (bool)canSyncMailbox:(id)arg1;
- (bool)canSyncMessage:(id)arg1 forMailbox:(id)arg2;
- (id)delegate;
- (id)deviceRegistry;
- (bool)doesMessageBelongToSyncedMailboxes:(id)arg1;
- (id)filterMessages:(id)arg1 byAlreadySynced:(bool)arg2 byMailbox:(id)arg3;
- (id)filterMessages:(id)arg1 receivedBeforeDate:(id)arg2;
- (void)groupMessagesByMailbox:(id)arg1 mailboxes:(id)arg2 block:(id /* block */)arg3;
- (id)groupMessagesByMailboxId:(id)arg1;
- (bool)isMessage:(id)arg1 fromMailbox:(id)arg2;
- (bool)isValidMessageStatus:(unsigned long long)arg1 forMailbox:(id)arg2;
- (id)mailboxForMessageWithId:(id)arg1;
- (id)mailboxWithId:(id)arg1;
- (id)mailboxesToSync;
- (id)messageIdFromWatchMessageId:(id)arg1;
- (id)removeInvalidMailboxesFromMailboxSelection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAddsDeletesMessagesByStatusUpdatesForMailbox:(id)arg1;
- (id)watchAttachmentContentIdFromContentId:(id)arg1;
- (id)watchMessageIdFromMessageId:(id)arg1;

@end
