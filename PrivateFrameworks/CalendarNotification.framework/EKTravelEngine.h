/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface EKTravelEngine : NSObject <CLLocationManagerDelegate> {
    id /* block */  _adviceBlock;
    id /* block */  _authorizationChangedBlock;
    bool  _authorizedInternal;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _databaseIsEncryptedAndUnreadable;
    NSMutableDictionary * _eventExternalURLsToAgendaEntries;
    id /* block */  _eventSignificantlyChangedBlock;
    CLLocationManager * _locationManager;
    bool  _needsRefresh;
    PCPersistentTimer * _periodicRefreshTimer;
    bool  _running;
    NSObject<OS_dispatch_source> * _syncYieldTimer;
    EKTimedEventStorePurger * _timedEventStorePurger;
    NSObject<OS_dispatch_queue> * _workQueue;
    bool  _yieldingToSync;
}

@property (nonatomic, copy) id /* block */ adviceBlock;
@property (nonatomic, copy) id /* block */ authorizationChangedBlock;
@property (nonatomic, readonly) bool authorized;
@property (nonatomic) bool authorizedInternal;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ eventSignificantlyChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)_periodicRefreshInterval;
+ (double)_travelAgendaTimeWindowInterval;
+ (double)requestRefreshTimeInterval;
+ (id)requestedDarwinNotifications;
+ (id)travelEligibleEvents:(id)arg1 fromStartDate:(id)arg2 untilEndDate:(id)arg3;

- (void).cxx_destruct;
- (bool)_authorizedToAcquireLocation;
- (void)_calDatabaseChangedNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_eventKitFeatureSetChanged;
- (void)_installLocationManager;
- (void)_installPeriodicRefreshTimer;
- (void)_installSyncYieldTimer;
- (bool)_isProtectedDataAvailable;
- (void)_periodicRefreshTimerFired:(id)arg1;
- (void)_refreshIfNeeded;
- (void)_registerForNotificationObservation;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)arg1 feedback:(id /* block */)arg2;
- (void)_significantTimeChangeNotificationReceived;
- (void)_stopInternal;
- (void)_suggestEventLocationsSettingChanged;
- (void)_trimAgendaEntriesBeforeDate:(id)arg1 andAfterDate:(id)arg2;
- (void)_uninstallLocationManager;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_uninstallSyncYieldTimer;
- (void)_unregisterAllAgendaEntries;
- (void)_unregisterForNotificationObservation;
- (void)_updateDatabaseEncryptionState;
- (id /* block */)adviceBlock;
- (id /* block */)authorizationChangedBlock;
- (bool)authorized;
- (bool)authorizedInternal;
- (id)btaJobName;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;
- (void)ceaseMonitoringForEventWithExternalURL:(id)arg1;
- (void)dealloc;
- (id /* block */)eventSignificantlyChangedBlock;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)handleDarwinNotification:(id)arg1;
- (id)init;
- (bool)isLocationManagerStatusAuthorized:(int)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
- (void)setAdviceBlock:(id /* block */)arg1;
- (void)setAuthorizationChangedBlock:(id /* block */)arg1;
- (void)setAuthorizedInternal:(bool)arg1;
- (void)setEventSignificantlyChangedBlock:(id /* block */)arg1;
- (void)start;
- (void)stop;

@end
