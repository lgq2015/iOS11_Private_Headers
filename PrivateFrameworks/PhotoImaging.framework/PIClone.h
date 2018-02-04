/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIClone : CIFilter {
    CIImage * _inputImage;
    CIImage * _inputMaskImage;
    struct CGPoint { 
        double x; 
        double y; 
    }  _inputOffset;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputMaskImage;
@property struct CGPoint { double x1; double x2; } inputOffset;

- (void).cxx_destruct;
- (id)inputImage;
- (id)inputMaskImage;
- (struct CGPoint { double x1; double x2; })inputOffset;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputMaskImage:(id)arg1;
- (void)setInputOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
