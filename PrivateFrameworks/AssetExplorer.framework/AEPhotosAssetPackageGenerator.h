/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEPhotosAssetPackageGenerator : AEAssetPackageGenerator <NSProgressReporting, PUReviewAssetProviderRequest> {
    PHAsset * __asset;
    PHResourceDownloadRequest * __downloadRequest;
    AEAssetPackage * __ivarQueue_currentPackage;
    NSError * __ivarQueue_lastError;
    NSObject<OS_dispatch_queue> * __packagerIvarIsolationQueue;
    NSObject<OS_dispatch_group> * __packagerWorkGroup;
    PXAssetReference * _sourceAssetReference;
}

@property (nonatomic, retain) PHAsset *_asset;
@property (nonatomic, readonly) PHResourceDownloadRequest *_downloadRequest;
@property (setter=_setIvarQueueCurrentPackage:, nonatomic, retain) AEAssetPackage *_ivarQueue_currentPackage;
@property (setter=_setIvarQueueLastError:, nonatomic, retain) NSError *_ivarQueue_lastError;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_packagerIvarIsolationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *_packagerWorkGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) <PUDisplayAsset> *sourceAsset;
@property (nonatomic, readonly, copy) PXAssetReference *sourceAssetReference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_asset;
- (void)_beginGeneratingWithResourceInfo:(id)arg1 error:(id)arg2 finalizer:(id)arg3;
- (void)_callCompletionWithResult:(id /* block */)arg1;
- (void)_commonAEPhotosAssetPackageGeneratorInitWithAsset:(id)arg1 assetReference:(id)arg2;
- (void)_downloadBeforeBeforeGeneratingWithFinalizer:(id)arg1;
- (void)_downloadIfNeededBeforeGeneratingWithFinalizer:(id)arg1;
- (id)_downloadRequest;
- (id)_ivarQueue_currentPackage;
- (id)_ivarQueue_lastError;
- (id)_packagerIvarIsolationQueue;
- (id)_packagerWorkGroup;
- (void)_setIvarQueueCurrentPackage:(id)arg1;
- (void)_setIvarQueueLastError:(id)arg1;
- (void)beginGeneratingWithFinalizer:(id)arg1;
- (void)cancelReviewAssetRequest;
- (id)initWithAsset:(id)arg1;
- (id)initWithAssetReference:(id)arg1;
- (id)progress;
- (void)requestReviewAssetWithCompletionHandler:(id /* block */)arg1;
- (bool)retrieveGeneratedPackageWithCompletion:(id /* block */)arg1;
- (void)set_asset:(id)arg1;
- (id)sourceAsset;
- (id)sourceAssetReference;

@end
