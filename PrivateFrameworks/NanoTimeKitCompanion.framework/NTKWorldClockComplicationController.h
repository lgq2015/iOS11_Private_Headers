/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorldClockComplicationController : NTKComplicationController <NTKTimeTravel> {
    struct { 
        unsigned int wantsShortCity : 1; 
        unsigned int wantsLongCity : 1; 
    }  _displayFlags;
    NSDate * _timeTravelDate;
}

@property (nonatomic, readonly) NTKWorldClockComplication *complication;
@property (nonatomic, readonly) <NTKWorldClockComplicationDisplay> *legacyDisplay;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_endTimeTravelAnimated:(bool)arg1;
- (void)_handleAbbreviationStoreChange:(id)arg1;
- (void)_handleLocaleChange;
- (void)_handleTimeZoneChange;
- (void)_startTimeTravelAnimated:(bool)arg1;
- (void)_updateDisplay;
- (id)complicationApplicationIdentifier;
- (bool)hasTapAction;
- (void)performTapAction;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setPauseDate:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;

@end
