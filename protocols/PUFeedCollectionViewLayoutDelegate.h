/* made by EzioChiu.
 */

@protocol PUFeedCollectionViewLayoutDelegate <UICollectionViewDelegate>

@required

- (id)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 batchIDForTileAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 captionSizeForTileAtIndexPath:(NSIndexPath *)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (long long)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 configurationForSectionHeaderType:(long long)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 contentInsetsForSection:(long long)arg3;
- (id)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 groupIDForSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 imageSizeForTileAtIndexPath:(NSIndexPath *)arg3;
- (struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 metricsForSeparatorBetweenRowAtIndexPath:(NSIndexPath *)arg3 andRowAtIndexPath:(NSIndexPath *)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })arg5;
- (struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })arg5;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 mininumSizeForTileAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 referenceMaximumLength:(double*)arg3 minimumNumberOfTilesToOmit:(long long*)arg4 forSection:(long long)arg5;
- (bool)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 shouldHideHeaderInSection:(long long)arg3;
- (bool)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 shouldHideSection:(long long)arg3;
- (bool)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (bool)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 shouldShowCaptionForTileAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 sizeForHeaderOfSections:(NSIndexSet *)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 sizeForRowAtIndexPath:(NSIndexPath *)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 sizeForThumbnailInSection:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (long long)collectionView:(UICollectionView *)arg1 layout:(PUFeedCollectionViewLayout *)arg2 typeForSection:(long long)arg3;

@end
