/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARRecordingTechnique : ARTechnique {
    AVAssetWriterInput * _accelInput;
    AVAssetWriterInputMetadataAdaptor * _accelInputAdaptor;
    AVAssetWriter * _assetWriter;
    struct __CVPixelBufferPool { } * _depthBufferPoolFloat16;
    AVAssetWriterInput * _depthInput;
    AVAssetWriterInputPixelBufferAdaptor * _depthInputAdaptor;
    AVAssetWriterInput * _deviceOrientationInput;
    AVAssetWriterInputMetadataAdaptor * _deviceOrientationInputAdaptor;
    bool  _expectDepthData;
    AVAssetWriterInput * _gyroInput;
    AVAssetWriterInputMetadataAdaptor * _gyroInputAdaptor;
    NSObject<OS_dispatch_semaphore> * _inputIsReadySemaphore;
    bool  _isWaitingUntilInputIsReady;
    NSMutableDictionary * _lastRecordedTimestamps;
    NSMutableArray * _motionDataCache;
    NSURL * _outputFileURL;
    NSObject<OS_dispatch_queue> * _processingQueue;
    <ARRecordingTechniqueDelegate> * _recordingTechniqueDelegate;
    unsigned long long  _sensorDataTypes;
    double  _sessionSourceTime;
    bool  _sessionStarted;
    bool  _shouldSaveVideoInPhotosLibrary;
    bool  _stopRecordingRequested;
    AVAssetWriterInput * _videoInput;
    AVAssetWriterInputPixelBufferAdaptor * _videoInputAdaptor;
    AVAssetWriterInput * _videoMetadataInput;
    AVAssetWriterInputMetadataAdaptor * _videoMetadataInputAdaptor;
}

@property (nonatomic) bool expectDepthData;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic) <ARRecordingTechniqueDelegate> *recordingTechniqueDelegate;
@property (nonatomic) bool shouldSaveVideoInPhotosLibrary;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cmTimestampFromNSTimeInterval:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeVideoTransformForDeviceOrientationWithCameraPosition:(long long)arg1;
- (void)copyVideoToPhotoLibrary;
- (id)createFileMetadata;
- (void)dealloc;
- (bool)expectDepthData;
- (void)finishRecording;
- (void)initAssetWriterIfRequiredWithImageData:(id)arg1;
- (id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputFileURL;
- (id)processData:(id)arg1;
- (id)recordingTechniqueDelegate;
- (void)removeTemporaryVideoFile;
- (void)setExpectDepthData:(bool)arg1;
- (void)setRecordingTechniqueDelegate:(id)arg1;
- (void)setShouldSaveVideoInPhotosLibrary:(bool)arg1;
- (void)setupAssetWriterWithImageData:(id)arg1;
- (bool)shouldSaveVideoInPhotosLibrary;
- (void)writeAccelerometerMetadata:(id)arg1;
- (void)writeData:(id)arg1 toInputAdaptor:(id)arg2 withIdentifier:(id)arg3;
- (void)writeDepthMap:(id)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)writeDeviceOrientationMetadata:(id)arg1;
- (void)writeGyroscopeMetadata:(id)arg1;
- (void)writeImageData:(id)arg1;
- (void)writeImageMetadata:(id)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)writeOutCachedMotionDataIfPresent;
- (void)writePixelBuffer:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
