/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetViewModelChange : PUViewModelChange {
    bool  _accessoryViewVisibilityChanged;
    PUBrowsingAnimatedImagePlayerChange * _animatedImageChange;
    bool  _assetChanged;
    bool  _badgeInfoChanged;
    bool  _contentOffsetChanged;
    bool  _focusValueChanged;
    bool  _forceBadgesVisibleChanged;
    PUBrowsingIrisPlayerChange * _irisPlayerChange;
    bool  _isFavoriteChanged;
    bool  _isInEditModeChanged;
    bool  _isUpdatingDisplayedContentChanged;
    bool  _isUserTransformingTileDidChange;
    bool  _loadingStatusChanged;
    bool  _modelTileTransformChanged;
    bool  _saveProgressChanged;
    bool  _saveStateChanged;
    PUBrowsingVideoPlayerChange * _videoPlayerChange;
}

@property (setter=_setAccessoryViewVisibilityChanged:, nonatomic) bool accessoryViewVisibilityChanged;
@property (setter=_setAnimatedImageChange:, nonatomic, retain) PUBrowsingAnimatedImagePlayerChange *animatedImageChange;
@property (setter=_setAssetChanged:, nonatomic) bool assetChanged;
@property (setter=_setBadgeInfoChanged:, nonatomic) bool badgeInfoChanged;
@property (setter=_setContentOffsetChanged:, nonatomic) bool contentOffsetChanged;
@property (setter=_setFocusValueChanged:, nonatomic) bool focusValueChanged;
@property (setter=_setForceBadgesVisibleChanged:, nonatomic) bool forceBadgesVisibleChanged;
@property (setter=_setIrisPlayerChange:, nonatomic, retain) PUBrowsingIrisPlayerChange *irisPlayerChange;
@property (setter=_setIsFavoriteChanged:, nonatomic) bool isFavoriteChanged;
@property (setter=_setIsInEditModeChanged:, nonatomic) bool isInEditModeChanged;
@property (setter=_setIsUpdatingDisplayedContentChanged:, nonatomic) bool isUpdatingDisplayedContentChanged;
@property (setter=_setUserTransformingTileDidChange:, nonatomic) bool isUserTransformingTileDidChange;
@property (setter=_setLoadingStatusChanged:, nonatomic) bool loadingStatusChanged;
@property (setter=_setModelTileTransformChanged:, nonatomic) bool modelTileTransformChanged;
@property (setter=_setSaveProgressChanged:, nonatomic) bool saveProgressChanged;
@property (setter=_setSaveStateChanged:, nonatomic) bool saveStateChanged;
@property (setter=_setVideoPlayerChange:, nonatomic, retain) PUBrowsingVideoPlayerChange *videoPlayerChange;

- (void).cxx_destruct;
- (void)_setAccessoryViewVisibilityChanged:(bool)arg1;
- (void)_setAnimatedImageChange:(id)arg1;
- (void)_setAssetChanged:(bool)arg1;
- (void)_setBadgeInfoChanged:(bool)arg1;
- (void)_setContentOffsetChanged:(bool)arg1;
- (void)_setFocusValueChanged:(bool)arg1;
- (void)_setForceBadgesVisibleChanged:(bool)arg1;
- (void)_setIrisPlayerChange:(id)arg1;
- (void)_setIsFavoriteChanged:(bool)arg1;
- (void)_setIsInEditModeChanged:(bool)arg1;
- (void)_setIsUpdatingDisplayedContentChanged:(bool)arg1;
- (void)_setLoadingStatusChanged:(bool)arg1;
- (void)_setModelTileTransformChanged:(bool)arg1;
- (void)_setSaveProgressChanged:(bool)arg1;
- (void)_setSaveStateChanged:(bool)arg1;
- (void)_setUserTransformingTileDidChange:(bool)arg1;
- (void)_setVideoPlayerChange:(id)arg1;
- (bool)accessoryViewVisibilityChanged;
- (id)animatedImageChange;
- (bool)assetChanged;
- (bool)badgeInfoChanged;
- (bool)contentOffsetChanged;
- (bool)focusValueChanged;
- (bool)forceBadgesVisibleChanged;
- (bool)hasChanges;
- (id)irisPlayerChange;
- (bool)isFavoriteChanged;
- (bool)isInEditModeChanged;
- (bool)isUpdatingDisplayedContentChanged;
- (bool)isUserTransformingTileDidChange;
- (bool)loadingStatusChanged;
- (bool)modelTileTransformChanged;
- (bool)saveProgressChanged;
- (bool)saveStateChanged;
- (id)videoPlayerChange;

@end
