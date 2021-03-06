/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesPlayButtonView : LPComponentView <LPContentInsettable> {
    LPPlayButton * _button;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    LPiTunesPlaybackInformation * _playbackInformation;
    LPMusicPlayButtonStyle * _style;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2;
- (void)installPlaceholderButton;
- (void)installPreviewButton;
- (void)installiTunesButton;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateButton;
- (void)updateButtonForPodcast;
- (void)updateButtonForRadio;
- (void)updateButtonForSongOrAlbum;

@end
