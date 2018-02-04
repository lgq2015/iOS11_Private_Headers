/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMorpher : NSObject <NSSecureCoding, SCNAnimatable> {
    SCNOrderedDictionary * _animations;
    NSMutableDictionary * _bindings;
    long long  _calculationMode;
    NSArray * _channelTargetCounts;
    NSArray * _channelTargetWeights;
    unsigned int  _isPresentationInstance;
    struct __C3DMorph { } * _morpher;
    NSString * _name;
    NSDictionary * _targetNameToIndexes;
    NSArray * _targets;
    bool  _unifyNormal;
    bool  _useSparseTargets;
    NSMutableArray * _weights;
}

@property (readonly) NSArray *animationKeys;
@property (nonatomic) long long calculationMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *targets;
@property bool unifiesNormals;
@property (nonatomic, retain) NSArray *weights;

+ (Class)SCNUID_classForElementOfArray:(id)arg1;
+ (id)morpher;
+ (id)morpherWithMorphRef:(struct __C3DMorph { }*)arg1;
+ (bool)supportsSecureCoding;
+ (id)weightIndexStringForIndex:(long long)arg1;

- (const void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfSCNMorpher:(id)arg1;
- (void)_customEncodingOfSCNMorpher:(id)arg1;
- (void)_didDecodeSCNMorpher:(id)arg1;
- (bool)_isUsingSparseTargets;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (long long)_weightIndexForTargetNamed:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (long long)calculationMode;
- (id)channelTargetCounts;
- (id)channelTargetWeights;
- (void)convertToAdditiveWithBaseGeometry:(id)arg1;
- (void)convertToSparseWithBaseGeometry:(id)arg1;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initPresentationMorpherWithMorphRef:(struct __C3DMorph { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMorphRef:(struct __C3DMorph { }*)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (struct __C3DMorph { }*)morphRef;
- (id)name;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (id)presentationMorpher;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setCalculationMode:(long long)arg1;
- (void)setChannelTargetCounts:(id)arg1;
- (void)setChannelTargetWeights:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldMorphNormals:(bool)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setTargets:(id)arg1;
- (void)setUnifiesNormals:(bool)arg1;
- (void)setWantsCPUMorphing:(bool)arg1;
- (void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2;
- (void)setWeight:(double)arg1 forTargetNamed:(id)arg2;
- (void)setWeights:(id)arg1;
- (bool)shouldMorphNormals;
- (id)targets;
- (void)unbindAnimatablePath:(id)arg1;
- (bool)unifiesNormals;
- (bool)wantsCPUMorphing;
- (double)weightForTargetAtIndex:(unsigned long long)arg1;
- (double)weightForTargetNamed:(id)arg1;
- (id)weights;

@end
