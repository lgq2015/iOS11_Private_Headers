/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAlarmLargeModuleView : NTKComplicationModuleView <NTKAlarmComplicationDisplay> {
    NSDate * _alarmDate;
    NTKDigitalTimeLabel * _alarmLabel;
    NTKColoringLabel * _snoozeDurationLabel;
    NTKColoringLabel * _subtitleLabel;
    NTKColoringLabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_layoutContentView;
- (void)_setAlarmDate:(id)arg1;
- (void)_updateAlarmTime;
- (void)_updateSnoozeTime:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateAllAlarmsOff;
- (void)setStateNoAlarms;
- (void)setStateSnoozingWithDuration:(double)arg1;

@end
