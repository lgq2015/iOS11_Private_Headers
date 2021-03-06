/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIPortraitAutoCalculator : NUAutoCalculator {
    NUFaceDetectionClient * _faceClient;
    NUImagePropertiesClient * _imagePropertiesClient;
    float  _simulatedAperture;
}

+ (struct CGPoint { double x1; double x2; })averagePoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 pointCount:(unsigned long long)arg2;
+ (bool)canApplyPortraitEffectsWithMetadata:(id)arg1;
+ (struct CGPoint { double x1; double x2; })convertFacePoint:(struct CGPoint { double x1; double x2; })arg1 toImagePointWithFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 orientation:(long long)arg3;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 focus:(id)arg2 aperture:(float)arg3 lumaNoiseScale:(float)arg4 orientation:(long long)arg5;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 simulatedAperture:(float)arg4;
+ (id)focusRectDictionaryFromMetadata:(id)arg1;
+ (id)focusRectDictionaryFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)portraitEffectInfoDictionaryFromFaceObservations:(id)arg1 orientation:(long long)arg2;
+ (id)portraitInfoDictionaryFromCameraMetadata:(id)arg1;
+ (id)portraitInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 simulatedAperture:(float)arg4;

- (void).cxx_destruct;
- (void)_calculateWithImageProperties:(id)arg1 completion:(id /* block */)arg2;
- (void)calculate:(id /* block */)arg1;
- (bool)canApplyDepthWithImageProperties:(id)arg1 error:(out id*)arg2;
- (void)cancel;

@end
