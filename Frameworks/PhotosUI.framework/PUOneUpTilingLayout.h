/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpTilingLayout : PUSectionedTilingLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _assetExplorerReviewScreenProgressIndicatorSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _bufferingIndicatorSize;
    bool  _canDisplayLoadingIndicators;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentGuideInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentSafeInsets;
    <PUOneUpTilingLayoutDelegate> * _delegate;
    struct { 
        bool respondsToAspectRatioForItemAtIndexPath; 
        bool respondsToShouldScaleToFitSafeInsetsForItemAtIndexPath; 
        bool respondsToBadgeSizeForItemAtIndexPath; 
        bool respondsToActionBadgeSizeForItemAtIndexPath; 
        bool respondsToAssetExplorerReviewScreenBadgeSizeForItemAtIndexPath; 
        bool respondsToShouldShowPlayButtonForItemAtIndexPath; 
        bool respondsToShouldShowProgressIndicatorForItemAtIndexPath; 
        bool respondsToShouldShowBufferingIndicatorForItemAtIndexPath; 
        bool respondsToLoadingIndicatorSizeForItemAtIndexPath; 
        bool respondsToModelTileTransformForItemAtIndexPath; 
        bool respondsToContentOffsetForItemAtIndexPath; 
        bool respondsToShouldShowAccessoryForItemAtIndexPath; 
        bool respondsToMinimumVisibleContentHeightForItemAtIndexPath; 
        bool respondsToMinimumVisibleAccessoryHeightForItemAtIndexPath; 
        bool respondsToShouldShowVideoPlaceholderForItemAtIndexPath; 
        bool respondsToDisableInitialZoomToFillForItemAtIndexPath; 
    }  _delegateFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _displaySizeForInsetMatching;
    NSIndexPath * _inFocusIndexPath;
    struct CGSize { 
        double width; 
        double height; 
    }  _interpageSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    NSMutableDictionary * _layoutInfosByIndexPathByTileKind;
    NSIndexPath * _neighborIndexPath;
    PUParallaxComputer * _parallaxComputer;
    struct CGSize { 
        double width; 
        double height; 
    }  _playButtonSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _progressIndicatorSize;
    bool  _shouldPinContentToTop;
    long long  _tileInitialContentMode;
    UITraitCollection * _traitCollection;
    double  _transitionProgress;
    bool  _useAssetExplorerReviewScreenBadgeTiles;
    bool  _useAssetExplorerReviewScreenSelectionIndicatorTiles;
    bool  _useBackgroundTile;
    bool  _useBadgeTiles;
    bool  _useUserTransformTiles;
}

@property (nonatomic) struct CGSize { double x1; double x2; } assetExplorerReviewScreenProgressIndicatorSize;
@property (nonatomic) struct CGSize { double x1; double x2; } bufferingIndicatorSize;
@property (nonatomic) bool canDisplayLoadingIndicators;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentGuideInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentSafeInsets;
@property (nonatomic) <PUOneUpTilingLayoutDelegate> *delegate;
@property (nonatomic) struct CGSize { double x1; double x2; } displaySizeForInsetMatching;
@property (nonatomic, readonly) NSIndexPath *indexPathOfCurrentItem;
@property (nonatomic) struct CGSize { double x1; double x2; } interpageSpacing;
@property (nonatomic, retain) PUParallaxComputer *parallaxComputer;
@property (nonatomic) struct CGSize { double x1; double x2; } playButtonSize;
@property (nonatomic) struct CGSize { double x1; double x2; } progressIndicatorSize;
@property (nonatomic) bool shouldPinContentToTop;
@property (nonatomic) long long tileInitialContentMode;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (nonatomic, readonly) double transitionProgress;
@property (nonatomic) bool useAssetExplorerReviewScreenBadgeTiles;
@property (nonatomic) bool useAssetExplorerReviewScreenSelectionIndicatorTiles;
@property (nonatomic) bool useBackgroundTile;
@property (nonatomic) bool useBadgeTiles;
@property (nonatomic) bool useUserTransformTiles;

+ (id)centerTileKinds;
+ (void)initialize;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })untransformedRectForItemWithAspectRatio:(double)arg1 pageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 safeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;

- (void).cxx_destruct;
- (bool)_accessoryViewVisibilityForItemAtIndexPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })_contentOffsetForItemAtIndexPath:(id)arg1;
- (id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1 options:(unsigned long long)arg2;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1 pageSize:(struct CGSize { double x1; double x2; })arg2 secondaryDisplayTransform:(id)arg3 options:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTileWithSize:(struct CGSize { double x1; double x2; })arg1 centeredOnItemAtIndexPath:(id)arg2;
- (void)_getLayoutRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 transform:(out struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 parallaxOffset:(out struct CGPoint { double x1; double x2; }*)arg3 forContentOfItemAtIndexPath:(id)arg4 options:(unsigned long long)arg5;
- (id)_indexPathOfItemClosestToAbscissa:(double)arg1;
- (void)_invalidateContentRelatedTilesWithIndexPath:(id)arg1 inContext:(id)arg2;
- (bool)_isVideoPlacholderVisibleForItemAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })_itemSize;
- (double)_minimumBottomContentInsetsForItemAtIndexPath:(id)arg1;
- (double)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(double)arg2 outNeighbor:(out id*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageRectForItemAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_untransformedRectForItemAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_untransformedRectForItemAtIndexPath:(id)arg1 pageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGSize { double x1; double x2; })assetExplorerReviewScreenProgressIndicatorSize;
- (struct CGSize { double x1; double x2; })bufferingIndicatorSize;
- (bool)canDisplayLoadingIndicators;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentGuideInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentSafeInsets;
- (id)delegate;
- (struct CGSize { double x1; double x2; })displaySizeForInsetMatching;
- (struct CGSize { double x1; double x2; })estimatedSectionSize;
- (id)indexPathOfCurrentItem;
- (id)init;
- (struct CGSize { double x1; double x2; })interpageSpacing;
- (void)invalidateAccessoryForItemAtIndexPath:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)invalidateBadgeSizeForItemAtIndexPath:(id)arg1;
- (void)invalidateContentOffsetForItemAtIndexPath:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLoadingIndicatorForItemAtIndexPath:(id)arg1;
- (void)invalidateModelTileTransformForItemAtIndexPath:(id)arg1;
- (void)invalidateVideoPlaceholderForItemAtIndexPath:(id)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)parallaxComputer;
- (struct CGSize { double x1; double x2; })playButtonSize;
- (id)preferredScrollInfo;
- (void)prepareLayout;
- (struct CGSize { double x1; double x2; })progressIndicatorSize;
- (void)setAssetExplorerReviewScreenProgressIndicatorSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBufferingIndicatorSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCanDisplayLoadingIndicators:(bool)arg1;
- (void)setContentGuideInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentSafeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaySizeForInsetMatching:(struct CGSize { double x1; double x2; })arg1;
- (void)setInterpageSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setParallaxComputer:(id)arg1;
- (void)setPlayButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProgressIndicatorSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldPinContentToTop:(bool)arg1;
- (void)setTileInitialContentMode:(long long)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setUseAssetExplorerReviewScreenBadgeTiles:(bool)arg1;
- (void)setUseAssetExplorerReviewScreenSelectionIndicatorTiles:(bool)arg1;
- (void)setUseBackgroundTile:(bool)arg1;
- (void)setUseBadgeTiles:(bool)arg1;
- (void)setUseUserTransformTiles:(bool)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldPinContentToTop;
- (struct CGSize { double x1; double x2; })sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (long long)tileInitialContentMode;
- (id)traitCollection;
- (double)transitionProgress;
- (bool)useAssetExplorerReviewScreenBadgeTiles;
- (bool)useAssetExplorerReviewScreenSelectionIndicatorTiles;
- (bool)useBackgroundTile;
- (bool)useBadgeTiles;
- (bool)useUserTransformTiles;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForItemAtIndexPath:(id)arg1 transitionProgress:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;

@end
