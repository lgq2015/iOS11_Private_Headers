/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripDataSource : PUTilingDataSource {
    AVAsset * _asset;
    NSMutableDictionary * _assetByIndexPath;
    NSMapTable * _indexPathByAsset;
    NSArray * _indicatorInfos;
    long long  _numberOfIndexes;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, copy) NSArray *indicatorInfos;
@property (nonatomic, readonly) long long numberOfIndexes;

- (void).cxx_destruct;
- (double)_normalizedTimeForIndexPath:(id)arg1;
- (id)asset;
- (id)assetAtIndexPath:(id)arg1;
- (id)indexPathForAsset:(id)arg1;
- (id)indicatorInfos;
- (id)init;
- (id)initWithAsset:(id)arg1 numberOfIndexes:(long long)arg2 indicatorInfos:(id)arg3;
- (long long)numberOfIndexes;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (void)setIndicatorInfos:(id)arg1;

@end
