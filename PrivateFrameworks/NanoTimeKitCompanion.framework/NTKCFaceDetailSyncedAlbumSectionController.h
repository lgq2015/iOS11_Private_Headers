/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailSyncedAlbumSectionController : NTKCFaceDetailSectionController

@property (nonatomic, retain) NTKCFaceDetailSyncedAlbumCell *cell;

+ (bool)hasSyncedAlbumSectionForFace:(id)arg1 inGallery:(bool)arg2;

- (void)_commonInit;
- (void)faceDidChange;

@end
