/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIDSProxyMessageTransport : HMDIDSMessageTransport {
    HMDCompanionManager * _companionManager;
    HMDWatchManager * _watchManager;
}

@property (nonatomic, readonly) HMDCompanionManager *companionManager;
@property (nonatomic, readonly) HMDWatchManager *watchManager;

+ (unsigned long long)restriction;
+ (bool)transportSupportsDevice:(id)arg1;

- (void).cxx_destruct;
- (int)awdTransportType;
- (bool)canSendMessage:(id)arg1;
- (id)companionManager;
- (id)deviceForDestination:(id)arg1;
- (id)idsDeviceForDevice:(id)arg1;
- (id)initWithAccountRegistry:(id)arg1;
- (bool)isDeviceConnected:(id)arg1;
- (bool)isSecure;
- (long long)qualityOfService;
- (id)remoteMessageFromMessage:(id)arg1;
- (id)sendMessage:(id)arg1 destination:(id)arg2 timeout:(double)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)watchDeviceForDevice:(id)arg1;
- (id)watchManager;

@end
