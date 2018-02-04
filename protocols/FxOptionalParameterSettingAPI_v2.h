/* made by EzioChiu.
 */

@protocol FxOptionalParameterSettingAPI_v2

@required

- (bool)setHistogramBlackIn:(double)arg1 blackOut:(double)arg2 whiteIn:(double)arg3 whiteOut:(double)arg4 gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg8;

@end
