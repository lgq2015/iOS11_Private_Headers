/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKCompositeBehavior : GKBehavior {
    NSMutableArray * _subBehaviorWeights;
    NSMutableArray * _subBehaviors;
}

@property (readonly) long long behaviorCount;

+ (id)behaviorWithBehaviors:(id)arg1;
+ (id)behaviorWithBehaviors:(id)arg1 andWeights:(id)arg2;

- (void).cxx_destruct;
- (long long)behaviorCount;
- (void)getTotalForce:(double)arg1 agent:(id)arg2;
- (id)init;
- (id)initWithBehaviors:(id)arg1;
- (id)initWithBehaviors:(id)arg1 andWeights:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllBehaviors;
- (void)removeBehavior:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setWeight:(float)arg1 forBehavior:(id)arg2;
- (float)weightForBehavior:(id)arg1;

@end
