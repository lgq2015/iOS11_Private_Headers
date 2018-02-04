/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSPendingNotificationRepository : NSObject {
    UNSKeyedObservable * _observable;
}

- (void).cxx_destruct;
- (id)_dateFormatter;
- (void)_notifyObserversOfChangesFrom:(id)arg1 to:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)_pendingNotificationDictionariesForBundleIdentifier:(id)arg1;
- (void)_setPendingNotificationDictionaries:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)applicationStateDidRestore;
- (void)applicationsDidUninstall:(id)arg1;
- (id)init;
- (id)lastLocalNotificationFireDateForBundleIdentifier:(id)arg1;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)performClockMigration;
- (void)performMigration;
- (void)performMigrationForBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setLastLocalNotificationFireDate:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;

@end
