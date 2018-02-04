/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay <HMFLogging, IDSServiceDelegate, IDSSessionDelegate> {
    unsigned long long  _bytesSoFar;
    unsigned long long  _bytesToReceive;
    <HMDCameraSnapshotIDSRelayReceiverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    IDSSession * _idsSession;
    NSMutableData * _relayData;
    HMDSnapshotFile * _snapshotFile;
    NSObject<OS_dispatch_source> * _socketSource;
}

@property (nonatomic) unsigned long long bytesSoFar;
@property (nonatomic) unsigned long long bytesToReceive;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSnapshotIDSRelayReceiverDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSSession *idsSession;
@property (nonatomic, retain) NSMutableData *relayData;
@property (nonatomic, readonly) HMDSnapshotFile *snapshotFile;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *socketSource;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callFileReceived:(id)arg1;
- (void)_handleDataFromSocket:(id)arg1;
- (id)_postProcessFileData;
- (void)_startFileReceive;
- (unsigned long long)bytesSoFar;
- (unsigned long long)bytesToReceive;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)idsSession;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)logIdentifier;
- (id)relayData;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setBytesSoFar:(unsigned long long)arg1;
- (void)setBytesToReceive:(unsigned long long)arg1;
- (void)setIdsSession:(id)arg1;
- (void)setRelayData:(id)arg1;
- (void)setSocketSource:(id)arg1;
- (id)snapshotFile;
- (id)socketSource;

@end
