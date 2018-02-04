/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling {
    float  _rotation;
    TSCH3DVector * _scale;
}

@property (nonatomic) float rotation;
@property (nonatomic) struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } scale;

+ (id)instanceWithArchive:(const struct Chart3DBaseImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DVectorArchive {} *x5; float x6; }*)arg1 unarchiver:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct Chart3DBaseImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DVectorArchive {} *x5; float x6; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)restoreDefault;
- (float)rotation;
- (void)saveToArchive:(struct Chart3DBaseImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DVectorArchive {} *x5; float x6; }*)arg1 archiver:(id)arg2;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })scale;
- (void)setRotation:(float)arg1;
- (void)setScale:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })arg1;

@end
