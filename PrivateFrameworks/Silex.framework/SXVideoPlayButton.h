/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoPlayButton : SXButton <SXVideoControlItem> {
    bool  _paused;
    double  autoAppearanceTimeInterval;
    bool  hideable;
}

@property (nonatomic, readonly) double autoAppearanceTimeInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideable;
@property (nonatomic) bool paused;
@property (readonly) Class superclass;

- (id)accessibilityHint;
- (id)accessibilityLabel;
- (double)autoAppearanceTimeInterval;
- (void)displayAsPaused;
- (void)displayAsPlaying;
- (void)hide:(bool)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hideable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (bool)isVisible;
- (void)layoutSubviews;
- (bool)paused;
- (void)setPaused:(bool)arg1;
- (void)updateBackgroundColor;

@end
