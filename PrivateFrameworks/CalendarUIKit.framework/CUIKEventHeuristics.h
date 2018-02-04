/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKEventHeuristics : NSObject

+ (bool)_shouldFilterEvent:(id)arg1 filterOptions:(unsigned long long)arg2;
+ (id)_sortedAndFilteredEventsForPredicate:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4;
+ (id)_sortedEvents:(id)arg1 withMethod:(unsigned long long)arg2;
+ (id)todaysEventsInCalendars:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4;
+ (id)tomorrowsEventsInCalendars:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4;
+ (id)upcomingEventsInCalendars:(id)arg1 onlyReturnFirstEvents:(bool)arg2 filterOptions:(unsigned long long)arg3 sortMethod:(unsigned long long)arg4 eventStore:(id)arg5;

@end
