/* made by EzioChiu.
 */

@protocol PUOneUpPhotosSharingTransitionDelegate

@required

- (struct CGPoint { double x1; double x2; })photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 contentOffsetForAssetReference:(PUAssetReference *)arg2;
- (UICollectionViewLayout *)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 layoutForAssetReference:(PUAssetReference *)arg2;
- (void)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 setVisibility:(bool)arg2 forAssetReference:(PUAssetReference *)arg3;
- (UIView *)photosSharingTransitionTransitioningView:(PUOneUpPhotosSharingTransition *)arg1;
- (void)photosSharingTransitionWillAnimateDismissal:(PUOneUpPhotosSharingTransition *)arg1;
- (void)photosSharingTransitionWillAnimatePresentation:(PUOneUpPhotosSharingTransition *)arg1;

@end
