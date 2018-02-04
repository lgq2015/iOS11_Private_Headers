/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotRemoteStreamReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMDCameraSnapshotReceiverProtocol, HMFLogging> {
    <HMDCameraSnapshotRemoteStreamReceiverDelegate> * _delegate;
    HMDCameraSnapshotIDSStreamReceiver * _relayReceiver;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSnapshotRemoteStreamReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDCameraSnapshotIDSStreamReceiver *relayReceiver;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidSaveImageDelegateWithError:(id)arg1;
- (void)_callGettingImageDelegate:(id)arg1;
- (void)_getSnapshot:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 residentMessageHandler:(id)arg9;
- (id)logIdentifier;
- (id)relayReceiver;
- (void)relayReceiver:(id)arg1 didReceiveFile:(id)arg2;
- (void)setRelayReceiver:(id)arg1;
- (void)snapShotSendFailed:(id)arg1;

@end