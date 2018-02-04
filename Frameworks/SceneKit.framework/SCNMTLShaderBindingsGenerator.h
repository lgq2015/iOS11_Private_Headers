/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLShaderBindingsGenerator : NSObject {
    struct { 
        int stage; 
        NSArray *arguments; 
        NSDictionary *customBlocks; 
        struct __C3DFXPass {} *pass; 
    }  _current;
    NSMutableDictionary * _frameBindings;
    NSMutableDictionary * _lightBindings;
    NSMutableDictionary * _nodeBindings;
    NSMutableDictionary * _passBindings;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _sceneBuffer;
    NSMutableDictionary * _shadableBindings;
}

+ (void)allocateRegistry;
+ (void)deallocateRegistry;
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 block:(id /* block */)arg3;
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(bool)arg3 block:(id /* block */)arg4;
+ (void)registerSemantic:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)registerShadableArgumentBindingBlockForBuffers:(id /* block */)arg1 textures:(id /* block */)arg2 samplers:(id /* block */)arg3;
+ (void)registerUserBlockTrampoline:(id /* block */)arg1;

- (void)_checkForAssociatedSamplerOnBinding:(id)arg1 argument:(id)arg2;
- (id)_dictionaryForFrequency:(int)arg1;
- (void)_parseArguments:(id)arg1 stage:(int)arg2;
- (long long)_searchArguments:(id)arg1 forArgumentNamed:(id)arg2 type:(unsigned long long)arg3;
- (bool)addPassResourceBindingsForArgument:(id)arg1;
- (void)addResourceBindingsForArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(bool)arg3 block:(id /* block */)arg4;
- (void)dealloc;
- (void)generateBindingsForPipeline:(id)arg1 withReflection:(id)arg2 program:(struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)arg3 material:(struct __C3DMaterial { }*)arg4 geometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg5 pass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg6;
- (id)init;

@end
