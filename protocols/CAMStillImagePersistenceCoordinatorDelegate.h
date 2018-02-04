/* made by EzioChiu.
 */

@protocol CAMStillImagePersistenceCoordinatorDelegate <NSObject>

@required

- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsRemotePersistenceForLocalPersistenceResult:(CAMStillImageLocalPersistenceResult *)arg2 fullsizeRenderLocalResult:(CAMStillImageLocalPersistenceResult *)arg3 request:(CAMCaptureRequest *)arg4 powerAssertionReason:(unsigned int)arg5;
- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(CAMStillImageCaptureCoordinationInfo *)arg2 request:(CAMCaptureRequest *)arg3;

@end
