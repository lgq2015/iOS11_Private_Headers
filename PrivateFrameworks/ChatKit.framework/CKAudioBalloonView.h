/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioBalloonView : CKColoredBalloonView <CKAudioBalloonView> {
    double  _duration;
    bool  _played;
    bool  _playing;
    CKAudioProgressView * _progressView;
    double  _time;
    UILabel * _timeLabel;
    CKWaveformProgressView * _waveformProgressView;
}

@property (getter=isControlHidden, nonatomic) bool controlHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (getter=isPlayed, nonatomic) bool played;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, retain) CKAudioProgressView *progressView;
@property (readonly) Class superclass;
@property (nonatomic) double time;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic) long long waveformContentMode;
@property (nonatomic, retain) CKWaveformProgressView *waveformProgressView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isControlHidden;
- (bool)isPlayed;
- (bool)isPlaying;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (id)progressView;
- (void)setControlHidden:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setPlayed:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setProgressView:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveform:(id)arg1;
- (void)setWaveformContentMode:(long long)arg1;
- (void)setWaveformProgressView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (double)time;
- (id)timeLabel;
- (void)updateProgress;
- (void)updateTimeString;
- (long long)waveformContentMode;
- (id)waveformProgressView;

@end
