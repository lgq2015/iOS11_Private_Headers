/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotSender : HMFObject <HMDCameraPowerAssertionProtocol, HMFLogging> {
    HMDAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _destinationID;
    HMDCameraSessionID * _sessionID;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_sendImageSendFailure:(id)arg1;
- (id)accessory;
- (id)delegateQueue;
- (id)destinationID;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 accessory:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6;
- (id)logIdentifier;
- (id)sessionID;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
