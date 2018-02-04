/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncManager : NSObject {
    long long  _inProgressSyncCount;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldResync;
}

@property (nonatomic) long long inProgressSyncCount;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool shouldResync;

- (void).cxx_destruct;
- (void)_addFinalProgressUpdateWithTaskTree:(id)arg1 progress:(id)arg2;
- (void)_cloudSyncContainersForProfile:(id)arg1 completion:(id /* block */)arg2;
- (void)_containerIdentifiersForCurrentAccountWithCompletion:(id /* block */)arg1;
- (id)_containerWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)_getPrimaryLastPushForwardProgressDate;
- (id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1;
- (void)disableSyncLocallyWithTaskTree:(id)arg1;
- (id)fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)fetchSyncStatusWithCompletion:(id /* block */)arg1;
- (long long)inProgressSyncCount;
- (id)initWithProfile:(id)arg1;
- (id)profile;
- (id)queue;
- (void)queue_cloudSyncContainersWithCompletion:(id /* block */)arg1;
- (void)requestImmediateResync;
- (id)resetWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3;
- (void)setInProgressSyncCount:(long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setShouldResync:(bool)arg1;
- (bool)shouldResync;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 permitResync:(bool)arg4;

@end
