/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartShadowsBlurParameters : NSObject {
    float  mKernelScale;
    long long  mNumPasses;
    float  mQuality;
    long long  mShadowSize;
}

@property (nonatomic) float kernelScale;
@property (nonatomic) long long numPasses;
@property (nonatomic) float quality;
@property (nonatomic) long long shadowSize;

+ (id)paramsWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4;

- (id)initWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4;
- (float)kernelScale;
- (long long)numPasses;
- (float)quality;
- (void)setKernelScale:(float)arg1;
- (void)setNumPasses:(long long)arg1;
- (void)setQuality:(float)arg1;
- (void)setShadowSize:(long long)arg1;
- (long long)shadowSize;

@end
