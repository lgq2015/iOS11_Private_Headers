/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasGridElementViewController : VideosExtrasViewElementViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    VideosExtrasGridViewControllerStyle * _extraLargeStyle;
    _VideosExtrasShelfCollectionViewLayout * _flowLayout;
    _VideosExtrasGridHeaderView * _headerView;
    NSArray * _headerViewConstraints;
    VideosExtrasGridViewControllerStyle * _largeStyle;
    VideosExtrasGridViewControllerStyle * _mediumStyle;
    bool  _shelfStyle;
    VideosExtrasGridViewControllerStyle * _smallStyle;
    UIView * _titleRule;
    NSArray * _titleRuleConstraints;
    VideosExtrasGridViewControllerStyle * _wideStyle;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) VideosExtrasGridViewControllerStyle *currentStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VideosExtrasGridViewControllerStyle *extraLargeStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VideosExtrasGridViewControllerStyle *largeStyle;
@property (nonatomic, retain) VideosExtrasGridViewControllerStyle *mediumStyle;
@property (getter=isShelfStyle, nonatomic) bool shelfStyle;
@property (nonatomic, retain) VideosExtrasGridViewControllerStyle *smallStyle;
@property (readonly) Class superclass;
@property (readonly) IKGridElement *viewElement;
@property (nonatomic, retain) VideosExtrasGridViewControllerStyle *wideStyle;

+ (id)_defaultCellStyle;
+ (id)_fontAttributesForTextStyle:(id)arg1;
+ (id)extraLargeDetailStyle;
+ (id)extraLargeGalleryStyle;
+ (id)extraLargeStackGridStyle;
+ (id)keyPathsForValuesAffectingContentScrollView;
+ (id)largeDetailStyle;
+ (id)largeGalleryStyle;
+ (id)largeStackGridStyle;
+ (id)mediumDetailStyle;
+ (id)mediumGalleryStyle;
+ (id)mediumStackGridStyle;
+ (id)smallDetailStyle;
+ (id)smallGalleryStyle;
+ (id)smallStackGridStyle;
+ (id)wideDetailStyle;
+ (id)wideGalleryStyle;
+ (id)wideStackGridStyle;

- (void).cxx_destruct;
- (double)_cellSpacingForSection:(id)arg1;
- (id)_cellStyleForSection:(id)arg1;
- (void)_dynamicTypeDidChange;
- (bool)_hasDescriptionText;
- (id)_lockupForIndexPath:(id)arg1;
- (id)_narrowStyle;
- (void)_prepareLayout;
- (id)_sectionElementForIndex:(unsigned long long)arg1;
- (bool)_sectionIndexIsDescriptionSection:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sectionInsetsForSection:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)contentScrollView;
- (id)currentStyle;
- (void)dealloc;
- (id)extraLargeStyle;
- (id)initWithViewElement:(id)arg1;
- (bool)isShelfStyle;
- (id)largeStyle;
- (void)loadView;
- (id)mediumStyle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredLayoutAttribute;
- (id)preferredLayoutGuide;
- (void)setExtraLargeStyle:(id)arg1;
- (void)setLargeStyle:(id)arg1;
- (void)setMediumStyle:(id)arg1;
- (void)setShelfStyle:(bool)arg1;
- (void)setSmallStyle:(id)arg1;
- (void)setViewElement:(id)arg1;
- (void)setWideStyle:(id)arg1;
- (id)smallStyle;
- (void)viewWillAppear:(bool)arg1;
- (id)wideStyle;

@end
