/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVAVFRenderJobDelegate : NSObject <PVRenderJobDelegate> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_compositionTime;
    PVVideoCompositing * m_compositor;
    struct __CVBuffer { } * m_destinationPixelBuffer;
    struct HGCVGLTextureFactory { int (**x1)(); unsigned int x2; struct HGRef<HGGLContext> { struct HGGLContext {} *x_3_1_1; } x3; struct __CVOpenGLESTextureCache {} *x4; } * m_hgCVGLTextureFactory;
    PVVideoCompositionInstruction * m_instruction;
    struct HGRef<PVInstructionGraphContext> { 
        struct PVInstructionGraphContext {} *m_Obj; 
    }  m_instructionGraphContext;
    unsigned int  m_minimumRequestCompletionTimeMS;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  m_renderManager;
    AVAsynchronousVideoCompositionRequest * m_request;
    bool  m_thumbnailCompositing;
    struct PerfTimer { 
        double _start; 
        double _end; 
    }  m_timer;
}

@property (readonly) PVVideoCompositionInstruction *compositionInstruction;
@property (readonly) AVAsynchronousVideoCompositionRequest *compositionRequest;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } compositionTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long jobTypeTag;
@property unsigned int minimumRequestCompletionTimeMS;
@property (readonly) Class superclass;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (unsigned long long)jobTypeTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildGraph:(struct PVInputHGNodeMap<PVInstructionGraphSourceTrackNode *> { struct map<PVInstructionGraphSourceTrackNode *, HGRef<HGNode>, std::__1::less<PVInstructionGraphSourceTrackNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceTrackNode *const, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, std::__1::__map_value_compare<PVInstructionGraphSourceTrackNode *, std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, std::__1::less<PVInstructionGraphSourceTrackNode *>, true>, std::__1::allocator<std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PVInstructionGraphSourceTrackNode *, std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, std::__1::less<PVInstructionGraphSourceTrackNode *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg1 renderContext:(const struct HGRenderContext { int (**x1)(); unsigned int x2; int x3; int x4; int x5; struct HGRenderer {} *x6; struct HGRenderQueue {} *x7; bool x8; int x9; unsigned long long x10; int x11; int x12; bool x13; bool x14; unsigned long long x15; unsigned long long x16; struct HGSynchronizable {} *x17; struct HGSynchronizer {} *x18; struct vector<double, std::__1::allocator<double> > { double *x_19_1_1; double *x_19_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_19_1_3; } x19; }*)arg2 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg3 outputNodes:(struct vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> {} *x1; struct HGRef<HGNode> {} *x2; struct __compressed_pair<HGRef<HGNode> *, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> {} *x_3_1_1; } x3; }*)arg4;
- (void)_setupGLTextureFactory:(const struct HGRenderContext { int (**x1)(); unsigned int x2; int x3; int x4; int x5; struct HGRenderer {} *x6; struct HGRenderQueue {} *x7; bool x8; int x9; unsigned long long x10; int x11; int x12; bool x13; bool x14; unsigned long long x15; unsigned long long x16; struct HGSynchronizable {} *x17; struct HGSynchronizer {} *x18; struct vector<double, std::__1::allocator<double> > { double *x_19_1_1; double *x_19_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_19_1_3; } x19; }*)arg1;
- (void)_setupInputs:(struct PVInputHGNodeMap<PVInstructionGraphSourceTrackNode *> { struct map<PVInstructionGraphSourceTrackNode *, HGRef<HGNode>, std::__1::less<PVInstructionGraphSourceTrackNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceTrackNode *const, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, std::__1::__map_value_compare<PVInstructionGraphSourceTrackNode *, std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, std::__1::less<PVInstructionGraphSourceTrackNode *>, true>, std::__1::allocator<std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PVInstructionGraphSourceTrackNode *, std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, std::__1::less<PVInstructionGraphSourceTrackNode *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg1 renderContext:(const struct HGRenderContext { int (**x1)(); unsigned int x2; int x3; int x4; int x5; struct HGRenderer {} *x6; struct HGRenderQueue {} *x7; bool x8; int x9; unsigned long long x10; int x11; int x12; bool x13; bool x14; unsigned long long x15; unsigned long long x16; struct HGSynchronizable {} *x17; struct HGSynchronizer {} *x18; struct vector<double, std::__1::allocator<double> > { double *x_19_1_1; double *x_19_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_19_1_3; } x19; }*)arg2 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg3;
- (void)buildGraph:(struct vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> {} *x1; struct HGRef<HGNode> {} *x2; struct __compressed_pair<HGRef<HGNode> *, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> {} *x_3_1_1; } x3; }*)arg1 renderContext:(const struct HGRenderContext { int (**x1)(); unsigned int x2; int x3; int x4; int x5; struct HGRenderer {} *x6; struct HGRenderQueue {} *x7; bool x8; int x9; unsigned long long x10; int x11; int x12; bool x13; bool x14; unsigned long long x15; unsigned long long x16; struct HGSynchronizable {} *x17; struct HGSynchronizer {} *x18; struct vector<double, std::__1::allocator<double> > { double *x_19_1_1; double *x_19_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_19_1_3; } x19; }*)arg2 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg3;
- (id)compositionInstruction;
- (id)compositionRequest;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })compositionTime;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (id)initWithCompositor:(id)arg1 request:(id)arg2 compositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 thumbnailCompositing:(bool)arg4;
- (int)jobPriority;
- (unsigned long long)jobTypeTag;
- (unsigned int)minimumRequestCompletionTimeMS;
- (int)renderContextPriority;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (int)renderThreadPriority;
- (void)setMinimumRequestCompletionTimeMS:(unsigned int)arg1;
- (void)setupDestinationBuffers:(struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x1; struct HGRef<HGBitmap> {} *x2; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x_3_1_1; } x3; }*)arg1 renderContext:(const struct HGRenderContext { int (**x1)(); unsigned int x2; int x3; int x4; int x5; struct HGRenderer {} *x6; struct HGRenderQueue {} *x7; bool x8; int x9; unsigned long long x10; int x11; int x12; bool x13; bool x14; unsigned long long x15; unsigned long long x16; struct HGSynchronizable {} *x17; struct HGSynchronizer {} *x18; struct vector<double, std::__1::allocator<double> > { double *x_19_1_1; double *x_19_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_19_1_3; } x19; }*)arg2 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg3;
- (id)videoCompositingContext;

@end
