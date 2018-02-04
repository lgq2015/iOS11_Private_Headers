/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOLocketReader : NSObject <NSCopying> {
    PHFetchResult * _albumContents;
    id /* block */  _albumContentsLoaderBlock;
}

@property (nonatomic, retain) PHFetchResult *albumContents;
@property (nonatomic, copy) id /* block */ albumContentsLoaderBlock;
@property (nonatomic, readonly) unsigned long long numberOfLoadedPhotos;
@property (nonatomic, readonly) unsigned long long numberOfTotalPhotos;

- (void).cxx_destruct;
- (id)_assetsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)albumContents;
- (id /* block */)albumContentsLoaderBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateThumbnailsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 handler:(id /* block */)arg2;
- (unsigned long long)indexOfPhotoWithIdentifier:(id)arg1;
- (void)loadPhotoAtIndex:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)loadPhotosAtIndices:(id)arg1 handler:(id /* block */)arg2;
- (unsigned long long)numberOfLoadedPhotos;
- (unsigned long long)numberOfTotalPhotos;
- (void)setAlbumContents:(id)arg1;
- (void)setAlbumContentsLoaderBlock:(id /* block */)arg1;

@end
