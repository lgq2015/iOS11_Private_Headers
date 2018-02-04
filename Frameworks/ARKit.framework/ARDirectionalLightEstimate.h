/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARDirectionalLightEstimate : ARLightEstimate <NSCopying> {
    double  _confidenceRating;
    void _primaryLightDirection;
    double  _primaryLightIntensity;
    struct { 
        float coefficients[9]; 
    }  _sphericalHarmonicIntensity;
    NSData * _sphericalHarmonicsCoefficients;
}

@property (nonatomic) double confidenceRating;
@property (nonatomic, readonly) void primaryLightDirection;
@property (nonatomic, readonly) double primaryLightIntensity;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;

- (void).cxx_destruct;
- (double)confidenceRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithDirectionalLightEstimate:(id)arg1;
- (id)initWithSphericalHarmonics:(struct { float x1[9]; })arg1 temperature:(double)arg2;
- (void)primaryLightDirection;
- (double)primaryLightIntensity;
- (void)setConfidenceRating:(double)arg1;
- (id)sphericalHarmonicsCoefficients;

@end
