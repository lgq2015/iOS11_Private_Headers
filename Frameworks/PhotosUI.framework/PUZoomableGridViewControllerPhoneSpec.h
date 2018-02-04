/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUZoomableGridViewControllerPhoneSpec : PUZoomableGridViewControllerSpec

- (bool)canDisplayMultipleRightBarButtonItems;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x1; double x2; })collectionsLevelThumbnailSize;
- (long long)collectionsSectionHeaderStyle;
- (void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)configureYearsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (bool)dynamicLayoutEnabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fullMomentsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x1; double x2; })fullMomentsLevelThumbnailSize;
- (long long)fullMomentsSectionHeaderStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })magnifiedDragEdgeInsets;
- (struct CGSize { double x1; double x2; })magnifiedImageSize;
- (double)magnifiedYOffset;
- (id)newGridSpec;
- (void)updateGridLayoutUsingFloatingHeaders:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })yearsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x1; double x2; })yearsLevelThumbnailSize;
- (long long)yearsSectionHeaderStyle;

@end
