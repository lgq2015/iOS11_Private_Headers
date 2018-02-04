/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;
+ (id)sharedContactStore;

- (void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 reply:(id /* block */)arg3;
- (void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 validator:(id)arg3 reply:(id /* block */)arg4;
- (void)CADDatabaseCanModifySuggestedEventCalendar:(id /* block */)arg1;
- (void)CADDatabaseGetBirthdayContactIdentifierForEvent:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetCountOfNotifiableEvents:(id /* block */)arg1;
- (void)CADDatabaseGetCountOfUnacknowledgedEvents:(id /* block */)arg1;
- (void)CADDatabaseGetDefaultCalendarForNewEventsWithReply:(id /* block */)arg1;
- (void)CADDatabaseGetDefaultLocalCalendarWithReply:(id /* block */)arg1;
- (void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(id)arg1 timeZone:(id)arg2 reply:(id /* block */)arg3;
- (void)CADDatabaseGetEventWithEventIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetEventWithUniqueID:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(id /* block */)arg1;
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(id /* block */)arg1;
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(id /* block */)arg1;
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(id /* block */)arg1;
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(id)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(bool)arg1;
- (void)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)arg1 reply:(id /* block */)arg2;
- (void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(id /* block */)arg1;
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;
- (void)CADOccurrenceCacheDoEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 reply:(id /* block */)arg3;
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg1 reply:(id /* block */)arg2;
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(id)arg2 reply:(id /* block */)arg3;
- (void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)arg1 onDay:(id)arg2 reply:(id /* block */)arg3;
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(id /* block */)arg4;
- (void)CADOccurrenceCacheSearchWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(id /* block */)arg4;
- (void)CADOccurrencesExistInRangeForEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(bool)arg4 timezone:(id)arg5 reply:(id /* block */)arg6;
- (bool)_CADDatabaseCanModifySuggestedEventCalendar;
- (id)_getDefaultCalendarIDForNewEvents;

@end
