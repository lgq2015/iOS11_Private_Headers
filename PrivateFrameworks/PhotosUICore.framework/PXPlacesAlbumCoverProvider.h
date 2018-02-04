/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesAlbumCoverProvider : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    long long  _cachedCount;
    NSString * _cachedFilePath;
    UIImage * _cachedSnapshotImage;
    NSString * _cachedSnapshotImageIdentifier;
    PXPlacesSnapshotFactory * _factory;
    <PXPlacesSnapshotFactoryDelegate> * _factoryDelegate;
    UIImage * _placeholderImage;
    PHAssetCollection * _placesCollection;
    NSObject<OS_dispatch_queue> * _requestsQueue;
}

@property (nonatomic, retain) PXPlacesSnapshotFactory *factory;
@property (nonatomic, retain) <PXPlacesSnapshotFactoryDelegate> *factoryDelegate;
@property (nonatomic, retain) PHAssetCollection *placesCollection;

- (void).cxx_destruct;
- (bool)_fetchCachedImageAndIdentifier;
- (bool)_imageExistsWithLocalIdentifier:(id)arg1;
- (id)_placeHolderImageForExtendedTraitCollection:(id)arg1;
- (id)_placeHolderImageForPXExtendedTraitCollection:(id)arg1;
- (long long)assetCountWithForcedRefresh:(bool)arg1;
- (id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1;
- (id)factory;
- (id)factoryDelegate;
- (id)initWithDelegate:(id)arg1 andPlacesCollection:(id)arg2;
- (id)placesCollection;
- (void)requestPlacesAlbumCover:(id)arg1 cacheDirPath:(id)arg2 andCompletion:(id /* block */)arg3;
- (void)setFactory:(id)arg1;
- (void)setFactoryDelegate:(id)arg1;
- (void)setPlacesCollection:(id)arg1;

@end