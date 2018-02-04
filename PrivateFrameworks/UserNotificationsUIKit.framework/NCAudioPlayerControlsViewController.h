/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAudioPlayerControlsViewController : UIViewController <MPDetailSliderDelegate, NCAudioPlayerControllerDelegate, NCAudioPlayerControlsDelegate> {
    NSURL * _URL;
    NCAudioPlayerController * _playerController;
    NCAudioPlayerControlsView * _playerControlsView;
}

@property (nonatomic, retain) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCAudioPlayerController *playerController;
@property (nonatomic, retain) NCAudioPlayerControlsView *playerControlsView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)playbackControls:(id)arg1 didRequestState:(long long)arg2;
- (id)playerController;
- (void)playerController:(id)arg1 didChangeToCurrentTime:(float)arg2;
- (void)playerController:(id)arg1 didChangeToDuration:(double)arg2;
- (void)playerController:(id)arg1 didChangeToPlaybackState:(long long)arg2;
- (void)playerController:(id)arg1 didChangeToStatus:(long long)arg2;
- (void)playerController:(id)arg1 didSeekToTime:(float)arg2;
- (id)playerControlsView;
- (void)setPlayerController:(id)arg1;
- (void)setPlayerControlsView:(id)arg1;
- (void)setURL:(id)arg1;

@end
