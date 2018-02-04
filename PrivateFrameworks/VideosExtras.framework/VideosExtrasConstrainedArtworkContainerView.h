/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasConstrainedArtworkContainerView : UIView {
    MPUArtworkView * _artworkView;
    UIImage * _overlayImage;
    double  _overlayScale;
    NSArray * _overlaySizeConstraints;
    UIImageView * _overlayView;
    bool  _shouldAutoresizeMaskLayerToFillBounds;
    bool  _shouldBottomAlignArtwork;
}

@property (nonatomic, retain) MPUArtworkView *artworkView;
@property (nonatomic, retain) UIImage *overlayImage;
@property (nonatomic) double overlayScale;
@property (nonatomic, retain) NSArray *overlaySizeConstraints;
@property (nonatomic, retain) UIImageView *overlayView;
@property (nonatomic) bool shouldAutoresizeMaskLayerToFillBounds;
@property (nonatomic) bool shouldBottomAlignArtwork;

- (void).cxx_destruct;
- (id)artworkView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overlayImage;
- (double)overlayScale;
- (id)overlaySizeConstraints;
- (id)overlayView;
- (void)setArtworkView:(id)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setOverlayScale:(double)arg1;
- (void)setOverlaySizeConstraints:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setShouldAutoresizeMaskLayerToFillBounds:(bool)arg1;
- (void)setShouldBottomAlignArtwork:(bool)arg1;
- (bool)shouldAutoresizeMaskLayerToFillBounds;
- (bool)shouldBottomAlignArtwork;

@end
