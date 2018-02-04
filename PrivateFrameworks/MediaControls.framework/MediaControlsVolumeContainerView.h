/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsVolumeContainerView : UIView <UIGestureRecognizerDelegate> {
    bool  _onScreen;
    long long  _style;
    bool  _transitioning;
    MPVolumeSlider * _volumeSlider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic) bool transitioning;
@property (nonatomic, retain) MPVolumeSlider *volumeSlider;

- (void).cxx_destruct;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOnScreen;
- (bool)isTransitioning;
- (void)layoutSubviews;
- (void)setOnScreen:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setVolumeSlider:(id)arg1;
- (long long)style;
- (id)volumeSlider;

@end
