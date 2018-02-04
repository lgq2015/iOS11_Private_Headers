/* made by EzioChiu.
 */

@protocol PUGridLayoutProtocol <NSObject, PUCollectionViewLayoutDelegating>

@required

- (NSArray *)assetIndexPathsForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)finalizeViewTransitionToSize;
- (double)globalBottomPadding;
- (double)globalFooterHeight;
- (NSIndexPath *)globalFooterIndexPath;
- (double)globalHeaderHeight;
- (double)globalTopPadding;
- (NSSet *)hiddenItemIndexPaths;
- (void)invalidateLayoutForVerticalScroll;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)prepareForViewTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (NSString *)sectionHeaderElementKind;
- (bool)sectionHeadersEnabled;
- (double)sectionTopPadding;
- (void)setGlobalBottomPadding:(double)arg1;
- (void)setGlobalFooterHeight:(double)arg1;
- (void)setGlobalHeaderHeight:(double)arg1;
- (void)setGlobalTopPadding:(double)arg1;
- (void)setHiddenItemIndexPaths:(NSSet *)arg1;
- (void)setSectionHeaderElementKind:(NSString *)arg1;
- (void)setSectionHeadersEnabled:(bool)arg1;
- (void)setSectionTopPadding:(double)arg1;
- (void)setUsesAspectItems:(bool)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForViewSizeTransitionContext:(id)arg1;
- (bool)usesAspectItems;

@end
