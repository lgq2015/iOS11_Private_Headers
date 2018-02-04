/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIInverseFakeBoost : CIFilter {
    double  _inputBoost;
    CIImage * _inputImage;
}

@property double inputBoost;
@property (retain) CIImage *inputImage;

+ (id)kernel;

- (void).cxx_destruct;
- (double)inputBoost;
- (id)inputImage;
- (id)outputImage;
- (void)setInputBoost:(double)arg1;
- (void)setInputImage:(id)arg1;

@end
