/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKKaleidoscopeSwatchMappedImageCache : BSUIMappedImageCache <NTKFaceCollectionObserver> {
    id  _activeDeviceNotificationBlock;
    NTKFaceCollection * _libraryCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKFaceCollection *libraryCollection;
@property (readonly) Class superclass;

+ (id)keyForAsset:(id)arg1 style:(id)arg2 resourceDirectory:(id)arg3;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (void)_pruneUnusedKeys;
- (void)_removeImagesForKeysMatching:(id /* block */)arg1;
- (void)faceCollectionDidLoad:(id)arg1;
- (id)libraryCollection;
- (void)setLibraryCollection:(id)arg1;

@end
