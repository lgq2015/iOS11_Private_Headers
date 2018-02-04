/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator {
    NSDataDetector * _addressDetector;
    NSDateFormatter * _dateFormatter;
    NSNumberFormatter * _numberFormatter;
}

+ (id)sharedGenerator;

- (void).cxx_destruct;
- (id)_addressDetector;
- (id)_adjustedMinutesTillEventStarts:(id)arg1;
- (bool)_appendFreeAfternoonMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_arrayHasAfternoonEvents:(id)arg1;
- (bool)_arrayHasMorningEvents:(id)arg1;
- (bool)_doesEventStartEarly:(id)arg1;
- (bool)_eventIsAlreadyLate:(id)arg1;
- (id)_locationStringForEvent:(id)arg1;
- (id)_naturalLanguageDescriptionForEvent:(id)arg1 isFirstInDay:(bool)arg2;
- (id)_noonDateForEvents:(id)arg1;
- (long long)_notReallyRandomNumberBetween1AndN:(int)arg1;
- (bool)_prepareToUseMessageWithID:(id)arg1 shouldAllowWeekendUsage:(bool)arg2;
- (bool)_prependBusyDayMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_prependEarlyStartMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_prependFreeMorningMessageToEventSummaryIfPossible:(id)arg1;
- (id)_sharedDateFormatter;
- (id)_sharedNumberFormatter;
- (id)_showEventURLStringForEvent:(id)arg1;
- (bool)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (id)_timeStringForEvent:(id)arg1 forBeginningOfSentence:(bool)arg2 useExplicitTimes:(bool)arg3 followingComma:(bool)arg4;
- (void)dealloc;
- (id)init;
- (void)meCardChanged:(id)arg1;
- (id)naturalLanguageDescriptionForBirthdayEvents:(id)arg1;
- (id)naturalLanguageDescriptionForUpcomingEvents:(id)arg1 firstInDay:(bool)arg2;
- (id)textRepresentationForAttendee:(id)arg1 includeEmailAddress:(bool)arg2;
- (id)textRepresentationForEvent:(id)arg1 withTextFormat:(int)arg2 showURI:(bool)arg3;
- (id)tomorrowSnippetForUpcomingEvents:(id)arg1 withTodayEvents:(id)arg2;

@end
