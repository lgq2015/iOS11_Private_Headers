/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraIDSSessionHandler : HMFObject <HMDCameraRemoteStreamProtocol, HMFLogging, IDSServiceDelegate> {
    IDSSession * _idsSession;
    IDSService * _idsStreamService;
    HMDCameraSessionID * _sessionID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSSession *idsSession;
@property (nonatomic, readonly) IDSService *idsStreamService;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)idsSession;
- (id)idsStreamService;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (id)sessionID;
- (void)setIdsSession:(id)arg1;
- (void)startKeepAlive;
- (id)workQueue;

@end
