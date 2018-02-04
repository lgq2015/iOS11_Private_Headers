/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTSPImageDataTexture : TSCH3DTexture {
    NSNumber * mCachedHash;
    TSUOnce * mCachedHashOnce;
    TSDColorFill * mColorFill;
    TSCH3DTSPImageData * mData;
    NSString * mImageName;
    TSCH3DTSPMipmapData * mOptimizedMipmapData;
    NSString * mTextureSetId;
}

@property (nonatomic, readonly) TSCH3DTSPImageData *data;
@property (nonatomic, readonly) TSPData *imageData;

+ (id)instanceWithArchive:(const struct Chart3DTSPImageDataTextureArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DataReference {} *x5; struct DataReference {} *x6; struct Reference {} *x7; struct Reference {} *x8; }*)arg1 unarchiver:(id)arg2;
+ (id)textureWithImageData:(id)arg1 colorFill:(id)arg2 optimizedMipmapData:(id)arg3 textureSetId:(id)arg4 imageName:(id)arg5;
+ (id)textureWithImageData:(id)arg1 colorFill:(id)arg2 textureSetId:(id)arg3 imageName:(id)arg4;
+ (id)textureWithImageData:(id)arg1 optimizedMipmapData:(id)arg2 textureSetId:(id)arg3 imageName:(id)arg4;

- (bool)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (id)data;
- (id)databufferForDataCache:(id)arg1;
- (void)dealloc;
- (bool)hasCompleteData;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithArchive:(const struct Chart3DTSPImageDataTextureArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DataReference {} *x5; struct DataReference {} *x6; struct Reference {} *x7; struct Reference {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithImageData:(id)arg1 colorFill:(id)arg2 optimizedMipmapData:(id)arg3 textureSetId:(id)arg4 imageName:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)optimizedMipmapBuffer;
- (void)p_setOptimizedMipMapData:(id)arg1;
- (id)representativeColorBuffer;
- (void)saveToArchive:(struct Chart3DTSPImageDataTextureArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DataReference {} *x5; struct DataReference {} *x6; struct Reference {} *x7; struct Reference {} *x8; }*)arg1 archiver:(id)arg2;
- (void)setChanged:(bool)arg1;

@end
