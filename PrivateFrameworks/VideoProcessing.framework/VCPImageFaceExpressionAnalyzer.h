/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageFaceExpressionAnalyzer : VCPImageAnalyzer {
    NSArray * _faces;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (id)initWithFaceResults:(id)arg1;

@end
