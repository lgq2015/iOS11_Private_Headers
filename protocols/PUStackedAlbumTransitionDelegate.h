/* made by EzioChiu.
 */

@protocol PUStackedAlbumTransitionDelegate <NSObject>

@required

- (PUStackedAlbumLayout *)stackedAlbumTransition:(PUStackedAlbumTransition *)arg1 layoutForCollection:(id <PLAssetContainer>)arg2 forCollectionView:(UICollectionView *)arg3;
- (void)stackedAlbumTransition:(PUStackedAlbumTransition *)arg1 setVisibility:(bool)arg2 forCollection:(id <PLAssetContainer>)arg3;

@optional

- (PUStackedAlbumLayout *)stackedAlbumTransition:(PUStackedAlbumTransition *)arg1 layoutForPHCollection:(PHCollection *)arg2 forCollectionView:(UICollectionView *)arg3;
- (void)stackedAlbumTransition:(PUStackedAlbumTransition *)arg1 setVisibility:(bool)arg2 forPHCollection:(PHCollection *)arg3;

@end
