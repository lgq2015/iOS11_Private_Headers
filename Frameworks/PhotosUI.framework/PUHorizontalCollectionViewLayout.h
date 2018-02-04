/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUHorizontalCollectionViewLayout : UICollectionViewLayout {
    NSArray * _cachedItemLayoutAttributes;
    NSArray * _cachedSectionFrames;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <PUHorizontalCollectionViewLayoutDelegate> * _delegate;
    double  _interitemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _itemsContentInset;
    NSArray * _lastRequestedLayoutAttributesInRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastRequestedRect;
}

@property (nonatomic) <PUHorizontalCollectionViewLayoutDelegate> *delegate;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } itemsContentInset;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)delegate;
- (id)init;
- (double)interitemSpacing;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })itemsContentInset;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)setDelegate:(id)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemsContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
