/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMRectangleDetectorNode : AXMEvaluationNode {
    struct CGPoint { 
        double x; 
        double y; 
    }  _cameraOpticalOrigin;
    double  _cameraPixelFocalLength;
    double  _maximumAspectRatio;
    long long  _maximumNumberOfRects;
    double  _minimumAspectRatio;
    double  _minimumSize;
    double  _quadratureTolerance;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } cameraOpticalOrigin;
@property (nonatomic) double cameraPixelFocalLength;
@property (nonatomic) double maximumAspectRatio;
@property (nonatomic) long long maximumNumberOfRects;
@property (nonatomic) double minimumAspectRatio;
@property (nonatomic) double minimumSize;
@property (nonatomic) double quadratureTolerance;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (id)_prepareRectangleRequestOptions;
- (struct CGPoint { double x1; double x2; })cameraOpticalOrigin;
- (double)cameraPixelFocalLength;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)maximumAspectRatio;
- (long long)maximumNumberOfRects;
- (double)minimumAspectRatio;
- (double)minimumSize;
- (void)nodeInitialize;
- (double)quadratureTolerance;
- (bool)requiresVisionFramework;
- (void)setCameraOpticalOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCameraPixelFocalLength:(double)arg1;
- (void)setMaximumAspectRatio:(double)arg1;
- (void)setMaximumNumberOfRects:(long long)arg1;
- (void)setMinimumAspectRatio:(double)arg1;
- (void)setMinimumSize:(double)arg1;
- (void)setQuadratureTolerance:(double)arg1;

@end
