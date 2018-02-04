/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmManagerExportedObject : NSObject <MTAlarmClient> {
    MTAlarmManager * _alarmManager;
}

@property (nonatomic, readonly) MTAlarmManager *alarmManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReceiveAlarmServerReadyNotification:(id)arg1;
- (void)alarmDismissed:(id)arg1;
- (void)alarmFired:(id)arg1;
- (id)alarmManager;
- (void)alarmSnoozed:(id)arg1;
- (void)alarmsAdded:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)dealloc;
- (id)initWithAlarmManager:(id)arg1;
- (void)nextAlarmChanged:(id)arg1;

@end
