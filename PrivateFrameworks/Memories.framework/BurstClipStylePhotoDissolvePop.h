/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface BurstClipStylePhotoDissolvePop : BurstClipStylePhoto

- (unsigned long long)_idealNumberOfContainedClips;
- (unsigned long long)_maximumNumberOfContainedClips;
- (unsigned long long)_minimumNumberOfContainedClips;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (double)clipLastClipRatio;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)containedClipsWithoutTransitions;
- (double)idealDuration;
- (double)idealLastClipDuration;
- (double)idealRegularClipDuration;
- (double)maximumDuration;
- (double)maximumLastClipDuration;
- (double)maximumRegularClipDuration;
- (double)minimumDuration;
- (double)minimumLastClipDuration;
- (double)minimumRegularClipDuration;

@end
