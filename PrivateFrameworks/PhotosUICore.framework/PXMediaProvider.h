/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMediaProvider : NSObject {
    PXLoadingStatusManager * _loadingStatusManager;
}

@property (nonatomic, retain) PXLoadingStatusManager *loadingStatusManager;

- (void).cxx_destruct;
- (void)cancelImageRequest:(long long)arg1;
- (id)loadingStatusManager;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)setLoadingStatusManager:(id)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;

@end
