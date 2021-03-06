/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNotificationManager : NSObject <BBRemoteDataProvider, HDDiagnosticObject> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    BBDataProviderConnection * _dataProviderConnection;
    NSDate * _lastNotificationDate;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    BBDataProviderProxy * _providerProxy;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BBDataProviderProxy *providerProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_badgeCountForDomain:(long long)arg1;
- (id /* block */)_completionOnClientQueue:(id /* block */)arg1;
- (long long)_queue_coaleseDomainBadgeCounts;
- (void)_queue_notifyObserversWithBadgeCount:(long long)arg1 domain:(long long)arg2;
- (void)_queue_notifyObserversWithNotification:(id)arg1;
- (long long)_totalBadgeCount;
- (void)addNotificationObserver:(id)arg1;
- (void)dealloc;
- (id)defaultSectionInfo;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(id /* block */)arg4;
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 completion:(id /* block */)arg6;
- (id)providerProxy;
- (void)removeNotificationObserver:(id)arg1;
- (id)sectionIdentifier;
- (void)setBadgeCount:(long long)arg1 forDomain:(long long)arg2 completion:(id /* block */)arg3;
- (void)setProviderProxy:(id)arg1;
- (void)setupBulletinBoardSettings;
- (id)sortDescriptors;

@end
