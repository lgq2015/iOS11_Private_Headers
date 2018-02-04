/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteStreamSession : HMDCameraStreamSession <HMFLogging> {
    <HMDCameraRemoteStreamReceiverProtocol> * _streamReceiver;
    <HMDCameraRemoteStreamSenderProtocol> * _streamSender;
    unsigned long long  _streamState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMDCameraRemoteStreamReceiverProtocol> *streamReceiver;
@property (nonatomic, readonly) <HMDCameraRemoteStreamSenderProtocol> *streamSender;
@property (nonatomic) unsigned long long streamState;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)containsState:(long long)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 streamReceiver:(id)arg4 remoteCapabilities:(id)arg5 streamPreference:(id)arg6;
- (id)logIdentifier;
- (void)setStreamState:(unsigned long long)arg1;
- (id)stateAsString;
- (id)streamReceiver;
- (id)streamSender;
- (unsigned long long)streamState;
- (void)updateState:(long long)arg1;

@end
