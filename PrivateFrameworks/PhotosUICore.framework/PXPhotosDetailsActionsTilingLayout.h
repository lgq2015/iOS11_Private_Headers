/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsActionsTilingLayout : PXTilingLayout {
    long long  __numberOfSeparators;
    unsigned long long  _dataSourceIdentifier;
    long long  _numberOfItems;
    double  _rowHeight;
    double  _separatorHeight;
    bool  _shouldInsetAllSeparators;
    bool  _shouldShowSeparators;
}

@property (nonatomic, readonly) long long _numberOfSeparators;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic) double rowHeight;
@property (nonatomic) double separatorHeight;
@property (nonatomic) bool shouldInsetAllSeparators;
@property (nonatomic) bool shouldShowSeparators;

- (double)_contentWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItemAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSeparatorAtIndex:(long long)arg1;
- (long long)_numberOfSeparators;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg4;
- (id)initWithNumberOfItems:(long long)arg1;
- (long long)numberOfItems;
- (void)prepareLayout;
- (double)rowHeight;
- (double)separatorHeight;
- (void)setRowHeight:(double)arg1;
- (void)setSeparatorHeight:(double)arg1;
- (void)setShouldInsetAllSeparators:(bool)arg1;
- (void)setShouldShowSeparators:(bool)arg1;
- (bool)shouldInsetAllSeparators;
- (bool)shouldShowSeparators;

@end
