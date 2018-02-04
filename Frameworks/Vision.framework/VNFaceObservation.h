/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceObservation : VNDetectedObjectObservation {
    struct _Geometry2D_rect2D_ { 
        struct _Geometry2D_point2D_ { 
            float x; 
            float y; 
        } origin; 
        struct _Geometry2D_size2D_ { 
            float height; 
            float width; 
        } size; 
    }  _alignedBoundingBox;
    NSData * _alignedMeanShape;
    float  _alignedRotationAngle;
    float  _blinkScore;
    VNFaceLandmarks2D * _cachedLandmarks;
    VNFaceLandmarks3D * _cachedLandmarks3d;
    NSDictionary * _expressionsAndScores;
    unsigned long long  _faceId;
    float  _faceIdConfidence;
    float  _faceJunkinessIndex;
    float  _faceOrientationIndex;
    VNFaceRegionMap * _faceRegionMap;
    VNFaceprint * _faceprint;
    bool  _hasBBoxBeenAligned;
    bool  _isBlinking;
    NSData * _landmarkPoints;
    NSData * _landmarkPoints3d;
    float  _landmarkScore;
    VNFaceLandmarks2D * _landmarks;
    NSData * _poseData;
}

@property (nonatomic) struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; } alignedBoundingBox;
@property (nonatomic, retain) NSData *alignedMeanShape;
@property (nonatomic) float alignedRotationAngle;
@property (readonly) float blinkScore;
@property (nonatomic, readonly, copy) NSDictionary *expressionsAndConfidence;
@property (nonatomic) unsigned long long faceId;
@property (nonatomic) float faceIdConfidence;
@property (getter=faceJunkinessIndex, nonatomic, readonly) float faceJunkinessIndex;
@property (getter=faceOrientationIndex, nonatomic, readonly) float faceOrientationIndex;
@property (nonatomic, readonly) VNFaceRegionMap *faceRegionMap;
@property (nonatomic, retain) VNFaceprint *faceprint;
@property (nonatomic) bool hasBBoxBeenAligned;
@property (nonatomic, retain) NSData *landmarkPoints;
@property (nonatomic, retain) NSData *landmarkPoints3d;
@property (nonatomic, retain) VNFaceLandmarks2D *landmarks;
@property (nonatomic, readonly) VNFaceLandmarks3D *landmarks3d;
@property (nonatomic, readonly) float nameConfidence;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;
@property (nonatomic, retain) NSData *poseData;

+ (bool)computeYawPitchRollFromPoseMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 outputYaw:(float*)arg2 outputPitch:(float*)arg3 outputRoll:(float*)arg4;
+ (id)faceObservationWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andAlignedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })alignedBoundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignedBoundingBoxAsCGRect;
- (id)alignedMeanShape;
- (float)alignedRotationAngle;
- (float)blinkScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionsAndConfidence;
- (id)expressionsAndDetections;
- (id)expressionsAndScores;
- (unsigned long long)faceId;
- (float)faceIdConfidence;
- (float)faceJunkinessIndex;
- (float)faceOrientationIndex;
- (id)faceRegionMap;
- (id)faceprint;
- (bool)getComputedRectifyingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1;
- (bool)hasBBoxBeenAligned;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBlinking;
- (bool)isEqual:(id)arg1;
- (id)landmarkPoints;
- (id)landmarkPoints3d;
- (float)landmarkScore;
- (id)landmarks;
- (id)landmarks3d;
- (float)nameConfidence;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (id)poseData;
- (void)setAlignedBoundingBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlignedMeanShape:(id)arg1;
- (void)setAlignedRotationAngle:(float)arg1;
- (void)setBlinkScore:(float)arg1;
- (void)setExpressionsAndScores:(id)arg1;
- (void)setFaceId:(unsigned long long)arg1;
- (void)setFaceIdConfidence:(float)arg1;
- (void)setFaceJunkinessIndex:(float)arg1;
- (void)setFaceOrientationIndex:(float)arg1;
- (void)setFaceRegionMap:(id)arg1;
- (void)setFaceprint:(id)arg1;
- (void)setHasBBoxBeenAligned:(bool)arg1;
- (void)setIsBlinking:(bool)arg1;
- (void)setLandmarkPoints3d:(id)arg1;
- (void)setLandmarkPoints:(id)arg1;
- (void)setLandmarkScore:(float)arg1;
- (void)setLandmarks:(id)arg1;
- (void)setPoseData:(id)arg1;

@end
