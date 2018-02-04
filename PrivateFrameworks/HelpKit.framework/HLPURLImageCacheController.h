/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPURLImageCacheController : HLPURLDataCacheController {
    NSCache * _inMemoryImageCache;
}

@property (nonatomic, retain) NSCache *inMemoryImageCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned long long)arg3;
- (void)getImageForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)imageFromMemoryCacheForPath:(id)arg1;
- (id)inMemoryImageCache;
- (id)newDataCache;
- (void)setInMemoryImageCache:(id)arg1;
- (void)unload;

@end
