/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNRemoteDataProvider : NSObject <BBRemoteDataProvider> {
    NSMutableDictionary * _alarmBulletins;
    NSObject<OS_dispatch_queue> * _alertQueue;
    CALNPersistedNotificationsContext * _context;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    id /* block */  _fetchNotificationReferences;
    bool  _ignoreLowLevelDatabaseChangedNotifications;
    NSMutableDictionary * _notificationBulletins;
    bool  _notificationsNeedLoad;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    bool  _pendingChanges;
    BBDataProviderProxy * _proxy;
    NSTimer * _syncTimer;
    EKTimedEventStorePurger * _timedEventStorePurger;
}

@property (readonly) NSObject<OS_dispatch_queue> *alertQueue;
@property (readonly) CALNPersistedNotificationsContext *context;
@property (readonly) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) BBDataProviderProxy *proxy;
@property (readonly) Class superclass;
@property (nonatomic, retain) EKTimedEventStorePurger *timedEventStorePurger;

+ (id)logHandle;
+ (id)requestedDarwinNotifications;

- (void).cxx_destruct;
- (void)_calDatabaseChangedNotificationReceived;
- (void)_calendarNotificationSettingChanged;
- (void)_killSyncTimer;
- (bool)_loadNotifications;
- (void)_resetSyncTimer;
- (void)_significantTimeChanged;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timeZoneChanged:(id)arg1;
- (void)acknowledgeAlerts:(id)arg1 includeRefiringAlerts:(bool)arg2;
- (void)acknowledgeLocationAlertWithURL:(id)arg1 entityID:(id)arg2;
- (id)alarmBulletins;
- (id)alarmForCalendarItem:(id)arg1 matchingExternalID:(id)arg2;
- (void)alertInfosFired:(id)arg1;
- (id)alertQueue;
- (void)bulletinAcknowledgedWithResponse:(id)arg1 acknowledgeAlarm:(bool)arg2 extraActions:(id /* block */)arg3;
- (id)bulletinRequestForAlertInfo:(id)arg1;
- (id)bulletinRequestWithCalendarNotification:(id)arg1;
- (id)bulletinRequestWithRecordID:(id)arg1 publisherBulletinID:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (void)clearAlerts:(id)arg1;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)closeActionForAlertInfo:(id)arg1;
- (id)context;
- (void)dataProviderDidLoad;
- (void)databaseChanged;
- (id)databaseQueue;
- (void)dealloc;
- (id)defaultURLForAlertInfo:(id)arg1;
- (id)entityScheme;
- (id)eventStore;
- (id)eventStoreWithDispatch:(bool)arg1;
- (id)expirationDateForAlertInfo:(id)arg1;
- (void)fetchDataFromContext;
- (void)firstUnlock;
- (void)handleBulletinActionResponse:(id)arg1;
- (void)handleDarwinNotification:(id)arg1;
- (id)initWithNotificationFetchBlock:(id /* block */)arg1;
- (id)messageStringForAlertInfo:(id)arg1;
- (id)notificationBulletins;
- (void)notificationCountChanged:(id)arg1;
- (void)notificationsChanged;
- (void)postBulletinForAlertInfo:(id)arg1;
- (void)protectedAcknowledgeAlarm:(bool)arg1 forBulletinWithEntityID:(id)arg2 externalID:(id)arg3 extraActions:(id /* block */)arg4;
- (id)protectedEventStore;
- (id)protectedItemForBulletinRecordID:(id)arg1;
- (void)protectedRemoveBulletinForID:(id)arg1;
- (void)protectedSaveBulletin:(id)arg1 forAlertInfo:(id)arg2 usingID:(id)arg3;
- (id)proxy;
- (void)reloadNotifications;
- (void)reloadNotificationsIfNeeded;
- (void)removeAlerts:(id)arg1;
- (bool)saveNotificationBulletin:(id)arg1 replace:(bool)arg2;
- (id)sectionIdentifier;
- (void)setProxy:(id)arg1;
- (void)setTimedEventStorePurger:(id)arg1;
- (bool)shouldModfyBulletinForAlert:(id)arg1;
- (bool)shouldPostBulletinForAlertInfo:(id)arg1;
- (bool)shouldWithdrawBeforePostingBulletinForAlert:(id)arg1;
- (bool)shouldWithdrawBulletin:(id)arg1 forItem:(id)arg2;
- (id)sortDescriptors;
- (id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 compactLayout:(bool)arg3;
- (bool)syncsBulletinDismissal;
- (id)timedEventStorePurger;
- (id)titleStringForAlertInfo:(id)arg1;
- (void)unalertedNotificationsReceived:(id)arg1 withNotificationReferences:(id)arg2;
- (id)viewActionForAlertInfo:(id)arg1;
- (void)willPostBulletinForAlertInfo:(id)arg1;
- (void)withdrawAlertBulletin:(id)arg1;
- (void)withdrawNotificationBulletin:(id)arg1;

@end
