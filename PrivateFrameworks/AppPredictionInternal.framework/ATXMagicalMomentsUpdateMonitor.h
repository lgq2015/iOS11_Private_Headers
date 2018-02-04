/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXMagicalMomentsUpdateMonitor : NSObject {
    NSDate * _expiration;
    unsigned long long  _limit;
    unsigned long long  _mmPredictionCount;
    PMMPredictionNotification * _mmUpdateListener;
    NSDictionary * _predictionMap;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) unsigned long long limit;

- (void).cxx_destruct;
- (void)_setPredictions:(id)arg1 expiration:(id)arg2 totalPredictionCount:(unsigned long long)arg3;
- (void)dropCacheIfExpired;
- (id)init;
- (id)initWithLimit:(unsigned long long)arg1;
- (unsigned long long)limit;
- (unsigned long long)mmPredictionCount;
- (id)predictionsForBundleId:(id)arg1;
- (void)setupUpdateListener;
- (void)updatePredictionsWith:(id)arg1 consumer:(unsigned long long)arg2;

@end
