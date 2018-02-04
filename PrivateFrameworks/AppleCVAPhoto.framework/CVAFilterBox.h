/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAFilterBox : NSObject {
    <MTLTexture> * _boxIntermediateTexture_r;
    <MTLTexture> * _boxIntermediateTexture_rgba;
    <MTLComputePipelineState> * _box_float4_pass_horiz_kernel;
    <MTLComputePipelineState> * _box_float4_pass_vert_kernel;
    <MTLComputePipelineState> * _box_float_pass_horiz_kernel;
    <MTLComputePipelineState> * _box_float_pass_vert_kernel;
    <MTLComputePipelineState> * _box_normValid_float4_pass_vert_kernel;
    <MTLComputePipelineState> * _box_normValid_float_pass_vert_kernel;
    <MTLComputePipelineState> * _box_norm_float4_pass_vert_kernel;
    <MTLComputePipelineState> * _box_norm_float_pass_vert_kernel;
    <MTLDeviceSPI> * _device;
    NSString * _label;
    <MTLLibrary> * _library;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _textureSize;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (void)encodeBoxHorizontalToCommandBuffer:(id)arg1 configBuffer:(const struct BoxFilterConfig { int x1; }*)arg2 source:(id)arg3 destination:(id)arg4;
- (void)encodeBoxVerticalToCommandBuffer:(id)arg1 configBuffer:(const struct BoxFilterConfig { int x1; }*)arg2 source:(id)arg3 destination:(id)arg4 normalize:(long long)arg5;
- (void)encodeToCommandBuffer:(id)arg1 inTexture:(id)arg2 outTexture:(id)arg3 radius:(unsigned long long)arg4 normalize:(long long)arg5;
- (id)initWithDevice:(id)arg1 library:(id)arg2 textureSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (id)label;

@end
