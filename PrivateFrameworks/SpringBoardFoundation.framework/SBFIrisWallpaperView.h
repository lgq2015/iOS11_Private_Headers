/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <ISPlayerViewDelegatePrivate, SBFIrisWallpaperView> {
    long long  _currentMode;
    UIImageView * _imageView;
    <SBFIrisWallpaperViewDelegate> * _irisDelegate;
    bool  _isInteracting;
    long long  _playbackState;
    UIGestureRecognizer * _playerGestureRecognizer;
    long long  _playerState;
    ISPlayerView * _playerView;
    ISAVPlayer * _prewiredAVPlayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _prewiredSize;
    double  _stillTimeInVideo;
    bool  _useRewindPlaybackStyle;
    NSURL * _videoFileURL;
}

@property (nonatomic, readonly) long long currentIrisMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBFIrisWallpaperViewDelegate> *irisDelegate;
@property (nonatomic, readonly) long long irisPlaybackState;
@property (nonatomic, readonly) bool isIrisInteracting;
@property (nonatomic, readonly) double stillTimeInVideo;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *videoFileURL;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_populateContentView;
- (void)_resetPrewiredAVPlayer;
- (void)_setImage:(id)arg1;
- (void)_setPlayerGestureRecognizer:(id)arg1;
- (void)_setupContentView;
- (bool)_setupContentViewForMode:(long long)arg1;
- (long long)currentIrisMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 variant:(long long)arg4 options:(unsigned long long)arg5 wallpaperSettingsProvider:(id)arg6;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 wallpaperVideoURL:(id)arg4 stillTimeInVideo:(double)arg5 staticImageOptions:(unsigned long long)arg6 variant:(long long)arg7 prewireMemory:(bool)arg8 useRewindPlaybackStyle:(bool)arg9 wallpaperSettingsProvider:(id)arg10;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(long long)arg3;
- (id)irisDelegate;
- (id)irisGestureRecognizer;
- (long long)irisPlaybackState;
- (bool)isIrisInteracting;
- (void)playerViewGestureRecognizerDidChange:(id)arg1;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)setIrisDelegate:(id)arg1;
- (double)stillTimeInVideo;
- (void)switchToIrisMode:(long long)arg1;
- (id)videoFileURL;
- (id)videoPlayerForPlayerView:(id)arg1;
- (long long)wallpaperType;

@end
