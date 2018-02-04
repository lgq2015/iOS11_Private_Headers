/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageScoreObservation : VNObservation {
    NSNumber * _blurScore;
    NSNumber * _exposureScore;
}

@property (nonatomic, retain) NSNumber *blurScore;
@property (nonatomic, retain) NSNumber *exposureScore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blurScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)exposureScore;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBlurScore:(id)arg1;
- (void)setExposureScore:(id)arg1;

@end
