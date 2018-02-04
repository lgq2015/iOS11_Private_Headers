/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKDebugCaptureService : CMKCaptureService {
    double  __enqueueTime;
    bool  _debugLoggingEnabled;
}

@property (nonatomic, readonly) double _enqueueTime;
@property (getter=isDebugLoggingEnabled, nonatomic) bool debugLoggingEnabled;

- (double)_enqueueTime;
- (void)didCaptureStillImageForRequest:(id)arg1;
- (bool)isDebugLoggingEnabled;
- (void)receivedStillImageForRequest:(id)arg1;
- (void)requestWasEnqueued:(id)arg1;
- (void)responseWasCompleted:(id)arg1 error:(id)arg2;
- (void)responseWasGenerated:(id)arg1 error:(id)arg2;
- (void)setDebugLoggingEnabled:(bool)arg1;
- (void)willCaptureStillImageForRequest:(id)arg1;

@end
