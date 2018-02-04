/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIVideoPlayerViewController : AVPlayerViewController {
    void * _itemStatusObserverContext;
    bool  _observingItemStatus;
    bool  _observingPlayback;
    bool  _observingPlayerStatus;
    bool  _observingViewController;
    void * _playerStatusObserverContext;
    NSString * _savedAudioSessionCategory;
    unsigned long long  _savedAudioSessionCategoryOptions;
    <SiriUIVideoPlayerViewControllerDelegate> * _videoPlayerControllerDelegate;
}

@property (nonatomic, readonly) bool shouldPlayHighResolutionContent;
@property (nonatomic) <SiriUIVideoPlayerViewControllerDelegate> *videoPlayerControllerDelegate;

- (void).cxx_destruct;
- (void)_playbackDidFinish:(id)arg1;
- (void)_registerObservers;
- (void)_removeObservers;
- (void)_restoreAudioPlaybackCategoryAndOptions;
- (void)_updateAudioSessionCategory;
- (void)dealloc;
- (void)doneButtonTapped:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setPlayer:(id)arg1;
- (void)setVideoPlayerControllerDelegate:(id)arg1;
- (bool)shouldPlayHighResolutionContent;
- (id)videoPlayerControllerDelegate;

@end
