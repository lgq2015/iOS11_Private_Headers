/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDLabelButton : MCDButton {
    UIColor * _disabledTextColor;
}

@property (nonatomic, retain) UIColor *disabledTextColor;

- (void).cxx_destruct;
- (id)colorForKnobFocusLayer;
- (id)disabledTextColor;
- (void)setDisabledTextColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (id)tintColor;
- (void)updateButtonOpacityForKnobUnfocused;

@end