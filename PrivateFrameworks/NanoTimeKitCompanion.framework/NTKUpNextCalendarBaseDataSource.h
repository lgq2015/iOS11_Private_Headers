/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextCalendarBaseDataSource : NTKUpNextElementDataSource

+ (id)_allDayElementIdentifier;
+ (id)_colorForCalendarColor:(id)arg1;
+ (id)_elementIdenfierForEventIdentifier:(id)arg1 inSection:(unsigned long long)arg2;
+ (id)_lockedElementIdentifier;
+ (id)_openActionForEventURL:(id)arg1;
+ (id)_pillImage;
+ (id)_tomorrowElementIdentifier;
+ (id)_upNextElementContentForForTitle:(id)arg1 location:(id)arg2 organizer:(id)arg3 calendarColor:(id)arg4 eventInterval:(id)arg5 isAllDay:(bool)arg6;
+ (id)_upNextElementForTimedEventWithTitle:(id)arg1 location:(id)arg2 organizer:(id)arg3 calendarColor:(id)arg4 eventInterval:(id)arg5 isAllDay:(bool)arg6 irrelevanceDate:(id)arg7 inSection:(unsigned long long)arg8 eventIdentifier:(id)arg9 eventURL:(id)arg10;
+ (id)bundleIdentifier;
+ (void)initialize;
+ (id)sampleContentElements;

@end
