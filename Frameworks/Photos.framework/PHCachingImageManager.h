/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCachingImageManager : PHImageManager {
    bool  _allowsCachingHighQualityImages;
}

@property (nonatomic) bool allowsCachingHighQualityImages;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (id)_fireCloudDownloadOfImageForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (id)_highPriorityRequestWaitGroup;
- (bool)allowsCachingHighQualityImages;
- (bool)canAvoidTouchingAssetsWithTargetSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 options:(id)arg3 outBestFormat:(int*)arg4 outBestFormatIsTable:(bool*)arg5 outDegradedFormat:(int*)arg6 outDegradedFormatIsTable:(bool*)arg7;
- (id)description;
- (id)init;
- (void)setAllowsCachingHighQualityImages:(bool)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 version:(long long)arg4 networkAccessAllowed:(bool)arg5;

@end
