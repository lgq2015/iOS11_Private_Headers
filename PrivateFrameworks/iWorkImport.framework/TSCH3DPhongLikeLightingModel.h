/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPhongLikeLightingModel : TSCH3DLightingModel

- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 percentage:(id)arg5;
- (id)diffuseTextureTiling;
- (id)init;
- (id)initWithPhongMaterialPackageArchive:(const struct Chart3DPhongMaterialPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DEmissiveMaterialArchive {} *x5; struct Chart3DDiffuseMaterialArchive {} *x6; struct Chart3DModulateMaterialArchive {} *x7; struct Chart3DSpecularMaterialArchive {} *x8; struct Chart3DShininessMaterialArchive {} *x9; }*)arg1 lightingModelArchive:(const struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg2 unarchiver:(id)arg3;
- (id)p_lightenDiffuseMaterial:(id)arg1 percentage:(id)arg2;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })p_lightenedColorForColor:(const struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; }*)arg1 percentage:(id)arg2;
- (id)phongMaterials;
- (id)representativeMaterialLightenedByPercentage:(id)arg1;
- (void)saveToPhongMaterialPackageArchive:(struct Chart3DPhongMaterialPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DEmissiveMaterialArchive {} *x5; struct Chart3DDiffuseMaterialArchive {} *x6; struct Chart3DModulateMaterialArchive {} *x7; struct Chart3DSpecularMaterialArchive {} *x8; struct Chart3DShininessMaterialArchive {} *x9; }*)arg1 environmentPackageArchive:(struct Chart3DEnvironmentPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCH::Chart3DEnvironmentMaterialArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg2 archiver:(id)arg3;

@end
