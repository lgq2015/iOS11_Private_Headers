/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface CannedVideoCapture : NSObject <VideoCaptureProtocol> {
    <CannedVideoFrameFeeder> * _frameFeeder;
    struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; int (*x3)(); void *x4; id x5; struct OpaqueCMClock {} *x6; bool x7; bool x8; struct OpaqueFigThread {} *x9; bool x10; struct _opaque_pthread_mutex_t { long long x_11_1_1; BOOL x_11_1_2[56]; } x11; struct _opaque_pthread_cond_t { long long x_12_1_1; BOOL x_12_1_2[40]; } x12; struct OpaqueFigThread {} *x13; bool x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct _opaque_pthread_cond_t { long long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct _opaque_pthread_mutex_t { long long x_17_1_1; BOOL x_17_1_2[56]; } x17; struct Frame {} *x18; int x19; } * _pimpl;
}

@property (nonatomic, retain) <CannedVideoFrameFeeder> *frameFeeder;
@property (nonatomic, readonly) struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; int (*x3)(); void *x4; id x5; struct OpaqueCMClock {} *x6; bool x7; bool x8; struct OpaqueFigThread {} *x9; bool x10; struct _opaque_pthread_mutex_t { long long x_11_1_1; BOOL x_11_1_2[56]; } x11; struct _opaque_pthread_cond_t { long long x_12_1_1; BOOL x_12_1_2[40]; } x12; struct OpaqueFigThread {} *x13; bool x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct _opaque_pthread_cond_t { long long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct _opaque_pthread_mutex_t { long long x_17_1_1; BOOL x_17_1_2[56]; } x17; struct Frame {} *x18; int x19; }*pimpl;

+ (int)cannedVideoTypeForPath:(id)arg1;
+ (int)createPixelBufferPool:(struct __CVPixelBufferPool {}**)arg1 withWidth:(int)arg2 height:(int)arg3;

- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (void)dealloc;
- (id)frameFeeder;
- (id)getCameraUID;
- (id)initWithOptions:(void*)arg1 callback:(int (*)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 cameraUID:(id)arg6 folder:(id)arg7 withError:(int*)arg8;
- (bool)isFrontCamera;
- (bool)isPreviewRunning;
- (struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; int (*x3)(); void *x4; id x5; struct OpaqueCMClock {} *x6; bool x7; bool x8; struct OpaqueFigThread {} *x9; bool x10; struct _opaque_pthread_mutex_t { long long x_11_1_1; BOOL x_11_1_2[56]; } x11; struct _opaque_pthread_cond_t { long long x_12_1_1; BOOL x_12_1_2[40]; } x12; struct OpaqueFigThread {} *x13; bool x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct _opaque_pthread_cond_t { long long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct _opaque_pthread_mutex_t { long long x_17_1_1; BOOL x_17_1_2[56]; } x17; struct Frame {} *x18; int x19; }*)pimpl;
- (int)setCameraWithUID:(id)arg1;
- (void)setFrameFeeder:(id)arg1;
- (int)setFrameRate:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)startThreads;
- (int)stop:(bool)arg1;
- (void)stopThreads;

@end
