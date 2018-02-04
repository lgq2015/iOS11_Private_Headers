/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVRenderedTexture : NSObject {
    struct HGRef<HGGLTexture> { 
        struct HGGLTexture {} *m_Obj; 
    }  _glTexture;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bitmapRect;
@property (nonatomic, readonly) unsigned int textureName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textureRect;
@property (nonatomic, readonly) unsigned int textureTarget;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bitmapRect;
- (id)initWithHGGLTexture:(struct HGRef<HGGLTexture> { struct HGGLTexture {} *x1; })arg1;
- (unsigned int)textureName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textureRect;
- (struct CGSize { double x1; double x2; })textureSize;
- (unsigned int)textureTarget;

@end
