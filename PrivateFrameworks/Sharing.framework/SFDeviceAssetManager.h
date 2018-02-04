/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceAssetManager : NSObject {
    bool  _activateCalled;
    MAAsset * _deviceAssetManagement;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    NSDictionary * _productTypesMappingTable;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (void)activate;
- (void)addKeyValuePair:(id)arg1 with:(id)arg2 toQuery:(id)arg3;
- (id)additionalMappedProducts;
- (id)bundleAtURL:(id)arg1 error:(id*)arg2;
- (id)dispatchQueue;
- (void)getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (id)locallyCachedMappedProductTypeForProductType:(id)arg1;
- (void)onqueue_activate;
- (void)onqueue_downloadAsset:(id)arg1 queryLogString:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)onqueue_findAssetBundleForAssetQuery:(id)arg1 queryLogString:(id)arg2 fallback:(bool)arg3 retryAttempt:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)onqueue_findAssetBundleForDeviceQuery:(id)arg1 installedOnly:(bool)arg2 fallback:(bool)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)onqueue_getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)onqueue_invalidate;
- (id)onqueue_mappedProductTypeForProductType:(id)arg1;
- (void)onqueue_purgeAssetsMatchingQuery:(id)arg1;
- (void)onqueue_updateMetaDataWithCompletionHandler:(id /* block */)arg1;
- (void)onqueue_validateProductTypeInQuery:(id)arg1;
- (void)purgeAssetsMatchingQuery:(id)arg1;
- (id)queryLogStringForQuery:(id)arg1 installedOnly:(bool)arg2 fallback:(bool)arg3;
- (void)setDispatchQueue:(id)arg1;

@end