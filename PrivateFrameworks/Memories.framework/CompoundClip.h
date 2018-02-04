/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface CompoundClip : KenBurnsClip <CompoundClipInformation> {
    double  _idealPhotoDuration;
    KenBurnsClip * _kenBurnsClip;
    double  _maximumPhotoDuration;
    double  _minimumPhotoDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double idealPhotoDuration;
@property (nonatomic, retain) KenBurnsClip *kenBurnsClip;
@property (nonatomic) double maximumPhotoDuration;
@property (nonatomic) double minimumPhotoDuration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 betweenClips:(id)arg3;
- (id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 transitionEffectProperties:(id)arg3 betweenClips:(id)arg4;
- (id)containedClips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)expandsEditList;
- (double)idealPhotoDuration;
- (id)init;
- (id)initWithKenBurnsClip:(id)arg1;
- (id)kenBurnsClip;
- (double)maximumPhotoDuration;
- (double)minimumPhotoDuration;
- (void)setIdealPhotoDuration:(double)arg1;
- (void)setKenBurnsClip:(id)arg1;
- (void)setMaximumPhotoDuration:(double)arg1;
- (void)setMinimumPhotoDuration:(double)arg1;
- (void)takePropertiesFromKenBurnsClip:(id)arg1;
- (void)turnOffKenBurnsForClips:(id)arg1;

@end
