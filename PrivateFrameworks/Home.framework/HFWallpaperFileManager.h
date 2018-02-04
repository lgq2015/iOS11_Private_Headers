/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperFileManager : NSObject {
    NSURL * _wallpaperFolderURL;
}

@property (nonatomic, retain) NSURL *wallpaperFolderURL;

- (void).cxx_destruct;
- (id)filenameForWallpaper:(id)arg1;
- (id)init;
- (bool)originalImageExistsForWallpaper:(id)arg1;
- (id)originalImageForWallpaper:(id)arg1;
- (void)pruneUnusedOriginalWallpaperImages:(id)arg1;
- (void)saveOriginalImage:(id)arg1 forWallpaper:(id)arg2;
- (void)setWallpaperFolderURL:(id)arg1;
- (id)wallpaperFolderURL;

@end
