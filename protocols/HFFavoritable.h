/* made by EzioChiu.
 */

@protocol HFFavoritable <NSObject>

@required

- (bool)hf_hasSetFavorite;
- (bool)hf_isFavorite;
- (bool)hf_shouldShowInFavorites;
- (NAFuture *)hf_updateIsFavorite:(bool)arg1;

@end
