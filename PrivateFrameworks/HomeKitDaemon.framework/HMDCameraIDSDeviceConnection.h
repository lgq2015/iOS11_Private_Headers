/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraIDSDeviceConnection : HMFObject <HMDCameraRemoteStreamProtocol, HMFLogging, HMFTimerDelegate, IDSServiceDelegate> {
    IDSDevice * _device;
    NSObject<OS_dispatch_queue> * _highPriorityQueue;
    IDSService * _idsProxyStreamService;
    HMFTimer * _keepAliveByteReceiveTimeoutTimer;
    HMFTimer * _keepAliveByteSendTimer;
    IDSDeviceConnection * _keepAliveConnection;
    unsigned char  _keepAliveCounter;
    HMDCameraSessionID * _sessionID;
    NSObject<OS_dispatch_source> * _socketReceiveSource;
    IDSDeviceConnection * _watchAudioConnection;
    IDSDeviceConnection * _watchVideoConnection;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IDSDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *highPriorityQueue;
@property (nonatomic, readonly) IDSService *idsProxyStreamService;
@property (nonatomic, retain) HMFTimer *keepAliveByteReceiveTimeoutTimer;
@property (nonatomic, retain) HMFTimer *keepAliveByteSendTimer;
@property (nonatomic, retain) IDSDeviceConnection *keepAliveConnection;
@property (nonatomic) unsigned char keepAliveCounter;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *socketReceiveSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) IDSDeviceConnection *watchAudioConnection;
@property (nonatomic, retain) IDSDeviceConnection *watchVideoConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callSessionEnded:(id)arg1;
- (void)_createStreamSocket:(id)arg1;
- (void)_receiveByteCheckTimerFired;
- (void)_sendTimerFired;
- (void)_setReceiveByteHandler;
- (void)_socketOpened:(id)arg1;
- (void)_startKeepAliveByteSendTimer;
- (void)_startKeepAliveTimeoutTimer;
- (void)callSessionEnded:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)highPriorityQueue;
- (id)idsProxyStreamService;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;
- (id)keepAliveByteReceiveTimeoutTimer;
- (id)keepAliveByteSendTimer;
- (id)keepAliveConnection;
- (unsigned char)keepAliveCounter;
- (id)logIdentifier;
- (id)sessionID;
- (void)setDevice:(id)arg1;
- (void)setKeepAliveByteReceiveTimeoutTimer:(id)arg1;
- (void)setKeepAliveByteSendTimer:(id)arg1;
- (void)setKeepAliveConnection:(id)arg1;
- (void)setKeepAliveCounter:(unsigned char)arg1;
- (void)setSocketReceiveSource:(id)arg1;
- (void)setWatchAudioConnection:(id)arg1;
- (void)setWatchVideoConnection:(id)arg1;
- (id)socketReceiveSource;
- (void)startKeepAlive;
- (void)timerDidFire:(id)arg1;
- (id)watchAudioConnection;
- (id)watchVideoConnection;
- (id)workQueue;

@end
