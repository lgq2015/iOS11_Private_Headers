/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface ImageHomographyResampler : NSObject {
    double  homographyMatrix;
}

- (void)ClearOutOfBoundsPixels:(struct WorkingPixmapRecord { char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct __CVBuffer {} *x7; int x8; }*)arg1;
- (struct CGImage { }*)ResampleCGImage:(struct CGImage { }*)arg1 clipToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (struct __CVBuffer { }*)ResampleCVPixels:(struct __CVBuffer { }*)arg1 clipToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (id)init;
- (void)setHomographyMatrix:(double*)arg1;

@end
