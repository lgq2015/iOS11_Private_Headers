/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCScreenCapture : NSObject <VideoCaptureProtocol> {
    int  _captureFramerate;
    int  _captureHeight;
    int  _captureWidth;
    int (* _frameCallback;
    void * _frameCallbackData;
    bool  _isCapturing;
    bool  _isPreviewing;
    NSDictionary * _options;
    struct __CVPixelBufferPool { } * _rotationBufferPool;
    struct OpaqueVTImageRotationSession { } * _rotationSession;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _screenCaptureLock;
    struct OpaqueFigVirtualDisplaySession { } * _session;
    int (* _videoCaptureEventCallback;
    void * _videoCaptureEventCallbackData;
}

- (int)_startCapture;
- (void)callbackWithEventString:(id)arg1;
- (void)capturedScreen:(struct opaqueCMSampleBuffer { }*)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 desRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(unsigned int)arg4;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (void)dealloc;
- (id)getCameraUID;
- (int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;
- (id)initWithFrameCallbackData:(void*)arg1 frameCallback:(int (*)arg2 videoCaptureEventCallbackData:(void*)arg3 videoCaptureEventCallback:(int (*)arg4 width:(int)arg5 height:(int)arg6 frameRate:(int)arg7 withError:(int*)arg8;
- (bool)isFrontCamera;
- (bool)isPreviewRunning;
- (int)setCameraWithUID:(id)arg1;
- (int)setFrameRate:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)stop:(bool)arg1;

@end