/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKMobileAssetDownloadManager : NSObject {
    id /* block */  _downloadCompletionHandler;
    NSDictionary * _downloadOptions;
    NSMutableSet * _downloadedPredicateFormats;
    id /* block */  _errorHandler;
    NSString * _mobileAssetTypeName;
    NSMutableArray * _pendingOperations;
    NSObject<OS_dispatch_queue> * _queue;
    _HKMobileAssetDownloadManager * _retainedSelf;
    bool  _shouldAutoDownloadRemoteAssets;
    bool  _shouldQueryLocalAssetsFirst;
}

@property (nonatomic, copy) id /* block */ downloadCompletionHandler;
@property (nonatomic, copy) NSDictionary *downloadOptions;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, readonly, copy) NSString *mobileAssetTypeName;
@property (nonatomic) bool shouldAutoDownloadRemoteAssets;
@property (nonatomic) bool shouldQueryLocalAssetsFirst;

- (void).cxx_destruct;
- (void)_callDownloadCompletionHandlerWithAssets:(id)arg1;
- (void)_callErrorHandlerWithError:(id)arg1;
- (void)_queue_downloadAssets:(id)arg1 completionOverride:(id /* block */)arg2;
- (void)_queue_fetchAssetsWithLocalInformation:(bool)arg1 shouldRequery:(bool)arg2 predicate:(id)arg3;
- (void)_queue_fetchAssetsWithPredicate:(id)arg1 onlyLocal:(bool)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)downloadAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAssetsWithPredicate:(id)arg1;
- (id /* block */)downloadCompletionHandler;
- (id)downloadOptions;
- (id /* block */)errorHandler;
- (void)fetchAssetsWithPredicate:(id)arg1 onlyLocal:(bool)arg2 completion:(id /* block */)arg3;
- (id)initWithMobileAssetTypeName:(id)arg1;
- (id)mobileAssetTypeName;
- (void)removeAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)setDownloadCompletionHandler:(id /* block */)arg1;
- (void)setDownloadOptions:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setShouldAutoDownloadRemoteAssets:(bool)arg1;
- (void)setShouldQueryLocalAssetsFirst:(bool)arg1;
- (bool)shouldAutoDownloadRemoteAssets;
- (bool)shouldQueryLocalAssetsFirst;

@end
