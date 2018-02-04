/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData> {
    TSCH3DFill * mFill;
    NSMutableArray * mTextureBlendModes;
    NSMutableArray * mTextures;
}

+ (id)dataWithFill:(id)arg1;

- (void)dealloc;
- (struct Color { float x1; float x2; float x3; float x4; })diffuse;
- (unsigned long long)diffuseCount;
- (id)diffuseMaterial;
- (struct Color { float x1; float x2; float x3; float x4; })emissive;
- (id)environment;
- (id)fillSetIdentifier;
- (id)initWithFill:(id)arg1;
- (bool)isLayerEnabledForIndex:(unsigned long long)arg1;
- (long long)layerBlendModeForIndex:(unsigned long long)arg1;
- (unsigned long long)layerCount;
- (bool)layerIsEnvironmentMapForIndex:(unsigned long long)arg1;
- (id)layerLightenPercentageForIndex:(unsigned long long)arg1;
- (float)layerRotationForIndex:(unsigned long long)arg1;
- (float)layerScaleForIndex:(unsigned long long)arg1;
- (int)layerTilingModeForIndex:(unsigned long long)arg1;
- (id)lightingModel;
- (id)materialAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulateCount;
- (id)modulateMaterial;
- (float)opacity;
- (void)p_addMaterial:(id)arg1 blendMode:(long long)arg2;
- (id)phongMaterials;
- (float)shininess;
- (struct Color { float x1; float x2; float x3; float x4; })specular;
- (id)textureForIndex:(unsigned long long)arg1;

@end