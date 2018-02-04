/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKPanoramaView : UIView <UIAccelerometerDelegate> {
    NSOperationQueue * _accelerometerQueue;
    CMKPanoramaArrowView * _arrowView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _arrowViewBeginCenter;
    float  _currentAcceleration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentArrowFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentMaskFrame;
    double  _currentSpeed;
    long long  _deferredDeviceOrientation;
    <PLCameraPanoramaViewDelegate> * _delegate;
    long long  _deviceOrientation;
    int  _direction;
    CADisplayLink * _displayLink;
    long long  _frameCounter;
    bool  _ignorePreviewUpdates;
    float  _initialAcceleration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialArrowFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialMaskFrame;
    CMKPanoramaLabel * _instructionalText;
    UIView * _instructionalTextBackground;
    bool  _isAnimatingDirection;
    bool  _isAnimatingTextIn;
    bool  _isAnimatingTextOut;
    bool  _isCapturing;
    bool  _isProcessing;
    CMKPanoramaLevelView * _levelView;
    CMMotionManager * _motionManager;
    UIImageView * _previewBackgroundImageView;
    UIView * _previewContainer;
    UIImageView * _previewGhostImageView;
    CALayer * _previewLayer;
    UIView * _previewMaskingContainer;
    float  _previewScale;
    bool  _showingFastText;
    bool  _showingMoveText;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visiblePreviewRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLCameraPanoramaViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *panoramaPreviewLayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_arrowWasTapped:(id)arg1;
- (void)_cancelDelayedShowMoveText;
- (void)_createMotionManagerAndDisplayLink;
- (double)_ghostWidth;
- (void)_hideText;
- (void)_showMoveDownText;
- (void)_showMoveUpText;
- (void)_updateInstructionalText:(id)arg1;
- (void)_updateInstructionalTextBackground;
- (void)dealloc;
- (id)delegate;
- (void)hideArrowTextAfterDelay;
- (void)hideFastMovementTextAfterDelay;
- (void)hideInstructionalText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 centerYOffset:(double)arg2 panoramaPreviewScale:(float)arg3;
- (id)panoramaPreviewLayer;
- (void)panoramaWillStart;
- (void)setCaptureDirection:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setMaskingContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 direction:(int)arg2;
- (void)showFastMovementText;
- (void)showMoveDownText;
- (void)showMoveDownTextAfterDelay;
- (void)showMoveUpText;
- (void)showMoveUpTextAfterDelay;
- (void)showSavingHUD:(bool)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)updateUI;
- (void)updateWithParameters:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visiblePreviewRect;

@end
