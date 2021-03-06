/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncSessionController : NSObject {
    NSMutableSet * _messageIdsToIgnoreStatusUpdates;
    NSMutableDictionary * _notificationPayloadAcks;
}

@property (nonatomic, retain) NSMutableSet *messageIdsToIgnoreStatusUpdates;
@property (nonatomic, retain) NSMutableDictionary *notificationPayloadAcks;

- (void).cxx_destruct;
- (id)init;
- (id)messageIdsToIgnoreStatusUpdates;
- (id)notificationPayloadAcks;
- (void)setMessageIdsToIgnoreStatusUpdates:(id)arg1;
- (void)setNotificationPayloadAcks:(id)arg1;

@end
