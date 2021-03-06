/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNModel : NSObject {
    VCPCNNBlock * _blocks;
    VCPCNNMetalContext * _context;
    bool  _executed;
    VCPCNNData * _output;
    short  _quantFactor;
    bool  _useGPU;
}

@property (readonly) VCPCNNData *output;

- (void).cxx_destruct;
- (int)add:(id)arg1;
- (int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(id /* block */)arg3;
- (int)forward:(id)arg1;
- (id)getGPUContext;
- (id)init;
- (id)initWithParameters:(short)arg1 useGPU:(bool)arg2;
- (int)initializeNetwork:(id)arg1 paramFileUrl:(id)arg2;
- (id)output;
- (int)reinitGPUTemporalMemory:(id)arg1;
- (int)size;

@end
