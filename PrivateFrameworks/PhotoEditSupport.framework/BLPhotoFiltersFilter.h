/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPhotoFiltersFilter : CIFilter {
    CIFilter * _ciMatrix;
    CIFilter * _ciPhotoEffectFilter;
    NSNumber * _inputAmount;
    CIImage * _inputImage;
    NSNumber * _inputStrength;
    int  _lastAmount;
    float  _lastStrength;
    CIFilter * _maskFilter;
    bool  _needsReprocess;
}

@property (nonatomic, retain) CIFilter *ciMatrix;
@property (nonatomic, retain) CIFilter *ciPhotoEffectFilter;
@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputStrength;
@property (nonatomic, retain) CIFilter *maskFilter;

- (void).cxx_destruct;
- (id)ciMatrix;
- (id)ciPhotoEffectFilter;
- (id)init;
- (id)inputAmount;
- (id)inputImage;
- (id)inputStrength;
- (id)maskFilter;
- (id)outputImage;
- (void)setCiMatrix:(id)arg1;
- (void)setCiPhotoEffectFilter:(id)arg1;
- (void)setDefaults;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setMaskFilter:(id)arg1;

@end
