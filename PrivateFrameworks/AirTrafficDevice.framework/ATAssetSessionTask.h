/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATAssetSessionTask : ATSessionTask <ATAssetLinkControllerObserver> {
    ATAssetLinkController * _assetLinkController;
    bool  _cancelAtStart;
    NSMutableSet * _currentAssets;
    NSString * _dataClass;
    NSMutableSet * _failedAssets;
    unsigned long long  _failedAssetsCount;
    NSPredicate * _filterPredicate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableOrderedSet * _remainingAssets;
    double  _retryInterval;
    NSObject<OS_dispatch_source> * _retryTimer;
    bool  _retryUntilFinished;
    id /* block */  _shouldRetryAssetBlock;
    bool  _waitingForRetry;
}

@property (nonatomic, retain) ATAssetLinkController *assetLinkController;
@property (nonatomic, readonly, copy) NSString *dataClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long failedAssetsCount;
@property (nonatomic, copy) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool retryUntilFinished;
@property (nonatomic, copy) id /* block */ shouldRetryAssetBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (id)assetLinkController;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (void)cancel;
- (void)cancelAllAssets;
- (id)dataClass;
- (id)debugDescription;
- (unsigned long long)failedAssetsCount;
- (id)filterPredicate;
- (id)init;
- (id)initWithAssets:(id)arg1;
- (id)initWithDataClass:(id)arg1;
- (id)remainingAssets;
- (void)resume;
- (bool)retryUntilFinished;
- (id)sessionGroupingKey;
- (void)setAssetLinkController:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setRetryUntilFinished:(bool)arg1;
- (void)setShouldRetryAssetBlock:(id /* block */)arg1;
- (id /* block */)shouldRetryAssetBlock;
- (void)start;
- (void)suspend;

@end
