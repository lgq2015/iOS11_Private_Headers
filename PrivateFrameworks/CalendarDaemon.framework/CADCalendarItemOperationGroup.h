/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(id /* block */)arg3;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(id /* block */)arg3;
- (void)CADDatabaseExportCalendarItemAsICS:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(id /* block */)arg4;
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(id /* block */)arg3;
- (void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 reply:(id /* block */)arg3;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(id /* block */)arg3;
- (id)_resultsFilteredForJunkEvents:(id)arg1;
- (id)_resultsFilteredForTCCAccess:(id)arg1;

@end
