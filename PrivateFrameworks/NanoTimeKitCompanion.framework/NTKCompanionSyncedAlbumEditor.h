/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionSyncedAlbumEditor : NTKCompanionResourceDirectoryEditor

@property (nonatomic) bool shouldFinalize;

+ (id)_createResourceDirectoryForSyncedAlbumWithPreviewOnly:(bool)arg1;
+ (id)_firstAssetInCollection:(id)arg1;

- (void)finalizeWithCompletion:(id /* block */)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)arg1;
- (id)initWithResourceDirectory:(id)arg1 shouldFinalize:(bool)arg2;
- (void)setShouldFinalize:(bool)arg1;
- (bool)shouldFinalize;

@end
