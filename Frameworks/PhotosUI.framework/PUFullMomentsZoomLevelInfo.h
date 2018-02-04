/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFullMomentsZoomLevelInfo : PUGridZoomLevelInfo <PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate> {
    PUGridZoomLevelInfo * _transitionOtherLevelInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_fillerViewInsetsForItemAtIndexPath:(id)arg1;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(bool*)arg2 locations:(id*)arg3 title:(id*)arg4 startDate:(id*)arg5 endDate:(id*)arg6;
- (void)_prepareTransitionImageContentForCell:(id)arg1 atIndexPath:(id)arg2 appearingZoomLevelInfo:(id)arg3;
- (void)_prepareTransitionSubviewsForCell:(id)arg1 atIndexPath:(id)arg2 isAppearing:(bool)arg3;
- (struct __CFString { }*)aggregateLevelKey;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (long long)cellFillMode;
- (bool)configureGridCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (void)didFinishZoomLevelTransition;
- (id)displayTitle;
- (void)getPhotosDataSource:(id*)arg1 displayTitleInfo:(id*)arg2 forDetailsForVisualSection:(long long)arg3;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (struct CGSize { double x1; double x2; })imageRequestItemSize;
- (id)newCollectionViewLayout;
- (void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3;
- (void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3;
- (id)sectionHeaderElementKind;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(bool)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (bool)supportsEditMode;
- (bool)supportsIncrementalChangeNotifications;
- (struct CGSize { double x1; double x2; })thumbnailImageSize;
- (void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)wantsAssetCountsVisible;
- (bool)wantsAutomaticContentOffsetAdjustment;
- (bool)wantsCloudStatusVisible;
- (bool)wantsMagnifierNavigation;

@end
