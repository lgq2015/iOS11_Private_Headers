/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSDictionary * _options;
    HMDCameraResidentMessageHandler * _residentMessageHandler;
    HMDCameraSessionID * _sessionID;
    HMDSnapshotFile * _snapshotFile;
    HMDCameraSnapshotMetrics * _snapshotMetrics;
    HMDSnapshotRequestHandler * _snapshotRequestHandler;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic, retain) HMDSnapshotFile *snapshotFile;
@property (nonatomic, retain) HMDCameraSnapshotMetrics *snapshotMetrics;
@property (nonatomic, readonly) HMDSnapshotRequestHandler *snapshotRequestHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_sendConfirmationToResident:(id /* block */)arg1;
- (void)_sendRequestWithTierType:(unsigned long long)arg1 toResident:(id /* block */)arg2;
- (id)accessory;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8;
- (id)logIdentifier;
- (id)options;
- (id)residentMessageHandler;
- (id)sessionID;
- (void)setSnapshotFile:(id)arg1;
- (void)setSnapshotMetrics:(id)arg1;
- (id)snapshotFile;
- (id)snapshotMetrics;
- (id)snapshotRequestHandler;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
