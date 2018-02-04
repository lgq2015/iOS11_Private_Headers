/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedSelectionManager : PXObservable <PXSectionedDataSourceManagerObserver> {
    PXMutableIndexPathSet * __selectedIndexPaths;
    PXSectionedDataSource * _dataSource;
    PXSectionedDataSourceManager * _dataSourceManager;
    struct { 
        bool selectionSnapshot; 
    }  _needsUpdateFlags;
    PXSelectionSnapshot * _selectionSnapshot;
}

@property (setter=_setSelectedIndexPaths:, nonatomic, retain) PXMutableIndexPathSet *_selectedIndexPaths;
@property (setter=_setDataSource:, nonatomic, retain) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setSelectionSnapshot:, nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateSelectionSnapshot;
- (void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(id /* block */)arg1;
- (id)_selectedIndexPaths;
- (void)_setDataSource:(id)arg1;
- (void)_setDataSource:(id)arg1 withChangeHistory:(id)arg2;
- (void)_setSelectedIndexPaths:(id)arg1;
- (void)_setSelectionSnapshot:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateSelectionSnapshotIfNeeded;
- (id)dataSource;
- (id)dataSourceManager;
- (void)deselectAll;
- (void)didPerformChanges;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (id)selectionSnapshot;
- (void)setSelectedIndexPaths:(id)arg1;
- (void)setSelectedState:(bool)arg1 forIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)setSelectedState:(bool)arg1 forIndexPathSet:(id)arg2;

@end
