/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAESharedDefaultBase : NSObject {
    <PROAPIAccessing> * _apiManager;
    bool  _hostIsFinalCutPro;
    bool  _hostIsVertigo;
    bool  _ignorePixelAspectRatio;
    bool  _upscalesFields;
}

- (bool)addParameters;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })changeDOD:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 withRect:(const struct PCRect<double> { double x1; double x2; double x3; double x4; }*)arg2;
- (struct PCVector2<double> { double x1; double x2; })convertRelativeToImageCoordinates:(const struct PCVector2<double> { double x1; double x2; }*)arg1 withImage:(id)arg2;
- (struct PCVector2<double> { double x1; double x2; })convertRelativeToPixelCoordinates:(const struct PCVector2<double> { double x1; double x2; }*)arg1 withImage:(id)arg2;
- (void)crop:(struct HGRef<HGNode> { struct HGNode {} *x1; }*)arg1 fromImage:(id)arg2 toImage:(id)arg3;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })cropFromImage:(id)arg1 toImage:(id)arg2;
- (void)dealloc;
- (bool)frameCleanup;
- (double)frameFromFxTime:(union { double x1; struct { /* ? */ } *x2; })arg1 forPlugIn:(id)arg2;
- (double)frameRate;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (void)fxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromFrame:(double)arg2 forPlugIn:(id)arg3;
- (float)getBlendingGamma;
- (struct PCRect<float> { float x1; float x2; float x3; float x4; })getCropRectFromImage:(id)arg1 toImage:(id)arg2;
- (bool)getHeliumImage:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(int)arg5 atTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)getHeliumImage:(id*)arg1 source:(bool)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3 atTime:(union { double x1; struct { /* ? */ } *x2; })arg4;
- (struct PCRect<float> { float x1; float x2; float x3; float x4; })getImageBoundary:(id)arg1;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })getInversePixelTransformForImage:(id)arg1;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })getPixelTransformForImage:(id)arg1;
- (bool)getPoint:(struct PCVector2<double> { double x1; double x2; }*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3 withImage:(id)arg4;
- (int)getRenderMode:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (struct PCVector2<double> { double x1; double x2; })getScaleForImage:(id)arg1;
- (bool)ignoresPixelAspectRatio;
- (id)initWithAPIManager:(id)arg1;
- (void)overrideFrameSetupForRenderMode:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 hardware:(bool*)arg2 software:(bool*)arg3;
- (id)properties;
- (double)relativeShutterForAngle:(double)arg1;
- (double)secondsFromFxTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)setIgnoresPixelAspectRatio:(bool)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })smear:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 fromImage:(id)arg2 toImage:(id)arg3;
- (void)transform:(struct HGRef<HGNode> { struct HGNode {} *x1; }*)arg1 fromImage:(id)arg2 toImage:(id)arg3 fit:(bool)arg4;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })transformFromImage:(id)arg1 toImage:(id)arg2 fit:(bool)arg3;
- (bool)variesOverTime;

@end
