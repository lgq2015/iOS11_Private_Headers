/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasZoomableImageView : UIScrollView <UIScrollViewDelegate, VideosExtrasZoomingImageTransitionParticipant> {
    UIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pointToCenterAfterResize;
    double  _scaleToRestoreAfterResize;
    UIImageView * _zoomView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } pointToCenterAfterResize;
@property (nonatomic) double scaleToRestoreAfterResize;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *zoomView;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_maximumContentOffset;
- (struct CGPoint { double x1; double x2; })_minimumContentOffset;
- (void)_prepareToResize;
- (void)_recoverFromResizing;
- (void)_updateMinimumAndMaximumZoomScalesForCurrentBounds;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (id)image;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointToCenterAfterResize;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (double)scaleToRestoreAfterResize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPointToCenterAfterResize:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScaleToRestoreAfterResize:(double)arg1;
- (void)setZoomView:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)zoomToPoint:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (id)zoomView;

@end
