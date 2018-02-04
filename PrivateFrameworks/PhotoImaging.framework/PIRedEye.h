/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIRedEye : CIFilter {
    NSString * _inputCameraModel;
    NSArray * _inputCorrectionInfo;
    CIImage * _inputDestinationImage;
    CIImage * _inputImage;
}

@property (nonatomic, retain) NSString *inputCameraModel;
@property (nonatomic, retain) NSArray *inputCorrectionInfo;
@property (nonatomic, retain) CIImage *inputDestinationImage;
@property (nonatomic, retain) CIImage *inputImage;

- (void).cxx_destruct;
- (id)inputCameraModel;
- (id)inputCorrectionInfo;
- (id)inputDestinationImage;
- (id)inputImage;
- (id)outputImage;
- (void)setInputCameraModel:(id)arg1;
- (void)setInputCorrectionInfo:(id)arg1;
- (void)setInputDestinationImage:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
