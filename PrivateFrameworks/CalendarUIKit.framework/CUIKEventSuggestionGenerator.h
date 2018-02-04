/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKEventSuggestionGenerator : NSObject

+ (id)eventWithSuggestedTimeFromString:(id)arg1 referenceDate:(id)arg2 inEventStore:(id)arg3 options:(unsigned long long)arg4;
+ (bool)scanStringForFlights:(id)arg1 flightNumber:(unsigned long long*)arg2 airlineCode:(id*)arg3;

@end
