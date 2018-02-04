/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableDictionary * _activeFaces;
    NSMutableArray * _faceResults;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

- (void).cxx_destruct;
- (int)finalize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })flipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2;
- (id)publicResults;

@end
