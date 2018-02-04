/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCollectionViewAggregateDataSource : GKCollectionViewDataSource {
    NSMapTable * _dataSourceToMappings;
    NSMutableDictionary * _globalSectionToMappings;
    NSMutableArray * _mappings;
    unsigned long long  _sectionCount;
}

@property (nonatomic, retain) NSMapTable *dataSourceToMappings;
@property (nonatomic, retain) NSMutableDictionary *globalSectionToMappings;
@property (nonatomic, retain) NSMutableArray *mappings;
@property (nonatomic) unsigned long long sectionCount;

- (id)_gkDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)addDataSource:(id)arg1 withTag:(id)arg2;
- (id)allDataSources;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(bool)arg4;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (bool)containsDataSource:(id)arg1;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 performBatchUpdate:(id /* block */)arg2 complete:(id /* block */)arg3;
- (void)dataSourceDidReloadData:(id)arg1;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (id)dataSourceToMappings;
- (void)dealloc;
- (id)globalIndexPathsForLocal:(id)arg1 dataSource:(id)arg2;
- (id)globalSectionToMappings;
- (id)globalSectionsForLocal:(id)arg1 dataSource:(id)arg2;
- (id)indexPathsForItem:(id)arg1;
- (id)init;
- (bool)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (id)mappingForDataSource:(id)arg1;
- (id)mappingForGlobalSection:(long long)arg1;
- (id)mappings;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeDataSource:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)sectionCount;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (void)setDataSource:(id)arg1 forTag:(id)arg2;
- (void)setDataSourceToMappings:(id)arg1;
- (void)setGlobalSectionToMappings:(id)arg1;
- (void)setMappings:(id)arg1;
- (void)setSectionCount:(unsigned long long)arg1;
- (void)updateMappings;
- (id)wrapperForView:(id)arg1 mapping:(id)arg2;

@end
