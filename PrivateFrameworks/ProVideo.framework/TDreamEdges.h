/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamEdges : TDreamProgramWrapperTwoInput {
    int  _mode;
    double  _preThreshold;
    double  _sigma;
    double  _threshold;
    int  modeUniform;
    int  passUniform;
    int  preThresholdUniform;
    int  radioUniform;
    int  thresholdUniform;
}

@property (nonatomic) int mode;
@property (nonatomic) double preThreshold;
@property (nonatomic) double sigma;
@property (nonatomic) double threshold;

- (id)init;
- (int)mode;
- (double)preThreshold;
- (void)setMode:(int)arg1;
- (void)setPreThreshold:(double)arg1;
- (void)setSigma:(double)arg1;
- (void)setThreshold:(double)arg1;
- (void)setUniforms;
- (double)sigma;
- (double)threshold;

@end
