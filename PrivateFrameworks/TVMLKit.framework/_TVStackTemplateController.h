/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackTemplateController : _TVStackCommonTemplateController {
    UIView * _backdropTintView;
    UIViewController * _backdropTintViewController;
    NSIndexPath * _lastFocusedIndexPath;
    double  _lastLayoutWidth;
    _TVNeedsMoreContentEvaluator * _needsMoreContentEvaluator;
    NSArray * _stackRows;
    NSArray * _stackSections;
    NSArray * _viewControllers;
}

- (void).cxx_destruct;
- (void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg2;
- (void)_buildStackSections;
- (void)_configureBackgroundTintView;
- (struct CGSize { double x1; double x2; })_maxContentSize;
- (double)_maxViewWidth;
- (void)_updateBackgroundTintView;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateFirstItemRowIndexes;
- (bool)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id*)arg2;
- (id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionListMargin;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)updateCollectionViewControllersAndForceReload:(bool)arg1;
- (id)viewControllers;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
