/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperSharedDirectoryDataStore : SBFWallpaperDirectoryDataStore

+ (id)defaultDirectoryURL;

- (void)didWriteFileToURL:(id)arg1;
- (id)directoryCreationAttributes;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2;
- (id)wallpaperOptionsForVariant:(long long)arg1;
- (id)wallpaperOptionsURLForVariant:(long long)arg1;

@end
