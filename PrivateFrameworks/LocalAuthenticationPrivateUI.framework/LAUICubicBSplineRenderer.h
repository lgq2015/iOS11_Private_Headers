/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUICubicBSplineRenderer : NSObject {
    struct vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state> > { 
        struct global_state {} *__begin_; 
        struct global_state {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::global_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state> > { 
            struct global_state {} *__first_; 
        } __end_cap_; 
    }  _animation_targets;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__first_; 
        } __end_cap_; 
    }  _cap_control_point_indices;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point> > { 
        struct control_point {} *__begin_; 
        struct control_point {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::control_point *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point> > { 
            struct control_point {} *__first_; 
        } __end_cap_; 
    }  _cap_control_points;
    bool  _caps_dirty;
    MTLRenderPassDescriptor * _clear_pass_descriptor;
    <MTLCommandQueue> * _command_queue;
    id /* block */  _completion;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__first_; 
        } __end_cap_; 
    }  _control_point_indices;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point> > { 
        struct control_point {} *__begin_; 
        struct control_point {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::control_point *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point> > { 
            struct control_point {} *__first_; 
        } __end_cap_; 
    }  _control_points;
    unsigned long long  _current_animation_target_index;
    MTLRenderPassDescriptor * _dummy_render_pass_descriptor;
    struct global_state_animator { 
        struct animator<float, 0> { 
            float _target; 
            float _intermediate; 
            float _actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } accumulator_growth; 
        struct animator<float, 0> { 
            float _target; 
            float _intermediate; 
            float _actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } accumulator_persistence; 
        struct animator<float, 0> { 
            float _target; 
            float _intermediate; 
            float _actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } accumulator_luminance_alpha_factor; 
        struct animator<float, 0> { 
            float _target; 
            float _intermediate; 
            float _actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } blur_scale; 
        struct animator<nullptr_t, 0> { 
            char *_target; 
            char *_intermediate; 
            char *_actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } hidden_animator; 
    }  _global_state_animator;
    unsigned long long  _instance_count;
    struct vector<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance> >, std::__1::allocator<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance> > > > { 
        struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance> > {} *__begin_; 
        struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance> > {} *__end_; 
        struct __compressed_pair<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance> > *, std::__1::allocator<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance> > > > { 
            struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance> > {} *__first_; 
        } __end_cap_; 
    }  _instance_state;
    double  _last_render_time;
    CAMetalLayer * _layer;
    struct double4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _model_transform;
    bool  _needs_update;
    struct double4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projection_transform;
    MTLRenderPassDescriptor * _render_pass_descriptor;
    bool  _reversed;
    struct vector<(anonymous namespace)::buffer_group, std::__1::allocator<(anonymous namespace)::buffer_group> >="__begin_"^{buffer_group {}  _ring_buffer;
    struct atomic<unsigned char> { 
        unsigned char __a_; 
    }  _ring_end;
    struct atomic<unsigned char> { 
        unsigned char __a_; 
    }  _ring_start;
    struct renderer_shared_state { 
        <MTLDevice> *device; 
        <MTLDepthStencilState> *depth_stencil_state; 
        <MTLComputePipelineState> *tesselation_factor_pipeline; 
        <MTLRenderPipelineState> *tube_pipeline; 
        struct array<id<MTLRenderPipelineState>, 3> { 
            <MTLRenderPipelineState> *__elems_[3]; 
        } begin_cap_pipelines; 
        struct array<id<MTLRenderPipelineState>, 3> { 
            <MTLRenderPipelineState> *__elems_[3]; 
        } end_cap_pipelines; 
        <MTLComputePipelineState> *horizontal_blur_pipeline; 
        <MTLComputePipelineState> *vertical_blur_pipeline; 
        <MTLComputePipelineState> *accumulator_pipeline; 
    }  _shared_render_state;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform> > { 
        struct instance_uniform {} *__begin_; 
        struct instance_uniform {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform> > { 
            struct instance_uniform {} *__first_; 
        } __end_cap_; 
    }  _spline_instance_uniforms;
    struct vector<LAUI_uniform_cubic_b_spline_renderer::spline, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline> > { 
        struct spline {} *__begin_; 
        struct spline {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline> > { 
            struct spline {} *__first_; 
        } __end_cap_; 
    }  _spline_state;
    <MTLBuffer> * _tesselation_factors;
    MTKView * _view;
    struct double4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _view_transform;
    bool  _wireframe_enabled;
}

@property (getter=modelTransform, setter=setModelTransform:, nonatomic) struct double4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } model_transform;
@property (getter=projectionTransform, setter=setProjectionTransform:, nonatomic) struct double4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } projection_transform;
@property (getter=viewTransform, setter=setViewTransform:, nonatomic) struct double4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } view_transform;
@property (getter=isWireframeEnabled, setter=setWireframeEnabled:, nonatomic) bool wireframe_enabled;

+ (struct renderer_shared_state { id x1; id x2; struct array<id<MTLRenderPipelineState>, 3> { /* Warning: unhandled array encoding: '[3@]}{array<id<MTLRenderPipelineState>, 3>=[3@]}@@@}' */ id x_3_1_1[3]; } x3; id x4; id x5; })sharedStateForDevice:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateCapForSpline:(unsigned long long)arg1 instance:(unsigned long long)arg2;
- (void)_updateState:(double)arg1;
- (void)_updateTarget:(const struct global_state { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1;
- (unsigned long long)addInstance:(const struct spline_instance { unsigned long long x1; struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state> > { struct spline_instance_state {} *x_2_1_1; struct spline_instance_state {} *x_2_1_2; struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state> > { struct spline_instance_state {} *x_3_2_1; } x_2_1_3; } x2; unsigned long long x3; bool x4; struct animator<float __attribute__((ext_vector_type(3))), 0>=ffffC {} x5; struct animator<simd::quatf, 0> { struct quatf { } x_6_1_1; struct quatf { } x_6_1_2; struct quatf { } x_6_1_3; float x_6_1_4; float x_6_1_5; float x_6_1_6; float x_6_1_7; unsigned char x_6_1_8; } x6; struct animator<float __attribute__((ext_vector_type(3))), 0>=ffffC {} x7; struct animator<simd::quatf, 0> { struct quatf { } x_8_1_1; struct quatf { } x_8_1_2; struct quatf { } x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; unsigned char x_8_1_8; } x8; }*)arg1;
- (unsigned long long)addSpline:(const struct spline { struct vector<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > > >=^{vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > {} x1; struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > {} *x2; struct __compressed_pair<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > *, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > > >=^{vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > {} x3; }*)arg1;
- (id)init;
- (id)initWithMTKView:(id)arg1 sharedState:(const struct renderer_shared_state { id x1; id x2; struct array<id<MTLRenderPipelineState>, 3> { /* Warning: unhandled array encoding: '[3@]}{array<id<MTLRenderPipelineState>, 3>=[3@]}@@@}' */ id x_3_1_1[3]; } x3; id x4; id x5; }*)arg2;
- (void)invalidateRenderPassDescriptor;
- (bool)isWireframeEnabled;
- (struct double4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })modelTransform;
- (struct double4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })projectionTransform;
- (void)releaseBuffers;
- (bool)render;
- (void)setGlobalAnimationTargets:(const struct vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state> > { struct global_state {} *x1; struct global_state {} *x2; struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::global_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state> > { struct global_state {} *x_3_1_1; } x3; }*)arg1 withCompletion:(id /* block */)arg2;
- (void)setInstanceAnimationTargets:(const struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state> > { struct spline_instance_state {} *x1; struct spline_instance_state {} *x2; struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state> > { struct spline_instance_state {} *x_3_1_1; } x3; }*)arg1 forSpline:(unsigned long long)arg2 instance:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)setModelTransform:(struct double4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setProjectionTransform:(struct double4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSplineAnimationTargets:(const struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_state> > { struct spline_state {} *x1; struct spline_state {} *x2; struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_state> > { struct spline_state {} *x_3_1_1; } x3; }*)arg1 forSpline:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)setSplineInstanceUniform:(struct instance_uniform { struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; })arg1 forSpline:(unsigned long long)arg2 instance:(unsigned long long)arg3 forceCapRegeneration:(bool)arg4;
- (void)setViewTransform:(struct double4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWireframeEnabled:(bool)arg1;
- (void)updateLastRenderTime;
- (void)updateRenderPassDescriptorWithDrawable:(id)arg1;
- (struct double4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })viewTransform;

@end
