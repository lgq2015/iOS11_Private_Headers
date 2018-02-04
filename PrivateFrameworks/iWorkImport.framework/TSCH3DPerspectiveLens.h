/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPerspectiveLens : TSCH3DLens {
    float  mAspect;
    float  mFOV;
}

@property (nonatomic) float aspect;
@property (nonatomic) float fov;
@property (nonatomic, readonly) float height;
@property (nonatomic, readonly) float width;

- (id)asFrustumLens;
- (float)aspect;
- (void)calculateCullingPlanes:(struct vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > {} *x1; struct plane<glm::detail::tvec3<float> > {} *x2; struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > {} *x_3_1_1; } x3; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)fov;
- (struct FrustumRect { float x1; float x2; float x3; float x4; })frustumRect;
- (struct FrustumRect { float x1; float x2; float x3; float x4; })frustumRectAtDistance:(float)arg1;
- (float)height;
- (id)init;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })matrix;
- (id)matrixDescription;
- (id)narrowedByNormalizedBounds:(struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; }*)arg1;
- (void)setAspect:(float)arg1;
- (void)setFov:(float)arg1;
- (id)shiftedByPercentage:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (float)width;

@end
