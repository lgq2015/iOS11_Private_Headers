/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasMainTemplateViewController : VideosExtrasTemplateViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VideosExtrasMainMenuSectionMetricsDataSource> {
    NSLayoutConstraint * _collectionViewHeightConstraint;
    UICollectionViewFlowLayout * _collectionViewLayout;
    <UICollectionViewDelegate> * _didSelectDelegate;
    bool  _hasHadMenuSelection;
    VideosExtrasMainMenuSectionMetrics * _mainMenuMetrics;
    UICollectionView * _menuBarCollectionView;
    UIView * _menuBarView;
}

@property (nonatomic, readonly) double collectionViewHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UICollectionViewDelegate> *didSelectDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexPath *indexPathOfFeaturedItem;
@property (nonatomic, readonly) UIView *menuBarView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_collectionView:(id)arg1 indexPathShouldDisplayAsSelected:(id)arg2;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)_dynamicTypeChanged;
- (bool)_isFeatureItemAtIndexPath:(id)arg1;
- (id)_menuItems;
- (void)_prepareCollectionView;
- (void)_prepareLayout;
- (void)_recalculateSizes;
- (void)_startBackgroundAudio;
- (id)_textElementAtIndex:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)collectionViewHeight;
- (void)dealloc;
- (id)didSelectDelegate;
- (id)indexPathOfFeaturedItem;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (id)menuBarView;
- (long long)numberOfItemsForSectionMetrics:(id)arg1;
- (struct CGSize { double x1; double x2; })sectionMetrics:(id)arg1 sizeForItemAtIndex:(long long)arg2 withFontDescriptor:(id)arg3;
- (void)setCollectionViewHeight:(double)arg1;
- (void)setDidSelectDelegate:(id)arg1;
- (bool)showsPlaceholder;
- (id)templateElement;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
