/* made by EzioChiu.
 */

@protocol SFCollectionViewDelegateLayout <UICollectionViewDelegate>

@required

- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 preferredSizeForItemAtIndexPath:(NSIndexPath *)arg3;

@end
