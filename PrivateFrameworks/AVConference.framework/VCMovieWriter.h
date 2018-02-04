/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMovieWriter : NSObject <VCMovieWriterProtocol> {
    AVAssetWriterInputMetadataAdaptor * _adapter;
    AVAssetWriter * _assetWriter;
    struct __CVPixelBufferPool { } * _bufferPool;
    id /* block */  _completionHandler;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contectRect;
    unsigned int  _endRTPTimeStamp;
    bool  _isEndRTPTimestampSet;
    bool  _isVideoStarted;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastLocalAudioPresentationTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastRemoteAudioPresentationTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastVideoPresentationTime;
    AVAssetWriterInput * _localAudioInput;
    struct opaqueCMBufferQueue { } * _localAudioQueue;
    AVAssetWriterInput * _metadataInput;
    NSURL * _outputURL;
    AVAssetWriterInput * _remoteAudioInput;
    struct opaqueCMBufferQueue { } * _remoteAudioQueue;
    NSObject<OS_dispatch_queue> * _serializationQueue;
    unsigned int  _startRTPTimeStamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
    NSString * _transactionID;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    AVAssetWriterInput * _videoInput;
    struct opaqueCMBufferQueue { } * _videoQueue;
    double  _visibleHeight;
    double  _visibleWidth;
    unsigned char  _writerMode;
    bool  _writingStarted;
}

@property unsigned int endRTPTimeStamp;
@property (nonatomic, retain) NSURL *outputURL;
@property unsigned int startRTPTimeStamp;
@property (readonly) unsigned char writerMode;

- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 mediaType:(unsigned char)arg2;
- (void)appendMetaData;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
- (void)dealloc;
- (unsigned int)endRTPTimeStamp;
- (void)finishWritingWithHandler:(id /* block */)arg1;
- (id)initWithOutputURL:(id)arg1 transactionID:(id)arg2;
- (id)outputURL;
- (void)processSampleQueue:(struct opaqueCMBufferQueue { }*)arg1 input:(id)arg2 lastPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (void)setEndRTPTimeStamp:(unsigned int)arg1;
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setStartRTPTimeStamp:(unsigned int)arg1;
- (void)setStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)setupAssetWriterWithWidth:(int)arg1 height:(int)arg2 transactionID:(id)arg3;
- (void)setupContectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCaptureHeight:(int)arg2;
- (void)setupInput:(id)arg1 queue:(struct opaqueCMBufferQueue { }*)arg2 dispatchGroup:(id)arg3 lastPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4;
- (void)setupInputs;
- (void)setupWriterWithMode:(unsigned char)arg1;
- (bool)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2;
- (bool)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2;
- (unsigned int)startRTPTimeStamp;
- (void)startWritingAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (unsigned char)writerMode;

@end
