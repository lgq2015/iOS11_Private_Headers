/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlug3DAPI : NSObject <Fx3DAPI, Fx3DAPI_v2, Fx3DAPI_v3, PROAPIObject> {
    bool  _is3D;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_setCameraMatrix:(struct PCMatrix44Tmpl<double> { double x1[4][4]; })arg1;
- (void)_setFocalLength:(double)arg1;
- (void)_setIs3D:(bool)arg1;
- (void)_setLayerMatrix:(struct PCMatrix44Tmpl<double> { double x1[4][4]; })arg1;
- (void)_setWorldToEyeMatrix:(struct PCMatrix44Tmpl<double> { double x1[4][4]; })arg1;
- (void)_setWorldToFilmMatrix:(struct PCMatrix44Tmpl<double> { double x1[4][4]; })arg1;
- (void)_setWorldToLayerMatrix:(struct PCMatrix44Tmpl<double> { double x1[4][4]; })arg1;
- (void)_setWorldToObjectMatrix:(struct PCMatrix44Tmpl<double> { double x1[4][4]; })arg1;
- (id)cameraMatrixAtTime:(double)arg1;
- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (double)focalLengthAtFxTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (double)focalLengthAtTime:(double)arg1;
- (bool)is3D;
- (bool)isUsingCamera;
- (id)layerMatrixAtTime:(double)arg1;
- (id)worldToEyeMatrix;
- (id)worldToFilmMatrix;
- (id)worldToLayerMatrix;
- (id)worldToObjectMatrix;

@end
