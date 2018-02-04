/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADIDManager : ADSingleton <ADIDManager_XPC, BackgroundTaskDelegate> {
    DSIDRecord * _activeDSIDRecord;
    NSArray * _monthlyResetArray;
}

@property (nonatomic, readonly) NSString *IDFA;
@property (nonatomic, readonly) long long IDFAMonthResetCount;
@property (retain) DSIDRecord *activeDSIDRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *monthlyResetArray;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)IDFA;
- (long long)IDFAMonthResetCount;
- (id)activeDSIDRecord;
- (id)deviceIdentifiers;
- (id)dsidRecord:(id)arg1 fromDict:(id)arg2;
- (id)encryptedIDForClientType:(long long)arg1;
- (void)forceReconcile:(id /* block */)arg1;
- (id)idForClientType:(long long)arg1;
- (id)init;
- (id)loadFakeRecord:(id)arg1;
- (bool)loadIDs;
- (void)logIDs:(id)arg1;
- (id)monthlyResetArray;
- (id)reloadRecords:(id)arg1;
- (void)reloadRecords:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)retrieveDeviceIDs;
- (void)setActiveDSIDRecord:(id)arg1;
- (void)setMonthlyResetArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AdID.framework/AdID

+ (void)initialize;

- (void)cancelPendingReconcile;
- (void)checkOnTask:(id)arg1 activity:(id)arg2;
- (void)deleteRecords:(id /* block */)arg1;
- (void)finishedReconciling:(id /* block */)arg1 withError:(id)arg2;
- (void)handleAccountChange:(id /* block */)arg1;
- (void)handleIDFAReset:(id /* block */)arg1;
- (void)incrementMonthlyResetCount;
- (id)init;
- (void)notifyActiveRecordChanged;
- (void)prepareForPushNotification;
- (void)reconcile:(id /* block */)arg1;
- (bool)reconcileInProgress;
- (void)resumeSaveNotificationsAndShouldNotify:(bool)arg1;
- (bool)runTask:(id)arg1;
- (void)save:(id /* block */)arg1;
- (bool)scheduleReconciliation:(double)arg1;
- (void)setDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)suspendSaveNotifications;
- (void)updateAccountData:(id /* block */)arg1;

@end
