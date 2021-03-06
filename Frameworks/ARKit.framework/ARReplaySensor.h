/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARReplaySensor : NSObject <ARSensor> {
    int  _accelDataIndex;
    AVAssetReaderOutputMetadataAdaptor * _accelOutputMetadataAdaptor;
    NSMutableArray * _arAccelerometerData;
    NSMutableArray * _arDeviceOrientationData;
    NSMutableArray * _arGyroData;
    NSMutableArray * _arImageData;
    AVAssetReader * _assetReader;
    bool  _dataLoadedFromAsset;
    <ARSensorDelegate> * _delegate;
    AVAssetReaderTrackOutput * _depthOutput;
    NSString * _deviceModel;
    int  _deviceOrientationDataIndex;
    AVAssetReaderOutputMetadataAdaptor * _deviceOrientationOutputMetadataAdaptor;
    int  _gyroDataIndex;
    AVAssetReaderOutputMetadataAdaptor * _gyroOutputMetadataAdaptor;
    int  _imageIndex;
    int  _imageIndexForPreloading;
    AVAssetReaderTrackOutput * _imageOutput;
    AVAssetReaderOutputMetadataAdaptor * _imageOutputMetadataAdaptor;
    struct opaqueCMSampleBuffer { } * _nextDepthSampleBuffer;
    struct opaqueCMSampleBuffer { } * _nextSampleBuffer;
    AVAssetReaderOutputMetadataAdaptor * _oldMotionOutputMetadataAdaptor;
    unsigned long long  _recordedSensorTypes;
    bool  _replayInProgress;
    NSObject<OS_dispatch_queue> * _replayQueue;
    <ARReplaySensorDelegate> * _replaySensorDelegate;
    unsigned long long  _sensorDataTypes;
    double  _startTime;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceModel;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (nonatomic, readonly) unsigned long long recordedSensorTypes;
@property (nonatomic) <ARReplaySensorDelegate> *replaySensorDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createAndAddMetadataAdaptorForTrack:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)deviceModel;
- (void)enumerateDataWithIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)failWithError:(id)arg1;
- (id)getNextAccelerometerData;
- (id)getNextDeviceOrientationData;
- (id)getNextGyroData;
- (id)getNextImageData;
- (bool)hasAccelerometerDataForTime:(double)arg1;
- (bool)hasDeviceOrientationDataForTime:(double)arg1;
- (bool)hasGyroDataForTime:(double)arg1;
- (bool)hasImageDataForTime:(double)arg1;
- (bool)hasMoreData;
- (id)initWithDataFromFile:(id)arg1;
- (void)initializeAssetReaderWithAsset:(id)arg1;
- (void)preloadNextPixelBuffers:(int)arg1;
- (unsigned long long)providedDataTypes;
- (void)readFileMetadataFromAsset:(id)arg1;
- (void)readMetadataIntoArrays;
- (unsigned long long)recordedSensorTypes;
- (void)replayData;
- (id)replaySensorDelegate;
- (struct __CVBuffer { }*)requestNextDepthPixelBufferForTimestamp:(double)arg1;
- (struct __CVBuffer { }*)requestNextPixelBufferForTimestamp:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReplaySensorDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)tick;
- (bool)track:(id)arg1 hasMetadataIdentifier:(id)arg2;
- (id)unpackItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;

@end
