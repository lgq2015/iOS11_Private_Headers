/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKNoiseMap : NSObject {
    NSDictionary * _gradientColors;
    float * _map;
    void _origin;
    void _sampleCount;
    bool  _seamless;
    void _size;
}

@property (nonatomic, copy) NSDictionary *gradientColors;
@property (nonatomic, readonly) void origin;
@property (nonatomic, readonly) void sampleCount;
@property (getter=isSeamless, nonatomic, readonly) bool seamless;
@property (nonatomic, readonly) void size;

+ (id)noiseMapWithNoise:(id)arg1;
+ (id)noiseMapWithNoise:(void *)arg1 size:(void *)arg2 origin:(void *)arg3 sampleCount:(void *)arg4 seamless:(void *)arg5; // needs 5 arg types, found 2: id, bool

- (void).cxx_destruct;
- (id)__colorData;
- (void)dealloc;
- (id)gradientColors;
- (id)init;
- (id)initWithNoise:(id)arg1;
- (id)initWithNoise:(void *)arg1 size:(void *)arg2 origin:(void *)arg3 sampleCount:(void *)arg4 seamless:(void *)arg5; // needs 5 arg types, found 2: id, bool
- (float)interpolatedValueAtPosition;
- (bool)isSeamless;
- (int)mapIndexX:(int)arg1 y:(int)arg2;
- (void)origin;
- (void)sampleCount;
- (void)setGradientColors:(id)arg1;
- (void)setValue:(void *)arg1 atPosition:(void *)arg2; // needs 2 arg types, found 1: float
- (void)size;
- (float)valueAtPosition;

@end
