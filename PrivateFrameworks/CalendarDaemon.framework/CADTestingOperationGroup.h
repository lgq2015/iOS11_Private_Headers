/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADTestingSimulateDaemonCrash;
- (bool)accessGrantedToPerformSelector:(SEL)arg1;

@end
