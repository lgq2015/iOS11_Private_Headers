/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBlurmapSmoothing : CIFilter {
    CIImage * inputImage;
}

@property (retain) CIImage *inputImage;

- (id)_kernelH;
- (id)_kernelV;
- (id)inputImage;
- (id)outputImage;
- (id)performPass:(id)arg1 reference:(id)arg2 values:(id)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)setInputImage:(id)arg1;

@end
