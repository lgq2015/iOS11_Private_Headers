/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKElapsedTimeView : UIView {
    UIImageView * __recordingImageView;
    NSDate * __startTime;
    UILabel * __timeLabel;
    NSTimer * __updateTimer;
}

@property (nonatomic, readonly) UIImageView *_recordingImageView;
@property (nonatomic, readonly) NSDate *_startTime;
@property (nonatomic, readonly) UILabel *_timeLabel;
@property (nonatomic, readonly) NSTimer *_updateTimer;

- (void).cxx_destruct;
- (void)_beginRecordingAnimation;
- (void)_commonCMKElapsedTimeViewInitialization;
- (void)_endRecordingAnimation;
- (id)_recordingImageView;
- (void)_setStartTime:(id)arg1;
- (id)_startTime;
- (id)_timeLabel;
- (void)_update:(id)arg1;
- (id)_updateTimer;
- (void)dealloc;
- (void)endTimer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)resetTimer;
- (void)startTimer;
- (void)updateToContentSize:(id)arg1;

@end
