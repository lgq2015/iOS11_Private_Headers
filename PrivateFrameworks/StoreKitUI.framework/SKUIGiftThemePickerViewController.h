/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftThemePickerViewController : SKUIGiftStepViewController <SKUIGiftConfigurationObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    bool  _animatingScrollView;
    SKUIGiftThemeCollectionView * _collectionView;
    SKUIGiftThemePickerFlowLayout * _flowLayout;
    UIImage * _itemImage;
    UIPageControl * _pageControl;
    long long  _selectedThemeIndex;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSArray * _themes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backgroundTapAction:(id)arg1;
- (double)_cardHeight:(id)arg1;
- (double)_cardWidth;
- (id)_collectionView;
- (double)_collectionViewWidth:(id)arg1;
- (id)_flowLayout;
- (bool)_isIPadLarge;
- (void)_layoutCollectionViewWithTraits:(id)arg1;
- (void)_nextAction:(id)arg1;
- (double)_scrollInsetHorizontal:(id)arg1;
- (void)_setItemImage:(id)arg1 error:(id)arg2;
- (void)_setSelectedThemeIndex:(long long)arg1 animated:(bool)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)giftConfigurationController:(id)arg1 didLoadImageForTheme:(id)arg2;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
