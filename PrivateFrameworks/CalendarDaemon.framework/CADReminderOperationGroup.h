/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADReminderOperationGroup : CADOperationGroup <CADReminderInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(id /* block */)arg1;
- (void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(id /* block */)arg3;
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(id)arg1;
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(id /* block */)arg1;

@end
