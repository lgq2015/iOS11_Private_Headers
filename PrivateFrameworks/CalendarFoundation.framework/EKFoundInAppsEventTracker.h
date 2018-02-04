/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface EKFoundInAppsEventTracker : NSObject

+ (id)pseudoEventDateChangedTracker;
+ (id)pseudoEventDetailsOpenedTracker;
+ (id)pseudoEventExpiredTracker;
+ (id)pseudoEventInitialTimeToLeaveFiredTracker;
+ (void)trackPseudoEventDateChanged;
+ (void)trackPseudoEventDetailsOpened;
+ (void)trackPseudoEventInitialTimeToLeaveFired;
+ (void)trackPseudoEventsExpired:(int)arg1;

@end
