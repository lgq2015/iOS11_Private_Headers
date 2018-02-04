/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBLocalDataProvider : BBDataProvider {
    <BBDataProvider> * _dataProvider;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _localQueue;
    NSObject<OS_dispatch_queue> * _remoteQueue;
    bool  _unresponsive;
    NSObject<OS_dispatch_source> * _watchdogTimer;
}

@property (nonatomic, retain) <BBDataProvider> *dataProvider;

+ (id)dataProviderWithDataProvider:(id)arg1 serverQueue:(id)arg2;
+ (id)dataProviderWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (void)_doAsynchronousRemoteRequest:(id /* block */)arg1 conditionalOn:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)_doSynchronousRemoteRequest:(id /* block */)arg1 conditionalOn:(id /* block */)arg2;
- (id)_initWithDataProvider:(id)arg1 sectionID:(id)arg2 serverQueue:(id)arg3 initializationCompletion:(id /* block */)arg4;
- (void)_ping;
- (void)_watchdogFired;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id /* block */)arg3;
- (bool)canPerformMigration;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(id /* block */)arg4;
- (id)dataProvider;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(bool)arg3 withHandler:(id /* block */)arg4;
- (void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(bool)arg3 withHandler:(id /* block */)arg4;
- (void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(bool)arg3 sizeConstraints:(id)arg4 withHandler:(id /* block */)arg5;
- (id)initWithDataProvider:(id)arg1 serverQueue:(id)arg2;
- (id)initWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(id /* block */)arg3;
- (void)invalidate;
- (bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)reloadIdentityWithCompletion:(id /* block */)arg1;
- (void)setDataProvider:(id)arg1;
- (void)startWatchdog;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
