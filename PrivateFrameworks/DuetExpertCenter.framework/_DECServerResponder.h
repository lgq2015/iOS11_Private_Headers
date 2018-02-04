/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECServerResponder : NSObject <_DECServerResponder, _DECSpotlightReceiverDelegate> {
    _DECBackupHelper * _backupHelper;
    _DECFeedbackBuilder * _feedbackBuilder;
    <_DECFilter> * _predictionFilter;
    _DECPredictionMap * _predictionsAwaitingFeedback;
    NSObject<OS_dispatch_queue> * _queue;
    <_DECRankBuilder> * _rankBuilder;
    NSMutableArray * _servers;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _serversRWLock;
    _DECUpdatePredictionsNotification * _updateNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_DECFilter> *predictionFilter;
@property (nonatomic, retain) <_DECRankBuilder> *rankBuilder;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_consumers;
- (id)_experts;
- (void)_requestRefreshForWidget;
- (void)_setupFeedbackBuilder;
- (void)_setupUpdatePredictionNotificationListener;
- (id)_validConsumers;
- (id)_validExperts;
- (void)addServer:(id)arg1;
- (void)dealloc;
- (void)decDeviceIdWithReply:(id /* block */)arg1;
- (void)didReceiveUserAction:(id)arg1;
- (bool)feedbackNewerThan:(double)arg1;
- (id)init;
- (bool)is2GBOrLargerDevice;
- (id)predictionFilter;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 backgroundQuery:(bool)arg5 providesFeedback:(bool)arg6 reply:(id /* block */)arg7;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 providesFeedback:(bool)arg5 reply:(id /* block */)arg6;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(bool)arg4 reply:(id /* block */)arg5;
- (void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (id)rankBuilder;
- (void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(id)arg3 reply:(id /* block */)arg4;
- (void)removeServer:(id)arg1;
- (void)restoreModels;
- (void)saveModels;
- (void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)setPredictionFilter:(id)arg1;
- (void)setRankBuilder:(id)arg1;
- (void)trainExperts;
- (void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(id /* block */)arg4;
- (void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(id /* block */)arg4;

@end
