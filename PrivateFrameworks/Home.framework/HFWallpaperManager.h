/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperManager : NSObject <HFHomeManagerObserver, HFHomeObserver> {
    HFWallpaperFileManager * _fileManager;
    HFWallpaperImageCache * _imageCache;
    HFWallpaperLegacyFileManager * _legacyFileManager;
    <HFNamedWallpaperSource> * _namedWallpaperSource;
    NSOperationQueue * _operationQueue;
    NSUserDefaults * _userDefaults;
    NSMutableDictionary * _wallpaperSlices;
    bool  _wallpaperSourceRegistered;
    NSMutableDictionary * _wallpapers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFWallpaperFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFWallpaperImageCache *imageCache;
@property (nonatomic, retain) HFWallpaperLegacyFileManager *legacyFileManager;
@property (nonatomic, retain) <HFNamedWallpaperSource> *namedWallpaperSource;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserDefaults *userDefaults;
@property (nonatomic, retain) NSMutableDictionary *wallpaperSlices;
@property (nonatomic, readonly) bool wallpaperSourceRegistered;
@property (nonatomic, retain) NSMutableDictionary *wallpapers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_logUserMetricsAfterSettingWallpaper;
- (id)_queue_originalImageForWallpaper:(id)arg1;
- (void)_queue_pruneUnusedWallpapers;
- (void)_queue_setWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3;
- (id)_queue_wallpaperForHomeKitObject:(id)arg1 createIfNeeded:(bool)arg2;
- (id)allNamedWallpapersForCollection:(long long)arg1;
- (id)defaultNamedWallpaperForCollection:(long long)arg1;
- (void)dispatchWallpaperChangedForHomeKitObject:(id)arg1;
- (id)fileManager;
- (id)generateProcessedImageFromWallpaper:(id)arg1 originalImage:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)imageCache;
- (id)imageForNamedWallpaper:(id)arg1;
- (id)init;
- (void)initializeCacheWithHome:(id)arg1;
- (id)legacyFileManager;
- (void)migrateIfNeeded;
- (long long)namedCollectionTypeForHomeKitObject:(id)arg1;
- (id)namedWallpaperSource;
- (id)operationQueue;
- (void)preloadWallpaperSlicesForHomeKitObject:(id)arg1;
- (void)preloadWallpapersForHome:(id)arg1;
- (void)registerWallpaperSource:(id)arg1 processedSource:(id)arg2;
- (void)setFileManager:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setLegacyFileManager:(id)arg1;
- (void)setNamedWallpaperSource:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setWallpaper:(id)arg1 image:(id)arg2 forHomeKitObject:(id)arg3;
- (void)setWallpaperSlices:(id)arg1;
- (void)setWallpapers:(id)arg1;
- (id)sliceFromWallpaper:(id)arg1 variant:(long long)arg2;
- (id)userDefaults;
- (id)wallpaperForHomeKitObject:(id)arg1;
- (id)wallpaperSlices;
- (bool)wallpaperSourceRegistered;
- (id)wallpapers;

@end
