/* made by EzioChiu.
 */

@protocol PUPhotosGridTransitioningLayout <PUPhotosGridTransitioningLayoutBasic>

@required

- (void)adjustEffectiveContentOriginForTransitionEndContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)enumerateRealSectionsForVisualSection:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, bool*, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtGridCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1 inTransitionSection:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtGridCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1 inVisualSection:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSectionHeaderAtVisualSection:(long long)arg1;
- (struct PUGridCoordinates { long long x1; long long x2; })gridCoordinatesInTransitionSectionForItemAtIndexPath:(NSIndexPath *)arg1;
- (struct PUGridCoordinates { long long x1; long long x2; })gridCoordinatesInVisualSectionForItemAtIndexPath:(NSIndexPath *)arg1;
- (bool)hasItemAtGridCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1 inTransitionSection:(long long)arg2;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (NSIndexPath *)itemIndexPathAtCenterOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (NSIndexPath *)itemIndexPathAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (NSIndexPath *)itemIndexPathClosestToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (long long)itemsPerRow;
- (NSIndexPath *)mainRealIndexPathAtGridCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1 inTransitionSection:(long long)arg2;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (NSIndexPath *)maxItemIndexPathAbovePoint:(struct CGPoint { double x1; double x2; })arg1;
- (NSIndexPath *)maxItemIndexPathLeftOfPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)numberOfContiguousRowsInTransitionSection:(long long)arg1;
- (long long)numberOfRowsInVisualSection:(long long)arg1;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (long long)numberOfVisualSections;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransitionAnchorShiftsColumns:(bool)arg1;
- (void)setTransitionEffectiveContentOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionExplicitAnchorItemIndexPath:(NSIndexPath *)arg1;
- (void)setTransitionIsAnimated:(bool)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForTransitionFromGridLayout:(UICollectionViewLayout<PUPhotosGridTransitioningLayout> *)arg1;
- (struct PUGridCoordinates { long long x1; long long x2; })targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates { long long x1; long long x2; })arg1 atVisualSection:(long long)arg2 outTransitionSection:(long long*)arg3;
- (NSIndexPath *)targetTransitionRealIndexPathForIndexPath:(NSIndexPath *)arg1;
- (struct CGSize { double x1; double x2; })transitionActualContentSize;
- (long long)transitionAnchorColumnOffset;
- (NSIndexPath *)transitionAnchorIndexPathForTransitionSection:(long long)arg1;
- (bool)transitionAnchorShiftsColumns;
- (struct CGPoint { double x1; double x2; })transitionEffectiveContentOrigin;
- (NSIndexPath *)transitionExplicitAnchorItemIndexPath;
- (NSIndexPath *)transitionFirstVisibleRowVisualPath;
- (bool)transitionIsAnimated;
- (NSIndexPath *)transitionLastVisibleRowVisualPath;
- (NSIndexSet *)transitionSectionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toOrFromGridLayout:(UICollectionViewLayout<PUPhotosGridTransitioningLayout> *)arg2;
- (struct PUGridCoordinates { long long x1; long long x2; })visualGridCoordsForTransitionGridCoords:(struct PUGridCoordinates { long long x1; long long x2; })arg1 atTransitionSection:(long long)arg2 outVisualSection:(long long*)arg3;
- (long long)visualSectionForRealSection:(long long)arg1;

@end
