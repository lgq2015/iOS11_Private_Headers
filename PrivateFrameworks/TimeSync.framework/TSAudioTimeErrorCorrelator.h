/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSAudioTimeErrorCorrelator : NSObject {
    id /* block */  _correlationBlock;
    long long  _maxCorrelationLength;
    double  _samplingRate;
    long long  _upscaleFactor;
}

@property (nonatomic, copy) id /* block */ correlationBlock;

- (void)_calculateUpsamplerCoefficients:(float**)arg1 length:(long long*)arg2;
- (id /* block */)correlationBlock;
- (void)dealloc;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;
- (void)setCorrelationBlock:(id /* block */)arg1;

@end
