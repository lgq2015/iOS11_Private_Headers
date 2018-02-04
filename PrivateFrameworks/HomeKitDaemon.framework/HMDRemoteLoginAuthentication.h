/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginAuthentication : HMFObject <HMFLogging> {
    HMDDevice * _remoteDevice;
    HMDRemoteLoginMessageSender * _remoteMessageSender;
    NSString * _sessionID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDDevice *remoteDevice;
@property (nonatomic, readonly) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (nonatomic, readonly) NSString *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)authenticate;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4;
- (id)logIdentifier;
- (id)remoteDevice;
- (id)remoteMessageSender;
- (id)sessionID;
- (id)workQueue;

@end
