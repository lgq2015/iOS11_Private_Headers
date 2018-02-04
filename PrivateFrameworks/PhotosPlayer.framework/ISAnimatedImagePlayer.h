/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISAnimatedImagePlayer : NSObject <ISChangeObserver> {
    bool  _allowFrameDrops;
    struct CGImage { } * _currentImage;
    unsigned long long  _displayedFrameIndex;
    bool  _hasFinishedAnimating;
    bool  _hasStartedAnimating;
    ISAnimatedImage * _image;
    bool  _infiniteLoop;
    bool  _playing;
    double  _previousFrameTime;
    unsigned long long  _remainingLoopCount;
    double  _timeAccumulator;
    ISAnimatedImageTimer * _timer;
    NSHashTable * _weakDestinations;
}

@property (nonatomic) bool allowFrameDrops;
@property (nonatomic, readonly) ISAnimatedImage *animatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayedFrameIndex;
@property (readonly) unsigned long long hash;
@property (getter=isPlaying, nonatomic) bool playing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_anyDestinationIsReady;
- (void)_notifyDestinationsOfAnimationEnd;
- (void)_notifyDestinationsOfAnimationStart;
- (void)_notifyDestinationsOfFrameChange;
- (void)_resetAnimationState;
- (void)_seekToBeginning;
- (void)_setCurrentFrame:(struct CGImage { }*)arg1;
- (bool)_shouldAnimate;
- (bool)allowFrameDrops;
- (id)animatedImage;
- (void)animationTimerFired:(double)arg1;
- (struct CGImage { }*)currentImage;
- (void)dealloc;
- (unsigned long long)displayedFrameIndex;
- (id)initWithAnimatedImage:(id)arg1;
- (bool)isPlaying;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)registerDestination:(id)arg1;
- (void)setAllowFrameDrops:(bool)arg1;
- (void)setDisplayedFrameIndex:(unsigned long long)arg1;
- (void)setPlaying:(bool)arg1;
- (void)unregisterDestination:(id)arg1;
- (void)updateAnimation;

@end
