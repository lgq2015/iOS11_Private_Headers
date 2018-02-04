/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKCFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate> {
    NSString * _albumName;
}

- (void).cxx_destruct;
- (id)init;
- (id)newFace;
- (void)photoAlbumChanged:(id)arg1;

@end
