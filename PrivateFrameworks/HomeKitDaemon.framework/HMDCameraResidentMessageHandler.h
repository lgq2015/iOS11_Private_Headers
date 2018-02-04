/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    NSString * _logID;
    HMDCentralMessageDispatcher * _remoteMessageDispatcher;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) bool companionIsResident;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, retain) HMDCentralMessageDispatcher *remoteMessageDispatcher;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (bool)companionIsResident;
- (id)initWithAccessory:(id)arg1 logID:(id)arg2;
- (id)logID;
- (id)logIdentifier;
- (id)remoteMessageDispatcher;
- (id)residentDeviceForCamera;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(id /* block */)arg7;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)sendRemoteMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(id /* block */)arg7;
- (void)setRemoteMessageDispatcher:(id)arg1;
- (void)updateMessageDispatcher:(id)arg1;

@end
