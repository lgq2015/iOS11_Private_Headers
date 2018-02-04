/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEProgressViewModel : PXObservable <PXAssetsDataSourceManagerObserver> {
    PXAssetsDataSourceManager * __dataSourceManager;
    NSDictionary * __progressByAsset;
    AEProgressViewModelSnapshot * _currentSnapshot;
}

@property (nonatomic, readonly) PXAssetsDataSourceManager *_dataSourceManager;
@property (setter=_setProgressByAsset:, nonatomic, retain) NSDictionary *_progressByAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AEProgressViewModelSnapshot *progressSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createSnapshot;
- (id)_dataSourceManager;
- (id)_progressByAsset;
- (void)_setProgressByAsset:(id)arg1;
- (void)dealloc;
- (id)initWithDataSourceManager:(id)arg1;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)progressSnapshot;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)setProgress:(id)arg1 forAssetReference:(id)arg2;

@end
