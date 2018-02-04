/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMovieRenderer : KNBuildRenderer <TSKMediaPlayerControllerDelegate> {
    <TSDMovieHUDViewController> * _viewController;
    KNBuildRenderer * mBuildInRenderer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mFrameInContainerView;
    unsigned int  mHasMoviePlaybackStarted;
    unsigned int  mHasPendingTogglePlayingControl;
    unsigned int  mIsObservingVideoLayerReadyForDisplay;
    unsigned int  mIsTeardownCompletionBlockPending;
    SEL  mMovieStartCallbackSelector;
    id  mMovieStartCallbackTarget;
    unsigned int  mNeedsPlaybackAtStartTime;
    unsigned int  mNeedsToSendBuildEndCallback;
    unsigned int  mNeedsToSendMovieStartCallback;
    unsigned int  mPendingTogglePlayingControlStartsPlaying;
    double  mPlaybackAtStartTimePauseOffset;
    double  mPlaybackAtStartTimePauseTime;
    NSObject<TSKMediaPlayerController> * mPlayerController;
    unsigned int  mShouldMoviePlaybackEndOnCompletion;
    double  mStartTime;
    CALayer * mVideoLayer;
    unsigned int  mWasMoviePlayingBeforeAnimationPause;
}

@property (nonatomic) KNBuildRenderer *buildInRenderer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMoviePlaybackStarted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<NSCopying> *movieTimelineMovieIdentifier;
@property (nonatomic, readonly) CALayer *offscreenVideoLayer;
@property (nonatomic, readonly) NSObject<TSKMediaPlayerController> *playerController;
@property (readonly) Class superclass;
@property (nonatomic, retain) <TSDMovieHUDViewController> *viewController;

+ (id)movieInfoForMovieTimelineMovieIdentifier:(id)arg1;
+ (id)movieTimelineMovieIdentifierForMovieInfo:(id)arg1;

- (bool)addAnimationsAtLayerTime:(double)arg1;
- (void)animateAfterDelay:(double)arg1;
- (void)applyMovieControl:(long long)arg1;
- (id)buildInRenderer;
- (void)dealloc;
- (void)forceRemoveAnimations;
- (bool)hasMoviePlaybackStarted;
- (id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5;
- (void)interruptAndReset;
- (id)movieTimelineMovieIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)offscreenVideoLayer;
- (void)p_applyActionEffect:(id)arg1;
- (void)p_cancelPlaybackAtStartTime;
- (struct CGImage { }*)p_copyCurrentVideoFrameImage;
- (struct CGImage { }*)p_copyCurrentVideoFrameImageUsingAVAssetImageGenerator;
- (void)p_didEndMoviePlayback;
- (void)p_didStartMoviePlayback;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_schedulePlaybackAtStartTime;
- (void)p_setupPlayerController;
- (void)p_setupReflectionAndMaskingOnMovieTexture:(id)arg1 strokeTexture:(id)arg2 reflectionMaskTexture:(id)arg3 frameMaskTexture:(id)arg4;
- (void)p_setupVideoLayer;
- (void)p_showVideoLayer;
- (void)p_startMoviePlaybackIfNeeded;
- (void)p_startPlaybackAtStartTime;
- (void)p_teardownUpdatingTexture:(bool)arg1;
- (void)p_unschedulePlaybackAtStartTime;
- (void)pauseAnimations;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (id)playerController;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(bool)arg1;
- (void)resumeAnimationsIfPaused;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setBuildInRenderer:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)stopAnimations;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (id)viewController;

@end
