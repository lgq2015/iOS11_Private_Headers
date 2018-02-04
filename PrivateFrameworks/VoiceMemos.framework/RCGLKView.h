/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCGLKView : GLKView {
    bool  _isCreatingSnapshot;
}

@property (nonatomic, readonly) bool isCreatingSnapshot;
@property (nonatomic, readonly) bool isRenderingContextValid;

+ (Class)layerClass;

- (void)_setNeedsVisibleTimeRangeRendering;
- (void)didMoveToWindow;
- (bool)isCreatingSnapshot;
- (bool)isRenderingContextValid;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)snapshot;

@end
