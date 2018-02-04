/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate> {
    <HMDCameraSnapshotIDSStreamInitiatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _destinationID;
    NSString * _sendFileIdentifier;
    HMDSnapshotFile * _snapshotFile;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSnapshotIDSStreamInitiatorDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *sendFileIdentifier;
@property (nonatomic, retain) HMDSnapshotFile *snapshotFile;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callFileTransferFailed:(id)arg1;
- (void)_sendFile:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)destinationID;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)logIdentifier;
- (void)sendFile:(id)arg1;
- (id)sendFileIdentifier;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)setDestinationID:(id)arg1;
- (void)setSendFileIdentifier:(id)arg1;
- (void)setSnapshotFile:(id)arg1;
- (id)snapshotFile;

@end
