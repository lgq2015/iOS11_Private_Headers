/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell <CKAnimationTimerObserver> {
    CKAnimatedImage * _animatedImage;
    NSArray * _frames;
    UIImage * _image;
    CKBalloonImageView * _imageView;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) CKAnimatedImage *animatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) CKBalloonImageView *imageView;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

+ (double)associatedStickerXOriginForStickerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 parentSize:(struct CGSize { double x1; double x2; })arg2 contentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 orientation:(BOOL)arg4 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; float x3; float x4; float x5; float x6; float x7; })arg5 outBalloonOffset:(double*)arg6;

- (void).cxx_destruct;
- (id)animatedImage;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)doubleTapGestureRecognized:(id)arg1;
- (id)frames;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)longPressGestureRecognized:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)performHide:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performReveal:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setAnimatedImage:(id)arg1;
- (void)setFrames:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (void)updateAnimationTimerObserving;

@end
