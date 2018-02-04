/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVTelephonyInterface : NSObject {
    struct __CTServerConnection { } * _connection;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

@property <AVTelephonyInterfaceDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2;
- (void)handleVocoderNotificationWithInfo:(id)arg1;
- (id)init;
- (bool)registerForNotifications;
- (void)setDelegate:(id)arg1;
- (id)translateVocoderTypeToCoreAudioType:(id)arg1;
- (void)unregisterForNotifications;

@end