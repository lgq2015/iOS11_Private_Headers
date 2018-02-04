/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADAlarmEngineOperationGroup : CADOperationGroup <CADAlarmEngineInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;
+ (id)whitelistedBundles;

- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(id /* block */)arg4;
- (void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetLocationBasedAlarmsWithReply:(id /* block */)arg1;
- (void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(id /* block */)arg1;
- (bool)_hasAccessToAlarmsOnCalendar:(void*)arg1;

@end
