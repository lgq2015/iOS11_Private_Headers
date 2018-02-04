/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalShaderManager : NSObject {
    struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; double x55; double x56; double x57; double x58[60]; unsigned int x59; double x60; double x61; } * __engineStats;
    struct __CFDictionary { } * _availablePipelineStates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _availablePipelineStatesLock;
    SCNMTLShaderBindingsGenerator * _bindingsGenerator;
    <MTLDevice> * _device;
    bool  _isValidationEnabled;
    SCNMetalLibraryManager * _libraryManager;
    NSObject<OS_dispatch_group> * _prepareShadersGroup;
    MTLRenderPipelineDescriptor * _renderPipelineDescriptor;
}

- (void)_removeMatchingProgram:(struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)arg1 pass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg2;
- (void)dealloc;
- (id)description;
- (void)finalizeRenderPipeline:(id)arg1 withRenderPipelineState:(id)arg2 reflection:(id)arg3 programDesc:(struct { struct __C3DFXProgram {} *x1; struct __C3DMaterial {} *x2; struct __C3DGeometry {} *x3; struct __C3DFXPass {} *x4; struct __C3DFXPass {} *x5; id x6; struct __C3DBlendStates {} x7; struct __C3DNode {} *x8; unsigned char x9; bool x10; id x11; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x12; void*x13; unsigned char x14; id /* block */ x15; })arg4 forceCacheMissShader:(bool)arg5 error:(id)arg6;
- (id)initWithResourceManager:(id)arg1 passDescription:(id)arg2;
- (bool)matchPassDescriptor:(id)arg1;
- (void)passWillDie:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg1;
- (void)programWillDie:(struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)arg1;
- (void)renderPipelineStateWithLibrary:(id)arg1 renderPipelineDescriptor:(id)arg2 metalProgram:(struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFDictionary {} *x4; void *x5; struct __CFDictionary {} *x6; void *x7; struct __CFString {} *x8; }*)arg3 async:(bool)arg4 tessellationConfigurator:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)renderResourceForProgramDesc:(struct { struct __C3DFXProgram {} *x1; struct __C3DMaterial {} *x2; struct __C3DGeometry {} *x3; struct __C3DFXPass {} *x4; struct __C3DFXPass {} *x5; id x6; struct __C3DBlendStates {} x7; struct __C3DNode {} *x8; unsigned char x9; bool x10; id x11; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x12; void*x13; unsigned char x14; id /* block */ x15; })arg1;
- (void)setBlendStates:(struct __C3DBlendStates { }*)arg1;
- (void)waitForShadersCompilation;

@end
