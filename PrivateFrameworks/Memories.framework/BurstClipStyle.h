/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface BurstClipStyle : NSObject {
    BurstClip * _burstClip;
}

@property (nonatomic) BurstClip *burstClip;
@property (nonatomic, readonly) double idealPhotoDuration;
@property (nonatomic, readonly) double idealVideoDuration;
@property (nonatomic, readonly) double maximumPhotoDuration;
@property (nonatomic, readonly) double minimumPhotoDuration;
@property (nonatomic, readonly) double minimumVideoDuration;

- (void).cxx_destruct;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (id)burstClip;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)containedClipsWithoutTransitions;
- (int)duration;
- (double)idealDuration;
- (double)idealPhotoDuration;
- (double)idealVideoDuration;
- (bool)isSupported;
- (double)maximumDuration;
- (double)maximumPhotoDuration;
- (double)minimumDuration;
- (double)minimumPhotoDuration;
- (double)minimumVideoDuration;
- (double)projectAspectRatio;
- (int)projectFrameRate;
- (void)setBurstClip:(id)arg1;
- (id)sourceClips;
- (void)turnOffKenBurnsForClips:(id)arg1;

@end
