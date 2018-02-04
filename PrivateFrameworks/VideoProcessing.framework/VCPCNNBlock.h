/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNBlock : NSObject {
    VCPCNNMetalContext * _context;
    bool  _generateOutput;
    VCPCNNData * _input;
    NSMutableArray * _inputSize;
    VCPCNNData * _output;
    NSMutableArray * _outputSize;
}

@property (readonly) VCPCNNMetalContext *context;
@property bool generateOutput;
@property VCPCNNData *input;
@property NSMutableArray *inputSize;
@property (retain) VCPCNNData *output;
@property (retain) NSMutableArray *outputSize;

- (void).cxx_destruct;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (id)context;
- (int)forward;
- (bool)generateOutput;
- (id)input;
- (id)inputSize;
- (id)output;
- (id)outputSize;
- (int)readFromDisk:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 quantFactor:(short)arg2;
- (void)setGenerateOutput:(bool)arg1;
- (void)setInput:(id)arg1;
- (void)setInputSize:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setOutputSize:(id)arg1;
- (bool)supportGPU;
- (bool)useGPU;

@end
