/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADSpotlightOperationGroup : CADOperationGroup

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;
+ (id)whitelistedBundles;

- (void)CADPushItemsToSpotlight:(id)arg1 reply:(id /* block */)arg2;
- (id)_gatherAllCalendarItemUUIDs;
- (void)_pushUpdatesForCalendarItemsWithUUIDs:(id)arg1;
- (void)_pushUpdatesForCalendarItemsWithUUIDs:(id)arg1 inBatchesOf:(unsigned long long)arg2;
- (void)_resetDatabase;
- (bool)accessGrantedToPerformSelector:(SEL)arg1;

@end
