/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCVideoAttachmentViewController : NCAttachmentViewController {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NCMediaPlayPauseButton * _playPauseButton;
    AVPlayerViewController * _playerViewController;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) NCMediaPlayPauseButton *playPauseButton;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;

- (void).cxx_destruct;
- (void)_mediaPlayPauseButtonTapped:(id)arg1;
- (void)_mediaPlayPauseButtonUpdateSize;
- (void)_pause;
- (void)_play;
- (void)_rewind;
- (struct CGSize { double x1; double x2; })_sizeForVideoAsset:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;
- (id)playPauseButton;
- (id)playerViewController;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
