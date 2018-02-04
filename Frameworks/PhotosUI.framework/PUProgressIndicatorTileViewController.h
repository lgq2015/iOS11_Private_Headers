/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver> {
    UILabel * __debugProgressLabel;
    UIButton * __errorButton;
    bool  __isProgressViewVisible;
    bool  __needsUpdateProgressViewStyle;
    bool  __needsUpdateSizeClass;
    bool  __needsUpdateStatus;
    bool  __needsUpdateStatusViews;
    PLRoundProgressView * __progressView;
    long long  __progressViewStyle;
    long long  __sizeClass;
    PUOperationStatus * __status;
    PUAssetSharedViewModel * _assetSharedViewModel;
    PUBrowsingVideoPlayer * _videoPlayer;
}

@property (setter=_setDebugProgressLabel:, nonatomic, retain) UILabel *_debugProgressLabel;
@property (setter=_setErrorButton:, nonatomic, retain) UIButton *_errorButton;
@property (setter=_setProgressViewVisible:, nonatomic) bool _isProgressViewVisible;
@property (setter=_setNeedsUpdateProgressViewStyle:, nonatomic) bool _needsUpdateProgressViewStyle;
@property (setter=_setNeedsUpdateSizeClass:, nonatomic) bool _needsUpdateSizeClass;
@property (setter=_setNeedsUpdateStatus:, nonatomic) bool _needsUpdateStatus;
@property (setter=_setNeedsUpdateStatusViews:, nonatomic) bool _needsUpdateStatusViews;
@property (setter=_setProgressView:, nonatomic, retain) PLRoundProgressView *_progressView;
@property (setter=_setProgressViewStyle:, nonatomic) long long _progressViewStyle;
@property (setter=_setSizeClass:, nonatomic) long long _sizeClass;
@property (setter=_setStatus:, nonatomic, copy) PUOperationStatus *_status;
@property (nonatomic, retain) PUAssetSharedViewModel *assetSharedViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUBrowsingVideoPlayer *videoPlayer;

+ (id)_loadErrorIconForSizeClass:(long long)arg1;
+ (struct CGSize { double x1; double x2; })progressIndicatorTileSizeForSizeClass:(long long)arg1;

- (void).cxx_destruct;
- (id)_debugProgressLabel;
- (id)_errorButton;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleErrorButtonTap:(id)arg1;
- (void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_invalidateProgressViewStyle;
- (void)_invalidateSizeClass;
- (void)_invalidateStatus;
- (void)_invalidateStatusViews;
- (bool)_isProgressViewVisible;
- (bool)_needsUpdate;
- (bool)_needsUpdateProgressViewStyle;
- (bool)_needsUpdateSizeClass;
- (bool)_needsUpdateStatus;
- (bool)_needsUpdateStatusViews;
- (id)_progressView;
- (long long)_progressViewStyle;
- (void)_setDebugProgressLabel:(id)arg1;
- (void)_setErrorButton:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateProgressViewStyle:(bool)arg1;
- (void)_setNeedsUpdateSizeClass:(bool)arg1;
- (void)_setNeedsUpdateStatus:(bool)arg1;
- (void)_setNeedsUpdateStatusViews:(bool)arg1;
- (void)_setProgressView:(id)arg1;
- (void)_setProgressViewStyle:(long long)arg1;
- (void)_setProgressViewVisible:(bool)arg1;
- (void)_setProgressViewVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setSizeClass:(long long)arg1;
- (void)_setStatus:(id)arg1;
- (long long)_sizeClass;
- (id)_status;
- (void)_updateIfNeeded;
- (void)_updateProgressViewStyleIfNeeded;
- (void)_updateSizeClassIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_updateStatusViewsIfNeeded;
- (void)_updateSubviewOrdering;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetSharedViewModel;
- (void)becomeReusable;
- (void)setAssetSharedViewModel:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (id)videoPlayer;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
