/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingTechnique : ARTechnique {
    ARPointCloud * _cachedFeaturePointCloud;
    ARWorldTrackingData * _cachedTrackingData;
    NSString * _deviceModel;
    ARTrackingErrorData * _errorData;
    double  _lastErrorLogTimestamp;
    ARWorldTrackingData * _lastPointCloudTrackingData;
    long long  _latencyFrameCount;
    NSMutableArray * _latestVisionFeaturePointDatas;
    bool  _relocalizationEnabled;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
    bool  _useFixedIntrinsics;
    struct CV3DVIOContext { } * _vioHandle;
    unsigned long long  _vioState;
    NSObject<OS_dispatch_semaphore> * _vioStateSemaphore;
}

@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) long long latencyFrameCount;
@property (nonatomic) bool relocalizationEnabled;

+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_addIntrinsicsToDictionary:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 dictionary:(struct __CFDictionary { }*)arg2;
- (void)_didFailWithError:(id)arg1;
- (unsigned long long)_initializeVIO;
- (int)_parseAndAddCalibrationParameters:(id)arg1 options:(id)arg2;
- (void)_pushPointCloud:(id)arg1 forTimestamp:(double)arg2;
- (void)_pushWorldTrackingData:(id)arg1;
- (void)_reportError:(double)arg1 error:(int)arg2;
- (double)_syncPointCloudToTrackingData:(id)arg1 timestamp:(double)arg2;
- (void)_updatePointCloud:(double)arg1 pointCloud:(struct CV3DPoint { double x1; double x2; double x3; unsigned long long x4; }*)arg2 size:(long long)arg3;
- (void)_updatePose:(double)arg1 frame:(struct __CVBuffer { }*)arg2 rotationMatrix:(const double*)arg3 translationVector:(const double*)arg4 trackingState:(int)arg5 stateDetails:(id)arg6;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransformAtTimestamp:(double)arg1;
- (void)dealloc;
- (id)deviceModel;
- (id)init;
- (id)initWithDeviceModel:(id)arg1 latencyFrameCount:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)latencyFrameCount;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (bool)relocalizationEnabled;
- (unsigned long long)requiredSensorDataTypes;
- (void)setRelocalizationEnabled:(bool)arg1;

@end