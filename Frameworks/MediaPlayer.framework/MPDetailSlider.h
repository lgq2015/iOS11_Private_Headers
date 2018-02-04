/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPDetailSlider : UISlider <MPDetailScrubControllerDelegate, MPDetailedScrubbing> {
    bool  _allowsScrubbing;
    bool  _autoscrubActive;
    NSTimer * _autoscrubTimer;
    double  _availableDuration;
    bool  _canCommit;
    double  _currentTime;
    UILabel * _currentTimeInverseLabel;
    UILabel * _currentTimeLabel;
    <MPDetailSliderDelegate> * _delegate;
    double  _detailScrubbingVerticalRange;
    UIView * _downloadingTrackOverlay;
    double  _duration;
    AVTimeFormatter * _formatter;
    UIImageView * _glowDetailScrubImageView;
    bool  _isTracking;
    double  _maxTrackWidth;
    double  _minTimeLabelWidth;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousLocationInView;
    MPDetailScrubController * _scrubController;
    long long  _style;
    UIImageView * _thumbImageView;
    long long  _timeLabelStyle;
    double  _trackInset;
}

@property (nonatomic) bool allowsDetailScrubbing;
@property (nonatomic) bool allowsScrubbing;
@property (nonatomic) double availableDuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPDetailSliderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool detailScrubbingAvailableForCurrentDuration;
@property (nonatomic) double detailScrubbingVerticalRange;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedScrubSpeedText;
@property (nonatomic) double minTimeLabelWidth;
@property (readonly) Class superclass;
@property (nonatomic) long long timeLabelStyle;

+ (Class)labelClass;

- (void).cxx_destruct;
- (void)_autoscrubTick:(id)arg1;
- (id)_colorSliceImageWithColor:(id)arg1 height:(double)arg2;
- (void)_commitValue;
- (id)_modernThumbImageWithColor:(id)arg1 height:(double)arg2 includeShadow:(bool)arg3;
- (void)_resetScrubInfo;
- (void)_setValueWhileTracking:(float)arg1 duration:(double)arg2;
- (void)_setupControlsForStyle;
- (id)_stringForCurrentTime:(double)arg1;
- (id)_stringForInverseCurrentTime:(double)arg1;
- (id)_stringForTime:(double)arg1 elapsed:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_thumbHitEdgeInsets;
- (void)_updateForAvailableDuraton;
- (void)_updateTimeDisplayForTime:(double)arg1;
- (void)_updateTimeDisplayForTime:(double)arg1 force:(bool)arg2;
- (void)_updateTrackInset;
- (bool)allowsDetailScrubbing;
- (bool)allowsScrubbing;
- (double)availableDuration;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (id)currentThumbImage;
- (void)dealloc;
- (id)delegate;
- (void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (bool)detailScrubbingAvailableForCurrentDuration;
- (double)detailScrubbingVerticalRange;
- (double)duration;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2 maxTrackWidth:(double)arg3;
- (bool)isTracking;
- (void)layoutSubviews;
- (id)localizedScrubSpeedText;
- (double)minTimeLabelWidth;
- (void)setAllowsDetailScrubbing:(bool)arg1;
- (void)setAllowsScrubbing:(bool)arg1;
- (void)setAvailableDuration:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailScrubbingVerticalRange:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMinTimeLabelWidth:(double)arg1;
- (void)setTimeLabelStyle:(long long)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (void)setValue:(float)arg1 duration:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbHitRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)timeLabelFontForStyle:(long long)arg1;
- (long long)timeLabelStyle;
- (id)timeLabelTextColorForStyle:(long long)arg1;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
