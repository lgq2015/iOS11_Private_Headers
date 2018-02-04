/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling {
    int  _face;
    int  _mode;
    bool  _reveal;
    int  _sContinuity;
    int  _tContinuity;
    int  _wrap;
    int  _xPosition;
    int  _yPosition;
}

@property (nonatomic) int face;
@property (nonatomic) int mode;
@property (nonatomic) bool reveal;
@property (nonatomic) int scontinuity;
@property (nonatomic) int tcontinuity;
@property (nonatomic) int wrap;
@property (nonatomic) int xposition;
@property (nonatomic) int yposition;

+ (id)instanceWithArchive:(const struct Chart3DImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DBaseImageTextureTilingArchive {} *x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; bool x13; }*)arg1 unarchiver:(id)arg2;

- (void)copyFromBaseImageTextureTiling:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)face;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct Chart3DImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DBaseImageTextureTilingArchive {} *x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; bool x13; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (int)mode;
- (void)restoreDefault;
- (bool)reveal;
- (void)saveToArchive:(struct Chart3DImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DBaseImageTextureTilingArchive {} *x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; bool x13; }*)arg1 archiver:(id)arg2;
- (int)scontinuity;
- (void)setFace:(int)arg1;
- (void)setMode:(int)arg1;
- (void)setReveal:(bool)arg1;
- (void)setScontinuity:(int)arg1;
- (void)setTcontinuity:(int)arg1;
- (void)setWrap:(int)arg1;
- (void)setXposition:(int)arg1;
- (void)setYposition:(int)arg1;
- (int)tcontinuity;
- (int)wrap;
- (int)xposition;
- (int)yposition;

@end
