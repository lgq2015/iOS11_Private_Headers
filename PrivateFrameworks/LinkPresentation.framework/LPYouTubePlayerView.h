/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPYouTubePlayerView : UIView <UIScrollViewDelegate> {
    <LPYouTubePlayerDelegate> * _delegate;
    double  _endTime;
    bool  _muted;
    LPYouTubePlayerScriptMessageHandler * _scriptMessageHandler;
    bool  _showsControls;
    double  _startTime;
    bool  _startsPlayingAutomatically;
    long long  _state;
    NSString * _videoID;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LPYouTubePlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endTime;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) bool showsControls;
@property (nonatomic) double startTime;
@property (nonatomic) bool startsPlayingAutomatically;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_parameterScript;
- (void)createVideoPlayerView;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveScriptMessage:(id)arg1;
- (void)dispatchErrorForInvalidURL;
- (double)endTime;
- (void)enterFullScreen;
- (void)exitFullScreen;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMuted;
- (void)layoutSubviews;
- (void)loadVideoWithEmbedURL:(id)arg1;
- (void)loadVideoWithID:(id)arg1;
- (void)loadVideoWithURL:(id)arg1;
- (void)pause;
- (void)play;
- (void)scrollViewDidScroll:(id)arg1;
- (void)seekTo:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setMuted:(bool)arg1;
- (void)setShowsControls:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStartsPlayingAutomatically:(bool)arg1;
- (bool)showsControls;
- (double)startTime;
- (bool)startsPlayingAutomatically;

@end
