/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFrame : NSObject <NSCopying> {
    NSArray * _anchors;
    ARPlaneData * _cachedHorizontalPlaneData;
    NSArray * _cachedPointClouds;
    ARPlaneData * _cachedVerticalPlaneData;
    ARCamera * _camera;
    NSDate * _captureDate;
    AVDepthData * _capturedDepthData;
    double  _capturedDepthDataTimestamp;
    struct __CVBuffer { } * _capturedImage;
    ARFaceData * _faceData;
    ARPointCloud * _featurePoints;
    ARLightEstimate * _lightEstimate;
    ARPointCloud * _referenceFeaturePoints;
    long long  _renderFramesPerSecond;
    bool  _shouldRestrictFrameRate;
    double  _timestamp;
    ARTrackingErrorData * _trackingErrorData;
    ARAnchor * _worldOrigin;
}

@property (nonatomic, copy) NSArray *anchors;
@property (nonatomic, retain) NSArray *cachedPointClouds;
@property (nonatomic, readonly, copy) ARCamera *camera;
@property (nonatomic, retain) NSDate *captureDate;
@property (nonatomic, retain) AVDepthData *capturedDepthData;
@property (nonatomic) double capturedDepthDataTimestamp;
@property (nonatomic) struct __CVBuffer { }*capturedImage;
@property (nonatomic, retain) ARFaceData *faceData;
@property (nonatomic, retain) ARPointCloud *featurePoints;
@property (nonatomic, retain) ARLightEstimate *lightEstimate;
@property (nonatomic, readonly) ARPointCloud *rawFeaturePoints;
@property (nonatomic, retain) ARPointCloud *referenceFeaturePoints;
@property (nonatomic) long long renderFramesPerSecond;
@property (nonatomic) bool shouldRestrictFrameRate;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, retain) ARTrackingErrorData *trackingErrorData;
@property (nonatomic, retain) ARAnchor *worldOrigin;

- (void).cxx_destruct;
- (id)_hitTestFromOrigin:(void *)arg1 withDirection:(void *)arg2 types:(void *)arg3; // needs 3 arg types, found 1: unsigned long long
- (id)anchors;
- (id)cachedPointClouds;
- (id)camera;
- (id)captureDate;
- (id)capturedDepthData;
- (double)capturedDepthDataTimestamp;
- (struct __CVBuffer { }*)capturedImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })displayTransformForOrientation:(long long)arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2;
- (id)faceData;
- (id)featurePoints;
- (unsigned long long)hash;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 types:(unsigned long long)arg2;
- (id)initWithCamera:(id)arg1 timestamp:(double)arg2;
- (id)initWithContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lightEstimate;
- (id)rawFeaturePoints;
- (id)referenceFeaturePoints;
- (long long)renderFramesPerSecond;
- (void)setAnchors:(id)arg1;
- (void)setCachedPointClouds:(id)arg1;
- (void)setCaptureDate:(id)arg1;
- (void)setCapturedDepthData:(id)arg1;
- (void)setCapturedDepthDataTimestamp:(double)arg1;
- (void)setCapturedImage:(struct __CVBuffer { }*)arg1;
- (void)setFaceData:(id)arg1;
- (void)setFeaturePoints:(id)arg1;
- (void)setLightEstimate:(id)arg1;
- (void)setReferenceFeaturePoints:(id)arg1;
- (void)setRenderFramesPerSecond:(long long)arg1;
- (void)setShouldRestrictFrameRate:(bool)arg1;
- (void)setTrackingErrorData:(id)arg1;
- (void)setWorldOrigin:(id)arg1;
- (bool)shouldRestrictFrameRate;
- (double)timestamp;
- (id)trackingErrorData;
- (id)worldOrigin;

@end
