/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLMotionBlurEffect : NSObject {
    int  mBackingHeight;
    int  mBackingWidth;
    TSDGLShader * mBlurHorizontalShader;
    TSDGLShader * mBlurVerticalShader;
    TSDGLFrameBuffer * mColorFrameBuffer;
    long long  mDebugDrawMode;
    TSDGLShader * mDefaultTextureShader;
    double  mDilationDistanceInSlidePercent;
    TSDGLDataBuffer * mFBODataBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  mFramebufferSize;
    double  mMotionBlurStrength;
    struct CGSize { 
        double width; 
        double height; 
    }  mSlideSize;
    TSDGLShader * mVelocityCollectionShader;
    TSDGLDataBuffer * mVelocityFBODataBuffer;
    TSDGLFrameBuffer * mVelocityFrameBuffer;
    TSDGLShader * mVelocityVisualizerShader;
}

@property (nonatomic) long long debugDrawMode;
@property (nonatomic) double dilationDistanceInSlidePercent;
@property (nonatomic) double motionBlurStrength;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } velocityScale;

- (void)bindColorFramebuffer;
- (void)bindVelocityFramebuffer;
- (void)dealloc;
- (long long)debugDrawMode;
- (double)dilationDistanceInSlidePercent;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (id)initWithFramebufferSize:(struct CGSize { double x1; double x2; })arg1 slideSize:(struct CGSize { double x1; double x2; })arg2;
- (double)motionBlurStrength;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_setupBlurShaders;
- (void)p_setupGLTextureParameters;
- (void)p_setupVelocityFramebufferIfNecessary;
- (void)p_updateMaxVelocityInShadersWithScale:(double)arg1;
- (double)p_velocityFramebufferScale;
- (struct CGSize { double x1; double x2; })p_velocityFramebufferSize;
- (void)setDebugDrawMode:(long long)arg1;
- (void)setDilationDistanceInSlidePercent:(double)arg1;
- (void)setMotionBlurStrength:(double)arg1;
- (void)setupMotionBlurEffectIfNecessary;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)updateVelocityScaleInShader:(id)arg1;
- (struct CGSize { double x1; double x2; })velocityScale;

@end
