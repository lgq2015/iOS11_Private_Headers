/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterOverlayTile : VKTile {
    struct shared_ptr<md::RasterOverlayData> { 
        struct RasterOverlayData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _overlayData;
    struct unique_ptr<ggl::Textured::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::Textured::Pos2DUVPipelineSetup> > { 
        struct __compressed_pair<ggl::Textured::Pos2DUVPipelineSetup *, std::__1::default_delete<ggl::Textured::Pos2DUVPipelineSetup> > { 
            struct Pos2DUVPipelineSetup {} *__first_; 
        } __ptr_; 
    }  _pipelineSetup;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > { 
        struct __compressed_pair<ggl::RenderItem *, std::__1::default_delete<ggl::RenderItem> > { 
            struct RenderItem {} *__first_; 
        } __ptr_; 
    }  _renderItem;
}

@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*gglTexture;
@property (nonatomic, readonly) struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned long long x6; float x7; struct Mesh {} *x8; struct Range<unsigned long> { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range<unsigned long> {} *x10; unsigned long long x11; }*renderItem;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGContext { }*)drawContext;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)gglTexture;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 size:(unsigned long long)arg2 scale:(float)arg3;
- (bool)isEmpty;
- (struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned long long x6; float x7; struct Mesh {} *x8; struct Range<unsigned long> { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range<unsigned long> {} *x10; unsigned long long x11; }*)renderItem;
- (struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned long long x6; float x7; struct Mesh {} *x8; struct Range<unsigned long> { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range<unsigned long> {} *x10; unsigned long long x11; }*)setupRenderItemWithRenderState:(struct RenderState { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; struct DepthState { int x_4_1_1; int x_4_1_2; int x_4_1_3; float x_4_1_4; float x_4_1_5; } x4; struct StencilState { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; int x_5_1_5; unsigned int x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; } x5; struct RasterizerState { int x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; struct Box<unsigned int, 2> { struct Matrix<unsigned int, 2, 1> { unsigned int x_1_3_1[2]; } x_4_2_1; struct Matrix<unsigned int, 2, 1> { unsigned int x_2_3_1[2]; } x_4_2_2; } x_6_1_4; } x6; bool x7; }*)arg1 pipelineState:(const struct shared_ptr<ggl::Textured::Pos2DUVPipelineState> { struct Pos2DUVPipelineState {} *x1; struct __shared_weak_count {} *x2; }*)arg2 mesh:(struct Mesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)arg3;

@end
