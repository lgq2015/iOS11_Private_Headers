/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIColorTemperatureController : PSListController <PSTimeRangeCellDelegate> {
    NSTimer * _blueLightReductionLabelRefreshTimer;
    CBClient * _brightnessClient;
    PSSpecifier * _manualSwitchSpecifier;
    PSSpecifier * _scheduleRangeSpecifier;
    PSSpecifier * _scheduleSwitchSpecifier;
    bool  _showColorTemperature;
    bool  _showingScheduleRange;
    PSSpecifier * _temperatureSlider;
    bool  _temperatureSliderWasTracking;
    NSDateFormatter * _timeFormatter;
}

- (void).cxx_destruct;
- (void)_printBlueLightStatus:(struct { bool x1; bool x2; bool x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long long x6; }*)arg1;
- (id)blueLightReductionFooter;
- (void)colorTemperatureSliderDidChange;
- (void)dealloc;
- (id)fromDetailForCell:(id)arg1;
- (id)getBlueLightReductionEnabled:(id)arg1;
- (id)getBlueLightReductionScheduleEnabled:(id)arg1;
- (void)handleBlueLightStatusChanged:(struct { bool x1; bool x2; bool x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long long x6; }*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)localizedTimeForTime:(struct { int x1; int x2; })arg1;
- (void)setBlueLightReductionEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setBlueLightReductionSchedule:(id)arg1 forSpecifier:(id)arg2;
- (void)setTemperatureStrength:(id)arg1 specifier:(id)arg2;
- (void)showAlertToDisableAccessibilityFiltersForBlueLightReduction:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)showScheduleRange:(bool)arg1 animated:(bool)arg2;
- (id)specifiers;
- (id)temperatureStrength:(id)arg1;
- (id)toDetailForCell:(id)arg1;

@end
