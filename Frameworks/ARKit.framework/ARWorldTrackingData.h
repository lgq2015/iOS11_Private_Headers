/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingData : NSObject <ARResultData> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
    ARPointCloud * _featurePoints;
    double  _timestamp;
    struct { 
        long long state; 
        long long reason; 
        bool relocalized; 
    }  _trackingState;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionCameraTransform;
    ARPointCloud * _visionFeaturePoints;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ARPointCloud *featurePoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic) struct { long long x1; long long x2; bool x3; } trackingState;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionCameraTransform;
@property (nonatomic, retain) ARPointCloud *visionFeaturePoints;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (id)featurePoints;
- (id)initWithTimestamp:(double)arg1;
- (void)setCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setFeaturePoints:(id)arg1;
- (void)setFeaturePointsForRendering:(id)arg1;
- (void)setTrackingState:(struct { long long x1; long long x2; bool x3; })arg1;
- (void)setVisionCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setVisionFeaturePoints:(id)arg1;
- (double)timestamp;
- (struct { long long x1; long long x2; bool x3; })trackingState;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionCameraTransform;
- (id)visionFeaturePoints;

@end
