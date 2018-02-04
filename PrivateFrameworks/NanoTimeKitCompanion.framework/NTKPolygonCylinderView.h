/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPolygonCylinderView : UIView {
    double  _rotationAngle;
    _NTKPolygonCylinderTransformView * _transformView;
}

@property (nonatomic, readonly) unsigned long long numberOfFaces;

- (void).cxx_destruct;
- (void)_informFaceViewsOfRotation;
- (double)_rotationAngleForFaceIndex:(long long)arg1;
- (void)_setRotationAngle:(double)arg1;
- (void)_updateTransform;
- (void)enumerateFaceViewsWithBlock:(id /* block */)arg1;
- (id)initWithNumberOfFaces:(unsigned long long)arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfFaces;
- (void)rotateToFaceAtIndex:(long long)arg1;
- (void)rotateToFraction:(double)arg1 fromFaceAtIndex:(long long)arg2 toFaceAtIndex:(long long)arg3;
- (void)setView:(id)arg1 forFaceAtIndex:(unsigned long long)arg2;
- (id)viewForFaceAtIndex:(unsigned long long)arg1;

@end
