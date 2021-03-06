/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXScreenDimmingManager : NSObject <SXVideoPlaybackObserver> {
    unsigned long long  _interest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long interest;
@property (readonly) Class superclass;

- (void)decreaseInterest;
- (void)disableScreenDimming;
- (void)enableScreenDimming;
- (void)increaseInterest;
- (unsigned long long)interest;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinatorPausedPlayback:(id)arg1;
- (void)playbackCoordinatorResumedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)setInterest:(unsigned long long)arg1;

@end
