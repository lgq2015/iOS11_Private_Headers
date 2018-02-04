/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKWaveformProgressView : CKBalloonImageView {
    BOOL  _color;
    double  _currentTime;
    IMManualUpdater * _displayUpdater;
    double  _duration;
    bool  _played;
    bool  _playing;
    UIImage * _waveform;
}

@property (nonatomic) BOOL color;
@property (nonatomic) double currentTime;
@property (nonatomic, retain) IMManualUpdater *displayUpdater;
@property (nonatomic) double duration;
@property (getter=isPlayed, nonatomic) bool played;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, retain) UIImage *waveform;

- (void).cxx_destruct;
- (BOOL)color;
- (double)currentTime;
- (id)displayUpdater;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlayed;
- (bool)isPlaying;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)setColor:(BOOL)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDisplayUpdater:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)setPlayed:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setWaveform:(id)arg1;
- (id)waveform;

@end
