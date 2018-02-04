/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADDatabaseGetDeletableCalendars:(id /* block */)arg1;
- (void)CADDatabaseGetDeletableSources:(id /* block */)arg1;
- (bool)accessGrantedToPerformSelector:(SEL)arg1;

@end
