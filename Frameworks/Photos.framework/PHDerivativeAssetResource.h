/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHDerivativeAssetResource : PHAssetResource <PHCPLAssetResource> {
    PHAsset * _asset;
    unsigned long long  _cplResourceType;
    PLImageFormat * _format;
    bool  _tableFormat;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) unsigned long long cplResourceType;
@property (getter=isCroppedToSquare, nonatomic, readonly) bool croppedToSquare;
@property (nonatomic, retain) PLImageFormat *format;
@property (getter=isTableFormat, nonatomic, readonly) bool tableFormat;
@property (getter=isThumbnail, nonatomic, readonly) bool thumbnail;
@property (getter=isVideo, nonatomic, readonly) bool video;

+ (id)CPLDerivativeAssetResourcesForAsset:(id)arg1 managedAsset:(id)arg2;
+ (id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2;
+ (id)tableThumbnailDataForAsset:(id)arg1 assetResourceQualityClass:(id)arg2 dataSpecification:(struct PHAssetResourceTableDataSpecification { int x1; int x2; int x3; int x4; int x5; int x6; }*)arg3;
+ (id)thumbnailDerivativeAssetResourcesForAsset:(id)arg1;

- (void).cxx_destruct;
- (long long)analysisType;
- (id)asset;
- (id)assetLocalIdentifier;
- (unsigned long long)cplResourceType;
- (id)description;
- (bool)fileExists;
- (id)format;
- (id)initWithCloudResource:(id)arg1 forAsset:(id)arg2;
- (id)initWithQualityClass:(id)arg1 forAsset:(id)arg2;
- (id)initWithThumbnailFormat:(id)arg1 forAsset:(id)arg2;
- (bool)isCroppedToSquare;
- (bool)isTableFormat;
- (bool)isTableThumbnail;
- (bool)isThumbnail;
- (bool)isVideo;
- (void)setFormat:(id)arg1;

@end
