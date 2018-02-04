/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLLaplaceSampler : NSObject <PMLSampler> {
    float  _magnitude;
    struct { 
        unsigned long long s[2]; 
    }  _rng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addNoise:(float*)arg1 count:(unsigned long long)arg2 scale:(float)arg3;
- (id)initWithMagnitude:(float)arg1;
- (id)initWithMagnitude:(float)arg1 seed:(unsigned long long)arg2;
- (float)sample;

@end
