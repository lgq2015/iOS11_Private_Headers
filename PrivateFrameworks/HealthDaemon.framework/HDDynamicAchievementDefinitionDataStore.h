/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDynamicAchievementDefinitionDataStore : NSObject <HDDatabaseProtectedDataObserver, _HKDynamicAchievementDefinitionLoading> {
    NSMutableArray * _deferredReads;
    NSMutableArray * _deferredWrites;
    HDKeyValueDomain * _identifierToDataDomain;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDKeyValueDomain *identifierToDataDomain;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_keyValueStoreDidSyncNotification:(id)arg1;
- (void)_postDefinitionsChangedExternally;
- (void)_queue_flushDeferredRequests;
- (void)_queue_writeDeferringIfDataIsProtected:(id /* block */)arg1;
- (void)addAchievementDefinition:(id)arg1 completion:(id /* block */)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)fetchDynamicDefinitionsWithCompletion:(id /* block */)arg1;
- (id)identifierToDataDomain;
- (id)initWithProfile:(id)arg1;
- (void)removeAchievementDefinitionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setIdentifierToDataDomain:(id)arg1;

@end
