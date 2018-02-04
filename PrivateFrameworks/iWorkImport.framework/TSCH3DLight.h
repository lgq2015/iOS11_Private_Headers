/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLight : NSObject <NSCopying> {
    TSCH3DVector * _ambientColor;
    TSCH3DVector * _attenuation;
    int  _coordinateSpace;
    TSCH3DVector * _diffuseColor;
    bool  _enabled;
    float  _intensity;
    NSString * _name;
    TSCH3DVector * _specularColor;
}

@property (nonatomic) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } ambientColor;
@property (nonatomic) struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } attenuation;
@property (nonatomic) int coordinateSpace;
@property (nonatomic) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } diffuseColor;
@property (nonatomic) bool enabled;
@property (nonatomic) float intensity;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } specularColor;

+ (id)instanceWithArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; struct Chart3DVectorArchive {} *x8; struct Chart3DVectorArchive {} *x9; float x10; unsigned int x11; struct Chart3DPointLightArchive {} *x12; struct Chart3DDirectionalLightArchive {} *x13; struct Chart3DSpotLightArchive {} *x14; bool x15; }*)arg1 unarchiver:(id)arg2;
+ (id)light;
+ (id)lightClasses;

- (void)affect:(id)arg1 states:(id)arg2 texturePool:(id)arg3;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })ambientColor;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })attenuation;
- (int)coordinateSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)didInitFromSOS;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })diffuseColor;
- (bool)enabled;
- (id)init;
- (id)initWithArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; struct Chart3DVectorArchive {} *x8; struct Chart3DVectorArchive {} *x9; float x10; unsigned int x11; struct Chart3DPointLightArchive {} *x12; struct Chart3DDirectionalLightArchive {} *x13; struct Chart3DSpotLightArchive {} *x14; bool x15; }*)arg1 unarchiver:(id)arg2;
- (id)initWithLightArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; struct Chart3DVectorArchive {} *x8; struct Chart3DVectorArchive {} *x9; float x10; unsigned int x11; struct Chart3DPointLightArchive {} *x12; struct Chart3DDirectionalLightArchive {} *x13; struct Chart3DSpotLightArchive {} *x14; bool x15; }*)arg1 unarchiver:(id)arg2;
- (float)intensity;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)saveToArchive:(struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; struct Chart3DVectorArchive {} *x8; struct Chart3DVectorArchive {} *x9; float x10; unsigned int x11; struct Chart3DPointLightArchive {} *x12; struct Chart3DDirectionalLightArchive {} *x13; struct Chart3DSpotLightArchive {} *x14; bool x15; }*)arg1 archiver:(id)arg2;
- (void)saveToLightArchive:(struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; struct Chart3DVectorArchive {} *x8; struct Chart3DVectorArchive {} *x9; float x10; unsigned int x11; struct Chart3DPointLightArchive {} *x12; struct Chart3DDirectionalLightArchive {} *x13; struct Chart3DSpotLightArchive {} *x14; bool x15; }*)arg1 archiver:(id)arg2;
- (void)setAmbientColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setAttenuation:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;
- (void)setCoordinateSpace:(int)arg1;
- (void)setDiffuseColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIntensity:(float)arg1;
- (void)setName:(id)arg1;
- (void)setSpecularColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })specularColor;

@end
