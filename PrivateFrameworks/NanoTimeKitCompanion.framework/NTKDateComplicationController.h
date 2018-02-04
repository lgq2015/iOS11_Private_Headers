/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDateComplicationController : NTKComplicationController <NTKTimeTravel> {
    unsigned long long  _displayDateStyle;
    NSDate * _timeTravelDate;
}

@property (nonatomic, readonly) NTKDateComplication *complication;
@property (nonatomic, readonly) <NTKDateComplicationDisplay> *legacyDisplay;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1;
+ (id)_textForDate:(id)arg1 dateStyle:(unsigned long long)arg2;
+ (id)textForDateStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleTimeChangeNotification;
- (void)_setTextInDisplayIfNeededWithDate:(id)arg1;
- (void)_updateDisplay;
- (id)complicationApplicationIdentifier;
- (bool)hasTapAction;
- (void)performTapAction;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;

@end
