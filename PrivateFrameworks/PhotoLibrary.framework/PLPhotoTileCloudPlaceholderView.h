/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView> {
    <PLPhotoTileCloudPlaceholderViewDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageRect;
    bool  _indicatorIsVisible;
    double  _lastViewPhaseChangeDate;
    UIView * _loadingContainerView;
    UIButton * _loadingErrorButton;
    PLRoundProgressView * _loadingIndicatorView;
    bool  _showingError;
    bool  _showingLoading;
    bool  _toolbarVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_retryDownload;
- (void)dealloc;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRetryDelegate:(id)arg1;
- (void)setToolbarVisible:(bool)arg1;
- (void)showErrorIndicator;
- (void)showLoadingIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(double)arg1;

@end
