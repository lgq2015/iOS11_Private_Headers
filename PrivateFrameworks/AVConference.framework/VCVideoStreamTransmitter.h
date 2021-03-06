/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoStreamTransmitter : NSObject <VCVideoCaptureClient> {
    char * _buffer;
    struct opaqueCMBufferQueue { } * _bufferQueue;
    NSObject<OS_dispatch_semaphore> * _bufferQueueSemaphore;
    unsigned long long  _bufferSize;
    unsigned int  _captureHeight;
    unsigned int  _captureWidth;
    struct OpaqueVTCompressionSession { } * _compressionSession;
    void * _controlInfoGenerator;
    unsigned long long  _cvoExtensionID;
    unsigned int  _dwRefreshFrameCounter;
    bool  _enableCVO;
    struct tagVCRealTimeThread { 
        unsigned int state; 
        unsigned int activeRequest; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } stateMutex; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } startMutex; 
        struct _opaque_pthread_cond_t { 
            long long __sig; 
            BOOL __opaque[40]; 
        } startEvent; 
        int (*clientRoutine)(); 
        void *clientContext; 
        struct OpaqueFigThread {} *thread; 
        int closeSocket; 
        BOOL identifier[60]; 
        unsigned int priority; 
        unsigned int threadOptions; 
    }  _encoderThread;
    unsigned int  _encodingHeight;
    unsigned int  _encodingWidth;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _frameReferenceMemoryPool;
    int  _iSMBCount;
    unsigned int  _keyFrameIntervalDuration;
    unsigned char  _lastCameraStatusBits;
    unsigned long long  _lastKeyFrameSampleBufferSize;
    double  _lastKeyFrameSentTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _latestSampleBufferTimestamp;
    int  _maxPacketCount;
    char * _packetBuffer;
    int  _packetBufferSize;
    int * _packetFlags;
    int * _packetSizes;
    unsigned short  _recommendedMTU;
    struct opaqueRTCReporting { } * _reportingAgent;
    double  _reportingIntervalStartTime;
    double  _reportingLastUpdateTime;
    struct opaqueCMSampleBuffer { } * _savedSampleBuffer;
    int  _shouldGenerateKeyFrame;
    VCMediaStreamStats * _stats;
    unsigned int  _targetFramerate;
    unsigned int  _temporaryMaximumBitrate;
    bool  _terminateEncoderThread;
    unsigned int  _timestamp;
    NSObject<OS_dispatch_queue> * _transmitterQueue;
    unsigned int  _txMaxBitrate;
    unsigned int  _txMinBitrate;
    long long  _videoCodecType;
    struct tagHANDLE { int x1; } * _videoRTP;
    VCVideoRule * _videoRule;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _xMBs;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastFrameTime;
@property double lastKeyFrameSentTime;
@property unsigned int lastRTPTimestamp;

- (void)avConferencePreviewError:(id)arg1;
- (id)clientCaptureRule;
- (void)dealloc;
- (void)encodeVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct __CFDictionary { }*)forceKeyFrameProperties;
- (void)gatherRealtimeStats:(struct __CFDictionary { }*)arg1;
- (struct CGSize { double x1; double x2; })getBestCaptureSizeForEncodingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)initVideoCompressionWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 bitrate:(unsigned int)arg3 keyFrameIntervalDuration:(unsigned int)arg4;
- (id)initWithResolution:(long long)arg1 framerate:(unsigned long long)arg2 codecType:(long long)arg3 maxBitrate:(unsigned long long)arg4 minBitrate:(unsigned long long)arg5 keyFrameInterval:(unsigned long long)arg6 enableCVO:(bool)arg7 cvoExtensionID:(unsigned long long)arg8 recommendedMTU:(unsigned long long)arg9 rtpHandle:(struct tagHANDLE { int x1; }*)arg10 reportingAgent:(struct opaqueRTCReporting { }*)arg11;
- (bool)isKeyFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastFrameTime;
- (double)lastKeyFrameSentTime;
- (unsigned int)lastRTPTimestamp;
- (void)limitCompressionSessionDataRate:(unsigned int)arg1;
- (bool)onCaptureFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (bool)prependSPSPPS:(unsigned long long*)arg1 dataPointer:(char *)arg2;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)requestKeyFrameGeneration;
- (void)sendFrame:(struct opaqueCMSampleBuffer { }*)arg1 cameraStatusBits:(unsigned char)arg2;
- (void)setLastFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLastKeyFrameSentTime:(double)arg1;
- (void)setLastRTPTimestamp:(unsigned int)arg1;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })sizeForVideoResolution:(long long)arg1;
- (void)startVideo;
- (void)stopVideo;
- (void)thermalLevelDidChange:(int)arg1;
- (int)transmitEncodedVideoFrame:(char *)arg1 size:(unsigned long long)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5;
- (int)transmitVideoPackets:(const char *)arg1 packetSizes:(int*)arg2 startPacket:(int)arg3 packetCount:(int)arg4 lastGroup:(int)arg5 timestamp:(unsigned int)arg6 hostTime:(double)arg7 cameraStatusBits:(unsigned char)arg8 bytesSent:(int*)arg9;

@end
