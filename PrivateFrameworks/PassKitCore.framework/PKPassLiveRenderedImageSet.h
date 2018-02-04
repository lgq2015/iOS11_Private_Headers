/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassLiveRenderedImageSet : PKPassImageSet {
    PKImage * _ambientMaterialPropertyImage;
    PKImage * _ambientOcclusionMaterialPropertyImage;
    PKImage * _diffuseMaterialPropertyImage;
    PKImage * _displacementMaterialPropertyImage;
    PKImage * _emissionMaterialPropertyImage;
    PKImage * _metalnessMaterialPropertyImage;
    PKImage * _multiplyMaterialPropertyImage;
    PKImage * _normalMaterialPropertyImage;
    PKImage * _reflectiveMaterialPropertyImage;
    PKImage * _roughnessMaterialPropertyImage;
    PKImage * _selfIlluminationMaterialPropertyImage;
    PKImage * _specularMaterialPropertyImage;
    PKImage * _transparentMaterialPropertyImage;
}

@property (nonatomic, retain) PKImage *ambientMaterialPropertyImage;
@property (nonatomic, retain) PKImage *ambientOcclusionMaterialPropertyImage;
@property (nonatomic, retain) PKImage *diffuseMaterialPropertyImage;
@property (nonatomic, retain) PKImage *displacementMaterialPropertyImage;
@property (nonatomic, retain) PKImage *emissionMaterialPropertyImage;
@property (nonatomic, retain) PKImage *metalnessMaterialPropertyImage;
@property (nonatomic, retain) PKImage *multiplyMaterialPropertyImage;
@property (nonatomic, retain) PKImage *normalMaterialPropertyImage;
@property (nonatomic, retain) PKImage *reflectiveMaterialPropertyImage;
@property (nonatomic, retain) PKImage *roughnessMaterialPropertyImage;
@property (nonatomic, retain) PKImage *selfIlluminationMaterialPropertyImage;
@property (nonatomic, retain) PKImage *specularMaterialPropertyImage;
@property (nonatomic, retain) PKImage *transparentMaterialPropertyImage;

+ (id)archiveName;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (bool)shouldCache;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ambientMaterialPropertyImage;
- (id)ambientOcclusionMaterialPropertyImage;
- (id)diffuseMaterialPropertyImage;
- (id)displacementMaterialPropertyImage;
- (id)emissionMaterialPropertyImage;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metalnessMaterialPropertyImage;
- (id)multiplyMaterialPropertyImage;
- (id)normalMaterialPropertyImage;
- (void)preheatImages;
- (id)reflectiveMaterialPropertyImage;
- (id)roughnessMaterialPropertyImage;
- (id)selfIlluminationMaterialPropertyImage;
- (void)setAmbientMaterialPropertyImage:(id)arg1;
- (void)setAmbientOcclusionMaterialPropertyImage:(id)arg1;
- (void)setDiffuseMaterialPropertyImage:(id)arg1;
- (void)setDisplacementMaterialPropertyImage:(id)arg1;
- (void)setEmissionMaterialPropertyImage:(id)arg1;
- (void)setMetalnessMaterialPropertyImage:(id)arg1;
- (void)setMultiplyMaterialPropertyImage:(id)arg1;
- (void)setNormalMaterialPropertyImage:(id)arg1;
- (void)setReflectiveMaterialPropertyImage:(id)arg1;
- (void)setRoughnessMaterialPropertyImage:(id)arg1;
- (void)setSelfIlluminationMaterialPropertyImage:(id)arg1;
- (void)setSpecularMaterialPropertyImage:(id)arg1;
- (void)setTransparentMaterialPropertyImage:(id)arg1;
- (id)specularMaterialPropertyImage;
- (id)transparentMaterialPropertyImage;

@end
