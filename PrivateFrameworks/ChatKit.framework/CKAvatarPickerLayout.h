/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarPickerLayout : UICollectionViewLayout {
    NSArray * _attrCollection;
    NSArray * _cutoutAttrCollection;
    <CKAvatarPickerLayoutDelegate> * _delegate;
    NSArray * _fromAttrCollection;
    NSArray * _fromCutoutAttrCollection;
    NSArray * _fromSupplementaryAttrCollection;
    UICollectionViewLayoutAttributes * _fromTitleSupplementaryAttr;
    bool  _isAnimatedLayoutChange;
    unsigned long long  _layoutMode;
    NSArray * _supplementaryAttrCollection;
    UICollectionViewLayoutAttributes * _titleSupplementaryAttr;
}

@property (nonatomic, copy) NSArray *attrCollection;
@property (nonatomic, copy) NSArray *cutoutAttrCollection;
@property (nonatomic) <CKAvatarPickerLayoutDelegate> *delegate;
@property (nonatomic, retain) NSArray *fromAttrCollection;
@property (nonatomic, copy) NSArray *fromCutoutAttrCollection;
@property (nonatomic, retain) NSArray *fromSupplementaryAttrCollection;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *fromTitleSupplementaryAttr;
@property (nonatomic) bool isAnimatedLayoutChange;
@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic, readonly) bool shouldFillOutFromCenter;
@property (nonatomic, copy) NSArray *supplementaryAttrCollection;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *titleSupplementaryAttr;

- (void).cxx_destruct;
- (double)_avatarBoundWidth;
- (double)_avatarBoundWidthLayoutMode:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_collapseableRange;
- (double)_collectionViewCollapseProgress;
- (double)_expandedBoundWidthForCount:(long long)arg1;
- (unsigned long long)_itemCount;
- (long long)_pancakeCount;
- (void)_setupExpandedLayout;
- (void)_setupPancakeLayout;
- (bool)_shouldShowContactNames;
- (id)attrCollection;
- (void)cleanupAnimationCache;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)cutoutAttrCollection;
- (id)delegate;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)fromAttrCollection;
- (id)fromCutoutAttrCollection;
- (id)fromSupplementaryAttrCollection;
- (id)fromTitleSupplementaryAttr;
- (id)initWithLayoutMode:(unsigned long long)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayoutAndCache;
- (bool)isAnimatedLayoutChange;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)layoutMode;
- (id)nameLayoutAttributesCollectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)prepareForAnimation;
- (void)prepareLayout;
- (void)setAttrCollection:(id)arg1;
- (void)setCutoutAttrCollection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFromAttrCollection:(id)arg1;
- (void)setFromCutoutAttrCollection:(id)arg1;
- (void)setFromSupplementaryAttrCollection:(id)arg1;
- (void)setFromTitleSupplementaryAttr:(id)arg1;
- (void)setIsAnimatedLayoutChange:(bool)arg1;
- (void)setLayoutMode:(unsigned long long)arg1;
- (void)setSupplementaryAttrCollection:(id)arg1;
- (void)setTitleSupplementaryAttr:(id)arg1;
- (bool)shouldFillOutFromCenter;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)supplementaryAttrCollection;
- (id)titleSupplementaryAttr;

@end
