/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMomentsHistory : NSObject <VCMomentsHistoryBufferDelegate> {
    struct __CVPixelBufferPool { } * _bufferPool;
    int  _captureHeight;
    int  _captureWidth;
    NSMutableDictionary * _completionHandlers;
    struct __CVPixelBufferPool { } * _copyPool;
    struct OpaqueVTPixelTransferSession { } * _copyTransferSession;
    VCMomentsHistoryBuffer * _frameBuffer;
    bool  _isFirstFrame;
    VCMomentsHistoryBuffer * _localAudioBuffer;
    NSString * _masterTransactionID;
    NSObject<OS_dispatch_queue> * _momentsQueue;
    NSMutableArray * _pendingRequests;
    VCMomentsHistoryBuffer * _remoteAudioBuffer;
    VideoAttributes * _remoteScreenAttributes;
    bool  _resize;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    NSObject<VCMovieWriterProtocol> * _writer;
    NSMutableDictionary * _writers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VideoAttributes *remoteScreenAttributes;
@property (readonly) Class superclass;

- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList { }*)arg1 timestamp:(unsigned int)arg2;
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList { }*)arg1 timestamp:(unsigned int)arg2;
- (void)appendSampleWithWriter:(id)arg1 buffer:(id)arg2 sample:(struct opaqueCMSampleBuffer { }*)arg3;
- (struct CGSize { double x1; double x2; })calculateVisibleAreaWithVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cameraStatusBit:(unsigned char)arg2;
- (void)cancelRequestWithTransactionID:(id)arg1;
- (void)cleanupActiveRequests;
- (void)cleanupTransferSession;
- (struct __CVBuffer { }*)copyBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (void)endVideoRecording:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)finishWritingWithWriter:(id)arg1 transactionID:(id)arg2;
- (void)flushHistoryBuffers;
- (id)getFilePathWithTransactionID:(id)arg1 type:(unsigned char)arg2;
- (void)getLivePhotoWithTransactionID:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)getPhotoWithTransactionID:(id)arg1 Timestamp:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)handlePendingRequests;
- (void)handleSinglePendingRequestWithTransactionID:(id)arg1 sourceURL:(id)arg2;
- (void)historyBuffer:(id)arg1 didDequeueSample:(struct opaqueCMSampleBuffer { }*)arg2 timestamp:(unsigned int)arg3;
- (id)init;
- (void)registerDirectoryWithFilePath:(id)arg1;
- (id)remoteScreenAttributes;
- (int)rewriteMovieMetadataWithURL:(id)arg1 transactionID:(id)arg2;
- (void)setCompeletionHandler:(id /* block */)arg1 forTransactionID:(id)arg2;
- (void)setRemoteScreenAttributes:(id)arg1;
- (void)setupResizingSessionsWithVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cameraStatusBit:(unsigned char)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })setupStillImageWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 cameraStatusBit:(char *)arg4;
- (void)setupWriterWithTransactionID:(id)arg1 filePath:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 cameraStatusBit:(unsigned char)arg5;
- (void)startVideoRecording:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAudioBuffer:(id)arg1 WithSample:(struct opaqueCMSampleBuffer { }*)arg2 timestamp:(unsigned int)arg3;
- (void)updateCaptureSizesWithFirstFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)updateRemoteScreenAttributes:(id)arg1;
- (void)updateVideoBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;
- (bool)writeToFileWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 URL:(id*)arg3;
- (bool)writeToLivePhotoToFileWithFrame:(struct __CVBuffer { }*)arg1 transactionID:(id)arg2 URL:(id*)arg3 cameraStatusBits:(unsigned char)arg4;

@end
