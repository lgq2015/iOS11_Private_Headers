/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKVoronoiNoiseSource : GKNoiseSource {
    double  _displacement;
    bool  _distanceEnabled;
    double  _frequency;
    int  _seed;
}

@property (nonatomic) double displacement;
@property (getter=isDistanceEnabled, nonatomic) bool distanceEnabled;
@property (nonatomic) double frequency;
@property (nonatomic) int seed;

+ (id)voronoiNoiseWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(bool)arg3 seed:(int)arg4;

- (id)cloneModule;
- (double)displacement;
- (double)frequency;
- (id)init;
- (id)initWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(bool)arg3 seed:(int)arg4;
- (bool)isDistanceEnabled;
- (int)seed;
- (void)setDisplacement:(double)arg1;
- (void)setDistanceEnabled:(bool)arg1;
- (void)setFrequency:(double)arg1;
- (void)setSeed:(int)arg1;
- (double)valueAt;

@end
