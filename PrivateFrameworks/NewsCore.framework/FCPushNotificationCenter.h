/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPushNotificationCenter : NSObject <FCPushNotificationHandling> {
    FCCKPrivateDatabase * _privateDatabase;
    NSMapTable * _recordZoneObservers;
    bool  _syncingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCCKPrivateDatabase *privateDatabase;
@property (nonatomic, retain) NSMapTable *recordZoneObservers;
@property (readonly) Class superclass;
@property (getter=isSyncingEnabled, nonatomic) bool syncingEnabled;

- (void).cxx_destruct;
- (void)_deleteLocalDataForRecordZoneIDs:(id)arg1;
- (void)_fetchChangesForRecordZoneIDs:(id)arg1;
- (void)_handlePrivateDatabaseNotification:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_saveDatabaseServerChangeToken:(id)arg1;
- (void)addObserver:(id)arg1 forChangesToRecordZoneID:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)disableSyncing;
- (void)enableSyncing;
- (void)handleRemoteNotification:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithPrivateDatabase:(id)arg1 storeDirectory:(id)arg2;
- (bool)isSyncingEnabled;
- (void)prepareForUse;
- (id)privateDatabase;
- (id)recordZoneObservers;
- (void)removeRecordZoneObserver:(id)arg1;
- (id)serverChangeTokenKey;
- (void)setPrivateDatabase:(id)arg1;
- (void)setRecordZoneObservers:(id)arg1;
- (void)setSyncingEnabled:(bool)arg1;

@end
