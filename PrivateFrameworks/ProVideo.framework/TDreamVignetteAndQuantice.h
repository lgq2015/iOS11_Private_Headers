/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamVignetteAndQuantice : TDreamProgramWrapper {
    int  _mode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _vignetteCenter;
    struct TDColor3 { 
        float one; 
        float two; 
        float three; 
    }  _vignetteColor;
    double  _vignetteEnd;
    double  _vignetteStart;
    int  modeUniform;
    int  vignetteCenterUniform;
    int  vignetteColorUniform;
    int  vignetteEndUniform;
    int  vignetteStartUniform;
}

@property (nonatomic) int mode;
@property (nonatomic) struct CGPoint { double x1; double x2; } vignetteCenter;
@property (nonatomic) struct TDColor3 { float x1; float x2; float x3; } vignetteColor;
@property (nonatomic) double vignetteEnd;
@property (nonatomic) double vignetteStart;

- (id)init;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)setUniforms;
- (void)setVignetteCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVignetteColor:(struct TDColor3 { float x1; float x2; float x3; })arg1;
- (void)setVignetteEnd:(double)arg1;
- (void)setVignetteStart:(double)arg1;
- (struct CGPoint { double x1; double x2; })vignetteCenter;
- (struct TDColor3 { float x1; float x2; float x3; })vignetteColor;
- (double)vignetteEnd;
- (double)vignetteStart;

@end
