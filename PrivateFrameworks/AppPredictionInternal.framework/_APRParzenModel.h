/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _APRParzenModel : NSObject {
    _ATXDuetHelper * _duetHelper;
    long long  _intentSource;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSDictionary * _parzenHistograms;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
    bool  _waitingLoad;
}

@property (nonatomic, readonly) NSString *path;

+ (id)defaultPathForIntentSource:(long long)arg1;

- (void).cxx_destruct;
- (void)_cancelTrainTimer;
- (void)_registerForUninstallNotifications;
- (void)_syncTrain;
- (void)_trainModel;
- (void)dealloc;
- (id)init;
- (id)initWithDuetHelper:(id)arg1 path:(id)arg2 intentSource:(long long)arg3;
- (id)initWithIntentSource:(long long)arg1;
- (bool)loadModel;
- (void)loadOrTrain;
- (id)modelFromEvents:(id)arg1;
- (id)parzenHistograms;
- (id)path;
- (float)predict:(id)arg1;
- (void)removeHistoryForAllBundleIds:(id)arg1;
- (void)scheduleTrain;
- (void)scheduleTrainImmediately;
- (void)train;
- (void)trainModelFrom:(id)arg1 callback:(id /* block */)arg2;
- (void)writeModel;

@end
