/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUCropAndStraightenView : UIView <NUMediaViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    UIView * __contentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __fittingRegion;
    PLImageGeometry * __imageGeometry;
    PXImageLayerModulator * __imageLayerModulator;
    PXImageModulationManager * __imageModulationManager;
    UIImageView * __imageView;
    PHLivePhotoView * __livePhotoView;
    NUMediaView * __mediaView;
    double  __preferredZoomScale;
    UIScrollView * __scrollView;
    UIView * __scrollViewReference;
    bool  __scrollViewTracking;
    long long  __updateReason;
    NUComposition * _autoloopComposition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _canvasFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    <PUCropAndStraightenViewDelegate> * _delegate;
    UIImage * _image;
    long long  _imageModulationOptions;
    PHLivePhoto * _livePhoto;
    long long  _orientation;
    double  _straightenAngle;
    bool  _tracking;
}

@property (setter=_setContentView:, nonatomic, retain) UIView *_contentView;
@property (setter=_setFittingRegion:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _fittingRegion;
@property (setter=_setImageGeometry:, nonatomic, retain) PLImageGeometry *_imageGeometry;
@property (setter=_setImageLayerModulator:, nonatomic, retain) PXImageLayerModulator *_imageLayerModulator;
@property (setter=_setImageModulationManager:, nonatomic, retain) PXImageModulationManager *_imageModulationManager;
@property (setter=_setImageView:, nonatomic, retain) UIImageView *_imageView;
@property (setter=_setLivePhotoView:, nonatomic, retain) PHLivePhotoView *_livePhotoView;
@property (setter=_setMediaView:, nonatomic, retain) NUMediaView *_mediaView;
@property (setter=_setPreferredZoomScale:, nonatomic) double _preferredZoomScale;
@property (getter=_isRotationSideways, nonatomic, readonly) bool _rotationSideways;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } _rotationTransform;
@property (setter=_setScrollView:, nonatomic, retain) UIScrollView *_scrollView;
@property (setter=_setScrollViewReference:, nonatomic, retain) UIView *_scrollViewReference;
@property (getter=_isScrollViewTracking, setter=_setScrollViewTracking:, nonatomic) bool _scrollViewTracking;
@property (setter=_setUpdateReason:, nonatomic) long long _updateReason;
@property (nonatomic, retain) NUComposition *autoloopComposition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } canvasFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDecelerating, nonatomic, readonly) bool decelerating;
@property (nonatomic) <PUCropAndStraightenViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageCropRect;
@property (nonatomic) long long imageModulationOptions;
@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (nonatomic) long long orientation;
@property (nonatomic) double straightenAngle;
@property (readonly) Class superclass;
@property (getter=isTracking, setter=_setTracking:, nonatomic) bool tracking;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_boundingSizeOfStraightenedRectWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_contentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_croppingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fittingRegion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fullCropRect;
- (void)_handleTouchingRecognizer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageBounds;
- (id)_imageGeometry;
- (id)_imageLayerModulator;
- (id)_imageModulationManager;
- (id)_imageView;
- (void)_invalidateImageLayerModulator;
- (void)_invalidateImageModulationManager;
- (bool)_isRotationSideways;
- (bool)_isScrollViewTracking;
- (id)_livePhotoView;
- (id)_mediaView;
- (double)_preferredZoomScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_rotationTransform;
- (id)_scrollView;
- (id)_scrollViewReference;
- (void)_setContentView:(id)arg1;
- (void)_setFittingRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setImageGeometry:(id)arg1;
- (void)_setImageLayerModulator:(id)arg1;
- (void)_setImageModulationManager:(id)arg1;
- (void)_setImageView:(id)arg1;
- (void)_setLivePhotoView:(id)arg1;
- (void)_setMediaView:(id)arg1;
- (void)_setPreferredZoomScale:(double)arg1;
- (void)_setScrollView:(id)arg1;
- (void)_setScrollViewReference:(id)arg1;
- (void)_setScrollViewTracking:(bool)arg1;
- (void)_setTracking:(bool)arg1;
- (void)_setUpdateReason:(long long)arg1;
- (struct CGSize { double x1; double x2; })_sizeRotatedIfNeeded:(struct CGSize { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_straightenTransform;
- (void)_updateImageModulation;
- (void)_updateLivePhotoScaleOffset;
- (long long)_updateReason;
- (void)_updateScrollInsets;
- (void)_updateScrollOffset;
- (void)_updateScrollView;
- (void)_updateZoomScale;
- (double)_zoomScaleForImageRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toFit:(bool)arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)_zoomScaleForImageToFit:(bool)arg1 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_zoomScaleToFillCropRect;
- (double)_zoomScaleToFillStraightenedCropRect;
- (double)_zoomScaleToFitCanvas;
- (id)autoloopComposition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canvasFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })denormalizedImageRectForModelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (void)fitImageRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCropRectAnimated:(bool)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageCropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageCropRectForViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)imageModulationOptions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDecelerating;
- (bool)isTracking;
- (void)layoutSubviews;
- (id)livePhoto;
- (void)mediaViewDidFinishRendering:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRectForViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)orientation;
- (id)resizableSnapshotViewFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 afterScreenUpdates:(bool)arg2 withCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setAutoloopComposition:(id)arg1;
- (void)setCanvasFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageModulationOptions:(long long)arg1;
- (void)setLivePhoto:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setStraightenAngle:(double)arg1;
- (double)straightenAngle;
- (id)viewForZoomingInScrollView:(id)arg1;

@end