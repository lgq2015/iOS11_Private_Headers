/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCollectionNode : SKNode {
    id /* block */  _animateBlock;
    SKAction * _appearAction;
    SKAction * _disappearAction;
    NSArray * _nodes;
    double  _radius;
}

@property (nonatomic, copy) id /* block */ animateBlock;
@property (nonatomic, retain) SKAction *appearAction;
@property (nonatomic, retain) SKAction *disappearAction;
@property (nonatomic, retain) NSArray *nodes;
@property (nonatomic) double radius;

+ (id)hours12;
+ (id)hours12ZeusWithFont:(long long)arg1;
+ (id)hours4;
+ (id)hoursChrono;
+ (float)innerRadius;
+ (id)labels30Chrono;
+ (id)labels3Chrono;
+ (id)labels3_10_90Chrono;
+ (id)labels60Chrono;
+ (id)labels6Chrono;
+ (id)labels6_10_40Chrono;
+ (id)minutesPills;
+ (id)minutesUtilitarian;
+ (float)outerRadius;
+ (id)ticks120;
+ (id)ticks240;
+ (id)ticks30Chrono;
+ (id)ticks60;
+ (id)ticks60Chrono;
+ (id)ticks60Utilitarian;
+ (id)ticks6Chrono;
+ (id)ticksColorAnalog;
+ (id)ticksPills;

- (void).cxx_destruct;
- (id /* block */)animateBlock;
- (id)appearAction;
- (void)appearAnimated;
- (void)applyAppearanceFraction:(double)arg1;
- (void)applyAppearanceFraction:(double)arg1 inverted:(bool)arg2;
- (void)createSubNodes;
- (id)disappearAction;
- (void)disappearAnimated;
- (void)fade:(double)arg1 inverted:(bool)arg2;
- (void)fadeAndScale:(double)arg1;
- (void)fadeNodes:(double)arg1;
- (void)fadeNodes:(double)arg1 except:(id)arg2;
- (id)init;
- (id)initWithName:(id)arg1 nodes:(id)arg2 animateBlock:(id /* block */)arg3;
- (id)nodes;
- (double)radius;
- (void)scaleNodes:(double)arg1;
- (void)scaleNodes:(double)arg1 andResetNodesAtIndices:(id)arg2;
- (void)scaleNodes:(id)arg1 fraction:(double)arg2;
- (void)setAnimateBlock:(id /* block */)arg1;
- (void)setAppearAction:(id)arg1;
- (void)setDisappearAction:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 rotate:(bool)arg3 round:(bool)arg4;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 scale:(double)arg3 rotate:(bool)arg4 round:(bool)arg5;

@end
