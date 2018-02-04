/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetVariationCollectionViewCell : UICollectionViewCell <PXAssetEditOperationManagerObserver, PXChangeObserver, PXMutableAssetVariationCollectionViewCell> {
    UIActivityIndicatorView * _activityIndicatorView;
    UIView * _backgroundView;
    PXAssetEditOperationManager * _editOperationManager;
    NSError * _error;
    PXLoadingFailureBadgeView * _failureView;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct { 
        bool titleLabel; 
        bool variationView; 
        bool progressView; 
        bool selectedView; 
        bool error; 
        bool failureView; 
    }  _needsUpdateFlags;
    bool  _playbackAllowed;
    PXAssetVariationRenderProvider * _renderProvider;
    UIView * _selectedDecorationView;
    PXWidgetSpec * _spec;
    UILabel * _titleLabel;
    PXAssetVariationOption * _variationOption;
    UIView * _variationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distanceBetweenLastBaselineAndBottom;
@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (setter=_setError:, nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (getter=isPlaybackAllowed, nonatomic, readonly) bool playbackAllowed;
@property (nonatomic, readonly) PXAssetVariationRenderProvider *renderProvider;
@property (nonatomic, readonly) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXAssetVariationOption *variationOption;

+ (id)_createActivityIndicatorView;
+ (void)preloadResources;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_invalidateError;
- (void)_invalidateFailureView;
- (void)_invalidateProgressView;
- (void)_invalidateSelectedView;
- (void)_invalidateTitleLabel;
- (void)_invalidateVariationView;
- (bool)_needsUpdate;
- (void)_setError:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateErrorIfNeeded;
- (void)_updateFailureViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateProgressViewIfNeeded;
- (void)_updateSelectedViewIfNeeded;
- (void)_updateTitleLabelIfNeeded;
- (void)_updateVariationViewIfNeeded;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void*)arg3;
- (double)distanceBetweenLastBaselineAndBottom;
- (double)distanceBetweenPreviewBottomAndLastBaseline;
- (id)editOperationManager;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlaybackAllowed;
- (void)layoutSubviews;
- (id)loadVariationView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)prepareForReuse;
- (id)renderProvider;
- (void)setEditOperationManager:(id)arg1;
- (void)setPlaybackAllowed:(bool)arg1;
- (void)setRenderProvider:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setVariationOption:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsPreviewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)spec;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateError;
- (void)updateVariationView;
- (id)variationOption;

@end
