/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKVideoPreviewView : UIView {
    bool  _disableLayoutForEffectsFullsizeView;
    bool  _disableLayoutForEffectsGridViews;
    bool  _disableLayoutForPreviewView;
    CMKEffectsFullsizeView * _effectsFullsizeView;
    CMKEffectsGridLabelsView * _effectsGridLabelsView;
    CMKEffectsGridView * _effectsGridView;
    UIView * _fadeOutView;
    long long  _orientation;
    AVCaptureVideoPreviewLayer * _previewLayer;
    UIView * _previewLayerView;
    bool  _square;
    NSString * _videoGravity;
}

@property (getter=isDisabledLayoutForEffectsFullsizeView, nonatomic) bool disableLayoutForEffectsFullsizeView;
@property (getter=isDisabledLayoutForEffectsGridViews, nonatomic) bool disableLayoutForEffectsGridViews;
@property (getter=isDisabledLayoutForPreviewView, nonatomic) bool disableLayoutForPreviewView;
@property (nonatomic, readonly, retain) CMKEffectsFullsizeView *effectsFullsizeView;
@property (nonatomic, readonly, retain) CMKEffectsGridLabelsView *effectsGridLabelsView;
@property (nonatomic, readonly, retain) CMKEffectsGridView *effectsGridView;
@property (nonatomic, readonly, retain) UIView *fadeOutView;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic, readonly, retain) UIView *previewLayerView;
@property (getter=isSquare, nonatomic) bool square;
@property (nonatomic, copy) NSString *videoGravity;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSubviewsAccountForSquare:(bool)arg1;
- (void)_updateGravityForLayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toSublayer:(id)arg2;
- (void)createEffectsFullsizeView;
- (void)createEffectsGridViews;
- (void)dealloc;
- (void)destroyEffectsFullsizeViewRemoveFromSuperview:(bool)arg1;
- (void)destroyEffectsGridViewsRemoveFromSuperview:(bool)arg1;
- (id)effectsFullsizeView;
- (id)effectsGridLabelsView;
- (id)effectsGridView;
- (id)fadeOutView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabledLayoutForEffectsFullsizeView;
- (bool)isDisabledLayoutForEffectsGridViews;
- (bool)isDisabledLayoutForPreviewView;
- (bool)isSquare;
- (void)layoutSubviews;
- (long long)orientation;
- (id)previewLayer;
- (id)previewLayerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForCaptureDeviceFace:(id)arg1;
- (void)setDisableLayoutForEffectsFullsizeView:(bool)arg1;
- (void)setDisableLayoutForEffectsGridViews:(bool)arg1;
- (void)setDisableLayoutForPreviewView:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setPreviewLayer:(id)arg1;
- (void)setSquare:(bool)arg1;
- (void)setSquare:(bool)arg1 animated:(bool)arg2;
- (void)setVideoGravity:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (id)videoGravity;

@end
