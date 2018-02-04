/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoFDOverfeatNetwork : NSObject {
    NSString * _basename;
    struct shared_ptr<Espresso::abstract_context> { 
        struct abstract_context {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _context_cpu;
    struct shared_ptr<Espresso::abstract_context> { 
        struct abstract_context {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _context_metal;
    int  _cpin;
    NSMutableDictionary * _errorForLayers;
    int  _forceMaxNScales;
    float  _maxScale;
    int  _mode;
    int  _scaleConfig;
    int  _scalingMode;
    bool  _useGPUScaler;
    NSString * _weights;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__begin_; 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
            struct shared_ptr<Espresso::blob<float, 3> > {} *__first_; 
        } __end_cap_; 
    }  boxBlobs;
    struct CGColorSpace { } * colorSpace;
    NSObject<OS_dispatch_queue> * cpu_queue_0;
    NSObject<OS_dispatch_semaphore> * cpu_semaphore;
    struct pair<unsigned long long, unsigned long long> { 
        unsigned long long first; 
        unsigned long long second; 
    }  cropDims;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
        struct shared_ptr<Espresso::net> {} *__begin_; 
        struct shared_ptr<Espresso::net> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
            struct shared_ptr<Espresso::net> {} *__first_; 
        } __end_cap_; 
    }  ecpu_nets;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
        struct pair<unsigned long long, unsigned long long> {} *__begin_; 
        struct pair<unsigned long long, unsigned long long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
            struct pair<unsigned long long, unsigned long long> {} *__first_; 
        } __end_cap_; 
    }  full_scales;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
        struct shared_ptr<Espresso::net> {} *__begin_; 
        struct shared_ptr<Espresso::net> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
            struct shared_ptr<Espresso::net> {} *__first_; 
        } __end_cap_; 
    }  gpu_nets;
    int  n_resizers_for_batching;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
        struct pair<unsigned long long, unsigned long long> {} *__begin_; 
        struct pair<unsigned long long, unsigned long long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
            struct pair<unsigned long long, unsigned long long> {} *__first_; 
        } __end_cap_; 
    }  net_scales;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__begin_; 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
            struct shared_ptr<Espresso::blob<float, 3> > {} *__first_; 
        } __end_cap_; 
    }  probBlobs;
    struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > { 
        struct shared_ptr<Espresso::fast_pyramid_resizer> {} *__begin_; 
        struct shared_ptr<Espresso::fast_pyramid_resizer> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > { 
            struct shared_ptr<Espresso::fast_pyramid_resizer> {} *__first_; 
        } __end_cap_; 
    }  resizers_for_batching;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  retile_n_outputs_v;
    int  retile_stride;
    int  retile_tile_sz;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__first_; 
        } __end_cap_; 
    }  scalesc;
    struct net_strides_configuration { 
        int num_layer; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } kernel_size; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } stride; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } pad; 
    }  strideConf;
    int  tile_h_1;
    int  tile_w_1;
}

@property (nonatomic, retain) NSString *basename;
@property (nonatomic) struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; } context_cpu;
@property (nonatomic) struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; } context_metal;
@property (nonatomic) int cpin;
@property (nonatomic) int forceMaxNScales;
@property (nonatomic) float maxScale;
@property (nonatomic) int mode;
@property (nonatomic) int scaleConfig;
@property (nonatomic) int scalingMode;
@property (nonatomic) bool useGPUScaler;
@property (nonatomic, retain) NSString *weights;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)autoResizeForAspectRatio:(float)arg1 useLowPriorityMode:(bool)arg2 gpuPriority:(int)arg3;
- (void)autoSetupNetBaseName:(id)arg1 weights:(id)arg2 scaleConfig:(int)arg3 setupMode:(int)arg4 computePath:(int)arg5 autoAspectRatio:(float)arg6 forceReset:(bool)arg7 useLowPriorityMode:(bool)arg8 gpuPriority:(int)arg9;
- (id)basename;
- (struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })boxBlobForScale:(int)arg1;
- (struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })context_cpu;
- (struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })context_metal;
- (int)cpin;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })cpu_net:(int)arg1;
- (void)dealloc;
- (int)default_retile_outputs;
- (id)errorForLayers;
- (int)forceMaxNScales;
- (void)forward_cpu_network_at_index:(int)arg1 pyr:(const struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)generatePyramid:(const struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >=^{blob<unsigned char __attribute__((ext_vector_type(4))), 2> {}*)arg1 tex:(id)arg2;
- (int)getNumScales;
- (double)getScale:(int)arg1;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })gpu_net:(int)arg1;
- (id)init;
- (float)maxScale;
- (int)mode;
- (bool)needRetiling:(int)arg1;
- (struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })probBlobForScale:(int)arg1;
- (void)processBlob:(const struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >=^{blob<unsigned char __attribute__((ext_vector_type(4))), 2> {}*)arg1 tex:(id)arg2;
- (void)processBlobNoRotation:(const struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >=^{blob<unsigned char __attribute__((ext_vector_type(4))), 2> {}*)arg1 tex:(id)arg2 doBGRA2RGBA:(bool)arg3;
- (void)processPyramid:(struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)processPyramid:(struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })arg1 gpu_resizer:(id)arg2;
- (void)reset;
- (struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })resizerAtIndex:(int)arg1;
- (int)resizerCount;
- (void)retile_and_forward_espresso_gpu_network_at_index:(int)arg1 net:(const struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; }*)arg2 pyr:(const struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; }*)arg3;
- (void)retile_and_forward_espresso_network_at_index:(int)arg1 net:(const struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; }*)arg2 pyr:(const struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; }*)arg3;
- (void)retryLoadingCaffeNet:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; }*)arg1 name:(id)arg2 weights:(id)arg3 context:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })arg4 cp:(int)arg5;
- (int)scaleConfig;
- (int)scalingMode;
- (void)setBasename:(id)arg1;
- (void)setContext_cpu:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setContext_metal:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCpin:(int)arg1;
- (void)setForceMaxNScales:(int)arg1;
- (void)setMaxScale:(float)arg1;
- (void)setMode:(int)arg1;
- (void)setScaleConfig:(int)arg1;
- (void)setScalingMode:(int)arg1;
- (void)setUseGPUScaler:(bool)arg1;
- (void)setWeights:(id)arg1;
- (void)setup_retile;
- (void)storeDataForPruning:(struct shared_ptr<Espresso::blob<float, 4> > { struct blob<float, 4> {} *x1; struct __shared_weak_count {} *x2; })arg1 prob:(float)arg2;
- (struct net_strides_configuration { int x1; struct vector<int, std::__1::allocator<int> > { int *x_2_1_1; int *x_2_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_2_1_3; } x2; struct vector<int, std::__1::allocator<int> > { int *x_3_1_1; int *x_3_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_3_1_3; } x3; struct vector<int, std::__1::allocator<int> > { int *x_4_1_1; int *x_4_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_4_1_3; } x4; })strideConfiguration;
- (bool)useGPUScaler;
- (id)weights;
- (void)wipeLayersMemory;

@end
