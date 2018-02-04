/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentCommunicationHandler : HMFObject <HMFLogging, HMFTimerDelegate> {
    NSMapTable * _deviceMapping;
    NSMapTable * _dispatchedReadRequests;
    NSUUID * _homeUUID;
    HMFTimer * _multiReadCoalesceTimer;
    NSMutableArray * _pendingReadRequests;
    HMDCentralMessageDispatcher * _remoteDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMapTable *deviceMapping;
@property (nonatomic, readonly) NSMapTable *dispatchedReadRequests;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, retain) HMFTimer *multiReadCoalesceTimer;
@property (nonatomic, readonly) NSMutableArray *pendingReadRequests;
@property (nonatomic, readonly) HMDDevice *preferredDevice;
@property (nonatomic, readonly) HMDCentralMessageDispatcher *remoteDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (void)_clearAllGeneratedRequests:(id)arg1 error:(id)arg2;
+ (void)_clearAllPendingRequests:(id)arg1 error:(id)arg2;
+ (void)_processResponseForMultireadRequest:(id)arg1 overallError:(id)arg2 response:(id)arg3;
+ (id)createResponseSubset:(id)arg1 overallError:(id)arg2 readRequest:(id)arg3 error:(id*)arg4;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_processResponse:(id)arg1 overallError:(id)arg2 messageIdentifier:(id)arg3;
- (void)_removeDeviceForType:(long long)arg1;
- (void)_sendMultipleCharacteristicRead;
- (bool)containsDevice:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceForType:(long long)arg1;
- (id)deviceMapping;
- (id)dispatchedReadRequests;
- (id)homeUUID;
- (id)initWithHomeUUID:(id)arg1 remoteDispatcher:(id)arg2;
- (id)multiReadCoalesceTimer;
- (id)pendingReadRequests;
- (id)preferredDevice;
- (long long)preferredDeviceType;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3;
- (id)remoteDispatcher;
- (void)removeDeviceForType:(long long)arg1;
- (void)setDevice:(id)arg1 forType:(long long)arg2;
- (void)setDeviceMapping:(id)arg1;
- (void)setMultiReadCoalesceTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
