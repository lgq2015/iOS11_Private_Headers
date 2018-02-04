/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlacePhotoView : UIScrollView <UIScrollViewDelegate> {
    UIActivityIndicatorView * _activity;
    UILabel * _descriptionLabel;
    bool  _hasLoadedFullPhoto;
    UIImageView * _imageView;
    bool  _isZoomed;
    UILabel * _licenseLabel;
    <GEOMapItemPhoto> * _photo;
    NSTimer * _tapTimer;
    NSURLSessionTask * _task;
    UIImage * _thumbnail;
    MKPlacePhotosView * _viewer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLoadedFullPhoto;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)hasLoadedFullPhoto;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 photo:(id)arg2 viewer:(id)arg3;
- (void)loadFullPhoto;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasLoadedFullPhoto:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)toggleBackground;
- (void)unloadFullPhoto;
- (void)urlRequestFinished:(id)arg1 withError:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)zoomToPoint:(id)arg1;

@end
