/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEWrappedDataSourceManager : PXAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate, PUReviewAssetsDataSourceManagerDelegate> {
    PUReviewAssetsDataSourceManager * __attachedDataSourceManager;
}

@property (setter=_setAttachedDataSourceManager:, nonatomic, retain) PUReviewAssetsDataSourceManager *_attachedDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attachedDataSourceManager;
- (void)_createDataSourceFromAssetsDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)_setAttachedDataSourceManager:(id)arg1;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 changeDetails:(id)arg3;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)attachDataSourceManager:(id)arg1;
- (id)createInitialDataSource;
- (void)detachCurrentDataSourceManager;

@end
