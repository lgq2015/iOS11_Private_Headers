/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDCloudStoreNotificationCoordinator : NSObject <PDCloudStoreManagerDelegate, PDPushNotificationConsumer, PDScheduledActivityClient> {
    <PDCloudStoreDataSource> * _cloudStoreDataSource;
    PDCloudStoreManager * _cloudStoreManager;
    CKServerChangeToken * _currentServerChangeToken;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _proactiveFetchQueue;
    PDPushNotificationManager * _pushNotificationManager;
    NSSet * _pushTopics;
    PKPaymentTransactionProcessor * _transactionProcessor;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canInitalizeCloudStoreWithWebService:(id)arg1;

- (void).cxx_destruct;
- (id)_backgroundActivityNameForBackgroundInterval:(unsigned long long)arg1;
- (void)_cloudStoreInitializationAndShouldTryToScheudleBackgroundActivities:(bool)arg1 completion:(id /* block */)arg2;
- (void)_cloudStoreInitializationWithCompletion:(id /* block */)arg1;
- (double)_nextTimeIntervalForBackgroundInterval:(unsigned long long)arg1;
- (void)_performCloudStoreContainerInitalizationBackgroundActivityWithCurrentInterval:(unsigned long long)arg1 nextBackgroundInterval:(unsigned long long)arg2;
- (void)_recordAggdCloudStoreBackgroundContainerSetupResult:(bool)arg1 forCurrentBackgroundInterval:(unsigned long long)arg2;
- (void)_registerForPushNotifications;
- (void)_scheduleCloudStoreContainerSetupBackgroundActivityWithNextInterval:(unsigned long long)arg1;
- (void)_scheduleFirstCloudStoreContainerSetupBackgroundActivityIfNeccessary;
- (bool)_shouldScheduleInitalCloudStoreContainerSetupBackgroundActivity;
- (void)_unregisterForPushNotifications;
- (void)_unscheduleBackgroundContainerSetupActivities;
- (void)allItemsOfClassType:(Class)arg1 storeLocally:(bool)arg2 completion:(id /* block */)arg3;
- (void)applyPushNotificationToken:(id)arg1;
- (bool)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (bool)canSyncTransactionToCloudKitWithBackingData:(bool)arg1 passUniqueIdentifier:(id)arg2 serviceIdentifier:(id)arg3;
- (void)cloudStoreManager:(id)arg1 createdZoneWithName:(id)arg2;
- (void)cloudStoreManager:(id)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreManagerShouldUnscheduleAllBackgroundActivities:(id)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)fetchAndStoreChangesWithCompletion:(id /* block */)arg1;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2 transactionProcessor:(id)arg3;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2 transactionProcessor:(id)arg3 initalizeCloudStoreManager:(bool)arg4;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)invalidateCloudStore;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2 activityContext:(id)arg3;
- (id)pushNotificationTopics;
- (void)registerObserver:(id)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)requestUpdatesForPassUniqueIdenitifer:(id)arg1;
- (void)resetContainerWithCompletion:(id /* block */)arg1;
- (void)simulateCloudStorePushWithCompletion:(id /* block */)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(id /* block */)arg3;

@end
