/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerCell : UICollectionViewCell <PHLivePhotoViewDelegate> {
    <CKPhotoPickerCellDelegate> * _delegate;
    UIImageView * _imageView;
    bool  _isLivePhoto;
    bool  _isVideo;
    CKPhotoTileBadgeView * _livePhotoBadgeView;
    PHLivePhotoView * _livePhotoView;
    PLRoundProgressView * _progressView;
    UIImageView * _videoImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKPhotoPickerCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool isLivePhoto;
@property (nonatomic) bool isVideo;
@property (nonatomic, retain) CKPhotoTileBadgeView *livePhotoBadgeView;
@property (nonatomic, retain) PHLivePhotoView *livePhotoView;
@property (nonatomic, retain) PLRoundProgressView *progressView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *videoImageView;

- (void).cxx_destruct;
- (void)_badgeToggled:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLivePhoto;
- (bool)isVideo;
- (void)layoutSubviews;
- (id)livePhotoBadgeView;
- (id)livePhotoView;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)prepareForReuse;
- (id)progressView;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsLivePhoto:(bool)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setLivePhotoBadgeView:(id)arg1;
- (void)setLivePhotoView:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setVideoImageView:(id)arg1;
- (void)updateProgress:(double)arg1;
- (id)videoImageView;

@end
