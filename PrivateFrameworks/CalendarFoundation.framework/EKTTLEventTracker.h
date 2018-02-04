/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface EKTTLEventTracker : NSObject

+ (id)_alertTypeMapping;
+ (id)_boolEnumMapping;
+ (id)_etaTypeMapping;
+ (id)_transportTypeMapping;
+ (id)_travelStateMapping;
+ (id)directionsEngagedEventTracker;
+ (id)directionsEngagedSharedCalendarSupportingTracker;
+ (id)eventFiredTTLAlertSharedCalendarSupportingTracker;
+ (id)eventFiredTTLAlertTracker;
+ (id)isTTLEnabledTracker;
+ (id)significantEventTracker;
+ (void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 hasSuggestedLocation:(bool)arg4 isOnSharedCalendar:(bool)arg5;
+ (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(bool)arg5 isOnSharedCalendar:(bool)arg6;
+ (void)trackIsTTLEnabled:(bool)arg1;
+ (void)trackSignificantEventHasSuggestedLocation:(bool)arg1 isOnSharedCalendar:(bool)arg2;
+ (void)trackTTLCandidateEventHasSuggestedLocation:(bool)arg1 isOnSharedCalendar:(bool)arg2;
+ (id)ttlCandidateEventTracker;

@end
