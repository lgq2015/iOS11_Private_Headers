/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    _NTKCAddNewFace * _addNewFace;
    NTKCGalleryCollection * _collection;
    UICollectionView * _collectionView;
    UIStackView * _collectionViewFooterStack;
    NSLayoutConstraint * _cvHeightConstraint;
    <NTKCGalleryCellDelegate> * _delegate;
    NSLayoutConstraint * _faceContainerTopConstraint;
    UILabel * _footer;
    bool  _hasCalloutImage;
    bool  _hasCalloutName;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    UICollectionViewFlowLayout * _layout;
    NSLayoutConstraint * _leadingInsetConstraint;
    UIButton * _seeAll;
    long long  _selectedIndex;
    UILabel * _title;
    NSLayoutConstraint * _titleBaselineConstraint;
    UIStackView * _titleStack;
}

@property (nonatomic, retain) _NTKCAddNewFace *addNewFace;
@property (nonatomic, retain) NTKCGalleryCollection *collection;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UIStackView *collectionViewFooterStack;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, retain) NSLayoutConstraint *cvHeightConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCGalleryCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *faceContainerTopConstraint;
@property (nonatomic, retain) UILabel *footer;
@property (nonatomic) bool hasCalloutImage;
@property (nonatomic) bool hasCalloutName;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic, retain) UICollectionViewFlowLayout *layout;
@property (nonatomic, retain) NSLayoutConstraint *leadingInsetConstraint;
@property (nonatomic, retain) UIButton *seeAll;
@property (nonatomic) long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *title;
@property (nonatomic, retain) NSLayoutConstraint *titleBaselineConstraint;
@property (nonatomic, retain) UIStackView *titleStack;

+ (id)reuseIdentifier;
+ (double)rowHeightForCollection:(id)arg1;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_contentInsetPoint;
- (void)_fontSizeDidChange;
- (void)_seeAllTapped;
- (bool)_shouldShowAddNewFace;
- (id)addNewFace;
- (void)calculateHeightForCollection;
- (id)collection;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewFooterStack;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)cvHeightConstraint;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)ensureCorrectTitleViewOrientation;
- (id)faceContainerTopConstraint;
- (id)faceForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)footer;
- (bool)hasCalloutImage;
- (bool)hasCalloutName;
- (bool)hasFooterText;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layout;
- (void)layoutSubviews;
- (id)leadingInsetConstraint;
- (id)previewViewAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forFace:(id)arg2;
- (id)seeAll;
- (long long)selectedIndex;
- (void)setAddNewFace:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewFooterStack:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCvHeightConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceContainerTopConstraint:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setHasCalloutImage:(bool)arg1;
- (void)setHasCalloutName:(bool)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayout:(id)arg1;
- (void)setLeadingInsetConstraint:(id)arg1;
- (void)setSeeAll:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBaselineConstraint:(id)arg1;
- (void)setTitleStack:(id)arg1;
- (bool)shouldShowFooterTextInCollectionView;
- (void)showFooterTextIfNeeded;
- (id)title;
- (id)titleBaselineConstraint;
- (id)titleStack;
- (void)updateFaceAtIndex:(unsigned long long)arg1;

@end
