/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorldClockLargeModuleView : NTKComplicationModuleView <NTKWorldClockComplicationDisplay> {
    NTKColoringLabel * _cityLabel;
    NTKColoringLabel * _dayLabel;
    NTKColoringLabel * _differenceLabel;
    NTKDigitalTimeLabel * _timeLabel;
    NSTimeZone * _timeZone;
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
- (id)_timeFontOfSize:(double)arg1;
- (id)_timeFontOfSize:(double)arg1 monospace:(bool)arg2;
- (void)_updateDayAndDifferenceLabels;
- (void)_updateTimeFont:(bool)arg1;
- (void)endTimeTravelAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setLongCity:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)startTimeTravelAnimated:(bool)arg1;

@end
