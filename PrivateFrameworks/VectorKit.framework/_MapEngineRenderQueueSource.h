/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _MapEngineRenderQueueSource : NSObject <GGLRenderQueueSource> {
    struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; } * _mapEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1;
- (struct RenderQueue { struct vector<ggl::RenderQueue::Pass, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_1_1_1; struct Pass {} *x_1_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_3_2_1; } x_1_1_3; } x1; struct vector<ggl::ComputeQueue *, std::__1::allocator<ggl::ComputeQueue *> > { struct ComputeQueue {} **x_2_1_1; struct ComputeQueue {} **x_2_1_2; struct __compressed_pair<ggl::ComputeQueue **, std::__1::allocator<ggl::ComputeQueue *> > { struct ComputeQueue {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::CommandBuffer *, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_3_1_1; struct CommandBuffer {} **x_3_1_2; struct __compressed_pair<ggl::CommandBuffer **, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_3_2_1; } x_3_1_3; } x3; struct shared_ptr<ggl::RenderTransaction> { struct RenderTransaction {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct vector<ggl::Texture *, std::__1::allocator<ggl::Texture *> > { struct Texture {} **x_5_1_1; struct Texture {} **x_5_1_2; struct __compressed_pair<ggl::Texture **, std::__1::allocator<ggl::Texture *> > { struct Texture {} **x_3_2_1; } x_5_1_3; } x5; }*)renderQueueForTimestamp:(double)arg1;

@end
