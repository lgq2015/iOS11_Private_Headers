/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEdit_TrimController : NSObject {
    bool  _allowMoreThanMaxVideo;
    <MiroAutoEditDelegate> * _delegate;
    int  _duration;
    bool  _useNonSpecialDurations;
}

@property (nonatomic) bool allowMoreThanMaxVideo;
@property (nonatomic, readonly) MiroBlueprint *blueprint;
@property (nonatomic) <MiroAutoEditDelegate> *delegate;
@property (nonatomic) int duration;
@property (nonatomic, readonly) MiroAutoEditLogger *logger;
@property (nonatomic, readonly) MiroMemory *memory;
@property (nonatomic, readonly) Project *project;
@property (nonatomic) bool useNonSpecialDurations;

- (void).cxx_destruct;
- (void)_clipClip:(id)arg1;
- (void)_fitToDuration;
- (id)_rangesForClipIncorporatingUserTrim:(id)arg1;
- (void)_saveFreezeBits;
- (bool)allowMoreThanMaxVideo;
- (id)blueprint;
- (bool)clipIsTitleCard:(id)arg1;
- (id)delegate;
- (int)duration;
- (int)durationOfUserTrimForClip:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (int)lastClipInPoint;
- (void)layoutProject;
- (id)logger;
- (int)maximumBlueprintDurationForClip:(id)arg1;
- (id)memory;
- (int)minimumBlueprintDurationForClip:(id)arg1;
- (id)project;
- (void)setAllowMoreThanMaxVideo:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setDuration:(int)arg1 andStartTimeForClip:(id)arg2;
- (void)setUseNonSpecialDurations:(bool)arg1;
- (int)shrinkAndStretchClips:(id)arg1;
- (bool)useNonSpecialDurations;

@end
