/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface BurstClipStyleNone : BurstClipStyle

- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)containedClipsWithoutTransitions;
- (double)idealDuration;
- (bool)isSupported;
- (double)maximumDuration;
- (double)minimumDuration;

@end
