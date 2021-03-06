/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer {
    float  _contrast;
    VCPCNNData * _faceInput;
    VCPCNNModel * _faceModel;
    NSArray * _faces;
    VCPCNNData * _input;
    VCPCNNModel * _model;
    bool  _sdof;
    float  _sharpness;
    float  _sharpnessBlocks;
    bool  _useGPU;
}

@property (readonly) float sharpness;

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (float)calculateScoreFromNetworkOutput:(id)arg1 textureness:(char *)arg2 imageHeight:(int)arg3 imgWidth:(int)arg4;
- (int)computeCNNBasedSharpness:(struct __CVBuffer { }*)arg1 cancel:(id /* block */)arg2;
- (int)computeCNNFaceSharpness:(struct __CVBuffer { }*)arg1 result:(float*)arg2 cancel:(id /* block */)arg3;
- (float)computeFaceSharpness:(struct __CVBuffer { }*)arg1;
- (void)computeLocalSharpness:(struct __CVBuffer { }*)arg1;
- (float)getFaceScoreFromOutput:(id)arg1 ratio:(float)arg2;
- (int)initFaceBlurModel:(bool)arg1;
- (int)initInputFromCVPixelBuffer:(struct __CVBuffer { }*)arg1 height:(int)arg2 width:(int)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 input:(id)arg5;
- (int)initModel;
- (id)initWithFaceResults:(id)arg1 sdof:(bool)arg2;
- (float)sharpness;
- (void)spatialPooling;

@end
