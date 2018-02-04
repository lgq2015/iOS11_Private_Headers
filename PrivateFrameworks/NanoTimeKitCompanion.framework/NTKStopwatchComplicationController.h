/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKStopwatchComplicationController : NTKComplicationController

@property (nonatomic, readonly) <NTKStopwatchComplicationDisplay> *legacyDisplay;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1;

- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleLocaleChange;
- (void)_handleReloadNotification;
- (void)_handleTimeFormatChange;
- (void)_startStopwatchTimerUpdates;
- (void)_stopStopwatchTimerUpdates;
- (void)_updateDisplay;
- (id)complicationApplicationIdentifier;
- (bool)hasTapAction;
- (void)performTapAction;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;

@end
