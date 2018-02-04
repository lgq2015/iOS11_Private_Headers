/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOImageView : UIView <NPTOIrisViewDelegate, UIScrollViewDelegate> {
    PHAsset * _asset;
    NSString * _assetPath;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    <NPTOImageViewDelegate> * _delegate;
    UIImage * _fullImage;
    NPTOIrisView * _imageView;
    double  _irisSDT;
    NSURL * _irisURL;
    double  _irisVDT;
    bool  _loaded;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offcenterAdjustment;
    NPTOPhoto * _photo;
    UIScrollView * _scroller;
    double  _zoomScale;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, copy) NSString *assetPath;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *fullImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPTOIrisView *imageView;
@property (nonatomic) double interactiveProgress;
@property (nonatomic, retain) NPTOPhoto *photo;
@property (nonatomic, retain) UIScrollView *scroller;
@property (readonly) Class superclass;
@property (nonatomic) double zoomScale;

+ (void)savePhoto:(id)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2 zoomScale:(double)arg3 inDirectory:(id)arg4 completion:(id /* block */)arg5;
+ (void)savePhoto:(id)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2 zoomScale:(double)arg3 supplement:(id)arg4 inDirectory:(id)arg5 completion:(id /* block */)arg6;
+ (void)savePhoto:(id)arg1 imageData:(id)arg2 irisURL:(id)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 zoomScale:(double)arg5 supplement:(id)arg6 inDirectory:(id)arg7 completion:(id /* block */)arg8;

- (void).cxx_destruct;
- (void)_updateView;
- (id)asset;
- (id)assetPath;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)delegate;
- (id)fullImage;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interactiveProgress;
- (void)interruptPlayback;
- (void)irisViewDidBeginPlaying:(id)arg1;
- (void)irisViewDidEndPlaying:(id)arg1;
- (bool)isPlaying;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })offcenterAdjustment;
- (void)pauseWithMode:(long long)arg1;
- (id)photo;
- (void)playWithMode:(long long)arg1;
- (void)prepareToPlayWithMode:(long long)arg1;
- (void)reload:(bool)arg1;
- (void)resumeInterruptedPlayback;
- (id)scroller;
- (void)setAsset:(id)arg1;
- (void)setAssetPath:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFullImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInteractiveProgress:(double)arg1;
- (void)setOffcenterAdjustment:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhoto:(id)arg1;
- (void)setPhoto:(id)arg1 withImage:(id)arg2 allowIris:(bool)arg3;
- (void)setScroller:(id)arg1;
- (void)setZoomScale:(double)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (double)zoomScale;

@end
