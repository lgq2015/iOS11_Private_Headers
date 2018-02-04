/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoConvolutionWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {
    struct shared_ptr<Espresso::blob<float, 1> > { 
        struct blob<float, 1> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _biases_blob;
    unsigned int  _data_type;
    <MTLDevice> * _dev;
    struct convolution_uniforms { 
        int W; 
        int H; 
        int Winput; 
        int Hinput; 
        int start_channel_low_priority_split; 
        int output_row_bytes; 
        int fused_relu; 
        int fused_tanh; 
        int has_biases; 
        float leaky_relu_alpha; 
        int C; 
        int K; 
        int Nx; 
        int Ny; 
        int backward_stride; 
        int fused_activation_mode; 
        float fused_activation_alpha; 
        float fused_activation_beta; 
        struct padding_params_t { 
            short pad_mode; 
            short fill_mode; 
            float value; 
            short l; 
            short r; 
            short t; 
            short b; 
        } pad; 
        short stride_x; 
        short stride_y; 
        short dilation_x; 
        short dilation_y; 
        unsigned short mtl_pad_l; 
        unsigned short mtl_pad_t; 
        int has_8bit_weights; 
        int do_ncc; 
        int has_batch_norm; 
        int n_groups; 
        int n_parallel; 
        unsigned short start_channel_bottom; 
        unsigned short start_channel_top; 
        unsigned short total_channel_bottom; 
        unsigned short total_channel_top; 
        unsigned short split_K_channels_low_priority_split; 
        short n_batch; 
        int deconv_out_width; 
        int deconv_out_height; 
        int low_precision_accumulation; 
        int hint_use_winograd_win_size; 
    }  _params;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _quantization_ranges;
    struct shared_ptr<Espresso::blob<unsigned char, 4> > { 
        struct blob<unsigned char, 4> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _quantized_weights_blob;
    float * _scale_factor_batch_norm;
    struct shared_ptr<Espresso::blob<float, 4> > { 
        struct blob<float, 4> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 4> > { 
        struct blob<unsigned short, 4> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _weights_f16_blob;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<Espresso::blob<float' */ struct  biases_blob; /* unknown property attribute:  1>}^{__shared_weak_count}} */
@property unsigned int data_type;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) <MTLDevice> *dev;
@property (readonly) unsigned long long hash;
@property struct convolution_uniforms { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; float x10; int x11; int x12; int x13; int x14; int x15; int x16; float x17; float x18; struct padding_params_t { short x_19_1_1; short x_19_1_2; float x_19_1_3; short x_19_1_4; short x_19_1_5; short x_19_1_6; short x_19_1_7; } x19; short x20; short x21; short x22; short x23; unsigned short x24; unsigned short x25; int x26; int x27; int x28; int x29; int x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned short x34; unsigned short x35; short x36; int x37; int x38; int x39; int x40; } params;
@property (nonatomic) /* Warning: Unrecognized filer type: '' using 'void*' */ void**quantization_ranges;
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<Espresso::blob<unsigned char' */ struct  quantized_weights_blob; /* unknown property attribute:  4>}^{__shared_weak_count}} */
@property (nonatomic) float*scale_factor_batch_norm;
@property (readonly) Class superclass;
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<Espresso::blob<float' */ struct  weights_blob; /* unknown property attribute:  4>}^{__shared_weak_count}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<Espresso::blob<unsigned short' */ struct  weights_f16_blob; /* unknown property attribute:  4>}^{__shared_weak_count}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (float*)biasTerms;
- (struct shared_ptr<Espresso::blob<float, 1> > { struct blob<float, 1> {} *x1; struct __shared_weak_count {} *x2; })biases_blob;
- (unsigned int)dataType;
- (unsigned int)data_type;
- (id)descriptor;
- (id)dev;
- (id)initWithDevice:(id)arg1 params:(struct convolution_uniforms { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; float x10; int x11; int x12; int x13; int x14; int x15; int x16; float x17; float x18; struct padding_params_t { short x_19_1_1; short x_19_1_2; float x_19_1_3; short x_19_1_4; short x_19_1_5; short x_19_1_6; short x_19_1_7; } x19; short x20; short x21; short x22; short x23; unsigned short x24; unsigned short x25; int x26; int x27; int x28; int x29; int x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned short x34; unsigned short x35; short x36; int x37; int x38; int x39; int x40; })arg2;
- (id)label;
- (bool)load;
- (struct convolution_uniforms { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; float x10; int x11; int x12; int x13; int x14; int x15; int x16; float x17; float x18; struct padding_params_t { short x_19_1_1; short x_19_1_2; float x_19_1_3; short x_19_1_4; short x_19_1_5; short x_19_1_6; short x_19_1_7; } x19; short x20; short x21; short x22; short x23; unsigned short x24; unsigned short x25; int x26; int x27; int x28; int x29; int x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned short x34; unsigned short x35; short x36; int x37; int x38; int x39; int x40; })params;
- (void)purge;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)quantization_ranges;
- (struct shared_ptr<Espresso::blob<unsigned char, 4> > { struct blob<unsigned char, 4> {} *x1; struct __shared_weak_count {} *x2; })quantized_weights_blob;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rangesForUInt8Kernel;
- (bool)ready;
- (float*)scale_factor_batch_norm;
- (void)setBiases_blob:(struct shared_ptr<Espresso::blob<float, 1> > { struct blob<float, 1> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setData_type:(unsigned int)arg1;
- (void)setDev:(id)arg1;
- (void)setParams:(struct convolution_uniforms { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; float x10; int x11; int x12; int x13; int x14; int x15; int x16; float x17; float x18; struct padding_params_t { short x_19_1_1; short x_19_1_2; float x_19_1_3; short x_19_1_4; short x_19_1_5; short x_19_1_6; short x_19_1_7; } x19; short x20; short x21; short x22; short x23; unsigned short x24; unsigned short x25; int x26; int x27; int x28; int x29; int x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned short x34; unsigned short x35; short x36; int x37; int x38; int x39; int x40; })arg1;
- (void)setQuantization_ranges:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setQuantized_weights_blob:(struct shared_ptr<Espresso::blob<unsigned char, 4> > { struct blob<unsigned char, 4> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setScale_factor_batch_norm:(float*)arg1;
- (void)setWeights_blob:(struct shared_ptr<Espresso::blob<float, 4> > { struct blob<float, 4> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setWeights_f16_blob:(struct shared_ptr<Espresso::blob<unsigned short, 4> > { struct blob<unsigned short, 4> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void*)weights;
- (struct shared_ptr<Espresso::blob<float, 4> > { struct blob<float, 4> {} *x1; struct __shared_weak_count {} *x2; })weights_blob;
- (struct shared_ptr<Espresso::blob<unsigned short, 4> > { struct blob<unsigned short, 4> {} *x1; struct __shared_weak_count {} *x2; })weights_f16_blob;

@end
