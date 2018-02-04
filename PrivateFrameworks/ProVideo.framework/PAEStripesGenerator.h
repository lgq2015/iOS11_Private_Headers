/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEStripesGenerator : PAEGeneratorDefaultBase

- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 hardware:(bool*)arg2 software:(bool*)arg3;
- (id)initWithAPIManager:(id)arg1;
- (id)properties;
- (bool)variesOverTime;

@end
