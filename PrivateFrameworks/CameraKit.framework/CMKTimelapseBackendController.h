/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimelapseBackendController : NSObject <CMKNebulaDaemonTimelapseProtocol> {
    bool  __capturing;
    CMKTimelapseState * __currentState;
    <CMKTimelapseMovieWriterProtocol> * __movieWriter;
    NSMutableArray * __sessionContexts;
    NSObject<OS_dispatch_queue> * __workQueue;
    bool  __writingMovie;
}

@property (getter=_isCapturing, setter=_setCapturing:, nonatomic) bool _capturing;
@property (setter=_setCurrentState:, nonatomic, retain) CMKTimelapseState *_currentState;
@property (nonatomic, readonly) <CMKTimelapseMovieWriterProtocol> *_movieWriter;
@property (nonatomic, readonly) NSMutableArray *_sessionContexts;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_workQueue;
@property (nonatomic, readonly) bool _writingMovie;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_createPlaceholderAssetForState:(id)arg1;
- (id)_currentState;
- (bool)_deleteItemAtPath:(id)arg1;
- (void)_dispatchToMainQueueWithBlock:(id /* block */)arg1;
- (void)_dispatchToWorkQueueAfterDelay:(double)arg1 withBlock:(id /* block */)arg2;
- (void)_dispatchToWorkQueueWithBlock:(id /* block */)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_frameTransformForState:(id)arg1;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)arg1;
- (bool)_isCameraRunning;
- (bool)_isCapturing;
- (id)_movieWriter;
- (void)_movieWrittenToFilePath:(id)arg1 duration:(double)arg2 state:(id)arg3;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg1 duration:(double)arg2 state:(id)arg3;
- (void)_performPendingWork;
- (void)_permanentlyFailTimelapseUUID:(id)arg1;
- (void)_reserveDummyFileForTimelapseUUID:(id)arg1 firstImageFilePath:(id)arg2;
- (bool)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg1;
- (id)_sessionContexts;
- (void)_setCapturing:(bool)arg1;
- (void)_setCurrentState:(id)arg1;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(bool)arg1;
- (void)_updateSessionContext:(id)arg1 withState:(id)arg2;
- (id)_workQueue;
- (void)_writeMovieForSessionContext:(id)arg1;
- (bool)_writingMovie;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)handleClientConnection:(id)arg1;
- (void)handleClientDisconnection;
- (id)init;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(bool)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;

@end
