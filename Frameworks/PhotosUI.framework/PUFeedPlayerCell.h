/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedPlayerCell : PUFeedCell {
    UIButton * __commentButton;
    bool  __isPerformingIrisPlayerChanges;
    bool  __needsUpdatePlayerItem;
    bool  __needsUpdateVitality;
    ISLivePhotoPlayer * __player;
    ISLivePhotoUIView * __playerView;
    bool  __shouldHideCommentButton;
    long long  _commentCount;
    UICollectionView * _containingCollectionView;
    int  _currentImageRequestID;
    bool  _isPhotoImageDegraded;
    UIImage * _photoImage;
    double  _photoTime;
    bool  _playerHidden;
    AVAsset * _videoAsset;
}

@property (setter=_setCommentButton:, nonatomic, retain) UIButton *_commentButton;
@property (setter=_setPerformingIrisPlayerChanges:, nonatomic) bool _isPerformingIrisPlayerChanges;
@property (setter=_setNeedsUpdatePlayerItem:, nonatomic) bool _needsUpdatePlayerItem;
@property (setter=_setNeedsUpdateVitality:, nonatomic) bool _needsUpdateVitality;
@property (nonatomic, readonly) ISLivePhotoPlayer *_player;
@property (nonatomic, readonly) ISLivePhotoUIView *_playerView;
@property (setter=_setShouldHideCommentButton:, nonatomic) bool _shouldHideCommentButton;
@property (nonatomic) long long commentCount;
@property (nonatomic) UICollectionView *containingCollectionView;
@property (nonatomic) int currentImageRequestID;
@property (setter=setPhotoImageDegraded:, nonatomic) bool isPhotoImageDegraded;
@property (nonatomic, retain) UIImage *photoImage;
@property (nonatomic) double photoTime;
@property (getter=isPlayerHidden, nonatomic) bool playerHidden;
@property (nonatomic, retain) AVAsset *videoAsset;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (void)_assertInsideIrisPlayerChanges;
- (id)_commentButton;
- (void)_handleCommentButton:(id)arg1;
- (void)_invalidatePlayerItem;
- (void)_invalidateVitality;
- (bool)_isPerformingIrisPlayerChanges;
- (void)_layoutPlayerView;
- (bool)_needsUpdateIris;
- (bool)_needsUpdatePlayerItem;
- (bool)_needsUpdateVitality;
- (id)_player;
- (id)_playerCellDelegate;
- (id)_playerView;
- (void)_setCommentButton:(id)arg1;
- (void)_setNeedsUpdateIris;
- (void)_setNeedsUpdatePlayerItem:(bool)arg1;
- (void)_setNeedsUpdateVitality:(bool)arg1;
- (void)_setPerformingIrisPlayerChanges:(bool)arg1;
- (void)_setShouldHideCommentButton:(bool)arg1;
- (bool)_shouldHideCommentButton;
- (void)_updateCommentButton;
- (void)_updateIrisIfNeeded;
- (void)_updatePlayerItemIfNeeded;
- (void)_updateVitalityIfNeeded;
- (long long)commentCount;
- (id)containingCollectionView;
- (int)currentImageRequestID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPhotoImageDegraded;
- (bool)isPlayerHidden;
- (void)layoutSubviews;
- (void)performIrisPlayerChanges:(id /* block */)arg1;
- (id)photoImage;
- (double)photoTime;
- (void)prepareForReuse;
- (void)setCommentCount:(long long)arg1;
- (void)setContainingCollectionView:(id)arg1;
- (void)setCurrentImageRequestID:(int)arg1;
- (void)setParallaxOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhotoImage:(id)arg1;
- (void)setPhotoImageDegraded:(bool)arg1;
- (void)setPhotoTime:(double)arg1;
- (void)setPlayerHidden:(bool)arg1;
- (void)setVideoAsset:(id)arg1;
- (id)videoAsset;

@end
