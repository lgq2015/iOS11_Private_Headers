/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridRenderedStrip : UICollectionReusableView {
    bool  __needsRendering;
    UIView * __sideExtendedContentView;
    int  _backgroundColorValue;
    unsigned long long  _contentExtenderType;
    <PUGridRenderedStripDataSource> * _dataSource;
    bool  _extendsToTop;
    struct CGSize { 
        double width; 
        double height; 
    }  _interItemSpacing;
    double  _itemContentScale;
    NSArray * _itemIndexPaths;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    PUSectionedGridLayout * _layout;
    double  _leftContentInset;
    UIView * _topContentView;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _visualItemRange;
    long long  _visualSectionIndex;
}

@property (setter=_setNeedsRendering:, nonatomic) bool _needsRendering;
@property (nonatomic, readonly) UIView *_sideExtendedContentView;
@property (nonatomic) int backgroundColorValue;
@property (nonatomic) unsigned long long contentExtenderType;
@property (nonatomic) <PUGridRenderedStripDataSource> *dataSource;
@property (nonatomic) bool extendsToTop;
@property (nonatomic) struct CGSize { double x1; double x2; } interItemSpacing;
@property (nonatomic) double itemContentScale;
@property (nonatomic, retain) NSArray *itemIndexPaths;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) PUSectionedGridLayout *layout;
@property (nonatomic) double leftContentInset;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) UIView *topContentView;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } visualItemRange;
@property (nonatomic, readonly) long long visualSectionIndex;

- (void).cxx_destruct;
- (bool)_disableRasterizeInAnimations;
- (bool)_needsRendering;
- (void)_render;
- (void)_setNeedsRendering:(bool)arg1;
- (id)_sideExtendedContentView;
- (void)_updateExtendedContents;
- (void)applyLayoutAttributes:(id)arg1;
- (int)backgroundColorValue;
- (unsigned long long)contentExtenderType;
- (id)dataSource;
- (bool)extendsToTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (double)itemContentScale;
- (id)itemIndexPaths;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layout;
- (void)layoutSubviews;
- (double)leftContentInset;
- (long long)numberOfColumns;
- (void)setBackgroundColorValue:(int)arg1;
- (void)setContentExtenderType:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setExtendsToTop:(bool)arg1;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemContentScale:(double)arg1;
- (void)setItemIndexPaths:(id)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayout:(id)arg1;
- (void)setLeftContentInset:(double)arg1;
- (void)setNeedsRendering;
- (void)setVisualSectionIndex:(long long)arg1 andVisualItemRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)topContentView;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visualItemRange;
- (long long)visualSectionIndex;

@end
