/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerView : UIView <CKAnimationTimerObserver, UIGestureRecognizerDelegate> {
    bool  _animating;
    double  _animationDuration;
    NSArray * _frames;
    CKAnimatedImage * _image;
    CKImageData * _imageData;
    UIImageView * _imageView;
    bool  _initialLayoutComplete;
    bool  _isPeeled;
    UILongPressGestureRecognizer * _longPressRecognizer;
    MSSticker * _sticker;
    NSError * _stickerError;
    UIImage * _stickerImage;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) bool animating;
@property (nonatomic) double animationDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKAnimatedImage *image;
@property (nonatomic, retain) CKImageData *imageData;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool initialLayoutComplete;
@property (nonatomic, readonly) bool isAnimated;
@property (nonatomic) bool isPeeled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic, retain) MSSticker *sticker;
@property (nonatomic, retain) NSError *stickerError;
@property (nonatomic, retain) UIImage *stickerImage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (void)_configureStickerView;
- (void)_loadAnimatedStickerfIfNecessary;
- (void)_loadSticker;
- (void)_prepareForReuse;
- (void)_resetPeel:(bool)arg1;
- (void)_setImage:(id)arg1;
- (void)_stickerPreviewCachePreviewDidChange:(id)arg1;
- (void)_swapWithOutlineImage;
- (void)_updateStickerView;
- (id)accessibilityLabel;
- (bool)animating;
- (double)animationDuration;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)frames;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)image;
- (id)imageData;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sticker:(id)arg2;
- (bool)initialLayoutComplete;
- (bool)isAnimated;
- (bool)isAnimating;
- (bool)isPeeled;
- (void)layoutSubviews;
- (id)longPressRecognizer;
- (void)prepareForSnapshotting;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setFrames:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInitialLayoutComplete:(bool)arg1;
- (void)setIsPeeled:(bool)arg1;
- (void)setSticker:(id)arg1;
- (void)setStickerError:(id)arg1;
- (void)setStickerImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimating;
- (id)sticker;
- (id)stickerError;
- (id)stickerImage;
- (void)stopAnimating;
- (id)tapRecognizer;
- (void)updateAnimationTimerObserving;

@end
