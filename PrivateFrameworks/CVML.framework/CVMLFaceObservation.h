/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceObservation : CVMLDetectedObject <NSCoding> {
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
    NSDictionary * _expressionsAndScores;
    unsigned long long  _faceId;
    float  _faceIdConfidence;
    CVMLFaceRegionMap * _faceRegionMap;
    CVMLFaceprint * _faceprint;
    bool  _hasBBoxBeenAligned;
    bool  _isBlinking;
    NSData * _landmarkPoints;
    NSData * _landmarkPoints3d;
    float  _landmarkPointsScore;
    float  _landmarkScore;
    CVMLFaceLandmarks * _landmarks;
    CVMLFaceLandmarks * _landmarks3d;
    NSData * _poseData;
}

@property struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; } alignedBoundingBox;
@property (retain) NSData *alignedMeanShape;
@property (readonly) NSDictionary *expressionsAndConfidence;
@property unsigned long long faceId;
@property float faceIdConfidence;
@property (nonatomic, retain) CVMLFaceRegionMap *faceRegionMap;
@property (retain) CVMLFaceprint *faceprint;
@property bool hasBBoxBeenAligned;
@property (retain) NSData *landmarkPoints;
@property (retain) NSData *landmarkPoints3d;
@property float landmarkPointsScore;
@property (nonatomic, retain) CVMLFaceLandmarks *landmarks;
@property (nonatomic, retain) CVMLFaceLandmarks *landmarks3d;
@property (readonly) float nameConfidence;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;
@property (retain) NSData *poseData;

+ (bool)computeYawPitchRollFromPoseMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 outputYaw:(float*)arg2 outputPitch:(float*)arg3 outputRoll:(float*)arg4;
+ (id)observationWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)observationWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andAlignedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })alignedBoundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignedBoundingBoxAsCGRect;
- (id)alignedMeanShape;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionsAndConfidence;
- (id)expressionsAndDetections;
- (id)expressionsAndScores;
- (unsigned long long)faceId;
- (float)faceIdConfidence;
- (id)faceRegionMap;
- (id)faceprint;
- (bool)getComputedRectifyingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1;
- (bool)hasBBoxBeenAligned;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBlinking;
- (id)landmarkPoints;
- (id)landmarkPoints3d;
- (float)landmarkPointsScore;
- (float)landmarkScore;
- (id)landmarks;
- (id)landmarks3d;
- (float)nameConfidence;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (id)poseData;
- (void)setAlignedBoundingBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlignedMeanShape:(id)arg1;
- (void)setExpressionsAndScores:(id)arg1;
- (void)setFaceId:(unsigned long long)arg1;
- (void)setFaceIdConfidence:(float)arg1;
- (void)setFaceRegionMap:(id)arg1;
- (void)setFaceprint:(id)arg1;
- (void)setHasBBoxBeenAligned:(bool)arg1;
- (void)setIsBlinking:(bool)arg1;
- (void)setLandmarkPoints3d:(id)arg1;
- (void)setLandmarkPoints:(id)arg1;
- (void)setLandmarkPointsScore:(float)arg1;
- (void)setLandmarkScore:(float)arg1;
- (void)setLandmarks3d:(id)arg1;
- (void)setLandmarks:(id)arg1;
- (void)setPoseData:(id)arg1;

@end
