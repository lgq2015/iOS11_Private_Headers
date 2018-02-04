/* made by EzioChiu.
 */

@protocol PXPeopleStripCollectionViewControllerDelegate <NSObject>

@required

- (void)memberTappedAtIndexPath:(NSIndexPath *)arg1 forPeopleStripController:(PXPeopleStripCollectionViewController *)arg2;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (struct CGSize { double x1; double x2; })sizeForItem;

@end
