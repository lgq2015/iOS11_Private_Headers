/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceSetupSession : HMFObject <HMFLogging, HMFMessageReceiver> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDDeviceSetupSessionDelegate> * _delegate;
    HMDHomeManager * _homeManager;
    NSUUID * _identifier;
    HMDDeviceSetupSessionInternal * _internal;
    bool  _open;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <HMDDeviceSetupSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) HMDDeviceSetupSessionInternal *internal;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isOpen, nonatomic) bool open;
@property (readonly) long long role;
@property (readonly) Class superclass;

+ (id)followUpController;
+ (bool)isRoleSupported:(long long)arg1;
+ (id)logCategory;
+ (void)startAdvertising;
+ (void)stopAdvertising;

- (void).cxx_destruct;
- (void)__registerForMessages;
- (void)_closeWithError:(id)arg1;
- (void)_handleClose:(id)arg1;
- (void)_handleRecieveData:(id)arg1;
- (void)_sendRequestData:(id)arg1;
- (id)clientQueue;
- (id)delegate;
- (unsigned long long)hash;
- (id)homeManager;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 homeManager:(id)arg3;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isOpen;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)open;
- (long long)role;
- (void)setDelegate:(id)arg1;
- (void)setOpen:(bool)arg1;

@end
