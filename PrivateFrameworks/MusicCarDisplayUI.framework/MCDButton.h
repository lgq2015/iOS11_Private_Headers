/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDButton : UIButton {
    CALayer * _focusColorLayer;
    bool  _hideBezelInKnob;
    bool  _showBezelInTouch;
}

@property (nonatomic) bool hideBezelInKnob;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool showBezelInTouch;

+ (id)buttonWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)_buttonBackGroundColorTouch;
- (void)_updateButtonStyle;
- (bool)canBecomeFocused;
- (id)colorForKnobContentSelected;
- (id)colorForKnobFocusLayer;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForKnobFocused;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayer;
- (id)colorForTouchFocusLayerSelected;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hideBezelInKnob;
- (void)layoutSubviews;
- (void)setHidden:(bool)arg1;
- (void)setHideBezelInKnob:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowBezelInTouch:(bool)arg1;
- (bool)shouldUpdateButtonOpacityForKnobUnfocused;
- (bool)showBezelInTouch;
- (id)tintColorForUnhighlightedTextLabel;
- (void)updateButtonOpacityForKnobUnfocused;
- (void)willMoveToWindow:(id)arg1;

@end
