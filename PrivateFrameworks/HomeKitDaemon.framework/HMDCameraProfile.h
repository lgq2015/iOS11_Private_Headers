/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate> {
    NSSet * _cameraStreamManagers;
    bool  _microphonePresent;
    HMFNetMonitor * _networkMonitor;
    HMDCameraResidentMessageHandler * _residentMessageHandler;
    NSMutableArray * _settingProactiveReaders;
    HMDCameraSnapshotManager * _snapshotManager;
    bool  _speakerPresent;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
}

@property (nonatomic, readonly) NSSet *cameraStreamManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMicrophonePresent, nonatomic, readonly) bool microphonePresent;
@property (nonatomic, retain) HMFNetMonitor *networkMonitor;
@property (nonatomic, readonly) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (nonatomic, readonly) NSMutableArray *settingProactiveReaders;
@property (nonatomic, readonly) HMDCameraSnapshotManager *snapshotManager;
@property (getter=isSpeakerPresent, nonatomic, readonly) bool speakerPresent;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createCameraManagers:(id)arg1;
- (void)_handleNegotiateStreamRequest:(id)arg1;
- (void)_handleStreamControlRequest:(id)arg1;
- (void)_setControlSupport;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;
- (id)cameraStreamManagers;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMicrophonePresent;
- (bool)isSpeakerPresent;
- (id)logIdentifier;
- (void)monitorForEventsForServices:(id)arg1;
- (id)networkMonitor;
- (void)registerForMessages;
- (id)residentMessageHandler;
- (void)setNetworkMonitor:(id)arg1;
- (id)settingProactiveReaders;
- (id)snapshotManager;
- (id)streamSnapshotHandler;

@end
