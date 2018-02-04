/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDataSourceSectionCache : NSObject {
    NSDictionary * _assetCollectionToSection;
    PHFetchResult * _collectionListFetchResult;
    long long  _estimatedOtherCount;
    long long  _estimatedPhotosCount;
    long long  _estimatedVideosCount;
}

@property (nonatomic, readonly) NSDictionary *assetCollectionToSection;
@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) long long estimatedOtherCount;
@property (nonatomic, readonly) long long estimatedPhotosCount;
@property (nonatomic, readonly) long long estimatedVideosCount;

- (void).cxx_destruct;
- (id)assetCollectionToSection;
- (id)collectionListFetchResult;
- (long long)estimatedOtherCount;
- (long long)estimatedPhotosCount;
- (long long)estimatedVideosCount;
- (id)initWithCollectionListFetchResult:(id)arg1;

@end
