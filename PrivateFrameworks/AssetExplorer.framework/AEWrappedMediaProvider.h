/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEWrappedMediaProvider : PXUIMediaProvider {
    PUMediaProvider * __internalMediaProvider;
}

@property (nonatomic, readonly) PUMediaProvider *_internalMediaProvider;

- (void).cxx_destruct;
- (id)_internalMediaProvider;
- (void)cancelImageRequest:(long long)arg1;
- (id)initWithMediaProvider:(id)arg1;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end
