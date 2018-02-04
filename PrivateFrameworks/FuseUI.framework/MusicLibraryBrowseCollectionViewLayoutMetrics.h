/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseCollectionViewLayoutMetrics : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _headerSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerViewContentInsets;
    double  _itemHeight;
    double  _itemWidth;
    double  _minimumInteritemSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInsets;
    double  _textLateralEdgePadding;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } headerSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerViewContentInsets;
@property (nonatomic) double itemHeight;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) double itemWidth;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;
@property (nonatomic) double textLateralEdgePadding;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)description;
- (struct CGSize { double x1; double x2; })headerSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerViewContentInsets;
- (id)init;
- (double)itemHeight;
- (struct CGSize { double x1; double x2; })itemSize;
- (double)itemWidth;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHeaderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderViewContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setItemHeight:(double)arg1;
- (void)setItemWidth:(double)arg1;
- (void)setMinimumInteritemSpacing:(double)arg1;
- (void)setSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextLateralEdgePadding:(double)arg1;
- (double)textLateralEdgePadding;

@end
