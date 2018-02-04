/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripTilingLayout : PUTilingLayout {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    NSCache * _layoutInfoCache;
    long long  _numberOfItems;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) PUFilmstripDataSource *dataSource;

- (void).cxx_destruct;
- (id)_layoutInfoForIndicatorInfo:(id)arg1 withIndex:(long long)arg2;
- (id)_layoutInfoForTileWithIndex:(long long)arg1 kind:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)initWithContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)layoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredScrollInfo;
- (void)prepareLayout;

@end
