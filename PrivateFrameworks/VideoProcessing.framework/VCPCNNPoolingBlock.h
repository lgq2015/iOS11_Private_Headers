/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNPoolingBlock : VCPCNNBlock {
    int  _chunk;
    MPSCNNPoolingMax * _mpsPooling;
    int  _px;
    int  _py;
}

- (void).cxx_destruct;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (int)doMaxPoolingChunkFour;
- (int)doMaxPoolingChunkOne;
- (int)forward;
- (id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;
- (bool)supportGPU;
- (bool)useGPU;

@end
