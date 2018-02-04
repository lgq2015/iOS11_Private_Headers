/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface DiagnosticHUDLayer : CALayer {
    CAShapeLayer * _cameraAreaLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _cameraResolution;
    CAShapeLayer * _focusIndicatorLayer;
    CAShapeLayer * _focusPointLayer;
    CAShapeLayer * _frameIndicator;
    CRColor * _freshPointColor;
    NSMutableArray * _pointLayers;
    CALayer * _previewLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previewLayerVisibleRect;
    CRColor * _stalePointColor;
}

@property (retain) CAShapeLayer *cameraAreaLayer;
@property struct CGSize { double x1; double x2; } cameraResolution;
@property (retain) CAShapeLayer *focusIndicatorLayer;
@property (retain) CAShapeLayer *focusPointLayer;
@property (retain) CAShapeLayer *frameIndicator;
@property (retain) CRColor *freshPointColor;
@property (retain) NSMutableArray *pointLayers;
@property (retain) CALayer *previewLayer;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previewLayerVisibleRect;
@property (retain) CRColor *stalePointColor;

+ (id)layer;

- (void).cxx_destruct;
- (id)cameraAreaLayer;
- (struct CGSize { double x1; double x2; })cameraResolution;
- (id)focusIndicatorLayer;
- (id)focusPointLayer;
- (id)frameIndicator;
- (id)freshPointColor;
- (id)init;
- (void)layoutSublayers;
- (id)pointLayers;
- (id)previewLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewLayerVisibleRect;
- (void)refreshFrameIndicator;
- (void)setAdjustingFocus:(bool)arg1 pointOfInterestSupported:(bool)arg2 focusPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)setBoxPoints:(id)arg1;
- (void)setCameraAreaLayer:(id)arg1;
- (void)setCameraResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setFocusIndicatorLayer:(id)arg1;
- (void)setFocusPointLayer:(id)arg1;
- (void)setFrameIndicator:(id)arg1;
- (void)setFreshPointColor:(id)arg1;
- (void)setPointLayers:(id)arg1;
- (void)setPreviewLayer:(id)arg1;
- (void)setPreviewLayer:(id)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cameraResolution:(struct CGSize { double x1; double x2; })arg3;
- (void)setPreviewLayerVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStalePointColor:(id)arg1;
- (id)stalePointColor;

@end
