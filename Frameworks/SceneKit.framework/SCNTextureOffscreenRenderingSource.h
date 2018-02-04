/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTextureOffscreenRenderingSource : SCNTextureSource {
    struct __C3DFramebuffer { } * _framebuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _framebufferSize;
    bool  _usesIOSurface;
}

- (struct __C3DTexture { }*)__prepareFramebufferWithSize:(struct CGSize { double x1; double x2; })arg1 withEngineContext:(struct __C3DEngineContext { }*)arg2 textureSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg3 needsStencil:(bool)arg4;
- (void)_bindFramebuffer:(struct __C3DEngineContext { }*)arg1;
- (void)_buildMipmaps:(struct __C3DEngineContext { }*)arg1;
- (void)_createFramebufferWithEngineContext:(struct __C3DEngineContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)_unbindFramebuffer:(struct __C3DEngineContext { }*)arg1;
- (void)cleanup:(struct __C3DRendererContext { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; unsigned int x8; struct __C3DTexture {} *x9; struct __C3DStack {} *x10; void *x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct __CFDictionary {} *x18; unsigned int x19; struct __CFDictionary {} *x20; struct __CFDictionary {} *x21; struct __CFDictionary {} *x22; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_23_1_1; } x23; void *x24; long long x25; struct __C3DFXProgramObject {} *x26; struct __C3DEngineStats { unsigned int x_27_1_1; unsigned int x_27_1_2; unsigned int x_27_1_3; unsigned int x_27_1_4; unsigned int x_27_1_5; unsigned int x_27_1_6; unsigned int x_27_1_7; unsigned int x_27_1_8; unsigned int x_27_1_9; unsigned int x_27_1_10; unsigned int x_27_1_11; unsigned int x_27_1_12; unsigned int x_27_1_13; unsigned int x_27_1_14; unsigned int x_27_1_15; unsigned int x_27_1_16; unsigned int x_27_1_17; unsigned int x_27_1_18; unsigned int x_27_1_19; unsigned int x_27_1_20; unsigned int x_27_1_21; unsigned int x_27_1_22; unsigned int x_27_1_23; unsigned int x_27_1_24; double x_27_1_25; double x_27_1_26; double x_27_1_27; double x_27_1_28; double x_27_1_29; double x_27_1_30; double x_27_1_31; double x_27_1_32; double x_27_1_33; double x_27_1_34; double x_27_1_35; double x_27_1_36; double x_27_1_37; double x_27_1_38; unsigned int x_27_1_39; unsigned int x_27_1_40; unsigned int x_27_1_41; unsigned int x_27_1_42; unsigned int x_27_1_43; unsigned int x_27_1_44; unsigned int x_27_1_45; unsigned int x_27_1_46; unsigned int x_27_1_47; } x27; }*)arg1;
- (void)textureSize;

@end
