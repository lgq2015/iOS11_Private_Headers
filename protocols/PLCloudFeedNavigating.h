/* made by EzioChiu.
 */

@protocol PLCloudFeedNavigating <NSObject>

@required

- (bool)cloudFeedAssetIsAvailableForNavigation:(PLManagedAsset *)arg1;
- (bool)cloudFeedCommentIsAvailableForNavigation:(PLCloudSharedComment *)arg1;
- (bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(PLCloudSharedAlbum *)arg1;

@end
