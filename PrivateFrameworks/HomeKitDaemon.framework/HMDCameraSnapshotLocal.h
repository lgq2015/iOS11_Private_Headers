/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotLocal : HMFObject <HMDCameraGetSnapshotProtocol, HMFLogging> {
    HMDAccessory * _accessory;
    <HMDCameraSnapshotLocalDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSDictionary * _options;
    HMDCameraSessionID * _sessionID;
    HMDSnapshotFile * _snapshotFile;
    <HMDSnapshotRequestHandlerProtocol> * _snapshotRequestHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSnapshotLocalDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic, retain) HMDSnapshotFile *snapshotFile;
@property (nonatomic, readonly) <HMDSnapshotRequestHandlerProtocol> *snapshotRequestHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDelegate:(id)arg1 error:(id)arg2;
- (void)_getSnapshot:(unsigned long long)arg1;
- (void)_handleSnapshotFile:(id)arg1 error:(id)arg2;
- (id)accessory;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 snapshotRequestHandler:(id)arg7;
- (id)logIdentifier;
- (id)options;
- (id)sessionID;
- (void)setSnapshotFile:(id)arg1;
- (id)snapshotFile;
- (id)snapshotRequestHandler;
- (id)workQueue;

@end
