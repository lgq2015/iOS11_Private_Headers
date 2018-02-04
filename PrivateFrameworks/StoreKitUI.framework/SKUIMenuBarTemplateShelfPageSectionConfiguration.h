/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuBarTemplateShelfPageSectionConfiguration : SKUIShelfPageSectionConfiguration {
    id  _fixedElementsCollectionViewCell;
    long long  _focusedIndex;
    unsigned long long  _numberOfIterations;
}

- (void).cxx_destruct;
- (id)_focusedViewElement;
- (id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (id)effectiveViewElementForShelfItemViewElement:(id)arg1;
- (id)init;
- (id)initWithNumberOfIterations:(unsigned long long)arg1;
- (unsigned long long)numberOfIterations;
- (long long)numberOfSectionCells;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(bool)arg3 numberOfShelfItems:(long long)arg4;
- (void)scrollViewDidScroll:(id)arg1;

@end
