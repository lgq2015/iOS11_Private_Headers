/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {
    struct RTIESLight { int (**x1)(); struct CGColor {} *x2; id x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; struct IESData { int x_11_1_1; int x_11_1_2; struct vector<float, std::__1::allocator<float> > { float *x_3_2_1; float *x_3_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_3_2_3; } x_11_1_3; struct vector<float, std::__1::allocator<float> > { float *x_4_2_1; float *x_4_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_4_2_3; } x_11_1_4; struct vector<float, std::__1::allocator<float> > { float *x_5_2_1; float *x_5_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_5_2_3; } x_11_1_5; float x_11_1_6; float x_11_1_7; float x_11_1_8; } x11; float x12; } * _iesLight;
    MDLTexture * _lightCubeMap;
    NSMutableData * _sphericalHarmonicsCoefficients;
    unsigned long long  _sphericalHarmonicsLevel;
}

@property (nonatomic, readonly, retain) MDLTexture *lightCubeMap;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic, readonly) unsigned long long sphericalHarmonicsLevel;

- (void).cxx_destruct;
- (float)computeInnerAngle;
- (void)computeLumens;
- (id)computeSceneKitRenderingTexture:(unsigned long long)arg1;
- (struct CGColor { }*)evaluatedColorFromSHVector;
- (void)generateCubemapFromLight:(unsigned long long)arg1;
- (void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1;
- (id)generateTexture:(unsigned long long)arg1;
- (id)initWithIESProfile:(id)arg1;
- (id)lightCubeMap;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (id)sphericalHarmonicsCoefficients;
- (unsigned long long)sphericalHarmonicsLevel;

@end
