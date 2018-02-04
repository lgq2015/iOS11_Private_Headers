/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARLightEstimate : NSObject {
    double  _ambientColorTemperature;
    double  _ambientIntensity;
}

@property (nonatomic, readonly) double ambientColorTemperature;
@property (nonatomic, readonly) double ambientIntensity;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;

- (double)ambientColorTemperature;
- (double)ambientIntensity;
- (id)description;
- (id)initWithAmbientIntensity:(double)arg1 temperature:(double)arg2;
- (id)sphericalHarmonicsCoefficients;

@end
