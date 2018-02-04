/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface GUBWBilateralConvolution : CIFilter {
    NSNumber * _inputBorder;
    NSNumber * _inputEdgeDetail;
    CIImage * _inputImage;
    NSArray * _inputPoints;
    NSArray * _inputWeights;
}

@property (retain) NSNumber *inputBorder;
@property (retain) NSNumber *inputEdgeDetail;
@property (retain) CIImage *inputImage;
@property (retain) NSArray *inputPoints;
@property (retain) NSArray *inputWeights;

+ (id)BWBilateralKernels;
+ (id)bilateralLoop11Kernel;
+ (id)bilateralLoop2Kernel;
+ (id)bilateralLoop5Kernel;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bilateralROI:(long long)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 userInfo:(id)arg3;
- (id)doBilateralLoop:(id)arg1 points:(id)arg2 weights:(id)arg3 slope:(id)arg4;
- (id)inputBorder;
- (id)inputEdgeDetail;
- (id)inputImage;
- (id)inputPoints;
- (id)inputWeights;
- (id)outputImage;
- (void)setInputBorder:(id)arg1;
- (void)setInputEdgeDetail:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputPoints:(id)arg1;
- (void)setInputWeights:(id)arg1;

@end