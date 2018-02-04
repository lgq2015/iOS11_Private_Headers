/* made by EzioChiu.
 */

@protocol AVCapturePhotoCaptureDelegate <NSObject>

@optional

- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didCapturePhotoForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishCaptureForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2 error:(NSError *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(NSURL *)arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 photoDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg5 error:(NSError *)arg6;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingPhoto:(AVCapturePhoto *)arg2 error:(NSError *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg4 bracketSettings:(AVCaptureBracketedStillImageSettings *)arg5 error:(NSError *)arg6;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingRawPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg4 bracketSettings:(AVCaptureBracketedStillImageSettings *)arg5 error:(NSError *)arg6;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(NSURL *)arg2 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 willBeginCaptureForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 willCapturePhotoForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2;

@end
