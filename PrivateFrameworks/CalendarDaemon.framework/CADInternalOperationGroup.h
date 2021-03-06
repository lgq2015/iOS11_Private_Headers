/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADInternalOperationGroup : CADOperationGroup <CADInternalInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADInternalForceStatCollection:(id /* block */)arg1;
- (bool)_internalAccessGranted;
- (bool)accessGrantedToPerformSelector:(SEL)arg1;

@end
