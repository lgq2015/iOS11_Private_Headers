/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPotrace : NSObject {
    struct CGPath { } * _cachedPath;
    struct potrace_bitmap_s { int x1; int x2; int x3; unsigned long long *x4; } * _potraceBitmap;
    struct potrace_param_s { int x1; int x2; double x3; int x4; double x5; struct potrace_progress_s { int (*x_6_1_1)(); void *x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; } x6; } * _potraceParameters;
}

@property double alphamax;
@property int opticurve;
@property double opttolerance;
@property int turdsize;
@property int turnpolicy;

+ (struct CGPath { }*)newCGPathFromPotracePath:(struct potrace_path_s { int x1; int x2; struct potrace_curve_s { int x_3_1_1; int *x_3_1_2; struct potrace_dpoint_s {} *x_3_1_3[3]; } x3; struct potrace_path_s {} *x4; struct potrace_path_s {} *x5; struct potrace_path_s {} *x6; struct potrace_privpath_s {} *x7; }*)arg1;

- (struct CGPath { }*)CGPath;
- (void)_clearPathIfNecessary;
- (void)_generatePath;
- (double)alphamax;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { }*)arg1 flipped:(bool)arg2 whiteIsInside:(bool)arg3;
- (int)opticurve;
- (double)opttolerance;
- (void)setAlphamax:(double)arg1;
- (void)setOpticurve:(int)arg1;
- (void)setOpttolerance:(double)arg1;
- (void)setTurdsize:(int)arg1;
- (void)setTurnpolicy:(int)arg1;
- (int)turdsize;
- (int)turnpolicy;

@end
