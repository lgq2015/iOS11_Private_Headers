/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailEditOptionCell : NTKCDetailTableViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {
    NTKEditOptionCollection * _collection;
    UICollectionView * _collectionView;
    <NTKCFaceDetailEditOptionCellDelegate> * _delegate;
    NTKFaceView * _faceView;
    UICollectionViewFlowLayout * _layout;
    UILabel * _optionsDescription;
    double  _outlineOutset;
    double  _outlinePadding;
    long long  _selectedIndex;
    NSDictionary * _selectedOptions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _swatchFrame;
}

@property (nonatomic, retain) NTKEditOptionCollection *collection;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailEditOptionCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) NTKFaceView *faceView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UICollectionViewFlowLayout *layout;
@property (nonatomic, retain) UILabel *optionsDescription;
@property (nonatomic, retain) NSDictionary *selectedOptions;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_dequeueCellForIndexPath:(id)arg1;
- (void)_ensureIndexPathVisible:(id)arg1 animated:(bool)arg2;
- (void)_fontSizeDidChange;
- (id)_imageForIndexPath:(id)arg1;
- (void)_setupFromCollection;
- (double)_spacing;
- (id)collection;
- (bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)ensureIndexVisible:(long long)arg1 animated:(bool)arg2;
- (void)ensureSelectedOptionVisible:(bool)arg1;
- (id)faceView;
- (id)initWithCollection:(id)arg1 forFaceView:(id)arg2;
- (id)layout;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)optionsDescription;
- (void)reloadVisibleCells;
- (double)rowHeight;
- (void)scrollToIndex:(long long)arg1 animated:(bool)arg2;
- (void)scrollToSelectedOption:(bool)arg1;
- (id)selectedOptions;
- (void)setCollection:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceView:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setOptionsDescription:(id)arg1;
- (void)setSelectedOptions:(id)arg1;

@end
