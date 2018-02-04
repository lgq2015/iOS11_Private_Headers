/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource

+ (bool)acceptsComplicationFamily:(long long)arg1;
+ (bool)acceptsComplicationType:(unsigned long long)arg1;

- (id)_appImage;
- (id)_appImageProvider;
- (id)_appTintColor;
- (id)_appTitle;
- (id)_circularTemplateMedium:(bool)arg1;
- (id)_complicationApplicationIdentifier;
- (id)_currentTimelineEntry;
- (id)_extraLarge;
- (id)_modularLargeTemplate;
- (id)_modularSmallTemplate;
- (id)_utilitarianLargeTemplate;
- (id)_utilitarianSmallTemplate;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (void)getTimelineEndDateWithHandler:(id /* block */)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getTimelineStartDateWithHandler:(id /* block */)arg1;
- (unsigned long long)timelineAnimationBehavior;

@end
