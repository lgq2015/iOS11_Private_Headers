/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTSystemStateDelegate> {
    MTAlarmScheduler * _alarmScheduler;
    MTAlarmServer * _alarmServer;
    MTAlarmStorage * _alarmStorage;
    MTAlarmSyncDataModel * _alarmSyncDataModel;
    MTSyncStorage * _alarmSyncStorage;
    MTAgentDiagnosticListener * _diagnostics;
    MTLanguageChangeListener * _languageChangeListener;
    NSDate * _launchDate;
    long long  _mode;
    MTAgentNotificationManager * _notificationManager;
    <MTNotificationPoster> * _notificationPoster;
    MTPairedDeviceListener * _pairedDeviceListener;
    MTSleepMetrics * _sleepMetrics;
    MTSleepMonitor * _sleepMonitor;
    MTSyncCommandListener * _syncCommandListener;
    MTSyncManager * _syncManager;
    MTMetrics * _syncMetrics;
    MTSyncMonitor * _syncMonitor;
    MTSystemStateListener * _systemStateListener;
    MTTimeListener * _timeListener;
    MTTimerScheduler * _timerScheduler;
    MTTimerServer * _timerServer;
    MTTimerStorage * _timerStorage;
}

@property (nonatomic, retain) MTAlarmScheduler *alarmScheduler;
@property (nonatomic, retain) MTAlarmServer *alarmServer;
@property (nonatomic, retain) MTAlarmStorage *alarmStorage;
@property (nonatomic, retain) MTAlarmSyncDataModel *alarmSyncDataModel;
@property (nonatomic, retain) MTSyncStorage *alarmSyncStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MTAgentDiagnosticListener *diagnostics;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTLanguageChangeListener *languageChangeListener;
@property (nonatomic, retain) NSDate *launchDate;
@property (nonatomic) long long mode;
@property (nonatomic, retain) MTAgentNotificationManager *notificationManager;
@property (nonatomic, retain) <MTNotificationPoster> *notificationPoster;
@property (nonatomic, retain) MTPairedDeviceListener *pairedDeviceListener;
@property (nonatomic, retain) MTSleepMetrics *sleepMetrics;
@property (nonatomic, retain) MTSleepMonitor *sleepMonitor;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTSyncCommandListener *syncCommandListener;
@property (nonatomic, retain) MTSyncManager *syncManager;
@property (nonatomic, retain) MTMetrics *syncMetrics;
@property (nonatomic, retain) MTSyncMonitor *syncMonitor;
@property (nonatomic, retain) MTSystemStateListener *systemStateListener;
@property (nonatomic, retain) MTTimeListener *timeListener;
@property (nonatomic, retain) MTTimerScheduler *timerScheduler;
@property (nonatomic, retain) MTTimerServer *timerServer;
@property (nonatomic, retain) MTTimerStorage *timerStorage;

+ (id)agent;

- (void).cxx_destruct;
- (void)_setupAlarms;
- (void)_setupInitialListeners;
- (void)_setupSecondaryListeners;
- (void)_setupSync;
- (void)_setupSyncMonitor;
- (void)_setupTimers;
- (id)alarmScheduler;
- (id)alarmServer;
- (id)alarmStorage;
- (id)alarmSyncDataModel;
- (id)alarmSyncStorage;
- (id)diagnostics;
- (void)handleF5Reset;
- (id)init;
- (id)languageChangeListener;
- (id)launchDate;
- (long long)mode;
- (id)notificationManager;
- (id)notificationPoster;
- (id)pairedDeviceListener;
- (void)printDiagnostics;
- (void)restoreDidFinish;
- (void)setAlarmScheduler:(id)arg1;
- (void)setAlarmServer:(id)arg1;
- (void)setAlarmStorage:(id)arg1;
- (void)setAlarmSyncDataModel:(id)arg1;
- (void)setAlarmSyncStorage:(id)arg1;
- (void)setDiagnostics:(id)arg1;
- (void)setLanguageChangeListener:(id)arg1;
- (void)setLaunchDate:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setNotificationManager:(id)arg1;
- (void)setNotificationPoster:(id)arg1;
- (void)setPairedDeviceListener:(id)arg1;
- (void)setSleepMetrics:(id)arg1;
- (void)setSleepMonitor:(id)arg1;
- (void)setSyncCommandListener:(id)arg1;
- (void)setSyncManager:(id)arg1;
- (void)setSyncMetrics:(id)arg1;
- (void)setSyncMonitor:(id)arg1;
- (void)setSystemStateListener:(id)arg1;
- (void)setTimeListener:(id)arg1;
- (void)setTimerScheduler:(id)arg1;
- (void)setTimerServer:(id)arg1;
- (void)setTimerStorage:(id)arg1;
- (id)sleepMetrics;
- (id)sleepMonitor;
- (id)syncCommandListener;
- (id)syncManager;
- (id)syncMetrics;
- (id)syncMonitor;
- (id)systemStateListener;
- (id)timeListener;
- (id)timerScheduler;
- (id)timerServer;
- (id)timerStorage;

@end
