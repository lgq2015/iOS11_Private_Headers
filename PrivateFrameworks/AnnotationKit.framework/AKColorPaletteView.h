/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKColorPaletteView : UIControl <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    UIColor * _color;
    NSArray * _colors;
    long long  _scrollDirection;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long scrollDirection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_indexPathOfColor:(id)arg1;
- (struct CGSize { double x1; double x2; })_itemSizeInContainer;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)color;
- (id)colors;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)scrollDirection;
- (void)scrollToCurrentColor;
- (void)setCollectionView:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setScrollDirection:(long long)arg1;

@end
