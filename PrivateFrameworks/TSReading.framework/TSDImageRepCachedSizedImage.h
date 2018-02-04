/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDImageRepCachedSizedImage : NSObject {
    bool  mImageHasAdjustmentsBakedImage;
    bool  mImageHasMaskBakedIn;
    struct CGPath { } * mImageMaskPath;
    long long  mImageOrientation;
    struct CGImage { } * mImageRef;
    struct CGSize { 
        double width; 
        double height; 
    }  mImageSize;
}

@property (nonatomic) bool imageHasAdjustmentsBakedImage;
@property (nonatomic) bool imageHasMaskBakedIn;
@property (nonatomic) struct CGPath { }*imageMaskPath;
@property (nonatomic) long long imageOrientation;
@property (nonatomic) struct CGImage { }*imageRef;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;

- (void)dealloc;
- (bool)imageHasAdjustmentsBakedImage;
- (bool)imageHasMaskBakedIn;
- (struct CGPath { }*)imageMaskPath;
- (long long)imageOrientation;
- (struct CGImage { }*)imageRef;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)setImageHasAdjustmentsBakedImage:(bool)arg1;
- (void)setImageHasMaskBakedIn:(bool)arg1;
- (void)setImageMaskPath:(struct CGPath { }*)arg1;
- (void)setImageOrientation:(long long)arg1;
- (void)setImageRef:(struct CGImage { }*)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;

@end
