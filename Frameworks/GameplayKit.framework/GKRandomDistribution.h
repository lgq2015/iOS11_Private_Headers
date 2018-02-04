/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKRandomDistribution : NSObject <GKRandom> {
    long long  _highest;
    long long  _lowest;
    <GKRandom> * _source;
}

@property (nonatomic, readonly) long long highestValue;
@property (nonatomic, readonly) long long lowestValue;
@property (nonatomic, readonly) unsigned long long numberOfPossibleOutcomes;

+ (id)d20;
+ (id)d6;
+ (id)distributionForDieWithSideCount:(long long)arg1;
+ (id)distributionWithLowestValue:(long long)arg1 highestValue:(long long)arg2;

- (void).cxx_destruct;
- (long long)highestValue;
- (id)init;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (long long)lowestValue;
- (bool)nextBool;
- (long long)nextInt;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (float)nextUniform;
- (unsigned long long)numberOfPossibleOutcomes;

@end
