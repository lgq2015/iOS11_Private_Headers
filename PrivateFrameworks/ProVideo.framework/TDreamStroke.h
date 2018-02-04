/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamStroke : TDreamProgramWrapper {
    double  _sigma;
    int  sigmaUniform;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setSigma:(double)arg1;
- (void)setUniforms;
- (double)sigma;

@end