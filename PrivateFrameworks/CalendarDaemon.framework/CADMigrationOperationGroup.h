/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADMigrationOperationGroup : CADOperationGroup <CADMigrationInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADMigrateDatabaseIfNeeded:(id /* block */)arg1;
- (bool)accessGrantedToPerformSelector:(SEL)arg1;

@end
