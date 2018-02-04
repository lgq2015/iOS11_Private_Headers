/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchLocation : NSObject {
    NSDictionary * _appLaunchCountMap;
    _ATXDuetHelper * _duetHelper;
    NSObject<OS_os_transaction> * _keepAliveUntilTrainingComplete;
    <_ATXLocationManagerWrapperProtocol> * _locationManager;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    id  _lockStateNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> * _queue;
    id  _resetPrivacyWarningsNotificationToken;
    NSDictionary * _totalLaunchCountMap;
    bool  _waitingLoad;
}

+ (id)defaultPath;
+ (void)joinAppLaunches:(id)arg1 withVisits:(id)arg2 block:(id /* block */)arg3;
+ (id)sortTimeIntervals:(id)arg1;
+ (id)visitsWithLOI:(id)arg1 startDate:(id)arg2;

- (void).cxx_destruct;
- (id)_getAppLaunchCountMap;
- (id)_getTotalLaunchCountMap;
- (int)_launchCountAtCurrentLOIOfBundle:(id)arg1;
- (void)_registerClassAUnlockHandler;
- (void)_registerForResetPrivacyWarningsNotification;
- (int)_totalLaunchCountAtCurrentLOI;
- (void)dealloc;
- (void)finishTrainWithCallback:(id /* block */)arg1;
- (id)init;
- (id)initWithDuetHelper:(id)arg1 locationManager:(id)arg2;
- (int)launchCountAtCurrentLOIOfBundle:(id)arg1;
- (double)launchProbabilityAtCurrentLOIForBundle:(id)arg1;
- (unsigned long long)loadModel;
- (unsigned long long)loadModelAtPath:(id)arg1;
- (void)loadOrTrain;
- (int)totalLaunchCountAtCurrentLOI;
- (void)train;
- (void)trainModelWithLOI:(id)arg1 startDate:(id)arg2 callback:(id /* block */)arg3;
- (void)trainWithCallback:(id /* block */)arg1;
- (void)writeModel;

@end
