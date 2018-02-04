/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVolumeButton : SXMaterialButton <SXVideoControlItem> {
    bool  _muted;
    double  autoAppearanceTimeInterval;
    bool  hideable;
}

@property (nonatomic, readonly) double autoAppearanceTimeInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideable;
@property (nonatomic) bool muted;
@property (readonly) Class superclass;

- (id)accessibilityLabel;
- (double)autoAppearanceTimeInterval;
- (void)hide:(bool)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hideable;
- (id)imageForMuteState:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (bool)isVisible;
- (bool)muted;
- (void)setMuted:(bool)arg1;

@end
