/* made by EzioChiu.
 */

@protocol MiroEditorFlowLayoutDelegate <NSObject, UICollectionViewDelegateFlowLayout>

@optional

- (void)collectionView:(UICollectionView *)arg1 layout:(MiroEditorFlowLayout *)arg2 didSnapToItemAtIndexPath:(NSIndexPath *)arg3;
- (bool)collectionView:(UICollectionView *)arg1 layout:(MiroEditorFlowLayout *)arg2 shouldSnapToItemAtIndexPath:(NSIndexPath *)arg3;

@end