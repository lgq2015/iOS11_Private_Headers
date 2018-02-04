/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNotificationClient : NSObject {
    NSOrderedSet * _errorNotifications;
    NSOrderedSet * _externalScreenNotifications;
    id /* block */  _notificationCallback;
    NSOrderedSet * _nowPlayingNotifications;
    NSObject<OS_dispatch_queue> * _nowPlayingNotificationsQueue;
    NSOrderedSet * _originNotifications;
    bool  _receivesExternalScreenTypeChangedNotifications;
    bool  _receivesOriginChangedNotifications;
    bool  _receivesPlaybackErrorNotifications;
    bool  _receivesRoutesChangedNotifications;
    bool  _receivesSupportedCommandsNotifications;
    bool  _receivesVoiceInputRecordingStateNotifications;
    bool  _receivesVolumeControlNotifications;
    unsigned long long  _registeredNowPlayingObservers;
    NSOrderedSet * _routesChangedNotifications;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSOrderedSet * _supportedCommandsNotifications;
    NSOrderedSet * _voiceInputNotifications;
    NSOrderedSet * _volumeControlNotifications;
}

@property (nonatomic, copy) id /* block */ notificationCallback;
@property (nonatomic) bool receivesExternalScreenTypeChangedNotifications;
@property (nonatomic) bool receivesOriginChangedNotifications;
@property (nonatomic) bool receivesPlaybackErrorNotifications;
@property (nonatomic) bool receivesRoutesChangedNotifications;
@property (nonatomic) bool receivesSupportedCommandsNotifications;
@property (nonatomic) bool receivesVoiceInputRecordingStateNotifications;
@property (nonatomic) bool receivesVolumeControlNotifications;
@property (getter=isRegisteredForNowPlayingNotifications, nonatomic, readonly) bool registeredForNowPlayingNotifications;

+ (id)nowPlayingNotifications;

- (void)dealloc;
- (id)initWithNotificationCallback:(id /* block */)arg1;
- (bool)isRegisteredForNowPlayingNotifications;
- (id /* block */)notificationCallback;
- (bool)postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;
- (bool)receivesExternalScreenTypeChangedNotifications;
- (bool)receivesOriginChangedNotifications;
- (bool)receivesPlaybackErrorNotifications;
- (bool)receivesRoutesChangedNotifications;
- (bool)receivesSupportedCommandsNotifications;
- (bool)receivesVoiceInputRecordingStateNotifications;
- (bool)receivesVolumeControlNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
- (void)setNotificationCallback:(id /* block */)arg1;
- (void)setReceivesExternalScreenTypeChangedNotifications:(bool)arg1;
- (void)setReceivesOriginChangedNotifications:(bool)arg1;
- (void)setReceivesPlaybackErrorNotifications:(bool)arg1;
- (void)setReceivesRoutesChangedNotifications:(bool)arg1;
- (void)setReceivesSupportedCommandsNotifications:(bool)arg1;
- (void)setReceivesVoiceInputRecordingStateNotifications:(bool)arg1;
- (void)setReceivesVolumeControlNotifications:(bool)arg1;
- (void)unregisterForNowPlayingNotifications;

@end
