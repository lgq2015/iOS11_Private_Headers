/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneEstimationTechnique : ARTechnique {
    ARCamera * _camera;
    NSObject<OS_dispatch_queue> * _detectionQueue;
    NSObject<OS_dispatch_semaphore> * _detectionSemaphore;
    unsigned long long  _detectionTypeMask;
    ARPlaneData * _planeResultData;
    NSObject<OS_dispatch_semaphore> * _semaphoreResult;
    struct shared_ptr<acv::tracking::detection::IAlignedSurfaceDetector<float> > { 
        struct IAlignedSurfaceDetector<float> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _surfaceDetector;
}

+ (id)_detectPlanesWithDetector:(struct shared_ptr<acv::tracking::detection::IAlignedSurfaceDetector<float> > { struct IAlignedSurfaceDetector<float> {} *x1; struct __shared_weak_count {} *x2; })arg1 types:(unsigned long long)arg2 camera:(id)arg3 featurePoints:(id)arg4 inVisionCoordinates:(bool)arg5;
+ (id)detectPlanes:(unsigned long long)arg1 withFrame:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPlaneDetection:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
