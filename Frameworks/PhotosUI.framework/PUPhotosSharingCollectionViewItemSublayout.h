/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingCollectionViewItemSublayout : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _badgesContainerFrame;
    unsigned long long  _badgesCorner;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _badgesOffset;
    double  _bottomBadgeInset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _floatingBadgesContainerFrame;
    NSIndexPath * _indexPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _itemFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _optionBadgeCenter;
    UICollectionViewLayoutAttributes * _optionBadgeLayoutAttributes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _selectionBadgeCenter;
    UICollectionViewLayoutAttributes * _selectionBadgeLayoutAttributes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleItemFrame;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } badgesContainerFrame;
@property (nonatomic) unsigned long long badgesCorner;
@property (nonatomic) struct UIOffset { double x1; double x2; } badgesOffset;
@property (nonatomic) double bottomBadgeInset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } floatingBadgesContainerFrame;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } itemFrame;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *optionBadgeLayoutAttributes;
@property (nonatomic) struct CGSize { double x1; double x2; } optionBadgeSize;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *selectionBadgeLayoutAttributes;
@property (nonatomic) struct CGSize { double x1; double x2; } selectionBadgeSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleItemFrame;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })badgesContainerFrame;
- (unsigned long long)badgesCorner;
- (struct UIOffset { double x1; double x2; })badgesOffset;
- (double)bottomBadgeInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingBadgesContainerFrame;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 itemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemFrame;
- (id)optionBadgeLayoutAttributes;
- (struct CGSize { double x1; double x2; })optionBadgeSize;
- (void)prepareSublayout;
- (id)selectionBadgeLayoutAttributes;
- (struct CGSize { double x1; double x2; })selectionBadgeSize;
- (void)setBadgesCorner:(unsigned long long)arg1;
- (void)setBadgesOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setBottomBadgeInset:(double)arg1;
- (void)setFloatingOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setOptionBadgeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelectionBadgeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisibleItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleItemFrame;

@end
