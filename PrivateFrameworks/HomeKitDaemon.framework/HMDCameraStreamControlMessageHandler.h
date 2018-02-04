/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamControlMessageHandler : HMFObject <HMDCameraSettingsControlManagerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    id /* block */  _messageSender;
    HMFMessageDispatcher * _msgDispatcher;
    HMFNetMonitor * _networkMonitor;
    HMDNotificationRegistration * _notificationRegistration;
    NSUUID * _profileUniqueIdentifier;
    HMDCameraResidentMessageHandler * _residentMessageHandler;
    HMDCameraSettingsControlManager * _settingsControlManager;
    HMDService * _streamManagementService;
    HMDCameraStreamManagerSession * _streamSession;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    HMDCameraSettingsControlManager * _streamStatusManager;
    HMDCameraSupportedConfigurationCache * _supportedConfigCache;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ messageSender;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) HMFNetMonitor *networkMonitor;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, readonly) NSUUID *profileUniqueIdentifier;
@property (nonatomic, readonly) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (nonatomic, readonly) HMDCameraSettingsControlManager *settingsControlManager;
@property (nonatomic, readonly) HMDService *streamManagementService;
@property (nonatomic, retain) HMDCameraStreamManagerSession *streamSession;
@property (nonatomic, readonly, copy) NSString *streamSessionID;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (nonatomic, readonly) HMDCameraSettingsControlManager *streamStatusManager;
@property (nonatomic, readonly) unsigned long long streamingStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDCameraSupportedConfigurationCache *supportedConfigCache;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleNegotiateMessage:(id)arg1;
- (void)_handleReconfigureMessage:(id)arg1;
- (void)_handleRemoteSetupMessage:(id)arg1;
- (void)_handleSetAudioState:(id)arg1;
- (void)_handleStartMessage:(id)arg1;
- (void)_handleStopMessage:(id)arg1;
- (bool)_isNegotiateMessage:(id)arg1;
- (bool)_isReconfigureMessage:(id)arg1;
- (bool)_isRemoteSetupMessage:(id)arg1;
- (bool)_isSetAudioStreamSettingMessage:(id)arg1;
- (bool)_isStartMessage:(id)arg1;
- (bool)_isStopMessage:(id)arg1;
- (void)_resetCurrentStreamState:(id)arg1;
- (void)_sendStreamStoppedNotification:(id)arg1;
- (void)_stopStream:(id)arg1;
- (id)accessory;
- (void)dealloc;
- (void)handleAccessoryIsNotReachable:(id)arg1;
- (void)handleActivePhoneCallEstablishedNotification:(id)arg1;
- (void)handleForegroundAppsNotification:(id)arg1;
- (void)handleMessage:(id)arg1;
- (unsigned long long)hash;
- (id)initWithWorkQueue:(id)arg1 streamSnapshotHandler:(id)arg2 messageSender:(id /* block */)arg3 accessory:(id)arg4 streamManagementService:(id)arg5 msgDispatcher:(id)arg6 profileUniqueIdentifier:(id)arg7 networkMonitor:(id)arg8 residentMessageHandler:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id /* block */)messageSender;
- (id)msgDispatcher;
- (id)networkMonitor;
- (id)notificationRegistration;
- (id)profileUniqueIdentifier;
- (void)registerForMessages;
- (id)residentMessageHandler;
- (void)setMsgDispatcher:(id)arg1;
- (void)setNetworkMonitor:(id)arg1;
- (void)setStreamSession:(id)arg1;
- (void)setSupportedConfigCache:(id)arg1;
- (id)settingsControlManager;
- (void)streamControlManager:(id)arg1 didFail:(id)arg2;
- (void)streamControlManagerDidNegotiateStream:(id)arg1 selectedParameters:(id)arg2;
- (void)streamControlManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
- (void)streamControlManagerDidReconfigureStream:(id)arg1;
- (void)streamControlManagerDidSetupRemoteConnection:(id)arg1;
- (void)streamControlManagerDidStartStream:(id)arg1 slotIdentifier:(id)arg2;
- (void)streamControlManagerDidStopStreamForSessionID:(id)arg1 error:(id)arg2;
- (id)streamManagementService;
- (id)streamSession;
- (id)streamSessionID;
- (id)streamSnapshotHandler;
- (id)streamStatusManager;
- (unsigned long long)streamingStatus;
- (id)supportedConfigCache;
- (void)timerDidFire:(id)arg1;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
