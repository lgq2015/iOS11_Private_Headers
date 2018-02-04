/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoViewStyle : NSObject {
    UIColor * _fullScreenBackgroundColor;
    LPImageViewStyle * _muteButton;
    double  _muteButtonHighlightedOpacity;
    double  _muteButtonOpacity;
    LPPadding * _muteButtonPadding;
    LPVideoPlayButtonStyle * _playButton;
    UIColor * _pulsingLoadIndicatorColor;
    double  _pulsingLoadIndicatorDuration;
    double  _pulsingLoadIndicatorMaximumOpacity;
    CAMediaTimingFunction * _pulsingLoadIndicatorTimingFunction;
}

@property (nonatomic, retain) UIColor *fullScreenBackgroundColor;
@property (nonatomic, readonly) LPImageViewStyle *muteButton;
@property (nonatomic) double muteButtonHighlightedOpacity;
@property (nonatomic) double muteButtonOpacity;
@property (nonatomic, readonly, retain) LPPadding *muteButtonPadding;
@property (nonatomic, readonly) LPVideoPlayButtonStyle *playButton;
@property (nonatomic, retain) UIColor *pulsingLoadIndicatorColor;
@property (nonatomic) double pulsingLoadIndicatorDuration;
@property (nonatomic) double pulsingLoadIndicatorMaximumOpacity;
@property (nonatomic, retain) CAMediaTimingFunction *pulsingLoadIndicatorTimingFunction;

- (void).cxx_destruct;
- (id)fullScreenBackgroundColor;
- (id)init;
- (id)muteButton;
- (double)muteButtonHighlightedOpacity;
- (double)muteButtonOpacity;
- (id)muteButtonPadding;
- (id)playButton;
- (id)pulsingLoadIndicatorColor;
- (double)pulsingLoadIndicatorDuration;
- (double)pulsingLoadIndicatorMaximumOpacity;
- (id)pulsingLoadIndicatorTimingFunction;
- (void)setFullScreenBackgroundColor:(id)arg1;
- (void)setMuteButtonHighlightedOpacity:(double)arg1;
- (void)setMuteButtonOpacity:(double)arg1;
- (void)setPulsingLoadIndicatorColor:(id)arg1;
- (void)setPulsingLoadIndicatorDuration:(double)arg1;
- (void)setPulsingLoadIndicatorMaximumOpacity:(double)arg1;
- (void)setPulsingLoadIndicatorTimingFunction:(id)arg1;

@end
