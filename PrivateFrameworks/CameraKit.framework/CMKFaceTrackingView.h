/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKFaceTrackingView : CMKFocusView {
    bool  _isInFrame;
}

@property (nonatomic) bool isInFrame;

- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (void)_loadImagesWithColor:(id)arg1 imageSize:(struct CGSize { double x1; double x2; }*)arg2;
- (void)animateToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)fadeIn;
- (void)fadeOut;
- (double)fadeOutDuration;
- (id)init;
- (bool)isInFrame;
- (void)setIsInFrame:(bool)arg1;

@end
