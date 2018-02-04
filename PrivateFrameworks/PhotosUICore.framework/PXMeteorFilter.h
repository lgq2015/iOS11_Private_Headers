/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMeteorFilter : CIFilter {
    NSNumber * inputHeadroom;
    CIImage * inputImage;
}

@property (nonatomic, retain) NSNumber *inputHeadroom;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (void).cxx_destruct;
- (bool)_isIdentity;
- (id)_kernel;
- (id)inputHeadroom;
- (id)inputImage;
- (id)outputImage;
- (void)setInputHeadroom:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
