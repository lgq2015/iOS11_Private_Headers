/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialPageSection : SKUIStorePageSection {
    SKUIColorScheme * _colorScheme;
    SKUIEditorialLayout * _editorialLayout;
    bool  _hasValidColorScheme;
    bool  _isExpanded;
    SKUIViewElementLayoutContext * _layoutContext;
}

@property (nonatomic, readonly) SKUIEditorialComponent *pageComponent;

- (void).cxx_destruct;
- (id)_colorScheme;
- (id)_editorialLayout;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (long long)applyUpdateType:(long long)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
