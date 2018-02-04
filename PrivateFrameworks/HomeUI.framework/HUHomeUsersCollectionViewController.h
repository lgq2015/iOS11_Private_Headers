/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUHomeUsersCollectionViewController : HUItemCollectionViewController <UICollectionViewDelegateFlowLayout> {
    double  _cellAvatarDiameter;
    double  _cellWidth;
    HFHomeBuilder * _homeBuilder;
}

@property (nonatomic) double cellAvatarDiameter;
@property (nonatomic) double cellWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFHomeBuilder *homeBuilder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_horizontalInset;
- (double)_verticalInset;
- (double)cellAvatarDiameter;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (double)cellWidth;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)homeBuilder;
- (id)initWithHomeBuilder:(id)arg1;
- (bool)isLayoutDependentOnItemState;
- (void)setCellAvatarDiameter:(double)arg1;
- (void)setCellWidth:(double)arg1;
- (void)setHomeBuilder:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
