/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioImageCache : NSObject {
    NSOperationQueue * _imageRequestQueue;
}

+ (struct __CFURLStorageSession { }*)_newSharedCacheStorageSession;
+ (struct _CFURLCache { }*)_sharedCFURLCache;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_cachedResponseForRequest:(id)arg1;
- (id)_init;
- (void)_removeAllCachedImages;
- (id)_requestForRadioArtwork:(id)arg1;
- (id)cachedImageDataForRadioArtwork:(id)arg1 MIMEType:(id*)arg2;
- (id)cachedImageDataForStation:(id)arg1 withExactSize:(struct CGSize { double x1; double x2; })arg2 MIMEType:(id*)arg3;
- (void)dealloc;
- (id)init;
- (void)loadImageForRadioArtwork:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadImageForStation:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;

@end
