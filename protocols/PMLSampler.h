/* made by EzioChiu.
 */

@protocol PMLSampler <NSObject>

@required

- (void)addNoise:(float*)arg1 count:(unsigned long long)arg2 scale:(float)arg3;
- (id)initWithMagnitude:(float)arg1;
- (float)sample;

@end
