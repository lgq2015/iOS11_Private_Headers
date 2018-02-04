/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewLayout : NSObject <NSCoding> {
    UIDynamicAnimator * _animator;
    UICollectionView * _collectionView;
    struct CGSize { 
        double width; 
        double height; 
    }  _collectionViewBoundsSize;
    struct _UICollectionViewCompositionLayout { Class x1; } * _compositionLayout;
    NSMutableDictionary * _decorationViewClassDict;
    NSMutableDictionary * _decorationViewExternalObjectsTables;
    NSMutableDictionary * _decorationViewNibDict;
    NSMutableDictionary * _deletedDecorationIndexPathsDict;
    NSMutableIndexSet * _deletedSectionsSet;
    NSMutableDictionary * _deletedSupplementaryIndexPathsDict;
    NSArray * _elementKinds;
    NSMutableDictionary * _finalAnimationLayoutAttributesDict;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSMutableDictionary * _initialAnimationLayoutAttributesDict;
    NSMutableDictionary * _insertedDecorationIndexPathsDict;
    NSMutableIndexSet * _insertedSectionsSet;
    NSMutableDictionary * _insertedSupplementaryIndexPathsDict;
    UICollectionViewLayoutInvalidationContext * _invalidationContext;
    NSIndexSet * _items;
    struct { 
        unsigned int inTransitionFromTransitionLayout : 1; 
        unsigned int inTransitionToTransitionLayout : 1; 
        unsigned int prepared : 1; 
        unsigned int wantsRightToLeftHorizontalMirroringIfNeeded : 1; 
    }  _layoutFlags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _layoutOffset;
    unsigned long long  _layoutOffsetEdges;
    NSIndexSet * _sections;
    UICollectionViewLayout * _siblingLayout;
    long long  _sublayoutType;
    UICollectionViewLayout * _transitioningFromLayout;
    UICollectionViewLayout * _transitioningToLayout;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (getter=_compositionLayout, setter=_setCompositionLayout:, nonatomic) _UICollectionViewCompositionLayout *compositionLayout;
@property (getter=_elementKinds, setter=_setElementKinds:, nonatomic, copy) NSArray *elementKinds;
@property (getter=_focusFastScrollingIndexBarInsets, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } focusFastScrollingIndexBarInsets;
@property (getter=_frame, setter=_setFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (getter=_items, setter=_setItems:, nonatomic, copy) NSIndexSet *items;
@property (getter=_layoutOffset, setter=_setLayoutOffset:, nonatomic) struct CGPoint { double x1; double x2; } layoutOffset;
@property (getter=_layoutOffsetEdges, setter=_setLayoutOffsetEdges:, nonatomic) unsigned long long layoutOffsetEdges;
@property (getter=_isPrepared, setter=_setPrepared:, nonatomic) bool prepared;
@property (getter=_sections, setter=_setSections:, nonatomic, copy) NSIndexSet *sections;
@property (getter=_siblingLayout, setter=_setSiblingLayout:, nonatomic) UICollectionViewLayout *siblingLayout;
@property (getter=_sublayoutType, setter=_setSublayoutType:, nonatomic) long long sublayoutType;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bounds;
- (bool)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (struct _UICollectionViewCompositionLayout { Class x1; }*)_compositionLayout;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollingToSection:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_contentOffsetFromProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3;
- (id)_decorationViewForLayoutAttributes:(id)arg1;
- (void)_didFinishLayoutTransitionAnimations:(bool)arg1;
- (id)_dynamicAnimator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dynamicReferenceBounds;
- (id)_elementKinds;
- (bool)_estimatesSizes;
- (struct CGSize { double x1; double x2; })_fallbackItemSize;
- (void)_finalizeCollectionViewItemAnimations;
- (void)_finalizeLayoutTransition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_focusFastScrollingIndexBarInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frame;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (void)_invalidateLayoutUsingContext:(id)arg1;
- (id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 reorderingCancelled:(bool)arg3;
- (id)_invalidationContextForReorderingTargetPosition:(struct CGPoint { double x1; double x2; })arg1 targetIndexPaths:(id)arg2 withPreviousPosition:(struct CGPoint { double x1; double x2; })arg3 previousIndexPaths:(id)arg4;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_isPrepared;
- (id)_items;
- (id)_layoutAttributesForElementsInProjectedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withProjectionVector:(struct CGVector { double x1; double x2; })arg2 projectionDistance:(double)arg3;
- (id)_layoutAttributesForReorderedItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })_layoutOffset;
- (unsigned long long)_layoutOffsetEdges;
- (struct CGPoint { double x1; double x2; })_offsetInTopParentLayout:(struct _UICollectionViewCompositionLayout {}**)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_preferredLayoutMargins;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint { double x1; double x2; })arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint { double x1; double x2; })arg4;
- (id)_reorderingTargetItemIndexPathForPosition:(struct CGPoint { double x1; double x2; })arg1 withPreviousIndexPath:(id)arg2;
- (id)_sections;
- (void)_setCollectionView:(id)arg1;
- (void)_setCollectionViewBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setCompositionLayout:(struct _UICollectionViewCompositionLayout { Class x1; }*)arg1;
- (void)_setDynamicAnimator:(id)arg1;
- (void)_setElementKinds:(id)arg1;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setItems:(id)arg1;
- (void)_setLayoutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setLayoutOffsetEdges:(unsigned long long)arg1;
- (void)_setPrepared:(bool)arg1;
- (void)_setSections:(id)arg1;
- (void)_setSiblingLayout:(id)arg1;
- (void)_setSublayoutType:(long long)arg1;
- (void)_setWantsRightToLeftHorizontalMirroringIfNeeded:(bool)arg1;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (id)_siblingLayout;
- (long long)_sublayoutType;
- (bool)_supportsAdvancedTransitionAnimations;
- (bool)_wantsRightToLeftHorizontalMirroringIfNeeded;
- (bool)canBeEdited;
- (id)collectionView;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayout:(id)arg2;
- (long long)developmentLayoutDirection;
- (void)encodeWithCoder:(id)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(bool)arg3;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint { double x1; double x2; })arg4;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (bool)isEditing;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (void)setEditing:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })transitionContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 keyItemIndexPath:(id)arg2;
- (struct CGPoint { double x1; double x2; })updatesContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_layoutAttributesForElementClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 passingTest:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (void)music_collectionViewInheritedLayoutInsetsDidChange;

@end
