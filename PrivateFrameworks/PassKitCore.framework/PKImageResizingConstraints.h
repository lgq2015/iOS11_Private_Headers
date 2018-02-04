/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKImageResizingConstraints : NSObject {
    int  _constraintType;
    double  _fixedDimension;
    double  _maxAspectRatio;
    double  _minAspectRatio;
    double  _outputBorderTrim;
    double  _outputCornerRadius;
    bool  _outputMirrored;
    double  _outputScale;
    bool  _respectAspectRatioRange;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) double outputBorderTrim;
@property (nonatomic) double outputCornerRadius;
@property (nonatomic) bool outputMirrored;
@property (nonatomic) double outputScale;

+ (id)constraintsWithAspectFillToSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)constraintsWithAspectFitToSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)constraintsWithFixedHeight:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedLargeDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)constraintsWithFixedSmallDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedWidth:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithMaxSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)constraintsWithMaxSize:(struct CGSize { double x1; double x2; })arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithMinSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)constraintsWithMinSize:(struct CGSize { double x1; double x2; })arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;

- (id)_flippedConstraints;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getDrawRectForImage:(struct CGImage { }*)arg1 withOutputSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_getPixelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 pixelOutputSize:(struct CGSize { double x1; double x2; }*)arg2 forImageSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (bool)_reasonable;
- (bool)getPixelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 pixelOutputSize:(struct CGSize { double x1; double x2; }*)arg2 forImage:(id)arg3;
- (id)init;
- (double)outputBorderTrim;
- (double)outputCornerRadius;
- (bool)outputMirrored;
- (double)outputScale;
- (id)resizedImage:(id)arg1;
- (void)setOutputBorderTrim:(double)arg1;
- (void)setOutputCornerRadius:(double)arg1;
- (void)setOutputMirrored:(bool)arg1;
- (void)setOutputScale:(double)arg1;

@end
