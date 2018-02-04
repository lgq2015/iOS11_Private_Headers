/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPictureInPictureController : NSObject <AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate> {
    bool  _allowsPictureInPicturePlayback;
    <AVPictureInPictureControllerDelegate> * _delegate;
    struct { 
        bool pictureInPictureControllerWillStartPictureInPicture; 
        bool pictureInPictureControllerDidStartPictureInPicture; 
        bool pictureInPictureController_failedToStartPictureInPictureWithError; 
        bool pictureInPictureControllerWillStopPictureInPicture; 
        bool pictureInPictureControllerDidStopPictureInPicture; 
        bool pictureInPictureController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler; 
    }  _delegateRespondsTo;
    NSObject<OS_dispatch_source> * _fullScreenCheckTimer;
    bool  _isFullScreen;
    bool  _isPlaying;
    PGPictureInPictureProxy * _pictureInPictureProxy;
    AVPictureInPictureViewController * _pictureInPictureViewController;
    AVPlayerController * _playerController;
    AVPlayerLayer * _playerLayer;
    __AVPlayerLayerView * _playerLayerView;
}

@property (nonatomic) bool allowsPictureInPicturePlayback;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPictureInPictureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPictureInPictureActive, nonatomic, readonly) bool pictureInPictureActive;
@property (getter=isPictureInPicturePossible, nonatomic, readonly) bool pictureInPicturePossible;
@property (getter=isPictureInPictureSuspended, nonatomic, readonly) bool pictureInPictureSuspended;
@property (nonatomic, readonly) bool pictureInPictureWasStartedWhenEnteringBackground;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (readonly) Class superclass;

+ (bool)isPictureInPictureSupported;
+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;
+ (id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+ (id)pictureInPictureButtonStartImageCompatibleWithTraitCollection:(id)arg1;
+ (id)pictureInPictureButtonStopImageCompatibleWithTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_checkIsFullScreenAndUpdatePictureInPictureShouldStartWhenEnteringBackground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_playerLayerVideoRectInScreen;
- (void)_updatePictureInPictureShouldStartWhenEnteringBackground;
- (void)_updatePlaybackProgress;
- (id)_window;
- (bool)allowsPictureInPicturePlayback;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithPlayerLayer:(id)arg1;
- (id)initWithPlayerLayerView:(id)arg1;
- (bool)isPictureInPictureActive;
- (bool)isPictureInPicturePossible;
- (bool)isPictureInPictureSuspended;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;
- (void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
- (void)pictureInPictureViewControllerViewDidAppear:(id)arg1;
- (void)pictureInPictureViewControllerViewWillDisappear:(id)arg1;
- (bool)pictureInPictureWasStartedWhenEnteringBackground;
- (id)playerController;
- (id)playerLayer;
- (void)playerLayerLayoutDidChange;
- (void)setAllowsPictureInPicturePlayback:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)stopPictureInPictureEvenWhenInBackground;

@end
