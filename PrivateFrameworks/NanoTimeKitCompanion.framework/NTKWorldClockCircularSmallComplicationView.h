/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorldClockCircularSmallComplicationView : NTKCircularComplicationView <NTKWorldClockComplicationDisplay> {
    bool  _alternateLayout;
    NSDictionary * _alternateLayoutCityTextAttributes;
    NTKColoringLabel * _cityLabel;
    CLKFont * _normalLayoutCityFont;
    NTKDigitalTimeLabel * _timeLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NTKDigitalTimeLabel *timeLabel;

- (void).cxx_destruct;
- (double)_alternateLayoutCityFontSize;
- (id)_normalLayoutCityFont;
- (void)_updateLabelsForFontChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setShortCity:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeLabel;

@end
