/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoPreviewView : UIView {
    UIView * _previewLayerView;
    long long  _previewViewAspectMode;
    bool  _square;
    AVCaptureVideoPreviewLayer * _videoPreviewLayer;
}

@property (nonatomic, readonly) UIView *previewLayerView;
@property (nonatomic) long long previewViewAspectMode;
@property (getter=isSquare, nonatomic) bool square;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *videoPreviewLayer;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSubviewsAccountForSquare:(bool)arg1;
- (void)_updateAspectModeForSublayers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSquare;
- (void)layoutSubviews;
- (id)previewLayerView;
- (long long)previewViewAspectMode;
- (void)setPreviewViewAspectMode:(long long)arg1;
- (void)setSquare:(bool)arg1;
- (void)setSquare:(bool)arg1 animated:(bool)arg2;
- (void)setVideoPreviewLayer:(id)arg1;
- (id)videoPreviewLayer;

@end
