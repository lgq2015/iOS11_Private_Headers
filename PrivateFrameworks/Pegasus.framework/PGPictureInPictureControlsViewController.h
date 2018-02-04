/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPictureInPictureControlsViewController : UIViewController {
    UIButton * _actionButton;
    UIButton * _cancelButton;
    long long  _controlsSize;
    long long  _controlsStyle;
    long long  _controlsVisibilityCounter;
    bool  _controlsVisibilityNeedsUpdate;
    NSTimer * _controlsVisibilityTimer;
    <PGPictureInPictureControlsViewControllerDelegate> * _delegate;
    struct { 
        unsigned int pictureInPictureControlsViewControllerStopButtonTapped : 1; 
        unsigned int pictureInPictureControlsViewControllerActionButtonTapped : 1; 
        unsigned int pictureInPictureControlsViewControllerCancelButtonTapped : 1; 
        unsigned int pictureInPictureControlsViewControllerShouldHandleTapGesture : 1; 
        unsigned int pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture : 1; 
    }  _delegateRespondsTo;
    NSArray * _loadedTimeRanges;
    PGPlaybackProgress * _playbackProgress;
    PGPlaybackProgressIndicator * _playbackProgressIndicator;
    bool  _preventControlsVisibilityChangeAnimation;
    bool  _shouldHideControlsTemporarely;
    bool  _shouldShowControlsAfterUserInteraction;
    bool  _shouldShowControlsForUserInteraction;
    bool  _shouldShowControlsIfNeeded;
    bool  _showsAlternateActionButtonImage;
    bool  _showsControls;
    UIButton * _stopButton;
}

@property (nonatomic, readonly) long long controlsStyle;
@property (nonatomic) <PGPictureInPictureControlsViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *loadedTimeRanges;
@property (nonatomic, retain) PGPlaybackProgress *playbackProgress;
@property (nonatomic) bool showsAlternateActionButtonImage;

- (void).cxx_destruct;
- (id)_actionButtonBackgroundImage;
- (id)_actionButtonImage;
- (void)_actionButtonTapped:(id)arg1;
- (void)_addControlForUserInteractionObservation:(id)arg1;
- (id)_buttonImageWithName:(id)arg1;
- (id)_cancelButtonBackgroundImage;
- (id)_cancelButtonImage;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_handleDoubleDoubleTapGestureRecognizer:(id)arg1;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_handleSingleTapGestureRecognizer:(id)arg1;
- (void)_hideControlsForTouchUp;
- (void)_hideControlsIfPossible;
- (void)_hideControlsIfPossibleAfterDelayIfPlaying;
- (void)_hideControlsIfPossibleUntilFurtherUserInteraction;
- (void)_manageControlsSize;
- (void)_removeControlForUserInteractionObservation:(id)arg1;
- (void)_setControlsVisibilityNeedsUpdate;
- (void)_showControlsForTouchDown;
- (void)_showControlsIfNeeded;
- (void)_showControlsIfNeededAndHideIfPossibleAfterDelayIfPlaying;
- (void)_showControlsIfNeededAndHideIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1;
- (id)_stopButtonBackgroundImage;
- (id)_stopButtonImage;
- (void)_stopButtonTapped:(id)arg1;
- (void)_toggleControlsVisibilityForUserInteraction;
- (void)_updateControlsVisibility;
- (void)_updateControlsVisibilityIfNeeded;
- (void)_userInteractionObservationControlTouchDown:(id)arg1;
- (void)_userInteractionObservationControlTouchUp:(id)arg1;
- (long long)controlsStyle;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlsStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)loadedTimeRanges;
- (id)playbackProgress;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setPlaybackProgress:(id)arg1;
- (void)setShowsAlternateActionButtonImage:(bool)arg1;
- (bool)showsAlternateActionButtonImage;
- (void)startShowingControlsAnimated:(bool)arg1;
- (void)stopShowingControlsAnimated:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
