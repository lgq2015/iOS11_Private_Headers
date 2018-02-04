/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEFilterDefaultBase : PAESharedDefaultBase <FxFilter>

- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (bool)getInputBitmap:(id*)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3 appendHGGraph:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg4;
- (bool)getInputBitmap:(id*)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3 withROI:(struct HGRect { int x1; int x2; int x3; int x4; }*)arg4;
- (bool)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4;
- (id)getParamAPIWithError:(id*)arg1;
- (id)getParamErrorFor:(id)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })makePrescaledBlurNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 radius:(float)arg2 withScale:(struct PCVector2<float> { float x1; float x2; })arg3 minInputScale:(float)arg4 maxInputScale:(float)arg5;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })preScaleDown:(float)arg1 withOutputRadius:(float*)arg2 withOutputScaleFactor:(float*)arg3 withInput:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg4 minInputScale:(float)arg5 maxInputScale:(float)arg6;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })preScaleUp:(float)arg1 withInput:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg2;
- (bool)renderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (void)setText:(id)arg1;

@end
