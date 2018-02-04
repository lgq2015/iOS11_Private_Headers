/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLRenderBufferStorage : TSCH3DRenderBufferStorage

+ (id)storage;

- (void)allocateStorageWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 internalFormat:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;

@end
