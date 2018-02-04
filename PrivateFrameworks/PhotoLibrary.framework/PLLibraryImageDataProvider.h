/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLLibraryImageDataProvider : NSObject {
    PLImageCache * _imageCache;
    PLImageLoadingQueue * _imageLoadingQueue;
    NSMutableDictionary * _imageSources;
}

- (id)_imageSourceForFormat:(int)arg1;
- (void)cancelLoadForAsset:(id)arg1;
- (void)cancelLoadForAsset:(id)arg1 format:(int)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidateCachedImagesForAsset:(id)arg1;
- (void)invalidateCachedImagesForAsset:(id)arg1 format:(int)arg2;
- (id)loadImageSynchronously:(bool)arg1 forAsset:(id)arg2 format:(int)arg3 priority:(int)arg4 completion:(id /* block */)arg5;
- (void)pauseLoading;
- (void)resumeLoading;

@end
