/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate> {
    CKAudioController * _audioController;
    CKAudioMediaObject * _audioMediaObject;
    UIImageView * _balloonImageView;
    UIVisualEffectView * _blurView;
    <CKMessageEntryRecordedAudioViewDelegate> * _delegate;
    UIButton * _deleteButton;
    double  _time;
    NSString * _timeFormat;
    UILabel * _timeLabel;
    UIImage * _waveformImage;
    UIImageView * _waveformImageView;
}

@property (nonatomic, retain) CKAudioController *audioController;
@property (nonatomic, retain) CKAudioMediaObject *audioMediaObject;
@property (nonatomic, retain) UIImageView *balloonImageView;
@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKMessageEntryRecordedAudioViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *deleteButton;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPlaying;
@property (readonly) Class superclass;
@property (nonatomic) double time;
@property (nonatomic, copy) NSString *timeFormat;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) UIImage *waveformImage;
@property (nonatomic, retain) UIImageView *waveformImageView;

- (void).cxx_destruct;
- (id)audioController;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (id)audioMediaObject;
- (id)balloonImageView;
- (id)blurView;
- (void)dealloc;
- (id)delegate;
- (id)deleteButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlaying;
- (void)layoutSubviews;
- (void)pause;
- (void)play;
- (void)setAudioController:(id)arg1;
- (void)setAudioMediaObject:(id)arg1;
- (void)setBalloonImageView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setTimeFormat:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveformImage:(id)arg1;
- (void)setWaveformImageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)time;
- (id)timeFormat;
- (id)timeLabel;
- (void)updateProgress;
- (void)updateTimeString;
- (id)waveformImage;
- (id)waveformImageView;

@end
