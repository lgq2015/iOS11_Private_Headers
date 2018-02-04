/* made by EzioChiu.
 */

@protocol UICollectionViewDelegateTableLayout <UICollectionViewDelegate>

@optional

- (double)collectionView:(UICollectionView *)arg1 heightForFooterViewInTableLayout:(UICollectionViewTableLayout *)arg2;
- (double)collectionView:(UICollectionView *)arg1 heightForHeaderViewInTableLayout:(UICollectionViewTableLayout *)arg2;
- (void)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 commitEditingStyle:(long long)arg3 forRowAtIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 didEndEditingRowAtIndexPath:(NSIndexPath *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 editingStyleForRowAtIndexPath:(NSIndexPath *)arg3;
- (double)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 heightForFooterInSection:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 heightForHeaderInSection:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 heightForRowAtIndexPath:(NSIndexPath *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 indentationLevelForRowAtIndexPath:(NSIndexPath *)arg3;
- (UISwipeActionsConfiguration *)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 leadingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)arg3;
- (NSArray *)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 leadingSwipeActionsForRowAtIndexPath:(NSIndexPath *)arg3;
- (bool)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg3;
- (UISwipeActionsConfiguration *)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)arg3;
- (NSArray *)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 trailingSwipeActionsForRowAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 tableLayout:(UICollectionViewTableLayout *)arg2 willBeginEditingRowAtIndexPath:(NSIndexPath *)arg3;

@end
