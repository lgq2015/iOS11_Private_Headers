/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLTextureImageBuffer : BLImageBuffer {
    unsigned int  _accumlatorFramebuffer;
    unsigned int  _accumlatorTexture;
    CIImage * _ciImage;
    EAGLContext * _eaglContext;
}

- (void).cxx_destruct;
- (id)ciImage;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 colorManagement:(int)arg2;
- (void)readPixelsByAddressInBlock:(id /* block */)arg1;
- (void)renderCIImage:(id)arg1;

@end
