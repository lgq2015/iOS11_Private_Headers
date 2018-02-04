/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDProgressView : UIView {
    CADisplayLink * _displayLink;
    struct { 
        double snapshotTime; 
        double startTime; 
        double endTime; 
        double duration; 
        double elapsedDuration; 
        float rate; 
        float defaultRate; 
        bool isLiveContent; 
        bool isLoading; 
    }  _durationSnapshot;
    double  _lastTargetTimestamp;
    UILabel * _liveLabel;
    MCDProgressBarView * _progressBarView;
    UILabel * _timeLabel;
    UILabel * _timeRemainingLabel;
}

@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; } durationSnapshot;

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_displayLinkTick:(id)arg1;
- (void)_updateLabelsForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)_updateProgressForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)didMoveToWindow;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })durationSnapshot;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDurationSnapshot:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })arg1;

@end
