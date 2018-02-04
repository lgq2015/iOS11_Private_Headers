/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetVariationsDataSource : PXSectionedDataSource {
    PHAsset * _asset;
    NSArray * _variations;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly, copy) NSArray *variations;

+ (id)emptyDataSource;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (id)initWithVariations:(id)arg1 asset:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)variations;

@end
