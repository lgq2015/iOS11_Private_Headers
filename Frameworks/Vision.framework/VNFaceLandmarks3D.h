/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarks3D : VNFaceLandmarks {
    VNFaceLandmarkRegion3D * _allPoints;
    VNFaceLandmarkRegion3D * _faceContour;
    VNFaceLandmarkRegion3D * _innerLips;
    VNFaceLandmarkRegion3D * _leftEye;
    VNFaceLandmarkRegion3D * _leftEyebrow;
    VNFaceLandmarkRegion3D * _leftPupil;
    VNFaceLandmarkRegion3D * _medianLine;
    VNFaceLandmarkRegion3D * _nose;
    VNFaceLandmarkRegion3D * _noseCrest;
    VNFaceLandmarkRegion3D * _outerLips;
    VNFaceLandmarkRegion3D * _rightEye;
    VNFaceLandmarkRegion3D * _rightEyebrow;
    VNFaceLandmarkRegion3D * _rightPupil;
}

@property (readonly) VNFaceLandmarkRegion3D *allPoints;
@property (readonly) VNFaceLandmarkRegion3D *faceContour;
@property (readonly) VNFaceLandmarkRegion3D *innerLips;
@property (readonly) VNFaceLandmarkRegion3D *leftEye;
@property (readonly) VNFaceLandmarkRegion3D *leftEyebrow;
@property (readonly) VNFaceLandmarkRegion3D *medianLine;
@property (readonly) VNFaceLandmarkRegion3D *nose;
@property (readonly) VNFaceLandmarkRegion3D *noseCrest;
@property (readonly) VNFaceLandmarkRegion3D *outerLips;
@property (readonly) VNFaceLandmarkRegion3D *rightEye;
@property (readonly) VNFaceLandmarkRegion3D *rightEyebrow;

- (void).cxx_destruct;
- (id)allPoints;
- (void*)createPointArray:(const int*)arg1 count:(unsigned long long)arg2;
- (id)faceContour;
- (id)innerLips;
- (id)leftEye;
- (id)leftEyebrow;
- (id)medianLine;
- (id)nose;
- (id)noseCrest;
- (id)outerLips;
- (id)rightEye;
- (id)rightEyebrow;

@end
