/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMappedImageCache : BSUIMappedImageCache

+ (id)systemAppPersistenteCache;
+ (id)wallpaperCache;

- (id)imageForKey:(id)arg1 cacheOptions:(unsigned long long)arg2 generateImageWithBlockIfNecessary:(id /* block */)arg3;
- (id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(id /* block */)arg2;
- (id)imageForKey:(id)arg1 options:(int)arg2;
- (id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(id /* block */)arg3;
- (id)initWithDescription:(id)arg1;
- (void)warmupImageForKey:(id)arg1;

@end
