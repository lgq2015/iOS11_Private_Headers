/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLLayer : CAEAGLLayer {
    <TSDGLLayerContext> * mContext;
    NSObject<TSDGLLayerDelegate> * mDelegate;
    CADisplayLink * mDisplayLink;
}

@property (nonatomic) NSObject<TSDGLLayerDelegate> *animationDelegate;

- (id)animationDelegate;
- (void)dealloc;
- (void)displayAtCurrentLayerTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isOpaque:(bool)arg2 delegate:(id)arg3;
- (void)lock;
- (void)p_drawFrameAtLayerTime:(double)arg1;
- (void)p_drawFrameFromDisplayLink:(id)arg1;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)setAnimationDelegate:(id)arg1;
- (void)setCurrentContext;
- (void)startAnimation;
- (void)stopAnimation;
- (void)teardown;
- (void)unlock;

@end
