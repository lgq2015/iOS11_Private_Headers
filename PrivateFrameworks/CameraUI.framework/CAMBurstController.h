/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBurstController : NSObject {
    CAMBurstSession * __activeSession;
    NSObject<OS_dispatch_queue> * __analysisQueue;
    NSMutableDictionary * __faceResultsByIdentifier;
    NSCountedSet * __inflightRequestsByIdentifier;
    NSObject<OS_dispatch_queue> * __mutexQueue;
    CAMPersistenceController * __persistenceController;
    CAMPowerController * __powerController;
    CAMProtectionController * __protectionController;
    CAMRemoteShutterController * __remoteShutterController;
    NSCountedSet * __requestsPendingPersistenceByIdentifier;
    NSMutableDictionary * __sessionsByIdentifier;
}

@property (setter=_setActiveSession:, nonatomic, retain) CAMBurstSession *_activeSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_analysisQueue;
@property (nonatomic, readonly) NSMutableDictionary *_faceResultsByIdentifier;
@property (nonatomic, readonly) NSCountedSet *_inflightRequestsByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_mutexQueue;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (nonatomic, readonly) CAMPowerController *_powerController;
@property (nonatomic, readonly) CAMProtectionController *_protectionController;
@property (nonatomic, readonly) CAMRemoteShutterController *_remoteShutterController;
@property (nonatomic, readonly) NSCountedSet *_requestsPendingPersistenceByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_sessionsByIdentifier;
@property (nonatomic, readonly) unsigned long long currentBurstCount;
@property (nonatomic, readonly, copy) NSString *currentBurstIdentifier;

- (void).cxx_destruct;
- (id)_activeSession;
- (id)_analysisQueue;
- (id)_faceResultsByIdentifier;
- (id)_inflightRequestsByIdentifier;
- (id)_mutexQueue;
- (void)_mutexQueueProcessCompleteBurstSessionWithIdentifier:(id)arg1 device:(long long)arg2;
- (id)_persistenceController;
- (id)_powerController;
- (id)_protectionController;
- (id)_remoteShutterController;
- (id)_requestsPendingPersistenceByIdentifier;
- (id)_sessionsByIdentifier;
- (void)_setActiveSession:(id)arg1;
- (void)cancelBurstCapture;
- (unsigned long long)currentBurstCount;
- (id)currentBurstIdentifier;
- (unsigned long long)estimatedCountForIdentifier:(id)arg1;
- (void)finishBurstCaptureForDevice:(long long)arg1;
- (unsigned long long)inflightCountForIdentifier:(id)arg1;
- (id)init;
- (id)initWithProtectionController:(id)arg1 powerController:(id)arg2 remoteShutterController:(id)arg3;
- (void)processCapturedRequest:(id)arg1 withResult:(id)arg2;
- (void)processEnqueuedRequest:(id)arg1;
- (void)processFaceResults:(id)arg1;
- (void)processPersistedRequest:(id)arg1 withResult:(id)arg2;
- (void)setPersistenceController:(id)arg1;
- (id)startBurstCapture;

@end
