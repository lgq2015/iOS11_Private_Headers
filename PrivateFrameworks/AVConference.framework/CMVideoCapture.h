/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface CMVideoCapture : NSObject <VideoCaptureProtocol> {
    struct tagHANDLE { int x1; } * _handle;
    NSObject<OS_os_transaction> * _transaction;
}

- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (void)dealloc;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (int)getCameraType:(int*)arg1;
- (id)getCameraUID;
- (int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;
- (id)initWithOptions:(void*)arg1 frameCallback:(int (*)arg2 videoCaptureEventCallbackData:(void*)arg3 videoCaptureEventCallback:(int (*)arg4 width:(int)arg5 height:(int)arg6 frameRate:(int)arg7 cameraUID:(id)arg8 withError:(int*)arg9;
- (bool)isFrontCamera;
- (bool)isFrontCameraForUID:(id)arg1;
- (bool)isPreviewRunning;
- (int)setCameraType:(int)arg1;
- (int)setCameraWithUID:(id)arg1;
- (int)setFrameRate:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)stop:(bool)arg1;

@end
