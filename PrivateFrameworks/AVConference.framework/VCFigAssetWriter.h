/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCFigAssetWriter : NSObject <VCMovieWriterProtocol> {
    struct OpaqueFigAssetWriter { } * _assetWriter;
    struct __CVPixelBufferPool { } * _bufferPool;
    struct OpaqueVTCompressionSession { } * _compressionSession;
    unsigned int  _endRTPTimeStamp;
    bool  _isEndRTPTimestampSet;
    bool  _isVideoStarted;
    int  _localAudioTrackID;
    int  _metadataTrackID;
    NSURL * _outputURL;
    int  _remoteAudioTrackID;
    bool  _resize;
    unsigned int  _startRTPTimeStamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    unsigned char  _stillImageCameraStatusBit;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
    NSString * _transactionID;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    int  _videoTrackID;
    unsigned char  _writerMode;
}

@property unsigned int endRTPTimeStamp;
@property (nonatomic, retain) NSURL *outputURL;
@property unsigned int startRTPTimeStamp;
@property (readonly) unsigned char writerMode;

- (int)_setupWriter;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 mediaType:(unsigned char)arg2;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
- (struct OpaqueVTCompressionSession { }*)compressionSessionWithWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)dealloc;
- (int)encodeAndAppendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (unsigned int)endRTPTimeStamp;
- (void)finishWritingWithHandler:(id /* block */)arg1;
- (id)initWithOutputURL:(id)arg1 transactionID:(id)arg2;
- (id)outputURL;
- (void)setEndRTPTimeStamp:(unsigned int)arg1;
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setStartRTPTimeStamp:(unsigned int)arg1;
- (void)setStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillImageTimeInternal;
- (void)setupLivePhotoStillImageCameraStatusBit:(unsigned char)arg1 resize:(bool)arg2 videoVisibleWidth:(int)arg3 height:(int)arg4;
- (void)setupWriterWithMode:(unsigned char)arg1;
- (bool)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2;
- (bool)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2;
- (unsigned int)startRTPTimeStamp;
- (int)trackIDForMediaType:(unsigned char)arg1;
- (void)writeIdentifierMetadata:(id)arg1;
- (unsigned char)writerMode;

@end
