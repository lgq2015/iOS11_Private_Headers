/* made by EzioChiu.
 */

@protocol FxParameterRetrievalAPI

@required

- (bool)getBitmap:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)getBoolValue:(bool*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2;
- (bool)getFloatValue:(double*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)getIntValue:(int*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)getParameterFlags:(unsigned int*)arg1 fromParm:(unsigned int)arg2;
- (bool)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned int)arg4 atTime:(double)arg5;
- (bool)getTexture:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned int)arg3 atTime:(double)arg4;

@end
