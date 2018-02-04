/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalResourceManager : NSObject <SCNResourceManager> {
    struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; double x55; double x56; double x57; double x58[60]; unsigned int x59; double x60; double x61; } * __engineStats;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableBuffers;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableComputePipelines;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableComputePipelinesWithStageDescriptor;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableImageProxy;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableImages;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableIrradianceTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMeshElements;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMeshSources;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMeshes;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMorphs;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableRadianceTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableRasterizerStates;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableSamplers;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableShadables;
    SCNMTLShadableKey * _availableShadablesSearchKey;
    NSMutableArray * _availableShaderManagers;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableSkins;
    NSMutableArray * _availableStageDescriptors;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableTessellators;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableWireframeMaterials;
    SCNMTLBufferAllocator * _commonProfileBuffersAllocator;
    <MTLTexture> * _defaultCubeTexture;
    <MTLTexture> * _defaultTexture;
    <MTLTexture> * _defaultTexture3D;
    <MTLDevice> * _device;
    SCNMetalLibraryManager * _libraryManager;
    MTKTextureLoader * _mtkTextureLoader;
    id  _nullStageDescriptor;
    <MTLCommandQueue> * _resourceQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _shaderManagerLock;
    <MTLTexture> * _specularDFGTexture;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stageDescriptorsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SCNMetalLibraryManager *libraryManager;
@property (readonly) Class superclass;

+ (id)resourceManagerForDevice:(id)arg1;
+ (void)unregisterManagerForDevice:(id)arg1;

- (void)__updateMutableMesh:(struct __C3DMesh { }*)arg1 withMetalMesh:(id)arg2;
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 applySH:(id /* block */)arg3;
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 useTextureView:(bool)arg4;
- (id)_bufferForData:(struct __CFData { }*)arg1 bytesPerIndex:(unsigned long long)arg2;
- (void)_copyImage:(struct __C3DImage { }*)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(bool)arg5;
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 generateMipMaps:(bool)arg3;
- (void)_enqueueMipmapGenerationForTexture:(id)arg1;
- (void)_geometryWillDie:(id)arg1;
- (void)_imageProxyWillDie:(id)arg1;
- (void)_imageWillDie:(id)arg1;
- (void)_materialWillDie:(id)arg1;
- (void)_meshElementWillDie:(id)arg1;
- (void)_meshSourceWillDie:(id)arg1;
- (void)_meshWillDie:(id)arg1;
- (void)_morphWillDie:(id)arg1;
- (void)_passWillDie:(id)arg1;
- (void)_programHashCodeWillDie:(id)arg1;
- (void)_programWillDie:(id)arg1;
- (void)_skinWillDie:(id)arg1;
- (id)_textureDescriptorFromImage:(struct __C3DImage { }*)arg1 needsMipMap:(bool)arg2 textureOptions:(int)arg3;
- (id)computePipelineStateForKernel:(id)arg1;
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg2;
- (id)convertTextureToCubeMapIfApplicable:(id)arg1 needsMipmap:(bool)arg2;
- (id)cubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 needsMipmap:(bool)arg3;
- (void)dealloc;
- (id)defaultCubeTexture;
- (id)defaultTexture;
- (id)defaultTexture3D;
- (id)device;
- (void)dispatchForCubemap:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (void)dispatchForTexture:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (void)flush;
- (id)getUniqueStageDescriptor:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 queue:(id)arg2 group:(id)arg3 applySH:(id /* block */)arg4;
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 needsMipmap:(bool)arg3;
- (id)libraryManager;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newComputePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 constants:(id)arg3 constantsHash:(id)arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1;
- (id)newComputePipelineStateWithFunctionName:(id)arg1;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;
- (id)newConstantBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newIndexBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1;
- (id)newRenderPipelineStateWithPixelFormat:(unsigned long long)arg1 vertexFunctionName:(id)arg2 fragmentFunctionName:(id)arg3 library:(id)arg4;
- (id)newRenderPipelineStateWithPixelFormat:(unsigned long long)arg1 vertexFunctionName:(id)arg2 fragmentFunctionName:(id)arg3 library:(id)arg4 vertexConstantValues:(id)arg5 fragmentConstantValues:(id)arg6;
- (id)newRenderPipelineStateWithRenderPassDescriptor:(id)arg1 over:(bool)arg2 vertexFunctionName:(id)arg3 fragmentFunctionName:(id)arg4 library:(id)arg5;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)radianceTextureForEnvironmentTexture:(id)arg1 queue:(id)arg2 group:(id)arg3;
- (void)removeAllShaders;
- (id)renderPipelineDescriptorWithPixelFormat:(unsigned long long)arg1 vertexFunctionName:(id)arg2 fragmentFunctionName:(id)arg3 library:(id)arg4;
- (id)renderPipelineDescriptorWithPixelFormat:(unsigned long long)arg1 vertexFunctionName:(id)arg2 fragmentFunctionName:(id)arg3 library:(id)arg4 vertexConstantValues:(id)arg5 fragmentConstantValues:(id)arg6;
- (id)renderResourceForImage:(struct __C3DImage { }*)arg1 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 options:(int)arg3 queue:(id)arg4 group:(id)arg5;
- (id)renderResourceForImageProxy:(struct __C3DImageProxy { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); } x2; void *x3; unsigned char x4; }*)arg1 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 engineContext:(struct __C3DEngineContext { }*)arg3;
- (id)renderResourceForMaterial:(struct __C3DMaterial { }*)arg1 geometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg2 renderPipeline:(id)arg3 engineContext:(struct __C3DEngineContext { }*)arg4;
- (id)renderResourceForMesh:(struct __C3DMesh { }*)arg1;
- (id)renderResourceForMeshElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { long long x_5_2_1; long long x_5_2_2; } x_8_1_5; unsigned char x_8_1_6; bool x_8_1_7; } x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource {} *x13; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x14[2]; }*)arg1;
- (id)renderResourceForMeshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)arg1;
- (id)renderResourceForMorph:(struct __C3DMorph { }*)arg1 baseGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg2;
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates { }*)arg1;
- (id)renderResourceForSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg1;
- (id)renderResourceForSkinner:(struct __C3DSkinner { }*)arg1 baseMesh:(struct __C3DMesh { }*)arg2;
- (id)renderResourceForTessellatedGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg1;
- (id)renderResourcesForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)arg1 withEngineContext:(struct __C3DEngineContext { }*)arg2;
- (void)setLibraryManager:(id)arg1;
- (id)shFromCPU:(id)arg1;
- (id)shaderManagerForPassDescriptor:(id)arg1;
- (id)specularDFGTexture;
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3;
- (struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; double x55; double x56; double x57; double x58[60]; unsigned int x59; double x60; double x61; }*)stats;
- (id)textureForSamplingTexture:(id)arg1 atSize:(unsigned long long)arg2 mipmapLevelCount:(unsigned long long*)arg3;
- (id)unstageTexture:(id)arg1;
- (id)wireframeResourceForRendererElement:(struct __C3DRendererElement { struct __C3DNode {} *x1; struct __C3DGeometry {} *x2; struct __C3DMesh {} *x3; void *x4; struct __C3DMaterial {} *x5; struct __C3DFXTechnique {} *x6; struct __C3DRendererElementProgramHashCode {} *x7; struct { unsigned char x_8_1_1[8]; } x8; int x9; unsigned int x10; unsigned int x11 : 8; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 3; unsigned int x20 : 1; unsigned int x21 : 3; }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2;

@end
