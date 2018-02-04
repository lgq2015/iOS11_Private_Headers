/* made by EzioChiu.
 */

@protocol GGLRenderQueueSource <NSObject>

@required

- (struct RenderQueue { struct vector<ggl::RenderQueue::Pass, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_1_1_1; struct Pass {} *x_1_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_3_2_1; } x_1_1_3; } x1; struct vector<ggl::ComputeQueue *, std::__1::allocator<ggl::ComputeQueue *> > { struct ComputeQueue {} **x_2_1_1; struct ComputeQueue {} **x_2_1_2; struct __compressed_pair<ggl::ComputeQueue **, std::__1::allocator<ggl::ComputeQueue *> > { struct ComputeQueue {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::CommandBuffer *, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_3_1_1; struct CommandBuffer {} **x_3_1_2; struct __compressed_pair<ggl::CommandBuffer **, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_3_2_1; } x_3_1_3; } x3; struct shared_ptr<ggl::RenderTransaction> { struct RenderTransaction {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct vector<ggl::Texture *, std::__1::allocator<ggl::Texture *> > { struct Texture {} **x_5_1_1; struct Texture {} **x_5_1_2; struct __compressed_pair<ggl::Texture **, std::__1::allocator<ggl::Texture *> > { struct Texture {} **x_3_2_1; } x_5_1_3; } x5; }*)renderQueueForTimestamp:(double)arg1;

@end
