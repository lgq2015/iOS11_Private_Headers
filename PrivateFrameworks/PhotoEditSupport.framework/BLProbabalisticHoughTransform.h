/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLProbabalisticHoughTransform : NSObject {
    int  _cols;
    int  _lineGap;
    int  _lineLength;
    int  _numGoodLines;
    float  _rho;
    int  _rows;
    float  _theta;
    int  _threshold;
}

- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; float *x3; float x4; int x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; struct CGPoint { double x_13_1_1; double x_13_1_2; } x13; struct CGPoint { double x_14_1_1; double x_14_1_2; } x14; float x15; int x16; int x17; int x18; int x19; }*)houghLinesProbabalistic:(char *)arg1 rows:(int)arg2 cols:(int)arg3 numLines:(int*)arg4;
- (void)leastSquareSmooth:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; float *x3; float x4; int x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; struct CGPoint { double x_13_1_1; double x_13_1_2; } x13; struct CGPoint { double x_14_1_1; double x_14_1_2; } x14; float x15; int x16; int x17; int x18; int x19; }*)arg1;

@end
