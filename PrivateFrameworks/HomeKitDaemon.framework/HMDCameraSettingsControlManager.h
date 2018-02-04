/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSettingsControlManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDAccessory * _accessory;
    NSArray * _characteristicsList;
    NSDictionary * _characteristicsValues;
    <HMDCameraSettingsControlManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _logID;
    HMFMessageDispatcher * _msgDispatcher;
    HMDNotificationRegistration * _notificationRegistration;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDService * _streamService;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) NSArray *characteristicsList;
@property (nonatomic, retain) NSDictionary *characteristicsValues;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSettingsControlManagerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HMDService *streamService;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDelegate;
- (void)_characteristicsUpdated:(id)arg1;
- (bool)_getCharacteristic:(id*)arg1 characteristicType:(id)arg2;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_handleStreamStatusMultireadResponse:(id)arg1;
- (void)_readCharacteristicValues;
- (void)_updateValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)accessory;
- (id)characteristicsList;
- (id)characteristicsValues;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)handleAccessoryIsReachable:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 accessory:(id)arg4 streamService:(id)arg5 characteristicsList:(id)arg6 msgDispatcher:(id)arg7;
- (id)logID;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)notificationRegistration;
- (id)propertyQueue;
- (void)registerForMessages;
- (void)setCharacteristicsValues:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (id)streamService;
- (id)uniqueIdentifier;
- (void)updateValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)workQueue;

@end
