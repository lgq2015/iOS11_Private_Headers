/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUCollectionViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (id)_createCollectionView;
- (id)_createCollectionViewLayout;
- (void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(bool)arg2;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 editingStyleForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4;
- (id)contentScrollView;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (id)reuseIdentifierForCellAtIndexPath:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
